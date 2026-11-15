
uint FUN_01fa2820(long *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = FUN_01fa5be4();
  if (((uVar4 & 1) != 0) && ((param_1[0x15ab] & 0x400002000000U) != 0x400000000000)) {
    iVar1 = *(int *)((long)param_1 + 0x77f4);
    iVar2 = (int)param_1[0xef6];
    if (iVar1 == 0x10) {
      bVar3 = false;
    }
    else {
      bVar3 = iVar2 != 0x10 && (iVar1 != 0x4c && iVar2 != 0x4c);
      if (iVar1 == 0x4b) {
        return 0;
      }
    }
    if ((*(ushort *)((long)param_1 + 0xaf64) & 0x40) == 0) {
      bVar3 = true;
    }
    if (iVar2 == 0x4b) {
      return 0;
    }
    if (!bVar3) {
      return 0;
    }
    uVar4 = (**(code **)(*param_1 + 0x5b8))(param_1);
    if (((((uVar4 & 1) == 0) || (*(int *)((long)param_1 + 0xaf84) == 2)) &&
        (*(int *)((long)param_1 + 0x77f4) != 0xc)) && (iVar1 = (int)param_1[0xef6], iVar1 != 0xc)) {
      if (*(int *)((long)param_1 + 0x77f4) == 0x47) {
        return 0;
      }
      if (iVar1 == 0x47) {
        return 0;
      }
      uVar4 = (**(code **)(*param_1 + 0x350))(param_1);
      if (((((uVar4 & 1) != 0) && (*(int *)(param_1[1] + 0x750) != 3)) &&
          ((*(char *)((long)param_1 + 0xaf9c) == '\0' || ((int)param_1[0x15f4] != 3)))) &&
         (*(uint *)((long)param_1 + 0xaf8c) < 0x11)) {
        return 0x18c03U >> (ulong)(*(uint *)((long)param_1 + 0xaf8c) & 0x1f) & 1;
      }
    }
  }
  return 0;
}

