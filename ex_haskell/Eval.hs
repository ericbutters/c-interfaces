module Eval() where

import Foreign.C

foreign export ccall "eval" c_eval :: CInt -> IO ()

c_eval i = do
  putStrLn "Hello C from Haskell!"
  print i
