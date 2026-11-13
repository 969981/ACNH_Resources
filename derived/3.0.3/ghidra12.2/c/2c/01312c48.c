
bool FUN_01312c48(long param_1,int param_2)

{
  if (((((*(int *)(param_1 + 8) == param_2) && (*(int *)(param_1 + 0xc) == param_2)) &&
       (*(int *)(param_1 + 0x10) == param_2)) &&
      (((*(int *)(param_1 + 0x14) == param_2 && (*(int *)(param_1 + 0x18) == param_2)) &&
       ((*(int *)(param_1 + 0x1c) == param_2 &&
        ((*(int *)(param_1 + 0x20) == param_2 && (*(int *)(param_1 + 0x24) == param_2)))))))) &&
     ((*(int *)(param_1 + 0x28) == param_2 &&
      (((((*(int *)(param_1 + 0x2c) == param_2 && (*(int *)(param_1 + 0x30) == param_2)) &&
         (*(int *)(param_1 + 0x34) == param_2)) &&
        ((*(int *)(param_1 + 0x38) == param_2 && (*(int *)(param_1 + 0x3c) == param_2)))) &&
       (*(int *)(param_1 + 0x40) == param_2)))))) {
    return *(int *)(param_1 + 0x44) == param_2;
  }
  return false;
}

