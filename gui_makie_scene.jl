using GLMakie, Makie
scene = Scene(
    #clear everything behind scene
    clear = true,
    # the camera struct of the scene.
    visible = true,
    # ssao and light are explained in more detail in `Documetation/Lighting`
    ssao = Makie.SSAO(),
    # Creates lights from theme, which right now defaults to `
    # set_theme!(lightposition=:eyeposition, ambient=RGBf(0.5, 0.5, 0.5))`
    lights = Makie.automatic,
    backgroundcolor = :gray,
    resolution = (500, 500);
    # gets filled in with the currently set global theme
    theme_kw...
)

GLMakie.activate!()
scene = Scene(backgroundcolor=:gray)
subwindow = Scene(scene, px_area=Rect(100, 100, 200, 200), clear=true, backgroundcolor=:white)
scene
