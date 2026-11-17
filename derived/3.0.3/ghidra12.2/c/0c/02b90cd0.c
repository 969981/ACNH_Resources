
/* WARNING: Removing unreachable block (ram,0x02b90d04) */
/* WARNING: Removing unreachable block (ram,0x02b90d14) */

uint FUN_02b90cd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  undefined *local_7b0;
  undefined8 uStack_7a8;
  undefined4 local_7a0;
  undefined *local_798;
  undefined *puStack_790;
  undefined8 local_788;
  undefined *puStack_780;
  undefined8 local_778;
  undefined *puStack_770;
  undefined *local_768;
  undefined8 uStack_760;
  undefined *local_758;
  undefined8 uStack_750;
  undefined *local_748;
  undefined *puStack_740;
  undefined8 local_738;
  undefined *puStack_730;
  undefined8 local_728;
  undefined *puStack_720;
  undefined *local_718;
  undefined8 uStack_710;
  undefined *local_708;
  undefined8 uStack_700;
  undefined1 auStack_6f8 [1632];
  undefined *local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined **local_60;
  undefined **ppuStack_58;
  undefined **local_50;
  
  puVar2 = PTR_DAT_04bb2010;
  local_7b0 = (undefined *)((ulong)local_7b0 & 0xffffffff00000000);
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_68 = 0x1f;
    local_70 = PTR_DAT_04bc43f8 + 0x10;
    local_98 = PTR_DAT_04bc4608 + 0x10;
    local_90 = PTR_DAT_04bbc570[8];
    local_8c = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
    uStack_80 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_88 = PTR_DAT_04bb2010 + 0x10;
    local_78 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_74 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    ppuStack_58 = &local_70;
    local_60 = &PTR_FUN_04a9b150;
    local_50 = &local_98;
    if (puVar1[1] != 0) {
      plVar6 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar4 = (**(code **)(*plVar6 + 0x18))();
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          FUN_01360490(&local_7b0,puVar1[1],iVar8);
          uVar7 = (*(code *)*local_60)(&local_60,&local_7b0);
          if ((uVar7 & 1) != 0) break;
          bVar3 = iVar4 + -1 != iVar8;
          iVar8 = iVar8 + 1;
        } while (bVar3);
      }
    }
    uVar7 = FUN_02a8e7c0(&local_98);
    if ((uVar7 & 1) != 0) {
      local_7a0 = 0;
      local_7b0 = PTR_DAT_04bc4568 + 0x10;
      uStack_7a8 = 0;
      puStack_790 = puVar2 + 0x10;
      local_798 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_770 = PTR_DAT_04bbc5d8 + 0x10;
      local_778 = 0;
      local_768 = PTR_DAT_04bb2018 + 0x10;
      local_728 = 0;
      local_788 = 0;
      local_738 = 0;
      uStack_710 = 0;
      uStack_700 = 0;
      uStack_760 = 0;
      uStack_750 = 0;
      puStack_780 = puStack_790;
      local_758 = local_768;
      local_748 = local_798;
      puStack_740 = puStack_790;
      puStack_730 = puStack_790;
      puStack_720 = local_798;
      local_718 = puStack_790;
      local_708 = puStack_790;
      FUN_02ad636c(auStack_6f8);
      FUN_02b5df60(&local_7b0,&local_98);
      uVar5 = FUN_02a7c208(&local_7b0,param_1);
      goto LAB_02b90ec0;
    }
  }
  uVar5 = 0;
LAB_02b90ec0:
  return uVar5 & 1;
}

