
void FUN_024507b0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  char *__src;
  char *__dest;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  void *__src_00;
  uint uVar18;
  uint uVar19;
  undefined8 local_1a0;
  char *local_198;
  int local_190;
  undefined *local_140;
  int local_138;
  void *local_e8;
  int local_e0;
  undefined1 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined *local_50;
  undefined *local_48;
  
  iVar8 = *(int *)(param_1 + 0x178);
  if (iVar8 == 1) {
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_1a0 = (undefined *)
                CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                         (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_198 = (char *)CONCAT44(local_198._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar17 + 0x4f,&local_1a0);
    if (*(int *)(param_1 + 0x178) != 0) {
LAB_024508b8:
      iVar8 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar10 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar10 = *(long **)(param_1 + 0x4c8);
      }
      lVar9 = (**(code **)(*plVar10 + 0x148))();
      iVar16 = iVar8 - *(int *)(lVar9 + 4);
      if (0xb60b5e < iVar16 + 0x5b05afU) {
        iVar14 = (int)((float)iVar16 * 0.1666667);
        iVar16 = 0x10000000;
        if (iVar14 < 1) {
          iVar16 = -0x5b05b0;
        }
        iVar8 = -0x10000000;
        if (0 < iVar14) {
          iVar8 = 0x5b05b0;
        }
        iVar4 = iVar14;
        if (iVar16 <= iVar14) {
          iVar4 = iVar16;
        }
        if (iVar8 <= iVar14) {
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + *(int *)(lVar9 + 4);
      }
      *(int *)(lVar9 + 4) = iVar8;
      iVar8 = *(int *)(param_1 + 0x178);
      goto LAB_02450948;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
    local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024508b8;
  }
  else {
LAB_02450948:
    if (iVar8 != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x22a8) == '\0') {
    if (*(uint *)(param_1 + 0x1c04) < 0x1e) {
      return;
    }
    goto LAB_02450c1c;
  }
  if (*(uint *)(param_1 + 0x1c04) < 0xf) {
    return;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
  local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,10);
  if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) {
    local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,10);
    plVar10 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar10 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar10 + 0x148))();
    iVar8 = *(int *)(param_1 + 0x22a4);
    iVar16 = iVar8 - *(int *)(lVar9 + 4);
    if (iVar16 + 0x5b05afU < 0xb60b5f) {
      bVar7 = true;
      iVar14 = iVar8;
    }
    else {
      iVar4 = 0x15555560;
      iVar14 = -0x15555560;
      iVar16 = (int)((float)iVar16 * 0.18);
      if (iVar16 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar3 = iVar16;
      if (iVar4 <= iVar16) {
        iVar3 = iVar4;
      }
      if (iVar14 <= iVar16) {
        iVar14 = iVar3;
      }
      iVar14 = iVar14 + *(int *)(lVar9 + 4);
      bVar7 = iVar14 == iVar8;
    }
    *(int *)(lVar9 + 4) = iVar14;
    uVar12 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    if (*(char *)(param_1 + 0x22a8) != '\0') goto LAB_02450aa8;
    bVar5 = true;
    *(undefined4 *)(param_1 + 0x22a4) = 0;
    uVar15 = 0;
    uVar18 = uVar12;
  }
  else {
    bVar7 = true;
    uVar12 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
LAB_02450aa8:
    uVar15 = *(uint *)(param_1 + 0x22a4);
    bVar5 = false;
    uVar18 = uVar12 - uVar15;
  }
  if (uVar18 == 0) {
LAB_02450b38:
    FUN_023164ec(param_1,6);
  }
  else {
    if (uVar12 <= uVar15) {
      uVar18 = uVar15 - uVar12;
    }
    uVar2 = -uVar18;
    if (uVar18 < 0x80000001) {
      uVar2 = uVar18;
    }
    if ((float)uVar2 * 8.381903e-08 <= 5.0) goto LAB_02450b38;
    if (bVar5) {
      uVar15 = 0;
      *(undefined4 *)(param_1 + 0x22a4) = 0;
    }
    uVar18 = uVar12 - uVar15;
    if (uVar18 == 0) {
LAB_02450b30:
      fVar13 = 8.381903e-08;
      uVar19 = uVar18;
    }
    else {
      uVar19 = uVar15 - uVar12;
      uVar2 = uVar18;
      if (uVar12 <= uVar15) {
        uVar2 = uVar19;
      }
      if (uVar2 < 0x80000001) {
        if (uVar12 <= uVar15) {
          fVar13 = 8.381903e-08;
          goto LAB_02450b64;
        }
      }
      else {
        uVar18 = -uVar2;
        if (uVar15 < uVar12) goto LAB_02450b30;
      }
      fVar13 = -8.381903e-08;
      uVar19 = uVar18;
    }
LAB_02450b64:
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    puVar6 = PTR_DAT_04bb2020;
    local_1a0 = PTR_DAT_04bb2020 + 0x10;
    local_198 = "StickInputGapDegree";
    if (((puVar17[0x227] != 0) && (lVar9 = *(long *)(puVar17[0x227] + 0x78), lVar9 != 0)) &&
       (plVar10 = *(long **)(lVar9 + 0x48), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x30))(fVar13 * (float)uVar19,plVar10,&local_1a0);
    }
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_1a0 = puVar6 + 0x10;
    local_198 = "PlayerDemoTurn";
    FUN_01707d90(puVar17,&local_1a0,6,0,0);
  }
  if (!bVar7) {
    return;
  }
LAB_02450c1c:
  puVar6 = PTR_PTR_04bb2238;
  if (*(int *)(param_1 + 0x22a0) == 6) {
    uVar11 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar11 & 1) == 0) {
      local_198 = (char *)((ulong)local_198 & 0xffffffff00000000);
      local_1a0 = (undefined *)CONCAT35(local_1a0._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_1a0);
    }
  }
  else {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = *(undefined **)(PTR_PTR_04bb2238 + 8);
    if (*(uint *)(param_1 + 0x22a0) < 6) {
      local_48 = &DAT_0417a99c +
                 *(int *)(&DAT_0417a99c + (long)(int)*(uint *)(param_1 + 0x22a0) * 4);
    }
    FUN_0257a010(&local_1a0);
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    __src_00 = *(void **)(puVar6 + 8);
    if (local_e8 != __src_00) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(puVar6 + 8) + lVar9) == '\0') goto LAB_02450d20;
        lVar1 = *(long *)(puVar6 + 8) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02450d20;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02450d20;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02450d20:
      iVar8 = (int)lVar9;
      if (local_e0 <= (int)lVar9) {
        iVar8 = local_e0 + -1;
      }
      memcpy(local_e8,__src_00,(long)iVar8);
      *(undefined1 *)((long)local_e8 + (long)iVar8) = 0;
    }
    __dest = local_198;
    (**(code **)(DAT_054cc328 + 0x18))(&DAT_054cc328);
    __src = DAT_054cc330;
    if (__dest != DAT_054cc330) {
      (**(code **)(DAT_054cc328 + 0x18))(&DAT_054cc328);
      lVar9 = 0;
      do {
        if (DAT_054cc330[lVar9] == '\0') goto LAB_02450dcc;
        if (DAT_054cc330[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02450dcc;
        }
        if (DAT_054cc330[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02450dcc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02450dcc:
      iVar8 = (int)lVar9;
      if (local_190 <= (int)lVar9) {
        iVar8 = local_190 + -1;
      }
      memcpy(__dest,__src,(long)iVar8);
      __dest[iVar8] = '\0';
    }
    (**(code **)(local_50 + 0x18))(&local_50);
    puVar6 = local_48;
    if (local_140 != local_48) {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar9 = 0;
      do {
        if (local_48[lVar9] == '\0') goto LAB_02450e6c;
        if (local_48[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02450e6c;
        }
        if (local_48[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02450e6c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02450e6c:
      iVar8 = (int)lVar9;
      if (local_138 <= (int)lVar9) {
        iVar8 = local_138 + -1;
      }
      memcpy(local_140,puVar6,(long)iVar8);
      local_140[iVar8] = 0;
    }
    local_98 = 0;
    local_8c = 0xc;
    local_90 = *(int *)(param_1 + 0x22a0) == 0;
    FUN_024480f0(param_1,&local_1a0);
  }
  return;
}

