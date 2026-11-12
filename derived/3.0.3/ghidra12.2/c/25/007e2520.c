
void FUN_007e2520(undefined4 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined *local_50;
  char *pcStack_48;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar5 != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "UpgradePocket40";
    local_50 = puVar1;
    iVar3 = FUN_0274b8d0(lVar5,&local_50);
    if (iVar3 == 0) {
      pcStack_48 = "UpgradePocket30";
      local_50 = puVar1;
      iVar3 = FUN_0274b8d0(lVar5,&local_50);
      uVar8 = (uint)(iVar3 != 0);
    }
    else {
      uVar8 = 2;
    }
    puVar1 = PTR_DAT_04bb37e0;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar8);
    uVar9 = 0;
    uVar7 = 0x1e;
    if (uVar8 != 1) {
      uVar7 = 0x14;
    }
    uVar2 = 0x28;
    if (uVar8 != 2) {
      uVar2 = uVar7;
    }
    do {
      puVar6 = (undefined8 *)FUN_026759e0(lVar5,uVar9);
      local_50 = (undefined *)*puVar6;
      uVar7 = FUN_01b01270(&local_50);
      if ((uVar7 & 1) != 0) {
        FUN_02674a80(param_1,uVar9 & 0xffffffff,puVar1,1,0);
        FUN_02674a80(param_1,uVar9,&local_50,1,0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
    iVar3 = FUN_0267bdf0();
    puVar1 = PTR_DAT_04bb37e0;
    if (iVar3 != 0) {
      uVar8 = 0;
      do {
        puVar6 = (undefined8 *)FUN_0267d010(param_1,uVar8);
        local_50 = (undefined *)*puVar6;
        uVar9 = FUN_01b01270(&local_50);
        if ((uVar9 & 1) != 0) {
          FUN_0267ca30(param_1,uVar8,puVar1,0);
          FUN_0267ca30(param_1,uVar8,&local_50,0);
        }
        uVar8 = uVar8 + 1;
        uVar4 = FUN_0267bdf0();
      } while (uVar8 < uVar4);
    }
  }
  return;
}

