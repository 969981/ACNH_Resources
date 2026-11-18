
void FUN_033bd990(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *__src;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *puStack_200;
  int local_1f8;
  undefined1 auStack_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  
  if (0x11 < *(uint *)(param_1 + 0x50) ||
      (1 << (ulong)(*(uint *)(param_1 + 0x50) & 0x1f) & 0x32decU) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  local_218 = 0;
  uStack_214 = 0;
  local_228 = 0;
  local_220 = 0x3f800000;
  uStack_21c = 0;
  local_210 = 0x40a00000;
  local_1f8 = 0x40;
  local_1b5 = 0;
  local_208 = PTR_DAT_04bb2f70 + 0x10;
  puStack_200 = auStack_1f4;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  __src = DAT_05743420;
  if (auStack_1f4 != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar14 = 0;
    do {
      if (DAT_05743420[lVar14] == '\0') goto LAB_033bdad0;
      if (DAT_05743420[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_033bdad0;
      }
      if (DAT_05743420[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_033bdad0;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_033bdad0:
    iVar8 = (int)lVar14;
    if (local_1f8 <= (int)lVar14) {
      iVar8 = local_1f8 + -1;
    }
    memcpy(auStack_1f4,__src,(long)iVar8);
    auStack_1f4[iVar8] = 0;
  }
  local_1a8 = local_19c;
  local_1a0 = 0x40;
  local_15d = 0;
  local_19c[0] = 0;
  local_208 = PTR_DAT_04bb2bc0 + 0x10;
  local_1b0 = local_208;
  FUN_033bb4ec(param_1,&local_228,*param_2);
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  uVar4 = *(uint *)(param_1 + 0x50);
  local_148 = CONCAT44(local_148._4_4_,uVar4);
  if (uVar4 < 0x14) {
    lVar14 = param_1 + 0xa10;
    plVar12 = (long *)(param_1 + 2000);
    lVar1 = lVar14 + (ulong)uVar4 * 0x60;
    if (0x13 < uVar4) {
      lVar1 = lVar14;
    }
    lVar2 = lVar14 + (ulong)uVar4 * 0x60;
    if (0x13 < uVar4) {
      lVar2 = lVar14;
    }
    lVar14 = FUN_0160cc10(plVar12,*(undefined4 *)(lVar1 + 0x58),lVar2,0);
    if (lVar14 == 0) {
      iVar8 = (**(code **)(*plVar12 + 0x168))(plVar12);
      if (0 < iVar8) {
        iVar16 = 0;
        do {
          iVar7 = (**(code **)(*plVar12 + 0x168))(plVar12);
          if (((iVar16 < iVar7) &&
              (lVar14 = (**(code **)(*plVar12 + 0x158))(plVar12,iVar16), lVar14 != 0)) &&
             (puVar10 = (uint *)(**(code **)(*(long *)(lVar14 + 0x210) + 0xf0))(lVar14 + 0x210),
             uVar4 == *puVar10)) goto LAB_033bdb94;
          iVar16 = iVar16 + 1;
        } while (iVar8 != iVar16);
      }
      goto LAB_033bdc54;
    }
LAB_033bdb94:
    pfVar9 = (float *)(**(code **)(*(long *)(lVar14 + 0x2c0) + 0xf0))(lVar14 + 0x2c0);
    fVar19 = *pfVar9;
    fVar20 = pfVar9[1];
    pfVar9 = (float *)(**(code **)(*(long *)(lVar14 + 0x2f8) + 0xf0))(lVar14 + 0x2f8);
    fVar18 = *pfVar9;
    fVar17 = pfVar9[1];
    fVar19 = fVar19 * 0.5;
    fVar20 = fVar20 * 0.5;
  }
  else {
LAB_033bdc54:
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar20 = 50.0;
    fVar19 = 50.0;
  }
  uVar4 = *(int *)(param_1 + 0x50) - 2;
  *(float *)(param_1 + 0xa0) = fVar18 - fVar19;
  *(float *)(param_1 + 0xa4) = fVar17 - fVar20;
  *(float *)(param_1 + 0xa8) = fVar18 + fVar19;
  *(float *)(param_1 + 0xac) = fVar17 + fVar20;
  iVar8 = DAT_04c9a0c8;
  if (uVar4 < 0x10) {
    uVar13 = *(undefined4 *)(&DAT_0418e91c + (long)(int)uVar4 * 4);
  }
  else {
    uVar13 = 0;
  }
  if (*(long *)PTR_DAT_04bb27c0 == 0) {
    *(int *)(param_1 + 0x6c) = DAT_04c9a0c8;
    uVar5 = local_228;
  }
  else {
    local_85 = 0;
    local_108 = 0x80;
    puStack_110 = local_104;
    local_104[0] = 0;
    local_78 = 0;
    local_128 = 0;
    local_118 = PTR_DAT_04bb2d88 + 0x10;
    local_120 = 0;
    local_138 = 0;
    local_134 = local_220;
    local_130 = 0;
    local_80 = 7;
    local_7c = 1;
    local_148 = 0x4200000000;
    uStack_140 = 0x461c4000;
    local_12c = uVar13;
    iVar8 = FUN_007402e0(*(long *)PTR_DAT_04bb27c0,&local_148,0,1);
    *(int *)(param_1 + 0x6c) = iVar8;
    uVar5 = local_228;
  }
  if (iVar8 == 0) {
    return;
  }
  local_228._0_4_ = (undefined4)uVar5;
  local_228._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x70) = 4;
  *(undefined4 *)(param_1 + 0x7c) = local_228._4_4_;
  *(ulong *)(param_1 + 0x80) = CONCAT44(local_218,uStack_21c);
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_228;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 3;
  *(undefined4 *)(param_1 + 0x88) = uStack_214;
  *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)((long)param_2 + 6);
  *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)((long)param_2 + 7);
  *(undefined4 *)(param_1 + 0x90) = param_2[2];
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_2 + 3);
  puVar6 = PTR_DAT_04bb2200;
  lVar14 = *(long *)PTR_DAT_04bb2200;
  local_228 = uVar5;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x58) != 0) {
      FUN_01613a48(local_210,0x44200000,*(long *)(lVar14 + 0x58),2);
      lVar14 = *(long *)puVar6;
      if (lVar14 == 0) goto LAB_033bddfc;
    }
    ppuVar3 = &local_208;
    if (*(char *)(param_1 + 0x68) != '\0') {
      ppuVar3 = &local_1b0;
    }
    FUN_01640a40(*(undefined8 *)(lVar14 + 0x70),ppuVar3);
  }
LAB_033bddfc:
  *(undefined4 *)(param_1 + 0x11c4) = 0;
  *(undefined8 *)(param_1 + 0x11bc) = 0;
  lVar14 = *(long *)(param_2 + 4);
  if (lVar14 == 0) {
    lVar14 = *(long *)(param_1 + 0x60);
    if (lVar14 == 0) {
      return;
    }
  }
  else {
    *(long *)(param_1 + 0x60) = lVar14;
  }
  if ((*(long **)(lVar14 + 0x1b0) != (long *)0x0) &&
     (uVar11 = (**(code **)(**(long **)(lVar14 + 0x1b0) + 0x58))(), (uVar11 & 1) != 0)) {
    plVar15 = *(long **)(param_1 + 0x60);
    plVar12 = (long *)plVar15[0x36];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      (**(code **)(*plVar15 + 0xa8))(plVar15);
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 8;
  }
  return;
}

