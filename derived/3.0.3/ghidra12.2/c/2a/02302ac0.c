
uint FUN_02302ac0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  int iVar12;
  undefined *local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 local_150;
  undefined4 local_14c;
  undefined *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  uint local_108 [2];
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined4 local_d6;
  undefined1 local_d2;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined1 local_b8;
  byte local_b7;
  undefined4 local_9c;
  undefined2 local_98;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined **local_78;
  uint local_68 [10];
  
  if (*(int *)(param_1 + 8) != 0x1b) {
    uVar7 = 0;
    goto LAB_02302e5c;
  }
  local_8e = 0;
  local_9c = 0xffffffff;
  local_98 = 0xffff;
  local_8c = 0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
LAB_02302b74:
    if (*pbVar10 < 8) goto LAB_02302be0;
LAB_02302b80:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02302bd8:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_02302be0;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    local_b7 = *pbVar10;
    if (7 < local_b7) goto LAB_02302bd8;
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02302b74;
      }
      goto LAB_02302b80;
    }
LAB_02302be0:
    local_b7 = *pbVar10;
    if (7 < local_b7) {
      local_b7 = 0xff;
    }
  }
  local_e0 = 0;
  if (7 < local_b7) {
    local_b7 = 0xff;
  }
  local_b8 = 1;
  local_d2 = 0;
  local_100 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_f8 = PTR_DAT_04bb2010 + 0x10;
  local_f0 = 0;
  local_d8 = 0x1a00;
  local_d0 = 0xffffffffffffffff;
  local_c4 = 0x41200000;
  local_bc = 0x1c00;
  local_c8 = 0;
  local_108[0] = (uint)*(ushort *)PTR_DAT_04bb6298;
  local_d6 = 0x20100;
  local_68[0] = DAT_0548d5dc;
  if (DAT_0548d5dc == 0) {
    plVar8 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar8 = plVar1 + DAT_0548d5dc;
    if (0x38 < DAT_0548d5dc) {
      plVar8 = plVar1;
    }
  }
  local_130 = PTR_DAT_04bbc1a0 + 0x10;
  local_110 = 0;
  local_148 = PTR_DAT_04bb2010 + 0x10;
  local_120 = 0;
  local_168 = PTR_DAT_04bc43f8 + 0x10;
  local_160 = 0x26;
  local_158 = PTR_DAT_04bc4608 + 0x10;
  local_150 = PTR_DAT_04bbc570[8];
  local_14c = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
  uStack_140 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_138 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_134 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  ppuStack_80 = &local_168;
  local_88 = &PTR_FUN_04a9b150;
  local_78 = &local_158;
  puVar3 = &DAT_05636dd8;
  if (*plVar8 != 0) {
    puVar3 = (undefined8 *)(*plVar8 + 0x148);
  }
  puStack_128 = local_148;
  puStack_118 = local_148;
  puStack_e8 = puStack_f8;
  if (puVar3[1] != 0) {
    plVar8 = (long *)(*(code *)**(undefined8 **)(puVar3[1] + 0x10))();
    iVar6 = (**(code **)(*plVar8 + 0x18))();
    if (0 < iVar6) {
      iVar12 = 0;
      do {
        FUN_01360490(local_68,puVar3[1],iVar12);
        uVar9 = (*(code *)*local_88)(&local_88,local_68);
        if ((uVar9 & 1) != 0) break;
        bVar5 = iVar6 + -1 != iVar12;
        iVar12 = iVar12 + 1;
      } while (bVar5);
    }
  }
  FUN_02a8f7b0(&local_158,&local_130);
  local_e0._0_4_ = (int)local_120 + 2;
  iVar6 = (int)local_110 + -2;
  local_e0._4_4_ = local_120._4_4_ + 2;
  iVar12 = local_110._4_4_ + -4;
  local_f0._0_4_ = (int)local_e0;
  if (iVar6 <= (int)local_e0) {
    local_f0._0_4_ = iVar6;
  }
  if ((int)local_e0 <= iVar6) {
    local_e0._0_4_ = iVar6;
  }
  local_f0._4_4_ = local_e0._4_4_;
  if (iVar12 <= local_e0._4_4_) {
    local_f0._4_4_ = iVar12;
  }
  if (local_e0._4_4_ <= iVar12) {
    local_e0._4_4_ = iVar12;
  }
  uVar7 = FUN_02302e80(param_1,local_108,&local_b8);
  if ((uVar7 & 1) != 0) {
    *(float *)(param_1 + 0x14) =
         ((float)(int)local_f0 * 5.0 + (float)(int)local_e0 * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x1c) =
         ((float)local_f0._4_4_ * 5.0 + (float)local_e0._4_4_ * 5.0 + 5.0) * 0.5;
  }
LAB_02302e5c:
  return uVar7 & 1;
}

