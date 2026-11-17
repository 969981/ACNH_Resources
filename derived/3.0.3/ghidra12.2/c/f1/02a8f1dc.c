
undefined8 FUN_02a8f1dc(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  float local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  int local_90;
  char local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  puVar6 = PTR_DAT_04bbc1a0;
  puVar5 = PTR_DAT_04bb2010;
  if (param_2 == (float *)0x0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 != 0) {
    if (uVar3 == 0) goto LAB_02a8f428;
    lVar10 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar10 + 0x1e0) < 1) {
      if ((((*(long *)(lVar10 + 0xd0) == 0) ||
           (puVar8 = *(uint **)(*(long *)(lVar10 + 0xd0) + 8), puVar8 == (uint *)0x0)) ||
          ((uVar3 < *(uint *)(lVar10 + 0xe8) &&
           (*(char *)(*(long *)(lVar10 + 0xf0) + (long)(int)uVar3) == '\0')))) ||
         (((*puVar8 <= uVar3 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_02a8f428;
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar3 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(lVar10 + 0x1e0) <= uVar3) goto LAB_02a8f428;
      uVar1 = uVar3;
      if (*(uint *)(lVar10 + 0x1d0) <= uVar3) {
        uVar1 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar10 + 0x1d8) + (ulong)uVar1 * 8);
    }
    if ((puVar8 == (uint *)0x0) || (uVar1 = *puVar8, uVar1 == 0 || puVar8 == (uint *)(ulong)uVar1))
    goto LAB_02a8f428;
    puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar1);
    if ((*puVar11 == 0) || ((uVar1 = puVar11[1], uVar1 == 0 || ((ulong)(ushort)puVar11[2] == 0))))
    goto LAB_02a8f428;
    lVar10 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar11 + lVar10 + (ulong)(ushort)puVar11[2] * 8;
    if (lVar10 == 0) goto LAB_02a8f428;
    uVar2 = 0;
    if ((ulong)uVar1 != 0) {
      uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar1);
    }
    if (*puVar11 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc46a8 <= uVar2) ||
       ((ushort)(*(short *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar2 * 2) - 5U) < 0xfffc))
    goto LAB_02a8f428;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb5008;
  if ((int)*(uint *)(lVar10 + 0x1e0) < 1) {
    if (*(long *)(lVar10 + 0xd0) == 0) {
      return 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar10 + 0xd0) + 8);
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if ((uVar1 < *(uint *)(lVar10 + 0xe8)) &&
       (*(char *)(*(long *)(lVar10 + 0xf0) + (long)(int)uVar1) == '\0')) {
      return 0;
    }
    if (*puVar8 <= uVar1) {
      return 0;
    }
    if (puVar8[1] == 0) {
      return 0;
    }
    if ((ushort)puVar8[2] == 0) {
      return 0;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar1 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(lVar10 + 0x1e0) <= uVar1) {
      return 0;
    }
    if (*(uint *)(lVar10 + 0x1d0) <= uVar1) {
      uVar1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar10 + 0x1d8) + (ulong)uVar1 * 8);
  }
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *puVar8;
  if (uVar1 == 0 || puVar8 == (uint *)(ulong)uVar1) {
    return 0;
  }
  puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar1);
  if (*puVar11 == 0) {
    return 0;
  }
  uVar1 = puVar11[1];
  if (uVar1 == 0) {
    return 0;
  }
  if ((ulong)(ushort)puVar11[2] == 0) {
    return 0;
  }
  lVar10 = 0xc;
  if (*(char *)((long)puVar11 + 10) != '\0') {
    lVar10 = 0x1c;
  }
  lVar10 = (long)puVar11 + lVar10 + (ulong)(ushort)puVar11[2] * 8;
  if (lVar10 == 0) {
    return 0;
  }
  uVar2 = 0;
  if ((ulong)uVar1 != 0) {
    uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar1);
  }
  if (*puVar11 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc46b8 <= uVar2) {
    return 0;
  }
  if (*(short *)(*(long *)(PTR_DAT_04bc46b8 + 8) + (long)(int)uVar2 * 2) != 1) {
    return 0;
  }
LAB_02a8f428:
  local_95 = 0;
  local_120 = local_114;
  local_114[0] = 0;
  local_118 = 0x80;
  local_90 = 0;
  local_8c = '\0';
  local_48 = 0;
  puStack_128 = PTR_DAT_04bb2d88 + 0x10;
  local_44 = 0;
  puStack_70 = PTR_DAT_04bbc1a0 + 0x10;
  local_78 = 0;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  local_130 = PTR_DAT_04bc49b8 + 0x10;
  uVar7 = (ulong)local_160 >> 0x20;
  local_160 = (undefined *)((ulong)local_160 & 0xffffffffffffff00);
  local_140 = CONCAT44(local_140._4_4_,*(int *)(param_1 + 0x20));
  local_168 = (undefined *)
              CONCAT44((int)(long)((float)*(int *)(param_1 + 0x20) * 90.0 * 11930465.0),uVar3);
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == 0x1a)) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    uVar4 = *(undefined2 *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0xc) != 0x1a) {
      uVar4 = 0;
    }
    local_160._0_4_ = CONCAT22(uVar4,(undefined2)local_160);
    local_160 = (undefined *)CONCAT44((int)uVar7,(undefined4)local_160);
  }
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == 0x1b)) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    uVar4 = *(undefined2 *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0xc) != 0x1b) {
      uVar4 = 0;
    }
    local_160._0_6_ = CONCAT24(uVar4,(undefined4)local_160);
  }
  local_68 = local_88;
  local_58 = local_88;
  FUN_02b34590(&local_130,&local_168);
  if (local_8c != '\0') {
    local_138 = 0.0;
    local_140 = 0;
    if (local_90 != 0) {
      return 0;
    }
    uVar7 = FUN_00979b40(&puStack_128,10,&local_140);
    if ((uVar7 & 1) != 0) {
      local_168 = puVar6 + 0x10;
      local_160 = puVar5 + 0x10;
      local_158 = 0;
      uStack_148 = 0;
      local_150 = local_160;
      FUN_02a8f7b0(param_1,&local_168);
      *param_2 = (float)(int)local_158 * 5.0 + (float)local_140;
      param_2[2] = (float)local_158._4_4_ * 5.0 + local_138;
      return 1;
    }
  }
  return 0;
}

