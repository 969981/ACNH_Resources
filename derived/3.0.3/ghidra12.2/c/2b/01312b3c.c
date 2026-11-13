
bool FUN_01312b3c(long param_1,long param_2)

{
  if (((((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
       (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
      (((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
        (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
       ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
        ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
         (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))))))))) &&
     ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28) &&
      (((((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c) &&
          (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) &&
         (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) &&
        ((*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38) &&
         (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c))))) &&
       (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))))))) {
    return *(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44);
  }
  return false;
}

