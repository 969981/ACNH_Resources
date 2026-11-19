
bool FUN_039b77d8(long param_1,long param_2)

{
  if (((((*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90)) &&
        (*(int *)(param_1 + 0x94) == *(int *)(param_2 + 0x94))) &&
       (*(int *)(param_1 + 0x98) == *(int *)(param_2 + 0x98))) &&
      ((((*(int *)(param_1 + 0x9c) == *(int *)(param_2 + 0x9c) &&
         (*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0))) &&
        ((*(int *)(param_1 + 0xa4) == *(int *)(param_2 + 0xa4) &&
         ((*(int *)(param_1 + 0xa8) == *(int *)(param_2 + 0xa8) &&
          (*(int *)(param_1 + 0xac) == *(int *)(param_2 + 0xac))))))) &&
       (*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0))))) &&
     ((((*(int *)(param_1 + 0xb4) == *(int *)(param_2 + 0xb4) &&
        (*(int *)(param_1 + 0xb8) == *(int *)(param_2 + 0xb8))) &&
       (*(int *)(param_1 + 0xbc) == *(int *)(param_2 + 0xbc))) &&
      ((*(int *)(param_1 + 0xc0) == *(int *)(param_2 + 0xc0) &&
       (*(int *)(param_1 + 0xc4) == *(int *)(param_2 + 0xc4))))))) {
    return *(int *)(param_1 + 200) == *(int *)(param_2 + 200);
  }
  return false;
}

