
void FUN_02498bd0(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  undefined8 *puVar15;
  long *plVar16;
  int iVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_64;
  float local_5c [3];
  
  cVar2 = '\0';
  if (*(char *)(param_1 + 0x3a5) != '\0') {
    uVar7 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    cVar2 = *(char *)(param_1 + 0x3a5);
    *(undefined4 *)(param_1 + 0x398) = uVar7;
  }
  bVar14 = *(byte *)(param_1 + 0x1ee8);
  local_70 = (float)(int)*(short *)(param_1 + 0x191a) * 0.25;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar14);
  iVar8 = *(int *)(param_1 + 0x3a0);
  local_6c = (float)*(int *)(param_1 + 0x191c) * 0.001;
  local_78 = CONCAT44((float)*(int *)(param_1 + 0x1916) * 0.001,(undefined4)local_78);
  if (cVar2 == '\0') {
    fVar19 = 0.0;
  }
  else {
    fVar19 = 1.0;
    if (iVar8 != 0) {
      fVar19 = 1.0;
      if (*(int *)(param_1 + 0x398) < iVar8) {
        fVar22 = (float)*(int *)(param_1 + 0x398) / (float)iVar8;
        fVar20 = 1.0;
        if (fVar22 <= 1.0) {
          fVar20 = fVar22;
        }
        fVar19 = 0.0;
        if (0.0 <= fVar22) {
          fVar19 = fVar20;
        }
      }
    }
  }
  local_64 = 1;
  local_68 = (1.0 - fVar19) * 0.5 + 0.5;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_78,*(undefined4 *)(param_1 + 0x230),1);
  FUN_016dec40(param_1,*(long *)(param_1 + 0x68) + 0x278,0,0,0,0,0);
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_5c[0] = 0.0;
  local_78 = CONCAT44(local_78._4_4_,0x37);
  if ((puVar15[0x227] != 0) && (uVar9 = FUN_03850a90(puVar15[0x227],0x37,0,0), (uVar9 & 1) != 0)) {
    fVar19 = (float)FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    fVar20 = *(float *)((long)*(long **)(param_1 + 0x68) + 0x27c);
    if (fVar19 <= fVar20) {
      if (fVar19 < fVar20) {
        fVar22 = fVar20 + -0.1;
        bVar5 = false;
        bVar6 = false;
        if (fVar22 <= fVar20) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar22) && !NAN(fVar19)) {
            bVar5 = fVar22 == fVar19;
            bVar6 = fVar19 <= fVar22;
          }
        }
        fVar20 = fVar19;
        if (bVar6 && !bVar5) {
          fVar20 = fVar22;
        }
      }
    }
    else {
      fVar22 = fVar20 + 0.1;
      bVar5 = false;
      bVar6 = false;
      if (fVar20 <= fVar22) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar22) && !NAN(fVar19)) {
          bVar5 = fVar22 < fVar19;
          bVar6 = false;
        }
      }
      if (bVar5 != bVar6) {
        fVar19 = fVar22;
      }
      fVar20 = fVar19;
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x110))(fVar20);
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_78 = local_78 & 0xffffffff00000000;
  if (puVar15[0x227] != 0) {
    lVar12 = *(long *)(puVar15[0x227] + 0x88);
    plVar16 = (long *)(lVar12 + 0x60);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcVar18 = *(char **)(lVar12 + 0x68);
    (**(code **)(DAT_054d6ff8 + 0x18))(&DAT_054d6ff8);
    if (pcVar18 == DAT_054d7000) goto LAB_02498fe8;
    pcVar18 = *(char **)(lVar12 + 0x68);
    if (*pcVar18 == *DAT_054d7000) {
      if (*pcVar18 == '\0') goto LAB_02498fe8;
      uVar9 = 0;
      do {
        uVar13 = uVar9;
        if ((uVar13 == 0x80000) || (pcVar18[uVar13 + 1] != DAT_054d7000[uVar13 + 1]))
        goto LAB_02498edc;
        if (pcVar18[uVar13 + 1] == '\0') goto LAB_02498ed4;
        if (pcVar18[uVar13 + 2] != DAT_054d7000[uVar13 + 2]) goto LAB_02498edc;
        uVar9 = uVar13 + 2;
      } while (pcVar18[uVar13 + 2] != '\0');
      uVar13 = uVar13 + 1;
LAB_02498ed4:
      if (uVar13 < 0x80000) goto LAB_02498fe8;
    }
  }
LAB_02498edc:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_78 = local_78 & 0xffffffff00000000;
  if (puVar15[0x227] != 0) {
    lVar12 = *(long *)(puVar15[0x227] + 0x88);
    plVar16 = (long *)(lVar12 + 0x60);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcVar18 = *(char **)(lVar12 + 0x68);
    (**(code **)(DAT_054d7008 + 0x18))(&DAT_054d7008);
    if (pcVar18 == DAT_054d7010) goto LAB_02498fe8;
    pcVar18 = *(char **)(lVar12 + 0x68);
    if (*pcVar18 == *DAT_054d7010) {
      if (*pcVar18 == '\0') {
LAB_02498fe8:
        puVar15 = *(undefined8 **)(param_1 + 0x60);
        if (puVar15 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_052461c0), iVar8 != 0))
          {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
            puVar15 = &DAT_05240280;
          }
          else {
            puVar15 = &DAT_05240280;
          }
        }
        uVar9 = FUN_0170a6d0(puVar15,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(param_1 + 0x178) == 0) {
            local_70 = 0.0;
            local_6c = (float)((uint)local_6c & 0xffffff00);
            local_78 = 0x1000000000006;
            FUN_02374564(param_1,&local_78);
          }
          else {
            *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
            FUN_023164ec(param_1,6);
          }
        }
        return;
      }
      uVar9 = 0;
      do {
        uVar13 = uVar9;
        if ((uVar13 == 0x80000) || (pcVar18[uVar13 + 1] != DAT_054d7010[uVar13 + 1]))
        goto LAB_02499038;
        if (pcVar18[uVar13 + 1] == '\0') goto LAB_02498fe0;
        if (pcVar18[uVar13 + 2] != DAT_054d7010[uVar13 + 2]) goto LAB_02499038;
        uVar9 = uVar13 + 2;
      } while (pcVar18[uVar13 + 2] != '\0');
      uVar13 = uVar13 + 1;
LAB_02498fe0:
      if (uVar13 < 0x80000) goto LAB_02498fe8;
    }
  }
LAB_02499038:
  uVar3 = *(ushort *)(param_1 + 0x1914);
  lVar12 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x13b0) + 0xf0))(lVar12 + 0x13b0);
  fVar19 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c[0] = 1.4013e-44;
    local_78 = CONCAT44(local_78._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      bVar5 = true;
      goto LAB_02499168;
    }
  }
  iVar8 = (uint)uVar3 * 0x10000;
  plVar16 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar16 = *(long **)(param_1 + 0x4c8);
  }
  lVar12 = (**(code **)(*plVar16 + 0x148))();
  iVar21 = iVar8 - *(int *)(lVar12 + 4);
  if (iVar21 + 0x5b05afU < 0xb60b5f) {
    bVar5 = true;
    iVar17 = iVar8;
  }
  else {
    iVar4 = 0x15555560;
    iVar17 = -0x15555560;
    iVar21 = (int)(fVar19 * (float)iVar21);
    if (iVar21 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar17 = 0x5b05b0;
    }
    iVar1 = iVar21;
    if (iVar4 <= iVar21) {
      iVar1 = iVar4;
    }
    if (iVar17 <= iVar21) {
      iVar17 = iVar1;
    }
    iVar17 = iVar17 + *(int *)(lVar12 + 4);
    bVar5 = iVar17 == iVar8;
  }
  *(int *)(lVar12 + 4) = iVar17;
LAB_02499168:
  iVar8 = *(int *)(param_1 + 0x190a);
  iVar21 = *(int *)(param_1 + 0x1910);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1380) + 0xf0))(lVar12 + 0x1380);
  local_5c[1] = 0.0;
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_70 = *(float *)(puVar15 + 0x50);
  local_78 = puVar15[0x4f] & 0xffffffff;
  local_5c[0] = (float)iVar8 * 0.001;
  local_5c[2] = (float)iVar21 * 0.001;
  fVar19 = (float)FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,&local_78,local_5c);
  *(undefined4 *)(puVar15 + 0x4f) = (undefined4)local_78;
  *(float *)(puVar15 + 0x50) = local_70;
  if (bVar5) {
    if (fVar19 == 0.0) {
      FUN_02498670(param_1,param_1 + 0x1900);
      return;
    }
    return;
  }
  return;
}

