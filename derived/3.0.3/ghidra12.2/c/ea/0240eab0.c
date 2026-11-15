
void FUN_0240eab0(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  byte bVar15;
  undefined8 *puVar16;
  long *plVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  
  iVar30 = *(int *)(param_1 + 0x1906);
  iVar29 = *(int *)(param_1 + 0x1900);
  sVar4 = *(short *)(param_1 + 0x1904);
  fVar28 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  fVar27 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fVar26 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  if (*(char *)(param_1 + 0x3a5) == '\0') {
    cVar3 = '\0';
    fVar21 = fVar26;
    fVar20 = fVar28;
    fVar19 = fVar27;
  }
  else {
    uVar6 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = uVar6;
    cVar3 = *(char *)(param_1 + 0x3a5);
    fVar21 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
    fVar20 = (float)*(int *)(param_1 + 0x1910) * 0.001;
    fVar19 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  }
  bVar15 = *(byte *)(param_1 + 0x1ee8);
  local_b0 = (undefined *)CONCAT44(fVar19,(undefined4)local_b0);
  local_a8 = (char *)CONCAT44(fVar20,fVar21);
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_b0 = (undefined *)CONCAT71(local_b0._1_7_,bVar15);
  iVar7 = *(int *)(param_1 + 0x3a0);
  if (cVar3 == '\0') {
    fVar19 = 0.0;
  }
  else {
    fVar19 = 1.0;
    if (iVar7 != 0) {
      fVar19 = 1.0;
      if (*(int *)(param_1 + 0x398) < iVar7) {
        fVar20 = (float)*(int *)(param_1 + 0x398) / (float)iVar7;
        fVar21 = 1.0;
        if (fVar20 <= 1.0) {
          fVar21 = fVar20;
        }
        fVar19 = 0.0;
        if (0.0 <= fVar20) {
          fVar19 = fVar21;
        }
      }
    }
  }
  local_a0 = CONCAT35(local_a0._5_3_,0x100000000);
  local_a0 = CONCAT44(local_a0._4_4_,(1.0 - fVar19) * 0.5 + 0.5);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_b0,*(undefined4 *)(param_1 + 0x230),1);
  if (*(int *)(param_1 + 0x1c04) == 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    local_a0 = 0;
    local_98 = (long *)0x0;
    local_b0 = (undefined *)0x0;
    local_a8 = (char *)0x0;
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    local_8c = 0xe;
    if ((puVar16[0x227] == 0) ||
       (uVar8 = FUN_03850a90(puVar16[0x227],0xe,&local_b0,0), (uVar8 & 1) == 0)) {
      puVar16 = *(undefined8 **)(param_1 + 0x60);
      if (puVar16 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar16 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar16 = &DAT_05240280;
        }
      }
      local_8c = 0;
      if ((puVar16[0x227] != 0) &&
         (uVar8 = FUN_03850a90(puVar16[0x227],0,&local_b0,0), (uVar8 & 1) != 0)) goto LAB_0240ecb8;
LAB_0240ecfc:
      uVar11 = 1;
    }
    else {
LAB_0240ecb8:
      if ((local_98 == (long *)0x0) || (lVar12 = *local_98, lVar12 == 0)) goto LAB_0240ecfc;
      fVar19 = *(float *)(lVar12 + 0x18);
      if (fVar19 < 0.0) {
        fVar19 = *(float *)(local_98[1] + 0xc);
      }
      uVar11 = (uint)(fVar19 - *(float *)(lVar12 + 0x14));
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar11 = (uint)(float)uVar11;
    }
    lVar12 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x810) + 0xf0))(lVar12 + 0x810);
    fVar19 = (float)uVar11;
    lVar12 = *(long *)(param_1 + 0x68);
    if (uVar11 == 0) {
      fVar24 = *(float *)(lVar12 + 0x27c);
      fVar20 = 0.0;
      fVar25 = 0.0;
      fVar21 = 0.0;
    }
    else {
      fVar21 = *pfVar9;
      uVar1 = uVar11 & 3;
      fVar20 = -fVar21;
      if (0.0 <= fVar21) {
        fVar20 = fVar21;
      }
      if (fVar20 <= 0.0) {
        fVar20 = -fVar20;
      }
      if (uVar11 < 4) {
        fVar24 = 0.0;
        fVar21 = 0.0;
      }
      else {
        fVar24 = 0.0;
        fVar21 = 0.0;
        uVar11 = uVar11 & 0xfffffffc;
        do {
          fVar25 = fVar24 - fVar20;
          uVar11 = uVar11 - 4;
          fVar22 = fVar25 - fVar20;
          fVar23 = fVar22 - fVar20;
          fVar24 = fVar23 - fVar20;
          fVar21 = fVar21 + fVar25 + fVar22 + fVar23 + fVar24;
        } while (uVar11 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        fVar24 = fVar24 - fVar20;
        fVar21 = fVar21 + fVar24;
      }
      fVar20 = (fVar27 - *(float *)(lVar12 + 0x278)) / fVar19;
      fVar24 = *(float *)(lVar12 + 0x27c);
      fVar25 = (fVar28 - *(float *)(lVar12 + 0x280)) / fVar19;
    }
    *(float *)(param_1 + 0x694) = fVar20;
    *(float *)(param_1 + 0x69c) = fVar25;
    fVar19 = ((fVar26 - fVar24) - fVar21) / fVar19;
    *(float *)(param_1 + 0x698) = fVar19;
    *(float *)(param_1 + 0x1828) = fVar19;
    lVar12 = FUN_0251e98c(1);
    puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x810) + 0xf0))(lVar12 + 0x810);
    uVar6 = *puVar10;
    *(undefined4 *)(param_1 + 0x182c) = 0x80000000;
    *(undefined4 *)(param_1 + 0x1830) = uVar6;
  }
  fVar21 = (float)*(int *)(param_1 + 0x190a) * 0.001 - (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar19 = (float)*(int *)(param_1 + 0x1910) * 0.001 - (float)*(int *)(param_1 + 0x1906) * 0.001;
  fVar20 = SQRT(fVar21 * fVar21 + 0.0 + fVar19 * fVar19);
  if (0.0 < fVar20) {
    fVar21 = fVar21 * (1.0 / fVar20);
    fVar19 = fVar19 * (1.0 / fVar20);
    fVar20 = SQRT(fVar21 * fVar21 + 0.0 + fVar19 * fVar19);
  }
  if (0.0 < fVar20) {
    fVar21 = (1.0 / fVar20) * fVar21;
    fVar19 = fVar19 * (1.0 / fVar20);
  }
  if ((fVar21 == 0.0) && (fVar19 == 0.0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_006f0400();
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_8c = 10;
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0240ef3c;
  }
  else {
LAB_0240ef3c:
    plVar17 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar17 = *(long **)(param_1 + 0x4c8);
    }
    lVar12 = (**(code **)(*plVar17 + 0x148))();
    iVar14 = iVar7 - *(int *)(lVar12 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar7 = -0x15555560;
      iVar14 = (int)((float)iVar14 * 0.25);
      if (iVar14 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar7 = 0x5b05b0;
      }
      iVar2 = iVar14;
      if (iVar5 <= iVar14) {
        iVar2 = iVar5;
      }
      if (iVar7 <= iVar14) {
        iVar7 = iVar2;
      }
      iVar7 = iVar7 + *(int *)(lVar12 + 4);
    }
    *(int *)(lVar12 + 4) = iVar7;
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = "PlayerJumpValleyLand";
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_8c = 0;
  if (puVar16[0x227] == 0) {
LAB_0240f13c:
    if (*(int *)(param_1 + 0x178) == 0) {
      fVar19 = (float)iVar29 * 0.001;
      fVar20 = (float)iVar30 * 0.001;
      fVar21 = (float)(int)sVar4 * 0.25;
      fVar24 = fVar19 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
      fVar25 = fVar20 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
      fVar19 = fVar19 - fVar27;
      fVar20 = fVar20 - fVar28;
      fVar28 = SQRT(fVar25 * fVar25 + fVar24 * fVar24) / SQRT(fVar20 * fVar20 + fVar19 * fVar19);
      fVar27 = 1.0;
      if (fVar28 <= 1.0) {
        fVar27 = fVar28;
      }
      puVar16 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(undefined1 *)((long)puVar16 + 0x2e5) = 1;
      *(float *)((long)puVar16 + 0x2ec) = fVar21 + fVar27 * (fVar26 - fVar21);
    }
    fVar26 = *(float *)(param_1 + 0x694);
    pfVar9 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    *pfVar9 = fVar26 + *pfVar9;
    fVar26 = *(float *)(param_1 + 0x69c);
    lVar12 = (**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    *(float *)(lVar12 + 8) = fVar26 + *(float *)(lVar12 + 8);
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar29 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar29 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    uVar8 = FUN_0170a6d0(puVar16,0);
    if ((uVar8 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100;
      puVar16 = *(undefined8 **)(param_1 + 0x60);
      if (puVar16 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar29 = __cxa_guard_acquire(&DAT_052461c0);
          puVar16 = &DAT_05240280;
          if (iVar29 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar16 = &DAT_05240280;
        }
      }
      FUN_017029bc(puVar16,&local_b0,6,0,0);
    }
  }
  else {
    lVar12 = *(long *)(puVar16[0x227] + 0x88);
    plVar17 = (long *)(lVar12 + 0x60);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcVar18 = *(char **)(lVar12 + 0x68);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    if (pcVar18 != local_a8) {
      pcVar18 = *(char **)(lVar12 + 0x68);
      if (*pcVar18 != *local_a8) goto LAB_0240f13c;
      if (*pcVar18 != '\0') {
        uVar8 = 0;
        do {
          uVar13 = uVar8;
          if ((uVar13 == 0x80000) || (pcVar18[uVar13 + 1] != local_a8[uVar13 + 1]))
          goto LAB_0240f13c;
          if (pcVar18[uVar13 + 1] == '\0') goto LAB_0240f0e0;
          if (pcVar18[uVar13 + 2] != local_a8[uVar13 + 2]) goto LAB_0240f13c;
          uVar8 = uVar13 + 2;
        } while (pcVar18[uVar13 + 2] != '\0');
        uVar13 = uVar13 + 1;
LAB_0240f0e0:
        if (uVar13 >> 0x13 != 0) goto LAB_0240f13c;
      }
    }
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar29 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar29 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    uVar8 = FUN_0170a6d0(puVar16,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(param_1 + 0x178) == 0) {
        uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar8 & 1) == 0) {
          local_84 = 0;
          local_8c = 6;
          local_88 = 1;
          FUN_02374e74(param_1,&local_8c);
        }
      }
      else {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

