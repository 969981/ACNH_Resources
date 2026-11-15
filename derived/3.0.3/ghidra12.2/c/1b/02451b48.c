
void FUN_02451b48(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined4 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_70;
  float fStack_6c;
  float local_68;
  uint local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  uint local_54;
  
  plVar17 = *(long **)(param_1 + 0x60);
  if (plVar17 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      plVar17 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar17 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar17 + 0x4e8))(plVar17,0);
  *(undefined1 *)(param_1 + 0x915) = 0;
  *(undefined2 *)(param_1 + 0x920) = 0;
  *(undefined8 *)(param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x92c) = 0;
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x90c);
  if (*(int *)(param_1 + 0x178) != 0) {
    fVar20 = (float)(uint)*(byte *)(param_1 + 0x1900);
    goto LAB_02451d98;
  }
  plVar17 = *(long **)(param_1 + 0x68);
  FUN_0231eef4(param_1,plVar17 + 0x4f,0);
  (**(code **)(*plVar17 + 0x110))(plVar17);
  lVar11 = *(long *)(param_1 + 0x68);
  *(int *)(param_1 + 0x1901) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
  iVar9 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
  if (0x7ffe < iVar9) {
    iVar9 = 0x7fff;
  }
  if (iVar9 < -0x7fff) {
    iVar9 = -0x8000;
  }
  *(short *)(param_1 + 0x1905) = (short)iVar9;
  *(int *)(param_1 + 0x1907) = (int)(*(float *)(lVar11 + 0x280) * 999.99994);
  *(undefined2 *)(param_1 + 0x190b) = *(undefined2 *)(lVar11 + 0x2b6);
  uVar10 = FUN_016e6f44();
  if ((uVar10 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    uVar4 = *(ushort *)PTR_DAT_04bb6298;
    if (*pbVar1 < 8) {
      if (uVar4 != 0xffff) {
        local_70 = 8.40779e-45;
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
        if (0xff < uVar4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar2 >> 6 & 1) != 0) && (uVar10 = FUN_02915598(pbVar1), (uVar10 & 1) != 0))
        goto LAB_02451d1c;
      }
    }
    else if (uVar4 != 0xffff) {
      local_70 = 8.40779e-45;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 6 & 1) != 0) goto LAB_02451d1c;
    }
    uVar10 = FUN_016e6da8(pbVar1);
    if ((uVar10 & 1) != 0) goto LAB_02451d1c;
    uVar14 = 1;
  }
  else {
LAB_02451d1c:
    uVar14 = 0;
  }
  puVar7 = PTR_DAT_04bbdeb0;
  *(undefined1 *)(param_1 + 0x190d) = uVar14;
  sVar5 = *(short *)puVar7;
  if (sVar5 == -1) {
LAB_02451d88:
    local_70 = 0.0;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_02451d88;
    local_70 = 2.8026e-45;
  }
  *(char *)(param_1 + 0x1900) = SUB41(local_70,0);
  fVar20 = local_70;
LAB_02451d98:
  fVar23 = (float)*(int *)(param_1 + 0x1901) * 0.001;
  uVar6 = (uint)*(ushort *)(param_1 + 0x190b) << 0x10;
  fVar24 = (float)(int)*(short *)(param_1 + 0x1905) * 0.25;
  fVar25 = (float)*(int *)(param_1 + 0x1907) * 0.001;
  pfVar12 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(ushort *)(param_1 + 0x190b) >> 4) & 0xff0));
  fVar19 = (float)(uVar6 & 0xff0000) * 5.9604645e-08;
  fVar21 = *pfVar12 + fVar19 * pfVar12[1];
  fVar19 = pfVar12[2] + fVar19 * pfVar12[3];
  fVar22 = fVar21 * 0.0;
  local_60 = fVar23 + fVar22 * 0.0 + fVar19 * 0.0 + (fVar21 + 0.0) * -25.0;
  fStack_5c = fVar24 + (fVar22 * 0.0 + 1.0) * 0.0 + fVar19 * 0.0 * 0.0 + fVar22 * -25.0;
  local_58 = fVar25 + (fVar19 * 0.0 * 0.0 - fVar21 * 0.0) + fVar19 * -25.0;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_60,1);
  iVar9 = *(int *)(param_1 + 0x178);
  *(bool *)(param_1 + 0x920) = fVar20 == 2.8026e-45 && iVar9 == 1;
  *(bool *)(param_1 + 0x921) = fVar20 != 2.8026e-45 || iVar9 != 1;
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761) && (iVar9 == 1)) {
    *(undefined1 *)(param_1 + 0x920) = 1;
  }
  else if (iVar9 == 0) {
    puVar18 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar18 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined1 *)((long)puVar18 + 0x2e4) = 1;
    *(float *)(puVar18 + 0x5d) = fVar23;
    *(float *)((long)puVar18 + 0x2ec) = fVar24;
    *(float *)(puVar18 + 0x5e) = fVar25;
    *(undefined2 *)((long)puVar18 + 0x2e5) = 0x101;
  }
  local_70 = 8.26766e-44;
  uVar15 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar15 = 0;
    if (uVar3 < 0x149) {
      uVar15 = uVar3;
    }
  }
  local_54 = uVar15;
  lVar11 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x840) + 0xf0))(lVar11 + 0x840);
  fVar20 = *pfVar12;
  if (0.0 <= fVar20) {
    fVar20 = -fVar20;
  }
  *(float *)(param_1 + 0x182c) = fVar20;
  *(float *)(param_1 + 0x1828) = fVar20;
  lVar11 = FUN_0251e98c(1);
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x810) + 0xf0))(lVar11 + 0x810);
  *(undefined4 *)(param_1 + 0x1830) = *puVar13;
  if (uVar15 == 0x3b) {
    uVar16 = 0;
  }
  else {
    uVar16 = 5;
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
  }
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x1bf8) = uVar16;
  local_70 = fVar23;
  fStack_6c = fVar24;
  local_68 = fVar25;
  local_64 = uVar6;
  if (puVar18 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  FUN_01714820(puVar18,&local_70);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffd;
  puVar8 = PTR_DAT_04bb27f8;
  puVar7 = PTR_DAT_04bb2720;
  if ((((*(int *)(param_1 + 0x178) == 0) && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
      ((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) != 0)) &&
     (((*(long *)PTR_DAT_04bb5ce0 != 0 && (lVar11 = *(long *)PTR_DAT_04bb2720, lVar11 != 0)) &&
      (*(long *)(lVar11 + 0x330) != 0)))) {
    puVar18 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
    iVar9 = FUN_006bd550(*puVar18,0);
    if (((iVar9 == 0x758f7eaf) && (*(long *)puVar7 != 0)) &&
       ((lVar11 = *(long *)(*(long *)puVar7 + 0x330), lVar11 != 0 &&
        ((((*(int *)(lVar11 + 0x244) != 0 &&
           (lVar11 = *(long *)puVar8, *(int *)(lVar11 + 0x14) != 8)) &&
          ((*(uint *)(lVar11 + 0x1a70) & 4) == 0 || *(int *)(lVar11 + 0x14) != 4)) &&
         (((*(uint *)(lVar11 + 0x1a70) >> 0xb & 1) == 0 && (*(int *)(param_1 + 0x178) == 0)))))))) {
      local_54 = 0;
      *(byte *)(param_1 + 0x18fa) = *(byte *)(param_1 + 0x18fa) & 0xfe;
      local_70 = 0.0;
      FUN_02472404(0x3f800000,param_1);
    }
  }
  return;
}

