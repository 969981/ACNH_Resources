
void FUN_004e40e0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = -0x8000000000000000;
  FUN_004e4830(param_1,&local_30);
  FUN_004e4960(param_1,&local_30);
  if (0 < (int)local_28) {
    puVar5 = (ulong *)(local_30 + (long)(int)local_28 * 0x30 + -0x20);
    iVar4 = (int)local_28;
    do {
      while ((puVar5[3] & 1) != 0) {
        FUN_0043dd50(puVar5[3] & 0xfffffffffffffffe);
        uVar3 = *puVar5;
        if ((uVar3 & 1) == 0) goto LAB_004e4140;
LAB_004e4160:
        FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
        iVar4 = iVar4 + -1;
        puVar5 = puVar5 + -6;
        if (iVar4 == 0) goto LAB_004e4174;
      }
      uVar3 = *puVar5;
      if ((uVar3 & 1) != 0) goto LAB_004e4160;
LAB_004e4140:
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + -6;
    } while (iVar4 != 0);
  }
LAB_004e4174:
  lVar1 = local_28;
  uVar2 = local_28._4_4_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_30 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_30,0x30,uVar2 & 0x3fffffff);
  }
  return;
}

