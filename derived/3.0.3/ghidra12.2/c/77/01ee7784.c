
bool FUN_01ee7784(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
  }
  if (((iVar1 < 0x1c) || (iVar1 != 0x1e)) ||
     (((lVar2 = *(long *)(param_1 + 0x10), *(int *)(lVar2 + 0x360) == 0x14 ||
       (*(int *)(lVar2 + 0x360) == 0x16)) &&
      ((*(int *)(lVar2 + 0x4b8) == 0 || (*(int *)(lVar2 + 0x378) != 0x23)))))) {
    return false;
  }
  return *(int *)(*(long *)(lVar2 + 0x358) + 0x750) - 1U < 2;
}

