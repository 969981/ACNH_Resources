
/* WARNING: Removing unreachable block (ram,0x0246a3c4) */
/* WARNING: Removing unreachable block (ram,0x0246a208) */
/* WARNING: Removing unreachable block (ram,0x0246a718) */

void FUN_0246a190(long param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  char *__dest;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  puVar4 = PTR_DAT_04bb2200;
  iVar35 = *(int *)(param_1 + 0x1900);
  sVar2 = *(short *)(param_1 + 0x1904);
  fVar37 = -20.0;
  iVar36 = *(int *)(param_1 + 0x1906);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar13 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar13 != 0)) {
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
    lVar13 = *(long *)(lVar13 + 0x118);
    if (lVar13 != 0) {
      lVar13 = *(long *)(lVar13 + 0x280);
      fVar37 = 0.0;
      if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 8), lVar13 != 0)) {
        pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x488) + 0xf0))(lVar13 + 0x488);
        fVar37 = *pfVar7;
      }
      lVar13 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x1560) + 0xf0))(lVar13 + 0x1560);
      fVar37 = fVar37 + *pfVar7;
    }
  }
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_98 = *(undefined8 *)(param_1 + 0x190c);
  iVar6 = *(int *)(param_1 + 0x5cc);
  if (*(int *)(param_1 + 0x178) == 0) {
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0246a2e8;
  }
  else {
LAB_0246a2e8:
    plVar10 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar10 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar10 + 0x148))();
    iVar16 = iVar6 - *(int *)(lVar13 + 4);
    if (0xb60b5e < iVar16 + 0x5b05afU) {
      iVar3 = 0x15555560;
      iVar6 = -0x15555560;
      iVar16 = (int)((float)iVar16 * 0.25);
      if (iVar16 < 1) {
        iVar3 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar16;
      if (iVar3 <= iVar16) {
        iVar1 = iVar3;
      }
      if (iVar6 <= iVar16) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar13 + 4);
    }
    *(int *)(lVar13 + 4) = iVar6;
  }
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  if (puVar19[0x227] != 0) {
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x35);
    uVar8 = FUN_03850890(puVar19[0x227],0x35,0,*(uint *)(puVar19 + 0x2d3) >> 1 & 1);
    if ((uVar8 & 1) != 0) {
      FUN_02469cec(param_1);
    }
  }
  if (4 < *(uint *)(param_1 + 0x5f4)) {
    *(undefined2 *)(param_1 + 0x2f9) = 0x100;
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)((long)puVar19 + 0x27c) = fVar37;
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(float *)((long)puVar19 + 0x2ec) = fVar37;
      *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar35 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar35 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    if (puVar19[0x227] == 0) {
      uVar17 = 0;
    }
    else {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,1);
      uVar17 = *(uint *)(puVar19 + 0x2d3) >> 1 & 1;
    }
    uVar8 = FUN_0170a6d0(puVar19,uVar17);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(param_1 + 0x178) == 0) {
        if (*(int *)(param_1 + 0x1810) == 1) {
          plVar10 = *(long **)(param_1 + 0x68);
          (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x4f,1);
          *(undefined8 *)(param_1 + 0x1820) = 0;
          *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
          *(undefined8 *)(param_1 + 0x1844) = 0;
        }
        *(undefined8 *)(param_1 + 0x1980) = 0;
        *(undefined8 *)(param_1 + 0x1988) = 0;
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined2 *)(param_1 + 0x1980) = 0x601;
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xf6);
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
        lVar13 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar13 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar13,0xf6);
      }
      else {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
      }
    }
    goto LAB_0246b318;
  }
  switch(*(uint *)(param_1 + 0x5f4)) {
  case 0:
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar23 = FUN_016e026c(0,puVar19 + 0x4f,0,0);
    *(undefined4 *)((long)puVar19 + 0x27c) = uVar23;
    if (*(char *)(param_1 + 0x17cc) < '\0') goto LAB_0246b318;
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = (undefined *)0x0;
    local_b0 = (char *)0x0;
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar35 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar35 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    if ((puVar19[0x227] == 0) ||
       (uVar8 = FUN_03850a90(puVar19[0x227],0xe,&local_b8,0), (uVar8 & 1) == 0)) {
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      if (puVar19 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar35 = __cxa_guard_acquire(&DAT_052461c0);
          puVar19 = &DAT_05240280;
          if (iVar35 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar19 = &DAT_05240280;
        }
      }
      if ((puVar19[0x227] == 0) ||
         (uVar8 = FUN_03850a90(puVar19[0x227],0,&local_b8,0), (uVar8 & 1) == 0)) goto LAB_0246b318;
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x80;
    fVar37 = (float)FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    if (fVar37 <= 20.0) {
      lVar13 = FUN_0251e98c(1);
      if (fVar37 <= 10.0) {
        lVar18 = *(long *)(lVar13 + 0x1ed0);
        lVar15 = 0x1ed0;
        goto LAB_0246b200;
      }
      piVar11 = (int *)(**(code **)(*(long *)(lVar13 + 0x1f00) + 0xf0))(lVar13 + 0x1f00);
      iVar36 = *piVar11;
      lVar13 = FUN_0251e98c(1);
      piVar11 = (int *)(**(code **)(*(long *)(lVar13 + 0x1ed0) + 0xf0))(lVar13 + 0x1ed0);
      iVar35 = *piVar11 + iVar36;
      if (iVar35 < 0 != SCARRY4(*piVar11,iVar36)) {
        iVar35 = iVar35 + 1;
      }
      iVar35 = iVar35 >> 1;
    }
    else {
      lVar13 = FUN_0251e98c(1);
      lVar18 = *(long *)(lVar13 + 0x1f00);
      lVar15 = 0x1f00;
LAB_0246b200:
      piVar11 = (int *)(**(code **)(lVar18 + 0xf0))(lVar13 + lVar15);
      iVar35 = *piVar11;
    }
    *(int *)(param_1 + 0x5f8) = iVar35;
    *(undefined4 *)(param_1 + 0x5f4) = 1;
    goto LAB_0246b318;
  case 1:
    fVar38 = (float)iVar35 * 0.001;
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar22 = (float)iVar36 * 0.001;
    fVar26 = 0.0;
    uVar23 = FUN_016e026c(0,puVar19 + 0x4f,0,0);
    *(undefined4 *)((long)puVar19 + 0x27c) = uVar23;
    uVar17 = *(uint *)(param_1 + 0x5f8);
    *(undefined1 *)(param_1 + 0x615) = 1;
    *(undefined4 *)(param_1 + 0x608) = 0;
    *(byte *)(param_1 + 0x614) = (byte)(uVar17 >> 0x1f);
    *(uint *)(param_1 + 0x610) = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x60c) = uVar17 & (int)uVar17 >> 0x1f;
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    lVar13 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x1e70) + 0xf0))(lVar13 + 0x1e70);
    fVar34 = *pfVar7;
    lVar13 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x1ea0) + 0xf0))(lVar13 + 0x1ea0);
    fVar33 = (float)uVar17;
    fVar25 = *pfVar7;
    if (uVar17 == 0) {
      fVar24 = *(float *)((long)puVar19 + 0x27c);
      fVar21 = 0.0;
      fVar32 = 0.0;
    }
    else {
      fVar20 = -fVar34;
      if (0.0 <= fVar34) {
        fVar20 = fVar34;
      }
      if (fVar20 <= 0.0) {
        fVar20 = -fVar20;
      }
      fVar26 = (fVar38 - *(float *)(puVar19 + 0x4f)) / fVar33;
      fVar24 = *(float *)((long)puVar19 + 0x27c);
      fVar21 = (fVar22 - *(float *)(puVar19 + 0x50)) / fVar33;
      if (0.0 <= fVar25) {
        uVar12 = uVar17 & 3;
        if (uVar17 < 4) {
          fVar31 = 0.0;
          fVar32 = 0.0;
        }
        else {
          fVar31 = 0.0;
          fVar32 = 0.0;
          uVar17 = uVar17 & 0xfffffffc;
          do {
            fVar28 = fVar31 - fVar20;
            uVar17 = uVar17 - 4;
            fVar29 = fVar28 - fVar20;
            fVar30 = fVar29 - fVar20;
            fVar31 = fVar30 - fVar20;
            fVar32 = fVar32 + fVar28 + fVar29 + fVar30 + fVar31;
          } while (uVar17 != 0);
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          fVar31 = fVar31 - fVar20;
          fVar32 = fVar32 + fVar31;
        }
      }
      else {
        if (uVar17 == 1) {
          fVar31 = 0.0;
          fVar32 = 0.0;
        }
        else {
          fVar31 = 0.0;
          fVar32 = 0.0;
          uVar12 = uVar17 & 0xfffffffe;
          do {
            fVar28 = fVar25;
            if (fVar25 <= fVar31 - fVar20) {
              fVar28 = fVar31 - fVar20;
            }
            fVar31 = fVar25;
            if (fVar25 <= fVar28 - fVar20) {
              fVar31 = fVar28 - fVar20;
            }
            uVar12 = uVar12 - 2;
            fVar32 = fVar32 + fVar28 + fVar31;
          } while (uVar12 != 0);
        }
        fVar28 = fVar25;
        if (fVar25 <= fVar31 - fVar20) {
          fVar28 = fVar31 - fVar20;
        }
        if ((uVar17 & 1) != 0) {
          fVar32 = fVar32 + fVar28;
        }
      }
    }
    *(float *)(param_1 + 0x5c0) = fVar26;
    *(float *)(param_1 + 0x5c8) = fVar21;
    fVar32 = (((float)(int)sVar2 * 0.25 - fVar24) - fVar32) / fVar33;
    *(float *)(param_1 + 0x5c4) = fVar32;
    *(float *)(param_1 + 0x1828) = fVar32;
    if (0.0 <= fVar34) {
      lVar13 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x810) + 0xf0))(lVar13 + 0x810);
      fVar34 = *pfVar7;
      fVar26 = *(float *)(param_1 + 0x5c0);
      fVar21 = *(float *)(param_1 + 0x5c8);
    }
    *(float *)(param_1 + 0x1830) = fVar34;
    *(float *)(param_1 + 0x5e4) = fVar26;
    *(float *)(param_1 + 0x5ec) = fVar21;
    if (0.0 <= fVar25) {
      fVar25 = -0.0;
    }
    *(undefined4 *)(param_1 + 0x5e8) = 0;
    *(float *)(param_1 + 0x182c) = fVar25;
    fVar25 = *(float *)(param_1 + 0x5e0);
    if (0.05 < fVar25) {
      fVar34 = SQRT(fVar26 * fVar26 + 0.0 + fVar21 * fVar21);
      if (0.0 < fVar34) {
        fVar34 = 1.0 / fVar34;
        fVar26 = fVar26 * fVar34;
        fVar21 = fVar21 * fVar34;
      }
      *(float *)(param_1 + 0x5c0) = fVar25 * fVar26;
      *(float *)(param_1 + 0x5c8) = fVar25 * fVar21;
    }
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(param_1 + 0x5f0) = (fVar37 - *(float *)(param_1 + 0x5d8)) / fVar33;
    uVar23 = FUN_006f0400(fVar38 - *(float *)(puVar19 + 0x4f),fVar22 - *(float *)(puVar19 + 0x50));
    *(undefined4 *)(param_1 + 0x5cc) = uVar23;
    *(undefined4 *)(param_1 + 0x5f4) = 2;
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x2fa) = 1;
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(float *)((long)puVar19 + 0x2ec) = fVar37;
      *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
    }
    fVar37 = -20.0;
    if ((*(long *)puVar4 != 0) && (lVar13 = *(long *)(*(long *)puVar4 + 0x50), lVar13 != 0)) {
      local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
      lVar13 = *(long *)(lVar13 + 0x118);
      if (lVar13 != 0) {
        lVar13 = *(long *)(lVar13 + 0x280);
        fVar37 = 0.0;
        if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 8), lVar13 != 0)) {
          pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x488) + 0xf0))(lVar13 + 0x488);
          fVar37 = *pfVar7;
        }
        lVar13 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x1590) + 0xf0))(lVar13 + 0x1590);
        fVar37 = fVar37 + *pfVar7;
      }
    }
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar38 = *(float *)((long)puVar19 + 0x27c);
    if (fVar38 < fVar37) {
      *(float *)((long)puVar19 + 0x27c) = fVar37;
    }
    lVar13 = FUN_0251e98c(1);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x1f30) + 0xf0))(lVar13 + 0x1f30);
    uVar23 = *puVar9;
    lVar13 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x1f60) + 0xf0))(lVar13 + 0x1f60);
    fVar22 = *pfVar7;
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    FUN_03eb4b60(uVar23,0x40a00000,0x3d4ccccc,param_1 + 0x5c0,PTR_DAT_04bb2150);
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar19 + 0x4f) = *(float *)(param_1 + 0x5c0) + *(float *)(puVar19 + 0x4f);
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar19 + 0x50) = *(float *)(param_1 + 0x5c8) + *(float *)(puVar19 + 0x50);
    if (fVar37 <= fVar38) {
      fVar38 = *(float *)(param_1 + 0x1828);
      fVar37 = fVar38;
      if (fVar38 != 0.0) {
        fVar37 = 0.0;
        fVar25 = 0.0 - fVar38;
        fVar26 = -fVar25;
        if (0.0 <= fVar25) {
          fVar26 = fVar25;
        }
        if (0.049999997 < fVar26) {
          fVar22 = fVar22 * fVar25;
          fVar37 = 0.049999997;
          if (fVar25 <= 0.0) {
            fVar37 = -5.0;
          }
          fVar26 = 5.0;
          if (fVar25 <= 0.0) {
            fVar26 = -0.049999997;
          }
          if (fVar22 <= fVar26) {
            fVar26 = fVar22;
          }
          if (fVar37 <= fVar22) {
            fVar37 = fVar26;
          }
          fVar37 = fVar38 + fVar37;
        }
        *(float *)(param_1 + 0x1828) = fVar37;
      }
      fVar38 = -fVar37;
      if (0.0 <= fVar37) {
        fVar38 = fVar37;
      }
      if (fVar38 < 1.1920929e-07) {
        puVar19 = *(undefined8 **)(param_1 + 0x60);
        if (puVar19 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar35 = __cxa_guard_acquire(&DAT_052461c0);
            puVar19 = &DAT_05240280;
            if (iVar35 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar19 = &DAT_05240280;
          }
        }
        local_b8 = PTR_DAT_04bb2020 + 0x10;
        local_b0 = "PlayerJumpInWater_Up";
        FUN_01707d90(puVar19,&local_b8,0,0,0);
        *(undefined4 *)(param_1 + 0x5f4) = 4;
      }
    }
    else {
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      if (puVar19 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar35 = __cxa_guard_acquire(&DAT_052461c0);
          puVar19 = &DAT_05240280;
          if (iVar35 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar19 = &DAT_05240280;
        }
      }
      local_b8 = PTR_DAT_04bb2020 + 0x10;
      local_b0 = "PlayerJumpInWater_Up";
      FUN_01707d90(puVar19,&local_b8,0,0,0);
      *(undefined4 *)(param_1 + 0x1828) = 0;
      *(undefined4 *)(param_1 + 0x5f4) = 4;
    }
    goto LAB_0246ab8c;
  case 4:
    *(undefined1 *)(param_1 + 0x2fa) = 1;
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(float *)((long)puVar19 + 0x2ec) = fVar37;
      *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
    }
    lVar13 = FUN_0251e98c(1);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x1f90) + 0xf0))(lVar13 + 0x1f90);
    uVar23 = *puVar9;
    lVar13 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x1fc0) + 0xf0))(lVar13 + 0x1fc0);
    fVar38 = *pfVar7;
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    FUN_03eb4b60(uVar23,0x40a00000,0x3f000000,param_1 + 0x5c0,PTR_DAT_04bb2150);
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar19 + 0x4f) = *(float *)(param_1 + 0x5c0) + *(float *)(puVar19 + 0x4f);
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar19 + 0x50) = *(float *)(param_1 + 0x5c8) + *(float *)(puVar19 + 0x50);
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar22 = *(float *)((long)puVar19 + 0x27c);
    if (fVar22 != fVar37) {
      fVar25 = fVar37 - fVar22;
      fVar26 = -fVar25;
      if (0.0 <= fVar25) {
        fVar26 = fVar25;
      }
      if (fVar26 <= 0.5) {
        *(float *)((long)puVar19 + 0x27c) = fVar37;
      }
      else {
        fVar38 = fVar38 * fVar25;
        fVar26 = 5.0;
        if (fVar25 <= 0.0) {
          fVar26 = -0.5;
        }
        fVar33 = 0.5;
        if (fVar25 <= 0.0) {
          fVar33 = -5.0;
        }
        if (fVar38 <= fVar26) {
          fVar26 = fVar38;
        }
        if (fVar33 <= fVar38) {
          fVar33 = fVar26;
        }
        *(float *)((long)puVar19 + 0x27c) = fVar22 + fVar33;
        if (fVar22 + fVar33 != fVar37) goto LAB_0246ab8c;
      }
    }
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar35 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar35 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "PlayerJumpInWater_UpEnd";
    FUN_01707d90(puVar19,&local_b8,6,0,0);
    *(undefined4 *)(param_1 + 0x5f4) = 5;
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)((long)puVar19 + 0x27c) = fVar37;
LAB_0246ab8c:
    fVar37 = (float)FUN_016e37dc(*(long *)(param_1 + 0x68) + 0x278);
    if (fVar37 + 2.5 <= *(float *)(*(long *)(param_1 + 0x68) + 0x27c)) goto LAB_0246b318;
    goto LAB_0246b310;
  }
  fVar38 = (float)FUN_016e37dc(*(long *)(param_1 + 0x68) + 0x278);
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(char *)(param_1 + 0x615) == '\0') {
      fVar22 = 0.0;
    }
    else {
      iVar35 = *(int *)(param_1 + 0x610);
      fVar22 = 1.0;
      if ((*(int *)(param_1 + 0x608) < iVar35) && (iVar35 != 0)) {
        fVar25 = (float)*(int *)(param_1 + 0x608) / (float)iVar35;
        fVar26 = 1.0;
        if (fVar25 <= 1.0) {
          fVar26 = fVar25;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar25) {
          fVar22 = fVar26;
        }
      }
    }
    fVar26 = *(float *)(param_1 + 0x5d8);
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
    *(float *)((long)puVar19 + 0x2ec) = fVar26 + (fVar37 - fVar26) * fVar22;
  }
  puVar19 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar19 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)(puVar19 + 0x4f) = *(float *)(param_1 + 0x5c0) + *(float *)(puVar19 + 0x4f);
  puVar19 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar19 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)(puVar19 + 0x50) = *(float *)(param_1 + 0x5c8) + *(float *)(puVar19 + 0x50);
  fVar25 = *(float *)(param_1 + 0x5c0);
  fVar37 = *(float *)(param_1 + 0x5e4);
  fVar26 = *(float *)(param_1 + 0x5c8);
  fVar22 = *(float *)(param_1 + 0x5ec);
  if ((fVar25 == fVar37) && (fVar26 == fVar22)) {
    fVar37 = fVar25;
    fVar22 = fVar26;
  }
  else {
    fVar33 = fVar25 - fVar37;
    fVar34 = fVar26 - fVar22;
    fVar32 = SQRT(fVar33 * fVar33 + 0.0 + fVar34 * fVar34);
    if ((0.19999999 <= fVar32) &&
       ((fVar32 = fVar32 * 0.5, fVar32 < -1.1920929e-07 || (1.1920929e-07 < fVar32)))) {
      fVar33 = fVar33 * 0.5;
      fVar34 = fVar34 * 0.5;
      fVar37 = 10.0;
      if (10.0 < fVar32) {
LAB_0246afd4:
        fVar33 = fVar33 * (fVar37 / fVar32);
        fVar34 = fVar34 * (fVar37 / fVar32);
      }
      else if (fVar32 < 0.19999999) {
        fVar37 = 0.19999999;
        goto LAB_0246afd4;
      }
      fVar37 = fVar25 - fVar33;
      fVar22 = fVar26 - fVar34;
    }
  }
  fVar26 = *(float *)(param_1 + 0x1830);
  *(float *)(param_1 + 0x5c0) = fVar37;
  *(float *)(param_1 + 0x5c8) = fVar22;
  if (0.0 < fVar26) {
    lVar13 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar13 + 0x810) + 0xf0))(lVar13 + 0x810);
    fVar26 = *pfVar7;
    *(float *)(param_1 + 0x1830) = fVar26;
  }
  fVar26 = fVar26 + *(float *)(param_1 + 0x1828);
  fVar37 = *(float *)(param_1 + 0x182c);
  lVar13 = *(long *)(param_1 + 0x68);
  bVar5 = false;
  if ((fVar26 < fVar37) && (bVar5 = false, !NAN(fVar37))) {
    bVar5 = fVar37 < 0.0;
  }
  if (!bVar5) {
    fVar37 = fVar26;
  }
  *(float *)(param_1 + 0x1828) = fVar37;
  if ((((*(byte *)(param_1 + 0x17d5) >> 3 & 1) == 0) && (*(float *)(lVar13 + 0x27c) < fVar38 + 5.0))
     && (fVar37 < 0.0)) {
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar35 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar35 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    puVar4 = PTR_DAT_04bb2020;
    pcVar14 = (char *)(puVar19 + 0xb9e);
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "JumpWaterIn";
    if (*pcVar14 == '\0') {
      lVar13 = 0;
LAB_0246b158:
      *pcVar14 = '\x01';
      __dest = (char *)puVar19[lVar13 * 0x10 + 0xb90];
      *(int *)((long)puVar19 + lVar13 * 0x80 + 0x5cf4) =
           (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
      (**(code **)(puVar4 + 0x28))(&local_b8);
      pcVar14 = local_b0;
      if (__dest != local_b0) {
        (**(code **)(local_b8 + 0x18))(&local_b8);
        lVar15 = 0;
        do {
          if (local_b0[lVar15] == '\0') goto LAB_0246b228;
          if (local_b0[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_0246b228;
          }
          if (local_b0[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_0246b228;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_0246b228:
        iVar35 = (int)lVar15;
        if (*(int *)(puVar19 + lVar13 * 0x10 + 0xb91) <= (int)lVar15) {
          iVar35 = *(int *)(puVar19 + lVar13 * 0x10 + 0xb91) + -1;
        }
        memcpy(__dest,pcVar14,(long)iVar35);
        __dest[iVar35] = '\0';
      }
      *(undefined4 *)(puVar19 + lVar13 * 0x10 + 0xb9d) = 0;
    }
    else {
      pcVar14 = (char *)(puVar19 + 0xbae);
      if (*pcVar14 == '\0') {
        lVar13 = 1;
        goto LAB_0246b158;
      }
      if (*(char *)(puVar19 + 0xbbe) == '\0') {
        pcVar14 = (char *)(puVar19 + 0xbbe);
        lVar13 = 2;
        goto LAB_0246b158;
      }
      if (*(char *)(puVar19 + 0xbce) == '\0') {
        pcVar14 = (char *)(puVar19 + 0xbce);
        lVar13 = 3;
        goto LAB_0246b158;
      }
    }
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x800;
    lVar13 = *(long *)(param_1 + 0x68);
  }
  if (4.39 <= fVar38 - *(float *)(lVar13 + 0x27c)) {
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x5f4) = 3;
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar35 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar35 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "PlayerJumpInInWater_Down";
    FUN_01707d90(puVar19,&local_b8,6,0,0);
  }
  if (*(char *)(param_1 + 0x615) != '\0') {
    uVar23 = (**(code **)(*(long *)(param_1 + 0x600) + (ulong)*(byte *)(param_1 + 0x614) * 8))
                       (param_1 + 0x600);
    *(undefined4 *)(param_1 + 0x608) = uVar23;
  }
  if (*(float *)(*(long *)(param_1 + 0x68) + 0x27c) < fVar38 + 2.5) {
LAB_0246b310:
    *(undefined1 *)(param_1 + 0x2f9) = 1;
  }
LAB_0246b318:
  fVar37 = (float)FUN_016e37dc(*(long *)(param_1 + 0x68) + 0x278);
  uVar27 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x278);
  uVar23 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  lVar13 = *(long *)(param_1 + 0x80);
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x330) = uVar27;
    *(float *)(lVar13 + 0x334) = fVar37;
    *(undefined4 *)(lVar13 + 0x338) = uVar23;
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar27;
  *(float *)(param_1 + 0x2b4) = fVar37;
  *(undefined4 *)(param_1 + 0x2b8) = uVar23;
  if (((((*(byte *)(param_1 + 0x17d5) >> 4 & 1) == 0) &&
       (uVar8 = FUN_016ec07c(0x40600000,*(long *)(param_1 + 0x68) + 0x278,1), (uVar8 & 1) != 0)) &&
      (*(float *)(*(long *)(param_1 + 0x68) + 0x27c) <= fVar37 + 15.0)) &&
     (*(float *)(param_1 + 0x1828) < 0.0)) {
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x1000;
  }
  return;
}

