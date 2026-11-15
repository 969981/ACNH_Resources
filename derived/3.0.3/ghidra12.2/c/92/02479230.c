
/* WARNING: Removing unreachable block (ram,0x0247a3dc) */
/* WARNING: Removing unreachable block (ram,0x0247a044) */
/* WARNING: Removing unreachable block (ram,0x02479f20) */
/* WARNING: Removing unreachable block (ram,0x0247a244) */
/* WARNING: Removing unreachable block (ram,0x0247a434) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02479230(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  ushort uVar13;
  short sVar14;
  int iVar15;
  byte bVar16;
  char *pcVar17;
  undefined *puVar18;
  bool bVar19;
  uint uVar20;
  float *pfVar21;
  undefined4 *puVar22;
  ulong uVar23;
  float *pfVar24;
  undefined2 uVar27;
  ulong uVar25;
  undefined8 uVar26;
  char cVar28;
  char cVar29;
  ushort uVar30;
  int iVar31;
  long lVar32;
  undefined8 *puVar33;
  long *plVar34;
  char *pcVar35;
  int iVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ushort local_138;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  ulong local_128;
  undefined1 local_120;
  byte bStack_11f;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined6 uStack_114;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined1 local_cc;
  undefined5 local_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  uint local_a4;
  
  piVar3 = (int *)(param_1 + 0x18e5);
  local_b8 = 0xfffe;
  FUN_0277d4ac(&local_b8);
  puVar18 = PTR_DAT_04bb43c0;
  local_b8 = *(undefined8 *)(param_1 + 0x1902);
  lVar32 = *(long *)PTR_DAT_04bb43c0;
  uVar20 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar18 == 0) {
LAB_024792d8:
    bVar19 = false;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if (*(uint *)(lVar32 + 0x1d8) <= uVar20) goto LAB_024792d8;
    bVar19 = *(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar20 * 8) != 0;
  }
  uVar30 = (ushort)*(byte *)(param_1 + 0x190e);
  if (1 < uVar30) {
    uVar30 = 0;
  }
  uStack_136 = 0;
  uStack_135 = 0;
  local_138 = uVar30;
  if (*(int *)(param_1 + 0x178) == 0) {
    bVar9 = bVar19;
    if ((*(byte *)(param_1 + 0x17d0) & 0x10) == 0) {
      bVar9 = true;
    }
    if (bVar9) goto LAB_0247967c;
    local_b0 = *(float *)(param_1 + 0x230);
    sVar14 = *(short *)PTR_DAT_04bb6298;
    if (sVar14 == -1) {
LAB_02479660:
      uStack_135 = 0;
      uStack_136 = 0;
      FUN_016f742c(&local_138,&local_b0,1);
      uVar27 = (undefined2)(CONCAT13(uStack_135,CONCAT12(uStack_136,local_138)) >> 0x10);
    }
    else {
      local_138 = 1;
      uStack_136 = 0;
      uStack_135 = 0;
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar14 * 8);
      if (0xff < (uint)(int)sVar14) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar8 >> 1 & 1) == 0) goto LAB_02479660;
      uVar27 = 0;
    }
    *(undefined2 *)(param_1 + 0x190a) = uVar27;
  }
  else if ((*(uint *)(param_1 + 0x17cc) >> 0x11 & 1) == 0) {
    puVar33 = *(undefined8 **)(param_1 + 0x60);
    if (puVar33 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar36 = __cxa_guard_acquire(&DAT_052461c0);
        puVar33 = &DAT_05240280;
        if (iVar36 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar33 = &DAT_05240280;
      }
    }
    local_b0 = 0.0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_138 = (ushort)puVar2;
    uStack_136 = (undefined1)((ulong)puVar2 >> 0x10);
    uStack_135 = (undefined1)((ulong)puVar2 >> 0x18);
    uStack_134 = (undefined4)((ulong)puVar2 >> 0x20);
    local_130 = 0x406c19c;
    uStack_12c = 0;
    if (puVar33[0x227] != 0) {
      lVar32 = *(long *)(puVar33[0x227] + 0x88);
      plVar34 = (long *)(lVar32 + 0x60);
      (**(code **)(*plVar34 + 0x18))(plVar34);
      (**(code **)(*plVar34 + 0x18))(plVar34);
      pcVar35 = *(char **)(lVar32 + 0x68);
      (**(code **)(CONCAT44(uStack_134,CONCAT13(uStack_135,CONCAT12(uStack_136,local_138))) + 0x18))
                (&local_138);
      pcVar17 = (char *)CONCAT44(uStack_12c,local_130);
      if (pcVar35 != pcVar17) {
        pcVar35 = *(char **)(lVar32 + 0x68);
        if (*pcVar35 != *pcVar17) goto LAB_0247967c;
        if (*pcVar35 != '\0') {
          uVar23 = 0;
          do {
            uVar25 = uVar23;
            if (uVar25 == 0x80000) goto LAB_0247967c;
            if (pcVar35[uVar25 + 1] != pcVar17[uVar25 + 1]) goto LAB_0247967c;
            if (pcVar35[uVar25 + 1] == '\0') goto LAB_02479420;
            if (pcVar35[uVar25 + 2] != pcVar17[uVar25 + 2]) goto LAB_0247967c;
            uVar23 = uVar25 + 2;
          } while (pcVar35[uVar25 + 2] != '\0');
          uVar25 = uVar25 + 1;
LAB_02479420:
          if (uVar25 >> 0x13 != 0) goto LAB_0247967c;
        }
      }
      piVar7 = (int *)(param_1 + 0x1900);
      if (!bVar19) {
        piVar7 = piVar3;
      }
      uVar13 = *(ushort *)((long)piVar7 + 10);
      lVar32 = FUN_0251e98c(1);
      pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x13b0) + 0xf0))(lVar32 + 0x13b0);
      fVar55 = *pfVar21;
      if (*(int *)(param_1 + 0x178) == 0) {
        local_b0 = 1.4013e-44;
        local_138 = 10;
        uStack_136 = 0;
        uStack_135 = 0;
        if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024794c4;
      }
      else {
LAB_024794c4:
        iVar36 = (uint)uVar13 * 0x10000;
        plVar34 = &DAT_054e9a58;
        if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
          plVar34 = *(long **)(param_1 + 0x4c8);
        }
        lVar32 = (**(code **)(*plVar34 + 0x148))();
        iVar31 = iVar36 - *(int *)(lVar32 + 4);
        if (0xb60b5e < iVar31 + 0x5b05afU) {
          iVar15 = 0x15555560;
          iVar36 = -0x15555560;
          iVar31 = (int)(fVar55 * (float)iVar31);
          if (iVar31 < 1) {
            iVar15 = -0x5b05b0;
          }
          else {
            iVar36 = 0x5b05b0;
          }
          iVar6 = iVar31;
          if (iVar15 <= iVar31) {
            iVar6 = iVar15;
          }
          if (iVar36 <= iVar31) {
            iVar36 = iVar6;
          }
          iVar36 = iVar36 + *(int *)(lVar32 + 4);
        }
        *(int *)(lVar32 + 4) = iVar36;
      }
      iVar36 = *piVar3;
      iVar31 = *(int *)(param_1 + 0x18eb);
      lVar32 = FUN_0251e98c(1);
      puVar22 = (undefined4 *)(**(code **)(*(long *)(lVar32 + 0x1380) + 0xf0))(lVar32 + 0x1380);
      local_ac = 0;
      puVar33 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar33 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar26 = puVar33[0x4f];
      local_138 = (ushort)uVar26;
      uStack_136 = (undefined1)((ulong)uVar26 >> 0x10);
      uStack_135 = (undefined1)((ulong)uVar26 >> 0x18);
      local_130 = *(undefined4 *)(puVar33 + 0x50);
      uStack_134 = 0;
      local_b0 = (float)iVar36 * 0.001;
      local_a8 = (float)iVar31 * 0.001;
      FUN_03eb4b60(*puVar22,0x41200000,0x3e4ccccc,&local_138,&local_b0);
      *(uint *)(puVar33 + 0x4f) = CONCAT13(uStack_135,CONCAT12(uStack_136,local_138));
      *(undefined4 *)(puVar33 + 0x50) = local_130;
    }
  }
LAB_0247967c:
  if ((!(bool)(uVar30 != 1 & (bVar19 ^ 1U))) && (*(char *)(param_1 + 0x998) == '\0')) {
    local_128 = local_128 & 0xffffffffffffff00;
    uStack_134 = 0x3e8f5c29;
    local_130 = 0x3f800000;
    local_138 = 0;
    uStack_136 = (undefined1)*(undefined2 *)(param_1 + 0x190a);
    uStack_135 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x190a) >> 8);
    uStack_12c = 0x41c80000;
    uVar23 = FUN_023b7bb8(param_1,&local_138);
    if ((uVar23 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x190c) == '\0') {
      FUN_024786d4(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      *(undefined2 *)(param_1 + 0x9b4) = 0x100;
      *(undefined4 *)(param_1 + 0x9b0) = 0xf;
    }
    *(undefined1 *)(param_1 + 0x998) = 1;
    return;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar20 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar32 = *(long *)(param_1 + 0x68);
    *piVar3 = (int)(*(float *)(lVar32 + 0x278) * 999.99994);
    iVar36 = (int)(*(float *)(lVar32 + 0x27c) * 4.0);
    if (0x7ffe < iVar36) {
      iVar36 = 0x7fff;
    }
    if (iVar36 < -0x7fff) {
      iVar36 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar36;
    fVar55 = *(float *)(lVar32 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar55 * 999.99994);
    uVar20 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar20;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar33 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar33 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar37 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar33 + 0x2ec) = uVar37;
    *(undefined1 *)((long)puVar33 + 0x2e5) = 1;
  }
  if ((*(char *)(param_1 + 0x190c) != '\0') && (*(char *)(param_1 + 0x9b5) != '\0')) {
    iVar36 = (**(code **)(*(long *)(param_1 + 0x9a0) + (ulong)*(byte *)(param_1 + 0x9b4) * 8))
                       (param_1 + 0x9a0);
    *(int *)(param_1 + 0x9a8) = iVar36;
    if (*(char *)(param_1 + 0x9b5) == '\0') {
      return;
    }
    if (iVar36 < *(int *)(param_1 + 0x9b0)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x9b5) = 0;
    *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_1 + 0x9ac);
    FUN_024786d4(param_1);
  }
  if (*(char *)(param_1 + 0x991) == '\0') {
    puVar33 = *(undefined8 **)(param_1 + 0x60);
    if (puVar33 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar36 = __cxa_guard_acquire(&DAT_052461c0);
        puVar33 = &DAT_05240280;
        if (iVar36 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar33 = &DAT_05240280;
      }
    }
    if ((*(char *)(puVar33[0x290] + 0xee) == '\0') && (*(uint *)(param_1 + 0x1c04) < 0x14)) {
      return;
    }
    puVar33 = *(undefined8 **)(param_1 + 0x60);
    if (puVar33 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar36 = __cxa_guard_acquire(&DAT_052461c0);
        puVar33 = &DAT_05240280;
        if (iVar36 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar33 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar33,&DAT_054cfd38,6,0,0);
    *(undefined1 *)(param_1 + 0x990) = 1;
    FUN_02472404(0,param_1);
    *(undefined1 *)(param_1 + 0x991) = 1;
  }
  bVar10 = *(byte *)(param_1 + 0x1900);
  cVar11 = *(char *)(param_1 + 0x1901);
  cVar12 = *(char *)(param_1 + 0x990);
  if (7 < bVar10) {
    bVar10 = 0;
  }
  if (*(char *)(param_1 + 0x985) == '\0') {
    cVar29 = '\0';
    cVar28 = '\0';
    iVar36 = *(int *)(param_1 + 0x980);
    if (!bVar19) goto LAB_02479984;
LAB_02479884:
    if (cVar28 != '\0') {
      fVar55 = 1.0;
      if (iVar36 != 0) {
        fVar55 = 1.0;
        if (*(int *)(param_1 + 0x978) < iVar36) {
          fVar38 = (float)*(int *)(param_1 + 0x978) / (float)iVar36;
          fVar57 = 1.0;
          if (fVar38 <= 1.0) {
            fVar57 = fVar38;
          }
          fVar55 = 0.0;
          if (0.0 <= fVar38) {
            fVar55 = fVar57;
          }
        }
      }
      lVar32 = FUN_0251e98c(1);
      pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x2860) + 0xf0))(lVar32 + 0x2860);
      fVar57 = *pfVar21;
      lVar32 = FUN_0251e98c(1);
      pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x2860) + 0xf0))(lVar32 + 0x2860);
      fVar38 = *pfVar21;
      puVar33 = *(undefined8 **)(param_1 + 0x60);
      if (puVar33 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar36 = __cxa_guard_acquire(&DAT_052461c0);
          puVar33 = &DAT_05240280;
          if (iVar36 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar33 = &DAT_05240280;
        }
      }
      local_b0 = 0.0;
      local_138 = 0x2b;
      uStack_136 = 0;
      uStack_135 = 0;
      if (((puVar33[0x227] != 0) &&
          (uVar23 = FUN_03850a90(puVar33[0x227],0x2b,0,0), (uVar23 & 1) != 0)) ||
         (fVar57 + fVar55 * (1.0 - fVar38) <= 0.001)) {
        uVar20 = *(uint *)((long)puVar33 + 0x15f4) | 0x20;
      }
      else {
        uVar20 = *(uint *)((long)puVar33 + 0x15f4) & 0xffffffdf;
      }
      *(uint *)((long)puVar33 + 0x15f4) = uVar20;
      uVar45 = _UNK_041023d8;
      uVar44 = _DAT_041023d0;
      uVar54 = _UNK_04102208;
      uVar26 = _DAT_04102200;
      local_c8 = 0;
      local_10c = 0x3f800000;
      lVar32 = *(long *)puVar18;
      local_104 = 0x3f80000000000000;
      uStack_c3 = 0;
      uStack_c0 = 0;
      local_130 = 0;
      uStack_12c = 0;
      uStack_11c = 0;
      uStack_118 = 0;
      uStack_116 = 0;
      uStack_114 = 0;
      local_cc = 0;
      local_128 = (ulong)(uint)fVar55 << 0x20;
      local_108 = 0;
      uStack_f4 = _UNK_04102208;
      local_fc = _DAT_04102200;
      uStack_e4 = _UNK_04102888;
      local_ec = _DAT_04102880;
      local_138 = (ushort)local_b8;
      uStack_136 = local_b8._2_1_;
      uStack_135 = local_b8._3_1_;
      uStack_d4 = _UNK_041023d8;
      local_dc = _DAT_041023d0;
      uStack_134 = local_b8._4_4_;
      bStack_11f = *(byte *)(param_1 + 0x1ee8);
      if (7 < bStack_11f) {
        bStack_11f = 0xff;
      }
      local_120 = 1;
      uVar20 = FUN_0277d6c4(param_1 + 0x2230);
      puVar2 = PTR_DAT_04bb2d00;
      if (*(long *)puVar18 == 0) {
LAB_02479bfc:
        uVar20 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
        pfVar21 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar20 >> 0x14) & 0xff0));
        fVar55 = (float)(uVar20 & 0xffffff) * 5.9604645e-08;
        fVar38 = *pfVar21 + fVar55 * pfVar21[1];
        fVar51 = pfVar21[2] + fVar55 * pfVar21[3];
        fVar55 = -(pfVar21[1] * fVar55) - *pfVar21;
        fVar52 = fVar38 * 0.0;
        fVar53 = fVar51 * 0.0;
        fVar57 = fVar52 * 0.0 + 1.0;
        fVar38 = fVar38 + 0.0;
        lVar32 = FUN_0251e98c(1);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0xf90) + 0xf0))(lVar32 + 0xf90);
        fVar39 = *pfVar21;
        lVar32 = FUN_0251e98c(1);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0xfc0) + 0xf0))(lVar32 + 0xfc0);
        fVar40 = *pfVar21;
        lVar32 = FUN_0251e98c(1);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0xff0) + 0xf0))(lVar32 + 0xff0);
        fVar41 = *pfVar21;
        lVar32 = FUN_0251e98c(1);
        pfVar24 = (float *)(**(code **)(*(long *)(lVar32 + 0x1020) + 0xf0))(lVar32 + 0x1020);
        pfVar21 = (float *)(puVar2 + ((ulong)(long)(fVar39 * 11930465.0) >> 0x18 & 0xff) * 0x10);
        fVar39 = (float)((uint)(long)(fVar39 * 11930465.0) & 0xffffff) * 5.9604645e-08;
        fVar58 = *pfVar21 + fVar39 * pfVar21[1];
        pfVar1 = (float *)(puVar2 + ((ulong)(long)(fVar40 * 11930465.0) >> 0x18 & 0xff) * 0x10);
        fVar50 = pfVar21[2] + fVar39 * pfVar21[3];
        fVar46 = (float)((uint)(long)(fVar40 * 11930465.0) & 0xffffff) * 5.9604645e-08;
        fVar39 = *pfVar1;
        fVar43 = pfVar1[1];
        fVar61 = fVar39 + fVar46 * fVar43;
        fVar59 = pfVar1[2] + fVar46 * pfVar1[3];
        pfVar21 = (float *)(puVar2 + ((ulong)(long)(fVar41 * 11930465.0) >> 0x18 & 0xff) * 0x10);
        fVar40 = (float)((uint)(long)(fVar41 * 11930465.0) & 0xffffff) * 5.9604645e-08;
        fVar56 = *pfVar21 + fVar40 * pfVar21[1];
        fVar60 = pfVar21[2] + fVar40 * pfVar21[3];
        fVar40 = fVar58 * fVar61 * fVar60 - fVar50 * fVar56;
        fVar47 = fVar59 * fVar60;
        fVar41 = fVar58 * fVar56 + fVar61 * fVar50 * fVar60;
        fVar49 = *pfVar24;
        lVar32 = FUN_0251e98c(1);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x1050) + 0xf0))(lVar32 + 0x1050);
        fVar42 = fVar50 * fVar60 + fVar56 * fVar58 * fVar61;
        fVar48 = fVar59 * fVar56;
        fVar56 = -(fVar58 * fVar60) + fVar61 * fVar50 * fVar56;
        fVar60 = *pfVar21;
        lVar32 = FUN_0251e98c(1);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x1080) + 0xf0))(lVar32 + 0x1080);
        fVar39 = -(fVar43 * fVar46) - fVar39;
        fVar58 = fVar58 * fVar59;
        fVar50 = fVar50 * fVar59;
        fVar43 = *pfVar21;
        uVar26 = CONCAT44(fVar40 * fVar51 + fVar42 * fVar52 + fVar58 * fVar38 + 0.0,
                          fVar47 * fVar51 + fVar48 * fVar52 + fVar39 * fVar38 + 0.0);
        uVar54 = CONCAT44(fVar49 * fVar51 + fVar60 * fVar52 + fVar43 * fVar38 + 0.0,
                          fVar41 * fVar51 + fVar56 * fVar52 + fVar50 * fVar38 + 0.0);
        local_ec = CONCAT44(fVar40 * fVar53 + fVar42 * fVar57 + fVar58 * fVar52 + 0.0,
                            fVar47 * fVar53 + fVar48 * fVar57 + fVar39 * fVar52 + 0.0);
        uStack_e4 = CONCAT44(fVar49 * fVar53 + fVar60 * fVar57 + fVar43 * fVar52 + 0.0,
                             fVar41 * fVar53 + fVar56 * fVar57 + fVar50 * fVar52 + 0.0);
        uVar44 = CONCAT44(fVar40 * fVar55 + fVar42 * fVar53 + fVar58 * fVar51 + 0.0,
                          fVar47 * fVar55 + fVar48 * fVar53 + fVar39 * fVar51 + 0.0);
        uVar45 = CONCAT44(fVar49 * fVar55 + fVar60 * fVar53 + fVar43 * fVar51 + 0.0,
                          fVar41 * fVar55 + fVar56 * fVar53 + fVar50 * fVar51 + 0.0);
      }
      else {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if ((*(uint *)(lVar32 + 0x1d8) <= uVar20) ||
           (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar20 * 8) == 0)) goto LAB_02479bfc;
        local_108 = 1;
        local_ec = _DAT_04102380;
        uStack_e4 = _UNK_04102388;
      }
      puVar33 = *(undefined8 **)(param_1 + 0x60);
      local_fc = uVar26;
      uStack_f4 = uVar54;
      local_dc = uVar44;
      uStack_d4 = uVar45;
      if (puVar33 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar36 = __cxa_guard_acquire(&DAT_052461c0);
          puVar33 = &DAT_05240280;
          if (iVar36 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar33 = &DAT_05240280;
        }
      }
      FUN_0170d420(puVar33,&local_138);
      goto LAB_02479eb8;
    }
LAB_02479ec0:
    puVar33 = *(undefined8 **)(param_1 + 0x60);
    local_128 = 0;
    local_120 = 0;
    bStack_11f = 0;
    uStack_11e = 0;
    uStack_11c = 0;
    local_138 = 0;
    uStack_136 = 0;
    uStack_135 = 0;
    uStack_134 = 0;
    local_130 = 0;
    uStack_12c = 0;
    if (puVar33 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar36 = __cxa_guard_acquire(&DAT_052461c0);
        puVar33 = &DAT_05240280;
        if (iVar36 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar33 = &DAT_05240280;
      }
    }
    if (puVar33[0x227] == 0) {
      local_a4 = 0;
    }
    else {
      local_a4 = *(uint *)(puVar33 + 0x2d3) >> 1 & 1;
      local_b0 = 8.40779e-44;
      uVar23 = FUN_03850a90(puVar33[0x227],0x3c,&local_138,local_a4);
      if ((uVar23 & 1) != 0) {
        plVar34 = (long *)CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,local_120)));
        if ((plVar34 == (long *)0x0) || (lVar32 = *plVar34, lVar32 == 0)) {
          uVar20 = 1;
        }
        else {
          fVar55 = *(float *)(lVar32 + 0x18);
          if (fVar55 < 0.0) {
            fVar55 = *(float *)(plVar34[1] + 0xc);
          }
          uVar20 = (uint)(fVar55 - *(float *)(lVar32 + 0x14));
          if (uVar20 < 2) {
            uVar20 = 1;
          }
        }
        *(undefined4 *)(param_1 + 0x978) = 0;
        uVar5 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
        uVar4 = uVar20 & (int)uVar20 >> 0x1f;
        bVar16 = (byte)(uVar20 >> 0x1f);
        *(byte *)(param_1 + 0x984) = bVar16;
        *(uint *)(param_1 + 0x980) = uVar5;
        *(uint *)(param_1 + 0x97c) = uVar4;
        *(undefined1 *)(param_1 + 0x985) = 1;
        if (bVar19) {
          puVar33 = *(undefined8 **)(param_1 + 0x60);
          if (puVar33 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar36 = __cxa_guard_acquire(&DAT_052461c0);
              puVar33 = &DAT_05240280;
              if (iVar36 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar33 = &DAT_05240280;
            }
          }
          lVar32 = FUN_0251e98c(1);
          pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x2860) + 0xf0))(lVar32 + 0x2860);
          fVar55 = *pfVar21;
          local_a4 = 0;
          local_b0 = 6.02558e-44;
          if (((puVar33[0x227] != 0) &&
              (uVar23 = FUN_03850a90(puVar33[0x227],0x2b,0,0), (uVar23 & 1) != 0)) ||
             (fVar55 <= 0.001)) {
            uVar20 = *(uint *)((long)puVar33 + 0x15f4) | 0x20;
          }
          else {
            uVar20 = *(uint *)((long)puVar33 + 0x15f4) & 0xffffffdf;
          }
          local_b0 = 7.00649e-45;
          *(uint *)((long)puVar33 + 0x15f4) = uVar20;
        }
        else if (cVar11 == '\0') {
          FUN_02472404(0,param_1);
          if (cVar12 == '\0') {
            *(byte *)(param_1 + 0x964) = bVar16;
            *(uint *)(param_1 + 0x960) = uVar5;
            *(uint *)(param_1 + 0x95c) = uVar4;
            *(undefined4 *)(param_1 + 0x958) = 0;
            *(undefined1 *)(param_1 + 0x965) = 1;
            uVar26 = FUN_016e3954(param_1);
            FUN_01707f58(uVar26,uVar20,1,0);
            FUN_023164ec(param_1,uVar20);
            uVar26 = FUN_016e3954(param_1);
            FUN_01707ee4(uVar26,uVar20,1,0,1,0);
          }
        }
        else {
          lVar32 = FUN_0251e98c(1);
          puVar22 = (undefined4 *)(**(code **)(*(long *)(lVar32 + 0x2860) + 0xf0))(lVar32 + 0x2860);
          FUN_0244d1b8(*puVar22,param_1);
        }
      }
    }
  }
  else {
    uVar37 = (**(code **)(*(long *)(param_1 + 0x970) + (ulong)*(byte *)(param_1 + 0x984) * 8))
                       (param_1 + 0x970);
    cVar28 = *(char *)(param_1 + 0x985);
    *(undefined4 *)(param_1 + 0x978) = uVar37;
    iVar36 = *(int *)(param_1 + 0x980);
    cVar29 = cVar28;
    if (bVar19) goto LAB_02479884;
LAB_02479984:
    if (cVar29 == '\0') goto LAB_02479ec0;
    fVar55 = 1.0;
    if ((iVar36 != 0) && (*(int *)(param_1 + 0x978) < iVar36)) {
      fVar38 = (float)*(int *)(param_1 + 0x978) / (float)iVar36;
      fVar57 = 1.0;
      if (fVar38 <= 1.0) {
        fVar57 = fVar38;
      }
      fVar55 = 0.0;
      if (0.0 <= fVar38) {
        fVar55 = fVar57;
      }
    }
    if (cVar11 == '\0') {
      FUN_02472404(fVar55,param_1);
    }
    else {
      lVar32 = FUN_0251e98c(1);
      pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x2860) + 0xf0))(lVar32 + 0x2860);
      fVar57 = *pfVar21;
      lVar32 = FUN_0251e98c(1);
      pfVar21 = (float *)(**(code **)(*(long *)(lVar32 + 0x2860) + 0xf0))(lVar32 + 0x2860);
      FUN_0244d1b8(fVar57 + fVar55 * (1.0 - *pfVar21),param_1);
    }
LAB_02479eb8:
    if (*(char *)(param_1 + 0x985) == '\0') goto LAB_02479ec0;
  }
  puVar33 = *(undefined8 **)(param_1 + 0x60);
  if (puVar33 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar36 = __cxa_guard_acquire(&DAT_052461c0);
      puVar33 = &DAT_05240280;
      if (iVar36 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar33 = &DAT_05240280;
    }
  }
  lVar32 = puVar33[0x227];
  if (lVar32 == 0) {
    if (cVar12 == '\0') {
      local_138 = 0;
LAB_0247a2f8:
      puVar33 = &DAT_04c931a0;
      goto joined_r0x0247a300;
    }
LAB_0247a1d4:
    local_b0 = 0.0;
    local_138 = 0;
LAB_0247a1e0:
    uStack_135 = 0;
    uStack_136 = 0;
  }
  else {
    fVar55 = (float)(*(uint *)(puVar33 + 0x2d3) >> 1 & 1);
    local_138 = SUB42(fVar55,0);
    if (cVar12 == '\0') {
      if (lVar32 == 0) goto LAB_0247a2f8;
      fVar57 = 0.0;
      if (*(long *)(lVar32 + 0x78) != 0) {
        fVar57 = *(float *)(*(long *)(lVar32 + 0x78) + 0x18);
      }
      if ((uint)fVar57 <= (uint)fVar55) {
        fVar55 = 0.0;
      }
      if ((uint)*(float *)(lVar32 + 0x80) <= (uint)fVar55) {
        fVar55 = 0.0;
      }
      puVar33 = (undefined8 *)(*(long *)(lVar32 + 0x88) + (long)(int)fVar55 * 0xe8 + 0x60);
joined_r0x0247a300:
      if (bVar19) {
        uStack_135 = 0;
        uStack_136 = 0;
        if (*(int *)(param_1 + 0x994) != 0) {
          *(int *)(param_1 + 0x994) = *(int *)(param_1 + 0x994) + 1;
          return;
        }
        puVar33 = *(undefined8 **)(param_1 + 0x60);
        if (puVar33 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar36 = __cxa_guard_acquire(&DAT_052461c0);
            puVar33 = &DAT_05240280;
            if (iVar36 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar33 = &DAT_05240280;
          }
        }
        if (puVar33[0x227] == 0) {
          local_b0 = 0.0;
          local_138 = 0;
          uStack_136 = 0;
          uStack_135 = 0;
        }
        else {
          local_b0 = (float)(*(uint *)(puVar33 + 0x2d3) >> 1 & 1);
          local_138 = SUB42(local_b0,0);
          uStack_136 = 0;
          uStack_135 = 0;
          uVar23 = FUN_03850368(puVar33[0x227],local_b0);
          fVar55 = local_b0;
          if ((((uVar23 & 1) == 0) && (puVar33[0x227] != 0)) &&
             ((uVar23 = FUN_03850368(puVar33[0x227],local_b0), (uVar23 & 1) == 0 &&
              (uVar23 = FUN_0384fca4(puVar33[0x227],fVar55), (uVar23 & 1) == 0)))) {
            return;
          }
        }
        *(int *)(param_1 + 0x994) = *(int *)(param_1 + 0x994) + 1;
        goto LAB_0247a480;
      }
      uStack_135 = 0;
      uStack_136 = 0;
      if (cVar11 == '\0') {
        if (*(int *)((long)puVar33 + 0x58) == DAT_054cfcd0) {
          return;
        }
        if ((*(char *)(param_1 + 0x965) == '\0') ||
           (*(int *)(param_1 + 0x960) <= *(int *)(param_1 + 0x958))) {
          uVar26 = FUN_016e3954(param_1);
          FUN_01707f58(uVar26,6,1,0);
          FUN_023755e8(param_1,bVar10,6);
          if (*(char *)(param_1 + 0x965) == '\0') {
            return;
          }
        }
        uVar37 = (**(code **)(*(long *)(param_1 + 0x950) + (ulong)*(byte *)(param_1 + 0x964) * 8))
                           (param_1 + 0x950);
        *(undefined4 *)(param_1 + 0x958) = uVar37;
        return;
      }
      puVar33 = *(undefined8 **)(param_1 + 0x60);
      if (puVar33 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar36 = __cxa_guard_acquire(&DAT_052461c0);
          puVar33 = &DAT_05240280;
          if (iVar36 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar33 = &DAT_05240280;
        }
      }
      if (puVar33[0x227] == 0) goto LAB_0247a1d4;
      local_b0 = (float)(*(uint *)(puVar33 + 0x2d3) >> 1 & 1);
      local_138 = SUB42(local_b0,0);
      uStack_136 = 0;
      uStack_135 = 0;
      uVar23 = FUN_03850368(puVar33[0x227],local_b0);
      fVar55 = local_b0;
    }
    else {
      uStack_136 = 0;
      uStack_135 = 0;
      local_b0 = fVar55;
      if (lVar32 == 0) goto LAB_0247a1e0;
      uVar23 = FUN_03850368(lVar32,fVar55);
      fVar55 = local_b0;
    }
    local_b0 = fVar55;
    if (((((uVar23 & 1) == 0) && (puVar33[0x227] != 0)) &&
        (uVar23 = FUN_03850368(puVar33[0x227],fVar55), (uVar23 & 1) == 0)) &&
       (uVar23 = FUN_0384fca4(puVar33[0x227],fVar55), (uVar23 & 1) == 0)) {
      return;
    }
  }
  puVar33 = *(undefined8 **)(param_1 + 0x60);
  if (puVar33 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar36 = __cxa_guard_acquire(&DAT_052461c0);
      puVar33 = &DAT_05240280;
      if (iVar36 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar33 = &DAT_05240280;
    }
  }
  FUN_01707f58(puVar33,6,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,bVar10,6);
    return;
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
  if (bVar10 == 1) {
    FUN_0231b68c(param_1,6);
    return;
  }
LAB_0247a480:
  FUN_023164ec(param_1,6);
  return;
}

