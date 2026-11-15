
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023e5248(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  long lVar9;
  byte bVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte local_54 [4];
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 6;
  puVar1 = PTR_DAT_04bb2d00;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar9 = *(long *)(param_1 + 0x68);
    if (lVar9 == 0) {
      fVar20 = 0.0;
      fVar16 = 0.0;
      fVar14 = 0.0;
      fVar13 = _DAT_00000278;
    }
    else {
      pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar9 + 0x2b4) >> 0x14) & 0xff0));
      fVar13 = (float)(*(uint *)(lVar9 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar14 = *pfVar7 + fVar13 * pfVar7[1];
      fVar13 = pfVar7[2] + fVar13 * pfVar7[3];
      fVar16 = fVar14 * 0.0;
      fVar20 = *(float *)(lVar9 + 0x278) + fVar16 * 0.0 + fVar13 * 0.0 + (fVar14 + 0.0) * -5.0;
      fVar16 = *(float *)(lVar9 + 0x27c) +
               (fVar16 * 0.0 + 1.0) * 0.0 + fVar13 * 0.0 * 0.0 + fVar16 * -5.0;
      fVar14 = *(float *)(lVar9 + 0x280) + (fVar13 * 0.0 * 0.0 - fVar14 * 0.0) + fVar13 * -5.0;
      fVar13 = *(float *)(lVar9 + 0x278);
    }
    *(float *)(param_1 + 0x191d) = fVar13;
    iVar5 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x1921) = (short)iVar5;
    iVar5 = (int)(fVar16 * 4.0);
    uVar11 = *(undefined4 *)(lVar9 + 0x280);
    *(float *)(param_1 + 0x1927) = fVar20;
    *(float *)(param_1 + 0x192d) = fVar14;
    *(undefined4 *)(param_1 + 0x1923) = uVar11;
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x192b) = (short)iVar5;
    lVar9 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
    fVar13 = *pfVar7;
    local_6c = 0x3f800000;
    local_64 = 0x101;
    local_7c = fVar20;
    local_78 = fVar16;
    local_74 = fVar14;
    lVar9 = FUN_0251e98c(1);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
    local_70 = *puVar8;
    local_68 = 0x77;
    iVar3 = FUN_016ed290(&local_7c,0,0,0);
    if (iVar3 == 0) {
      *(float *)(param_1 + 0x1931) = fVar20;
      *(short *)(param_1 + 0x1935) = (short)iVar5;
      *(float *)(param_1 + 0x1937) = fVar14;
      puVar6 = *(undefined8 **)(param_1 + 0x60);
    }
    else {
      pfVar7 = (float *)(puVar1 + ((ulong)(*(ushort *)(param_1 + 0x190a) >> 5) & 0x7f0));
      fVar15 = (5.0 - fVar13) + 0.005;
      fVar13 = (float)((*(ushort *)(param_1 + 0x190a) & 0x1ff) << 0xf) * 5.9604645e-08;
      fVar12 = *pfVar7 + fVar13 * pfVar7[1];
      fVar13 = pfVar7[2] + fVar13 * pfVar7[3];
      fVar17 = fVar12 * 0.0;
      fVar13 = fVar13 + fVar13;
      fVar21 = fVar12 * (fVar12 + fVar12);
      fVar19 = (fVar12 + fVar12) * fVar17;
      fVar23 = fVar13 * fVar17;
      fVar13 = fVar12 * fVar13;
      fVar18 = fVar17 * (fVar17 + fVar17);
      fVar12 = fVar12 * (fVar17 + fVar17);
      fVar17 = (float)(int)((int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0));
      fVar22 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0));
      local_88 = fVar17 * 5.0;
      local_80 = fVar22 * 5.0;
      if (fVar17 * 5.0 + 2.5 < fVar20) {
        local_88 = local_88 + 5.0;
      }
      if (fVar22 * 5.0 + 2.5 < fVar14) {
        local_80 = local_80 + 5.0;
      }
      local_88 = (fVar12 - fVar23) * 0.0 + ((1.0 - fVar21) - fVar18) * 0.0 +
                 fVar15 * (fVar13 + fVar18) + local_88;
      fStack_84 = fVar16 + ((1.0 - fVar18) - fVar18) * 0.0 + (fVar23 + fVar12) * 0.0 +
                           fVar15 * (fVar19 - fVar23);
      local_80 = (fVar23 + fVar19) * 0.0 + (fVar18 - fVar13) * 0.0 +
                 fVar15 * ((1.0 - fVar18) - fVar21) + local_80;
      fVar13 = (float)FUN_016e026c(0,&local_88,0,0);
      iVar5 = (int)(fVar13 * 4.0);
      *(float *)(param_1 + 0x1931) = local_88;
      *(float *)(param_1 + 0x1937) = local_80;
      if (0x7ffe < iVar5) {
        iVar5 = 0x7fff;
      }
      if (iVar5 < -0x7fff) {
        iVar5 = -0x8000;
      }
      *(short *)(param_1 + 0x1935) = (short)iVar5;
      puVar6 = *(undefined8 **)(param_1 + 0x60);
    }
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_01707d90(puVar6,&DAT_054b2330,6,0,0);
  bVar10 = *(byte *)(param_1 + 0x1ee8);
  uVar4 = (uint)bVar10;
  bVar2 = 7 < uVar4;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x40000000;
  if (bVar2) {
    uVar4 = 0xff;
  }
  local_54[0] = (byte)uVar4;
  lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar2) {
    lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar9 + 0x5b4) = 3;
    FUN_01393458(lVar9 + 0x658);
  }
  else {
    *(undefined4 *)(lVar9 + 0x5b4) = 4;
  }
  local_78 = 1.4013e-45;
  if (((bVar10 < 8) && (uVar4 = FUN_02582d8c(local_54,1), uVar4 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
    bVar2 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0';
  }
  else {
    bVar2 = false;
  }
  bVar10 = local_54[0];
  if (7 < local_54[0]) {
    bVar10 = 0xff;
  }
  local_7c._0_2_ = CONCAT11(bVar10,bVar2);
  FUN_02308d48(&local_7c);
  *(undefined1 *)(param_1 + 0xb85) = 0;
  *(undefined8 *)(param_1 + 0xb90) = 0;
  *(undefined8 *)(param_1 + 0xb98) = 0;
  *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_1 + 0xb7c);
  return;
}

