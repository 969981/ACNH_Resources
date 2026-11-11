
undefined8 FUN_0044c7a0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  long lStack_40;
  ulong local_38;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      local_48 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3 * 8);
      lStack_40 = *(long *)(param_1 + 8);
      uVar2 = 0;
      if (lStack_40 != 0) {
        uVar2 = FUN_00428370();
      }
      local_38 = uVar2;
      if ((uVar2 & 1) != 0) {
        FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      }
      iVar1 = FUN_00441020(param_2,&local_48);
      if ((local_38 & 1) != 0) {
        FUN_0043dd50(local_38 & 0xfffffffffffffffe);
      }
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3 * 8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

