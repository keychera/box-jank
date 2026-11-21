
(require '[babashka.process :as proc])

(defn log-shell [& args]
  (println args)
  (apply proc/shell args))

(defn init-submodule-tree
  "this accept either a str or a vector [str [children1 children2]] "
  [dir submodule-pattern]
  (cond 
    (string? submodule-pattern)
    (log-shell {:dir dir} "git" "submodule" "update" "--init" "--depth" 1 submodule-pattern)
    
    (and (vector? submodule-pattern) (= (count submodule-pattern) 2))
    (let [[submodule children] submodule-pattern]
      (init-submodule-tree dir submodule)
      (doseq [child children]
        (init-submodule-tree submodule child)))))

(let [submodule-to-init 
      ["git-deps/odoyle-jank"
       "git-deps/sdl3"
       "git-deps/sdl3-image"
       "git-deps/sdl3-mixer"
       ["git-deps/sdl3-ttf" 
        ["external/freetype"
         "external/harfbuzz"]]]]
  (doseq [submodule submodule-to-init]
    (init-submodule-tree "." submodule)))
