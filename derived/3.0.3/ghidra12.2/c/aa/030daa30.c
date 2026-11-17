
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030daa30(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (((DAT_056ec7f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056ec7f0), iVar3 != 0)) {
    DAT_056ec7b0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ec7b8 = "NPCIconsStep";
    DAT_056ec7c8 = &DAT_0407ebb1;
    DAT_056ec7e8 = &DAT_0407ebb1;
    DAT_056ec7d8 = "OtherPlayer";
    DAT_056ec7c0 = DAT_056ec7b0;
    DAT_056ec7d0 = DAT_056ec7b0;
    DAT_056ec7e0 = DAT_056ec7b0;
    __cxa_guard_release(&DAT_056ec7f0);
  }
  if (((DAT_056ec808 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056ec808), iVar3 != 0)) {
    _DAT_056ec7f8 = 0x200000002;
    DAT_056ec800 = &DAT_056ec7b0;
    __cxa_guard_release(&DAT_056ec808);
  }
  uVar1 = DAT_056ec7fc;
  uVar8 = (ulong)DAT_056ec7fc;
  if (0 < (int)DAT_056ec7fc) {
    uVar4 = FUN_03c68d44(param_2,DAT_056ec800,DAT_056ec800 + (ulong)(1 < DAT_056ec7f8) * 2);
    *(undefined8 *)(param_1 + 0x408) = uVar4;
    if (uVar1 != 1) {
      uVar5 = (ulong)(int)DAT_056ec7f8;
      uVar9 = uVar5;
      if (uVar5 == 0 || DAT_056ec7fc < 2) {
        uVar9 = 0;
      }
      lVar7 = 0;
      if (1 < uVar5 && DAT_056ec7fc >= 2) {
        lVar7 = uVar5 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056ec800 + uVar9 * 2,DAT_056ec800 + lVar7 * 2);
      *(undefined8 *)(param_1 + 0x410) = uVar4;
      if (uVar1 != 2) {
        uVar9 = 2;
        do {
          iVar3 = DAT_056ec7f8 * (int)uVar9;
          bVar2 = _DAT_056ec7f8 >> 0x20 <= uVar9;
          lVar7 = (long)iVar3;
          if (DAT_056ec7f8 == 0 || bVar2) {
            lVar7 = 0;
          }
          lVar6 = (long)(iVar3 + 1);
          if (DAT_056ec7f8 < 2 || bVar2) {
            lVar6 = 0;
          }
          uVar4 = FUN_03c68d44(param_2,DAT_056ec800 + lVar7 * 2,DAT_056ec800 + lVar6 * 2);
          uVar9 = uVar9 + 1;
          *(undefined8 *)(param_1 + 0x408) = uVar4;
        } while (uVar8 != uVar9);
      }
    }
  }
  if (((DAT_056ec860 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056ec860), iVar3 != 0)) {
    DAT_056ec810 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ec818 = "@T_Name_00";
    DAT_056ec828 = "@T_Date_00";
    DAT_056ec848 = "@T_OtherPlayer_00";
    DAT_056ec838 = "@T_Hemisphere_00";
    DAT_056ec858 = "@T_IslandName_00";
    DAT_056ec820 = DAT_056ec810;
    DAT_056ec830 = DAT_056ec810;
    DAT_056ec840 = DAT_056ec810;
    DAT_056ec850 = DAT_056ec810;
    __cxa_guard_release(&DAT_056ec860);
  }
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056ec810);
  *(undefined8 *)(param_1 + 0x418) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056ec820);
  *(undefined8 *)(param_1 + 0x420) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056ec830);
  *(undefined8 *)(param_1 + 0x428) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056ec840);
  *(undefined8 *)(param_1 + 0x430) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056ec850);
  *(undefined8 *)(param_1 + 0x438) = uVar4;
  FUN_030bf100(param_1,param_2,param_3);
  return;
}

