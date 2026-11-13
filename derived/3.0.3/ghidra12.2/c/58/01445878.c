
void FUN_01445878(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x298))();
  if (((uVar2 & 1) == 0) || ((int)param_1[0x50] == 3)) {
    uVar1 = *(ushort *)(param_1[0x5d] + 0x284);
    if (uVar1 < 1000) {
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar1) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar1 & 0xffffffffU) * 0x10) == 0)) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar1 * 0x10 + 8);
      }
      FUN_00a77b40((long)param_1 + 0x3ac,uVar3);
      return;
    }
  }
  return;
}

