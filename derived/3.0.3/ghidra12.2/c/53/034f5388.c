
void FUN_034f5388(long param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  int local_160;
  undefined4 uStack_15c;
  undefined *local_158;
  undefined8 *puStack_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined1 auStack_62 [2];
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_56;
  
  puVar5 = PTR_DAT_04bb7bc8;
  puVar1 = (uint *)(param_1 + 0x1ce2c);
  uVar3 = *puVar1;
  if (8 < uVar3) {
    return;
  }
  if ((1 << (ulong)(uVar3 & 0x1f) & 0x17aU) == 0) {
    if (uVar3 == 2) {
      *(undefined4 *)(DAT_05370cd0 + 0x4c) = *(undefined4 *)(param_1 + 0x1ce38);
      return;
    }
    if (uVar3 == 7) {
      uStack_15c = *(undefined4 *)(param_1 + 0x1ce34);
      local_160 = 2;
      local_158 = (undefined *)CONCAT44(local_158._4_4_,*(undefined4 *)(param_1 + 0x1ce30));
      FUN_01d773bc(*(undefined8 *)PTR_DAT_04bb7bc8,&local_160);
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0x1ce38) == 1) {
    if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x4aU) != 0)) {
      local_16c = 8;
    }
    else {
      local_16c = 1;
    }
  }
  else if (*(int *)(param_1 + 0x1ce38) == 0) {
    if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x4aU) != 0)) {
      local_16c = 7;
    }
    else {
      local_16c = 0;
    }
  }
  else if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x4aU) != 0)) {
    local_16c = 9;
  }
  else {
    local_16c = 2;
  }
  uStack_164 = *(undefined4 *)(param_1 + 0x1ce30);
  local_168 = *(undefined4 *)(param_1 + 0x1ce34);
  FUN_01d773bc(*(undefined8 *)PTR_DAT_04bb7bc8,&local_16c);
  uVar3 = *puVar1;
  if ((uVar3 != 6) && (uVar3 != 3)) {
    if (uVar3 != 1) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1ce30);
    if ((int)uVar3 < 0) goto LAB_034f5838;
    iVar7 = *(int *)(param_1 + 0x1cf60);
    if (iVar7 - 3U < 2) {
      uVar11 = 10;
      goto LAB_034f57f8;
    }
    uVar11 = 0;
    if (DAT_0538adc8 == 0) goto LAB_034f57f8;
    if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_034f55b0_default:
      uVar11 = 0;
      goto LAB_034f57f8;
    }
    switch(iVar7) {
    case 0:
      uVar11 = *(uint *)(DAT_0538adc8 + 0x170);
      break;
    case 1:
      uVar11 = *(uint *)(DAT_0538adc8 + 0x180);
      break;
    case 2:
      lVar10 = *(long *)(DAT_0538adc8 + 0x1b8);
      uVar11 = *(uint *)(DAT_0538adc8 + 0x1b0);
      goto LAB_034f57f0;
    case 3:
      uVar11 = *(uint *)(DAT_0538adc8 + 0x610) &
               ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
      break;
    case 4:
      lVar10 = *(long *)(DAT_0538adc8 + 0x1e0);
      uVar11 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_034f57f0:
      if (lVar10 == 0) {
        uVar11 = 0xffffffff;
      }
      break;
    default:
      goto switchD_034f55b0_default;
    }
LAB_034f57f8:
    if ((int)uVar3 < (int)uVar11) {
      lVar10 = param_1 + 0x1cf68 + (ulong)uVar3 * 0x18;
      if (0x20 < uVar3) {
        lVar10 = param_1 + 0x1cf68;
      }
      lVar12 = *(long *)puVar5;
      uVar13 = *(undefined8 *)(lVar10 + 8);
      *(undefined8 *)(lVar12 + 0x2b) = *(undefined8 *)(lVar10 + 0xf);
      *(undefined8 *)(lVar12 + 0x24) = uVar13;
      *(undefined1 *)(lVar12 + 0x32) = 1;
      return;
    }
LAB_034f5838:
    lVar10 = *(long *)puVar5;
    *(undefined8 *)(lVar10 + 0x24) = 0xffffffffffffffff;
    *(undefined2 *)(lVar10 + 0x30) = 0;
    *(undefined1 *)(lVar10 + 0x32) = 1;
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x1ce30);
  if ((int)uVar3 < 0) goto LAB_034f5774;
  iVar7 = *(int *)(param_1 + 0x1cf60);
  if (iVar7 - 3U < 2) {
    uVar11 = 10;
    goto LAB_034f55fc;
  }
  uVar11 = 0;
  local_160 = iVar7;
  if (DAT_0538adc8 == 0) goto LAB_034f55fc;
  if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_034f5568_default:
    uVar11 = 0;
    goto LAB_034f55fc;
  }
  switch(iVar7) {
  case 0:
    uVar11 = *(uint *)(DAT_0538adc8 + 0x170);
    break;
  case 1:
    uVar11 = *(uint *)(DAT_0538adc8 + 0x180);
    break;
  case 2:
    lVar10 = *(long *)(DAT_0538adc8 + 0x1b8);
    uVar11 = *(uint *)(DAT_0538adc8 + 0x1b0);
    goto LAB_034f55f4;
  case 3:
    uVar11 = *(uint *)(DAT_0538adc8 + 0x610) &
             ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar10 = *(long *)(DAT_0538adc8 + 0x1e0);
    uVar11 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_034f55f4:
    if (lVar10 == 0) {
      uVar11 = 0xffffffff;
    }
    break;
  default:
    goto switchD_034f5568_default;
  }
LAB_034f55fc:
  if ((int)uVar11 <= (int)uVar3) {
LAB_034f5774:
    lVar10 = *(long *)puVar5;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    if (*puVar1 == 3) {
      *(undefined8 *)(lVar10 + 0x40) = 0;
      return;
    }
    return;
  }
  lVar10 = param_1 + 0x1cf68 + (ulong)uVar3 * 0x18;
  if (0x20 < uVar3) {
    lVar10 = param_1 + 0x1cf68;
  }
  puVar9 = (undefined8 *)(lVar10 + 8);
  uVar8 = FUN_01d77c78(puVar9);
  if ((uVar8 & 1) == 0) {
LAB_034f56f8:
    *(undefined8 *)(*(long *)puVar5 + 0x38) = 0;
  }
  else {
    local_144 = 0;
    local_140 = 0xffffffff;
    uStack_138 = 0xffffffff00000000;
    local_148 = 0xb;
    local_130 = 0xffffffff;
    puStack_120 = local_114;
    puStack_150 = &local_78;
    local_118 = 0x40;
    local_d5 = 0;
    local_114[0] = 0;
    local_128 = PTR_DAT_04bb2bc0 + 0x10;
    local_c0 = 0x40;
    local_7d = 0;
    local_bc[0] = 0;
    puStack_c8 = local_bc;
    uStack_68 = 0;
    local_158 = PTR_DAT_04bb5128 + 0x10;
    puVar2 = auStack_62;
    if (auStack_62 <= (undefined1 *)((long)&local_78 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_78 + 2U);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_6a = 0;
    local_d0 = local_128;
    memset(puStack_150,0,(ulong)(puVar2 + (-0xe1 - (long)&local_158)) & 0xfffffffffffffffc | 2);
    local_60 = 0;
    local_58 = 0;
    local_56 = *(undefined2 *)PTR_DAT_04bb3170;
    iVar7 = FUN_01d778dc(puVar9,&local_160);
    if (iVar7 != 0) goto LAB_034f56f8;
    lVar12 = *(long *)puVar5;
    *(ulong *)(lVar12 + 0x38) = CONCAT44(uStack_15c,local_160);
    uVar13 = *puVar9;
    *(undefined8 *)(lVar12 + 0x2b) = *(undefined8 *)(lVar10 + 0xf);
    *(undefined8 *)(lVar12 + 0x24) = uVar13;
    *(undefined1 *)(lVar12 + 0x32) = 1;
  }
  if (*puVar1 != 3) {
    return;
  }
  uVar8 = FUN_01d77c78(puVar9);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_01d77c78(puVar9), (uVar8 & 1) != 0)) {
    uVar8 = FUN_01d77c78(puVar9);
    puVar4 = PTR_DAT_04bb7bc0;
    if (((uVar8 & 1) != 0) && (*(char *)(lVar10 + 0x14) == '\0')) {
      bVar6 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar10 + 0x15,puVar9);
      *(byte *)(lVar10 + 0x14) = bVar6 & 1;
      if (((bVar6 & 1) == 0) &&
         (puVar9 = (undefined8 *)FUN_01dff648(*(undefined8 *)puVar4,puVar9),
         puVar9 != (undefined8 *)0x0)) {
        uVar13 = *puVar9;
        goto LAB_034f5794;
      }
    }
  }
  uVar13 = 0;
LAB_034f5794:
  *(undefined8 *)(*(long *)puVar5 + 0x40) = uVar13;
  return;
}

