
uint FUN_023030a0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  undefined *local_150;
  undefined1 local_148;
  undefined4 local_144;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined **local_128;
  undefined4 local_120;
  uint local_118 [2];
  undefined *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  undefined1 local_c8 [28];
  undefined4 local_ac;
  undefined2 local_a8;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined **local_98;
  undefined ***pppuStack_90;
  undefined1 *local_88;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_04bbc1a0;
  local_88 = (undefined1 *)&local_150;
  if (*(int *)(param_1 + 8) == 0x1a) {
    local_9e = 0;
    local_9c = 0;
    local_ac = 0xffffffff;
    local_a8 = 0xffff;
    local_c8[0] = 2;
    local_110 = PTR_DAT_04bbc1a0 + 0x10;
    local_100 = 0;
    puStack_108 = &DAT_048f9750;
    local_e8 = 0xff00;
    local_cc = 0xff00;
    local_f8 = &DAT_048f9750;
    local_f0 = 0;
    local_e0 = 0xffffffffffffffff;
    local_d4 = 0x41200000;
    local_118[0] = (uint)*(ushort *)PTR_DAT_04bb6298;
    local_e6 = 0x40100;
    local_e2 = 0;
    local_128 = &PTR_LAB_04a9b110;
    local_120 = 0x26;
    local_d8 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,DAT_0548d5dc);
    if (DAT_0548d5dc == 0) {
      plVar7 = (long *)(DAT_0519d040 + 0x1f8);
    }
    else {
      plVar7 = (long *)(DAT_0519d040 + 0x30) + DAT_0548d5dc;
      if (0x38 < DAT_0548d5dc) {
        plVar7 = (long *)(DAT_0519d040 + 0x30);
      }
    }
    local_150 = PTR_DAT_04bc4608 + 0x10;
    local_144 = DAT_0560ab64;
    local_148 = DAT_0560ab60;
    local_130 = DAT_0560ab78;
    local_12c = DAT_0560ab7c;
    local_140 = &DAT_048f9750;
    uStack_138 = DAT_0560ab70;
    pppuStack_90 = &local_128;
    local_98 = &PTR_FUN_04a9b150;
    puVar1 = &DAT_05636dd8;
    if (*plVar7 != 0) {
      puVar1 = (undefined8 *)(*plVar7 + 0x148);
    }
    ppuVar3 = &local_150;
    if (puVar1[1] != 0) {
      plVar7 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar5 = (**(code **)(*plVar7 + 0x18))();
      ppuVar3 = (undefined **)local_88;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          FUN_01360490(&local_78,puVar1[1],iVar9);
          uVar8 = (*(code *)*local_98)(&local_98,&local_78);
          ppuVar3 = (undefined **)local_88;
          if ((uVar8 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar9;
          iVar9 = iVar9 + 1;
        } while (bVar4);
      }
    }
    local_88 = (undefined1 *)ppuVar3;
    local_78 = puVar2 + 0x10;
    local_68 = 0;
    puStack_70 = &DAT_048f9750;
    local_60 = &DAT_048f9750;
    local_58 = 0;
    FUN_02a8f7b0(&local_150,&local_78);
    local_f0._0_4_ = (int)local_68 + 2;
    iVar5 = (int)local_58 + -2;
    local_f0._4_4_ = local_68._4_4_ + 2;
    iVar9 = local_58._4_4_ + -4;
    local_100._0_4_ = (int)local_f0;
    if (iVar5 <= (int)local_f0) {
      local_100._0_4_ = iVar5;
    }
    if ((int)local_f0 <= iVar5) {
      local_f0._0_4_ = iVar5;
    }
    local_100._4_4_ = local_f0._4_4_;
    if (iVar9 <= local_f0._4_4_) {
      local_100._4_4_ = iVar9;
    }
    if (local_f0._4_4_ <= iVar9) {
      local_f0._4_4_ = iVar9;
    }
    uVar6 = FUN_02302e80(param_1,local_118,local_c8);
    if ((uVar6 & 1) != 0) {
      *(float *)(param_1 + 0x14) =
           ((float)(int)local_100 * 5.0 + (float)(int)local_f0 * 5.0 + 5.0) * 0.5;
      *(float *)(param_1 + 0x1c) =
           ((float)local_100._4_4_ * 5.0 + (float)local_f0._4_4_ * 5.0 + 5.0) * 0.5;
      *(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x26998) =
           *(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x26998) & 0xffcf | 8;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 1;
}

