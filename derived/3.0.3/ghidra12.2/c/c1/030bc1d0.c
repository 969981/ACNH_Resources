
void FUN_030bc1d0(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(long *)(param_1 + 0x200) != 0) {
    if ((((*(long *)(*(long *)(param_1 + 0x200) + 8) != 0) &&
         (*(long **)(param_1 + 0x1b0) != (long *)0x0)) &&
        (uVar8 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x48))(), (uVar8 & 1) == 0)) &&
       ((*(long **)(param_1 + 0x1b0) == (long *)0x0 ||
        (uVar8 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x50))(), (uVar8 & 1) == 0)))) {
      plVar11 = *(long **)(param_1 + 0x200);
      local_40 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = 0x29;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_40);
      (**(code **)(plVar11[3] + 0x2b0))(&local_40,plVar11[1]);
      lVar4 = DAT_05739190;
      uVar5 = (undefined4)local_40;
      uVar6 = local_40._4_4_;
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar9 == 0) {
        iVar7 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar7 = (int)lVar9 + -1;
      }
      uVar10 = 1;
      if (iVar7 != 1) {
        uVar10 = 2;
      }
      uVar2 = 0;
      if (iVar7 != 0) {
        uVar2 = uVar10;
      }
      pbVar1 = (byte *)(lVar4 + 0x288);
      pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
      if (2 < uVar2) {
        pbVar3 = pbVar1;
      }
      *(undefined4 *)(pbVar3 + 0x28) = uVar5;
      *(undefined4 *)(pbVar3 + 0x2c) = uVar6;
      pbVar3[4] = pbVar3[4] | 8;
      pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
      if (2 < uVar2) {
        pbVar3 = pbVar1;
      }
      *pbVar3 = *pbVar3 | 8;
    }
  }
  return;
}

