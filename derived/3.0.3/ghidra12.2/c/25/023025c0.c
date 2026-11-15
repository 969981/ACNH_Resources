
/* WARNING: Removing unreachable block (ram,0x02302700) */

uint FUN_023025c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined *local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined *local_7b0;
  undefined8 local_7a8;
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
  undefined *local_6f8 [8];
  undefined1 auStack_6b8 [600];
  undefined *apuStack_460 [79];
  undefined *local_1e8;
  undefined *local_1c0;
  undefined *local_178;
  undefined *local_150;
  undefined *local_108;
  undefined *local_e0;
  undefined4 local_98;
  byte local_90 [8];
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  puVar5 = PTR_DAT_04bb3238;
  if (*(int *)(param_1 + 8) == 0x1a) {
    local_68 = (undefined *)0x0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[0] = *(byte *)(param_2 + 0x28);
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_790 = PTR_DAT_04bb2010 + 0x10;
    if (7 < local_90[0]) {
      local_90[0] = 0xff;
    }
    local_78 = (undefined *)0x0;
    local_7a0 = 0;
    local_788 = 0;
    puVar2 = PTR_DAT_04bc4970 + 0x10;
    local_7b8 = *(undefined4 *)PTR_DAT_04bb3238;
    puVar3 = PTR_DAT_04bc4568 + 0x10;
    local_7a8 = 0;
    uStack_7b4 = 0;
    puVar4 = PTR_DAT_04bbc5d8 + 0x10;
    local_778 = 0;
    local_738 = 0;
    local_768 = PTR_DAT_04bb2018 + 0x10;
    local_728 = 0;
    uStack_710 = 0;
    uStack_700 = 0;
    uStack_760 = 0;
    uStack_750 = 0;
    local_7c0 = puVar2;
    local_7b0 = puVar3;
    local_798 = puVar1;
    puStack_780 = puStack_790;
    puStack_770 = puVar4;
    local_758 = local_768;
    local_748 = puVar1;
    puStack_740 = puStack_790;
    puStack_730 = puStack_790;
    puStack_720 = puVar1;
    local_718 = puStack_790;
    local_708 = puStack_790;
    local_88 = puVar1;
    puStack_80 = puStack_790;
    puStack_70 = puStack_790;
    FUN_02ad636c(local_6f8);
    local_98 = *(undefined4 *)puVar5;
    FUN_02b23658(&local_7c0,param_2);
    if (((byte)local_7a8 >> 1 & 1) == 0) {
      ppuVar7 = &local_798;
    }
    else {
      ppuVar7 = apuStack_460;
    }
    local_78 = ppuVar7[2];
    local_68 = ppuVar7[4];
    local_6f8[0] = PTR_DAT_04bc4788 + 0x10;
    local_7c0 = puVar2;
    local_7b0 = puVar3;
    local_1e8 = puVar4;
    local_1c0 = puVar1;
    local_178 = puVar4;
    local_150 = puVar1;
    local_108 = puVar4;
    local_e0 = puVar1;
    FUN_02ad6758(auStack_6b8);
    uVar6 = FUN_0230277c(param_1,local_90);
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 1;
}

