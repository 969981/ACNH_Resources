
bool FUN_01e5a8c0(long param_1)

{
  if (((*(int *)(param_1 + 0x360) == 0x14) || (*(int *)(param_1 + 0x360) == 0x16)) &&
     ((*(int *)(param_1 + 0x4b8) == 0 || (*(int *)(param_1 + 0x378) != 0x23)))) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x358) + 0x750) - 1U < 2;
}

