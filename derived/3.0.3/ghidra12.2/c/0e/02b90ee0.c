
/* WARNING: Removing unreachable block (ram,0x02b90f0c) */
/* WARNING: Removing unreachable block (ram,0x02b90f1c) */

ulong FUN_02b90ee0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *local_790;
  int local_788;
  int iStack_784;
  undefined *local_780;
  undefined8 local_778;
  undefined4 local_770;
  undefined *local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined *puStack_750;
  undefined8 local_748;
  undefined *puStack_740;
  undefined *local_738;
  undefined8 uStack_730;
  undefined *local_728;
  undefined8 uStack_720;
  undefined *local_718;
  undefined *puStack_710;
  undefined8 local_708;
  undefined *puStack_700;
  undefined8 local_6f8;
  undefined *puStack_6f0;
  undefined *local_6e8;
  undefined8 uStack_6e0;
  undefined *local_6d8;
  undefined8 uStack_6d0;
  undefined1 auStack_6c8 [1632];
  undefined8 local_68;
  float local_60;
  undefined *local_58;
  undefined1 local_50;
  int local_4c;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  puVar1 = PTR_DAT_04bb2010;
  local_780 = (undefined *)((ulong)local_780 & 0xffffffff00000000);
  puVar2 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar2[1] == 0) goto LAB_02b91108;
  local_58 = PTR_DAT_04bc4608 + 0x10;
  local_50 = PTR_DAT_04bbc570[8];
  local_4c = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_40 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_48 = PTR_DAT_04bb2010 + 0x10;
  local_38 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_34 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  local_60 = *(float *)(param_1 + 1);
  local_68 = *param_1;
  FUN_02a58ea0(&local_780,puVar2,&local_68);
  if (local_778._4_4_ == 0x1f) {
LAB_02b91000:
    local_4c = 0x1f;
    local_50 = (undefined1)local_778;
    local_40 = local_768;
    local_38 = (undefined4)local_760;
    local_34 = local_760._4_2_;
  }
  else {
    local_68 = CONCAT44(local_68._4_4_ + 0.0,(float)local_68 + 0.0);
    local_60 = local_60 + -5.0;
    FUN_02a58ea0(&local_780,puVar2,&local_68);
    if (local_778._4_4_ == 0x1f) goto LAB_02b91000;
  }
  if (local_4c != 0) {
    local_770 = 0;
    puVar1 = puVar1 + 0x10;
    local_780 = PTR_DAT_04bc4568 + 0x10;
    local_778 = 0;
    local_768 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_740 = PTR_DAT_04bbc5d8 + 0x10;
    local_748 = 0;
    local_738 = PTR_DAT_04bb2018 + 0x10;
    local_758 = 0;
    local_708 = 0;
    local_6f8 = 0;
    uStack_6e0 = 0;
    uStack_6d0 = 0;
    uStack_730 = 0;
    uStack_720 = 0;
    local_760 = puVar1;
    puStack_750 = puVar1;
    local_728 = local_738;
    local_718 = local_768;
    puStack_710 = puVar1;
    puStack_700 = puVar1;
    puStack_6f0 = local_768;
    local_6e8 = puVar1;
    local_6d8 = puVar1;
    FUN_02ad636c(auStack_6c8);
    FUN_02b5df60(&local_780,&local_58);
    local_788 = (int)((float)(int)(float)local_68 / 5.0) - (uint)((float)local_68 < 0.0);
    iStack_784 = (int)((float)(int)local_60 / 5.0) - (uint)(local_60 < 0.0);
    local_790 = puVar1;
    uVar3 = FUN_02a7c8c0(&local_780,&local_790);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_02a752d0(*(long *)PTR_DAT_04bb5008 + 0x1e08,local_4c);
      return uVar3;
    }
  }
LAB_02b91108:
  return (ulong)*(uint *)PTR_DAT_04bb3238;
}

