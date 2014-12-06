module Eval() where

import Foreign.C

foreign export ccall "eval" c_eval :: CInt -> IO CInt

c_eval i = do
  putStrLn "Hello C from Haskell!"
  return (i + 1)
