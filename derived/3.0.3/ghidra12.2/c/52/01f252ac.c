
undefined8 FUN_01f252ac(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (4 < *(int *)(param_1 + 0x77b0) - 3U) {
    if (*(int *)(param_1 + 0x77b0) == 0x48) {
      return 0;
    }
    if (*(int *)(param_1 + 0x77f4) == 0x48) {
      return 0;
    }
    piVar1 = (int *)(param_1 + 0x12a0c);
    if (0 < *piVar1) {
      *piVar1 = *piVar1 + -1;
      return 0;
    }
    uVar3 = FUN_0212ef10(param_1 + 0xaa50);
    if (((((uVar3 & 1) == 0) && ((*(byte *)(param_1 + 0xad5a) >> 2 & 1) == 0)) &&
        (*(int *)(*(long *)(param_1 + 0x10) + 0x4b8) != 0)) &&
       (*(int *)(*(long *)(param_1 + 0x10) + 0x378) == 0x23)) {
      iVar2 = FUN_00eb50cc(*(undefined8 *)(param_1 + 8));
      if (iVar2 < 6) {
        iVar4 = 0x708;
        if ((1 < iVar2) && (iVar4 = 300, 4 < iVar2)) {
          iVar4 = 0x708;
        }
        *piVar1 = iVar4;
        if (iVar2 < 3) {
          return 0;
        }
        if (iVar2 == *(int *)(param_1 + 0x12a10)) {
          return 0;
        }
        *(int *)(param_1 + 0x12a10) = iVar2;
        FUN_02194660(param_1 + 0xaf40);
      }
      else {
        *(int *)(param_1 + 0x12a10) = iVar2;
        if ((*(uint *)(param_1 + 0xaf3c) & 1) != 0) {
          return 1;
        }
      }
      FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
      return 1;
    }
  }
  return 0;
}

