
void FUN_013864c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined *local_88;
  uint local_80;
  undefined4 uStack_7c;
  byte local_78;
  undefined **local_70;
  int *piStack_68;
  int local_38;
  undefined4 local_34;
  
  uVar6 = FUN_02640eb0();
  if ((uVar6 & 1) != 0) {
    local_34 = 0;
    uVar6 = FUN_02b5f380(&local_34,param_1);
    if ((uVar6 & 1) != 0) {
      piStack_68 = &local_38;
      local_38 = 0;
      local_70 = &PTR_LAB_04993a48;
      uVar6 = FUN_01383880(local_34);
      uVar8 = (uint)(uVar6 >> 0x20);
      if ((uint)uVar6 != uVar8) {
        puVar1 = PTR_DAT_04bbfe68 + 0x10;
        puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
        do {
          local_80 = (uint)uVar6;
          puVar4 = puVar2 + (uVar6 & 0xffffffff);
          if (0x38 < local_80) {
            puVar4 = puVar2;
          }
          uStack_7c = *puVar4;
          uVar9 = 0x39;
          if ((int)local_80 < 0x39) {
            uVar9 = local_80 + 1;
          }
          uVar6 = (ulong)uVar9;
          local_88 = puVar1;
          local_78 = FUN_017baf44();
          local_78 = local_78 & 1;
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,0,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,1,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,2,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,3,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,4,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,5,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,6,uVar7,&local_70);
          uVar7 = FUN_01a4fa00(&local_88);
          FUN_01a51a0c(&local_88,7,uVar7,&local_70);
        } while (uVar9 != uVar8);
      }
      ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      piStack_68 = (int *)0x4076d63;
      local_70 = ppuVar3;
      iVar5 = FUN_02798760(param_1,&local_70);
      if (iVar5 < local_38) {
        piStack_68 = (int *)0x4076d63;
        local_70 = ppuVar3;
        FUN_02799370(param_1,&local_70);
      }
    }
  }
  return;
}

