-- Fuck this lua setup this most retared thing I ever coded
-- 0 useful and fucks up the whole codeflow in any possible way
print("Hello world from lua");
-- must be called scene! Otherwise the game won't detect it.
-- The gameEngine lightUserData is a pointer required for init. It's always set.
-- This is probably evil.
scene = Scene.create(gameEngine, lastScene);

-- 1 brick
-- 2 ladder
-- 3 ?
-- 4,5,6 doors
local tiles = {
--  1 2 3 4 5 6 7 8 9 0 1 2
    1,2,1,1,1,1,1,1,1,1,1,1, -- 1
    1,2,0,0,0,0,0,0,0,0,0,0, -- 2
    1,2,0,0,0,0,0,0,0,0,0,0, -- 3
    1,1,1,4,1,1,1,1,1,1,2,0, -- 4
    0,0,1,0,4,0,0,0,0,0,2,0, -- 5
    0,0,1,1,0,0,0,0,0,0,2,0, -- 6
    0,0,0,0,0,0,0,0,0,0,2,0, -- 7
    0,0,0,0,2,1,1,0,1,1,1,1, -- 8
    0,0,0,0,2,0,0,0,0,0,0,1, -- 9
    0,0,0,0,2,0,0,0,0,0,2,1, -- 0
    0,0,0,0,1,1,1,1,1,1,2,1, -- 1
    0,0,0,0,0,0,0,0,0,0,2,0, -- 2
    0,0,0,0,0,0,0,0,0,0,2,0, -- 3
    0,0,0,0,0,0,0,0,0,0,2,0, -- 4
    0,0,0,0,0,0,1,0,0,0,2,0  -- 5
};
-- 1,2 coin
-- 3 ?
-- 4,5,6 keys
-- 7 potion
local collectables = {
--  1 2 3 4 5 6 7 8 9 0 1 2
    0,0,0,0,0,0,0,0,0,0,0,0, -- 1
    0,0,0,0,0,0,0,0,0,0,0,0, -- 2
    0,0,0,0,0,4,0,0,0,0,0,0, -- 3
    0,0,0,0,0,0,0,0,0,0,0,0, -- 4
    0,0,0,0,0,0,0,0,0,0,0,0, -- 5
    0,0,0,0,0,0,0,0,0,0,0,0, -- 6
    0,0,0,0,0,0,0,0,0,0,0,7, -- 7
    0,0,0,0,0,0,0,0,0,0,0,0, -- 8
    0,0,0,0,0,0,0,0,0,0,0,0, -- 9
    0,0,0,0,0,0,0,0,0,1,0,0, -- 0
    0,0,0,0,0,0,0,0,0,0,0,0, -- 1
    0,0,0,0,0,0,0,0,0,0,0,0, -- 2
    0,0,0,0,0,0,0,0,0,0,0,0, -- 3
    0,0,0,0,0,0,1,0,0,0,0,0, -- 4
    0,0,0,0,1,0,0,0,1,1,0,0  -- 5
};

for k,v in pairs(tiles) do
    scene:setTile(k, v)
end

for k,v in pairs(collectables) do
    scene:spawnCollectable(k, v)
end
-- scene:setSceneAbove("scenes/stage2r.lua");
