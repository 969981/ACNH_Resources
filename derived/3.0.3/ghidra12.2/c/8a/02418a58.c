
/* WARNING: Removing unreachable block (ram,0x02419320) */
/* WARNING: Removing unreachable block (ram,0x02419730) */

void FUN_02418a58(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  float *pfVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  float *pfVar13;
  undefined8 uVar14;
  float *pfVar15;
  long lVar16;
  char cVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  long *plVar26;
  undefined8 *puVar27;
  char *pcVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined8 local_cc;
  undefined4 uStack_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  uint local_b8;
  float local_b4;
  undefined1 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  uint local_94;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  plVar26 = *(long **)(param_1 + 0x60);
  if (plVar26 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      plVar26 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar26 = &DAT_05240280;
    }
  }
  uVar12 = (**(code **)(*plVar26 + 0x100))(plVar26);
  if ((uVar12 & 1) == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f0960);
        puVar27 = &DAT_054f0958;
        if (iVar10 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar27 = &DAT_054f0958;
      }
    }
    else {
      puVar27 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar27 = puVar27 + *(byte *)(param_1 + 0x1ee8);
      }
    }
    local_e0 = CONCAT44(local_e0._4_4_,0x2f);
    if ((*(uint *)((long)puVar27 + 4) >> 0xf & 1) == 0) {
      *(undefined4 *)(param_1 + 0x17bc) = 0;
      *(undefined4 *)(param_1 + 0x1820) = 0;
      return;
    }
  }
  puVar27 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar27 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar12 = FUN_016ec07c(0,puVar27 + 0x4f,1);
  pfVar5 = (float *)PTR_DAT_04bc3038;
  puVar6 = PTR_DAT_04bb39b0;
  if ((uVar12 & 1) != 0) {
    if ((*(int *)(param_1 + 0x178) == 0) && (*(int *)(param_1 + 0x1810) == 1)) {
      plVar26 = *(long **)(param_1 + 0x68);
      (**(code **)(*plVar26 + 0x140))(plVar26,plVar26 + 0x4f,1);
      *(undefined8 *)(param_1 + 0x1820) = 0;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
      *(undefined8 *)(param_1 + 0x1844) = 0;
    }
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = 0x601;
    local_e0 = CONCAT44(local_e0._4_4_,0xf6);
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
    lVar19 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar19 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar19,0xf6);
    return;
  }
  pcVar2 = (char *)(param_1 + 0x12f8);
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((lVar19 == 0) || (*(int *)(lVar19 + 0x15c) == 0)) {
LAB_02418d04:
    lVar19 = *(long *)(param_1 + 0x68);
    local_cc = 0;
    local_d8 = *(float *)(lVar19 + 0x280);
    local_e0 = *(ulong *)(lVar19 + 0x278);
    local_d4 = *(undefined4 *)(lVar19 + 0x2b4);
    local_d0 = *(float *)(lVar19 + 0x2dc);
    pfVar13 = (float *)PTR_DAT_04bc3038;
    if (*pcVar2 != '\0') {
      pfVar13 = (float *)(param_1 + 0xeec);
    }
    fVar35 = SQRT(pfVar13[1] * pfVar13[1] + *pfVar13 * *pfVar13);
    lVar19 = FUN_0251e98c(1);
    pfVar13 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar29 = 0.0;
    if (*pfVar13 <= fVar35) {
      lVar19 = FUN_0251e98c(1);
      pfVar13 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar29 = *pfVar13;
      lVar19 = FUN_0251e98c(1);
      pfVar13 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar30 = (fVar35 - *pfVar13) / (1.0 - fVar29);
      fVar35 = 0.9999;
      if (fVar30 <= 0.9999) {
        fVar35 = fVar30;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar30) {
        fVar29 = fVar35;
      }
    }
    local_cc = CONCAT44(local_cc._4_4_,fVar29);
    pfVar13 = pfVar5;
    if (*pcVar2 != '\0') {
      pfVar13 = (float *)(param_1 + 0xeec);
    }
    FUN_02569464(&local_b8,pfVar13);
    local_cc = CONCAT44(local_b8,(undefined4)local_cc);
    local_94 = *(uint *)PTR_DAT_04bb3238;
    iVar10 = FUN_022910b0(*(undefined8 *)PTR_DAT_04bb4848,&local_e0,&local_94);
    uVar11 = local_94;
    if (iVar10 == 2) {
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0xa9);
      lVar20 = *(long *)(param_1 + 0x70);
      local_b8 = 0;
      lVar19 = 0;
      if (lVar20 != 0) {
        local_b8 = 0;
        if (*(uint *)(lVar20 + 0x280) < 0x149) {
          local_b8 = *(uint *)(lVar20 + 0x280);
        }
        lVar19 = lVar20 + 0x278;
      }
      if (local_b8 != 0xa9) {
        local_b8 = 0xa9;
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
        *(undefined8 *)(param_1 + 0x18c0) = 0;
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
        *(undefined8 *)(param_1 + 0x18d0) = 0;
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18a0) = 0;
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
        *(undefined8 *)(param_1 + 0x18a8) = 0;
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
        *(undefined8 *)(param_1 + 0x18b0) = 0;
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
        *(undefined8 *)(param_1 + 0x18b8) = 0;
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        FUN_03ebb160(lVar19,0xa9);
      }
      (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_e0,0);
      (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_d4);
      return;
    }
    if (iVar10 == 1) {
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0xaa);
      lVar20 = *(long *)(param_1 + 0x70);
      uVar18 = 0;
      lVar19 = 0;
      if (lVar20 != 0) {
        uVar18 = 0;
        if (*(uint *)(lVar20 + 0x280) < 0x149) {
          uVar18 = *(uint *)(lVar20 + 0x280);
        }
        lVar19 = lVar20 + 0x278;
      }
      if (uVar18 != 0xaa) {
        local_b8 = 0xaa;
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
        *(undefined8 *)(param_1 + 0x18c0) = 0;
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
        *(undefined8 *)(param_1 + 0x18d0) = 0;
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18a0) = 0;
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
        *(undefined8 *)(param_1 + 0x18a8) = 0;
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
        *(undefined8 *)(param_1 + 0x18b0) = 0;
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
        *(undefined8 *)(param_1 + 0x18b8) = 0;
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        FUN_03ebb160(lVar19,0xaa);
      }
      *(uint *)(param_1 + 0xbb0) = uVar11;
      return;
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar19 + 0x158);
    }
    bVar25 = *pbVar1;
    bVar24 = *pbVar4;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    if (7 < bVar25) {
      bVar25 = 0xff;
    }
    if ((*(int *)(lVar19 + 0x15c) == 0) || (bVar24 == bVar25)) goto LAB_02418d04;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar27 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar27 = &DAT_05240280;
    }
  }
  local_e0 = local_e0 & 0xffffffff00000000;
  if (puVar27[0x227] == 0) {
LAB_024191b8:
    uVar18 = 0;
    uVar11 = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  }
  else {
    lVar19 = *(long *)(puVar27[0x227] + 0x88);
    plVar26 = (long *)(lVar19 + 0x60);
    (**(code **)(*plVar26 + 0x18))(plVar26);
    (**(code **)(*plVar26 + 0x18))(plVar26);
    pcVar28 = *(char **)(lVar19 + 0x68);
    (**(code **)(DAT_054bec88 + 0x18))(&DAT_054bec88);
    if (pcVar28 == DAT_054bec90) {
LAB_024191c8:
      uVar11 = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
LAB_024191d0:
      uVar18 = 6;
    }
    else {
      pcVar28 = *(char **)(lVar19 + 0x68);
      if (*pcVar28 != *DAT_054bec90) goto LAB_024191b8;
      if (*pcVar28 == '\0') goto LAB_024191c8;
      uVar12 = 0;
      do {
        uVar21 = uVar12;
        if ((uVar21 == 0x80000) || (pcVar28[uVar21 + 1] != DAT_054bec90[uVar21 + 1]))
        goto LAB_024191b8;
        if (pcVar28[uVar21 + 1] == '\0') goto LAB_024191a0;
        if (pcVar28[uVar21 + 2] != DAT_054bec90[uVar21 + 2]) goto LAB_024191b8;
        uVar12 = uVar21 + 2;
      } while (pcVar28[uVar21 + 2] != '\0');
      uVar21 = uVar21 + 1;
LAB_024191a0:
      uVar11 = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
      if (uVar21 >> 0x13 == 0) goto LAB_024191d0;
      uVar18 = 0;
    }
  }
  pfVar13 = (float *)(param_1 + 0xeec);
  *(uint *)(param_1 + 0x17cc) = uVar18 | uVar11;
  pfVar15 = pfVar5;
  if (*pcVar2 != '\0') {
    pfVar15 = pfVar13;
  }
  FUN_0257e3f0(param_1 + 3000,param_1,pfVar15);
  lVar19 = *(long *)PTR_DAT_04bb47e0;
  bVar9 = false;
  if (lVar19 != 0) {
    if (*(int *)(lVar19 + 0x160) == 0 || *(char **)(lVar19 + 0x168) == (char *)0x0) {
      bVar9 = false;
    }
    else {
      bVar9 = **(char **)(lVar19 + 0x168) != '\0';
    }
  }
  if ((((!bVar9) && (*(char *)(param_1 + 0xbe5) != '\0')) &&
      (*(int *)(param_1 + 0xbe0) <= *(int *)(param_1 + 0xbd8))) &&
     (uVar12 = FUN_024571ac(param_1,0), (uVar12 & 1) != 0)) {
    return;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar27 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar27 = &DAT_05240280;
    }
  }
  uVar12 = FUN_0073d6e0(puVar27,0);
  bVar9 = false;
  if ((uVar12 & 1) == 0) {
    lVar19 = *(long *)puVar6;
    if ((lVar19 == 0) || (*(int *)(lVar19 + 0x15c) == 0)) {
LAB_024192dc:
      if ((*(char *)(param_1 + 0x2264) == '\0') &&
         (*(int *)(*(long *)PTR_DAT_04bb4718 + 0x11c4) == 0)) goto LAB_024192f8;
    }
    else {
      pbVar4 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar19 + 0x15c) != 0) {
        pbVar4 = (byte *)(lVar19 + 0x158);
      }
      bVar25 = *pbVar1;
      bVar24 = *pbVar4;
      if (7 < bVar24) {
        bVar24 = 0xff;
      }
      if (7 < bVar25) {
        bVar25 = 0xff;
      }
      if (bVar24 == bVar25) goto LAB_024192dc;
LAB_024192f8:
      iVar10 = FUN_016f5c40(param_1);
      if ((iVar10 == 0xb) &&
         (((local_e0 = local_e0 & 0xffffffff00000000, *(int *)(param_1 + 0x13d8) != 0 &&
           (uVar12 = FUN_02559da8(), (uVar12 & 1) == 0)) &&
          (uVar12 = FUN_0231a2dc(param_1,1), (uVar12 & 1) != 0)))) {
        *(undefined8 *)(param_1 + 0x1820) = 0;
        *(undefined8 *)(param_1 + 0x1844) = 0;
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
        if (*(int *)(param_1 + 0x1840) == 0) {
          uVar14 = FUN_016debb0(param_1);
          uVar12 = FUN_017034d0(uVar14,&DAT_054bec88,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = FUN_016e3954(param_1);
            FUN_017081d0(uVar14,&DAT_054bec88,6,1,0);
            *(undefined4 *)(param_1 + 0x1840) = 0xc;
          }
        }
        bVar9 = true;
        *(undefined4 *)(param_1 + 0x1834) = 0;
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 6;
        goto LAB_024193c4;
      }
    }
    bVar9 = false;
  }
LAB_024193c4:
  if (*(int *)(param_1 + 0x1840) != 0) {
    *(int *)(param_1 + 0x1840) = *(int *)(param_1 + 0x1840) + -1;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar27 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar27 = &DAT_05240280;
    }
  }
  uVar11 = FUN_0073d6e0(puVar27,0);
  if (!bVar9 && (uVar11 & 1) == 0) {
    pfVar15 = pfVar5;
    if (*pcVar2 != '\0') {
      pfVar15 = pfVar13;
    }
    fVar35 = SQRT(pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15);
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar29 = 0.0;
    if (*pfVar15 <= fVar35) {
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar29 = *pfVar15;
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar30 = (fVar35 - *pfVar15) / (1.0 - fVar29);
      fVar35 = 0.9999;
      if (fVar30 <= 0.9999) {
        fVar35 = fVar30;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar30) {
        fVar29 = fVar35;
      }
    }
    local_e0 = (ulong)(uint)fVar29;
    pfVar15 = pfVar5;
    if (*pcVar2 != '\0') {
      pfVar15 = pfVar13;
    }
    FUN_02569464((long)&local_e0 + 4,pfVar15);
    local_d8 = *(float *)(*(long *)(param_1 + 0x68) + 0x2b4);
    local_d4 = (undefined4)(long)(*(float *)(param_1 + 0x1834) * 11930465.0);
    local_b8 = 0xd;
    uVar11 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar18 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      uVar11 = 0;
      if (uVar18 < 0x149) {
        uVar11 = uVar18;
      }
    }
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar11);
    local_d0 = (float)CONCAT31(local_d0._1_3_,uVar11 != 0xd);
    FUN_03857740(*(undefined8 *)(param_1 + 0x1ec0),&local_e0);
    pfVar15 = pfVar5;
    if (*pcVar2 != '\0') {
      pfVar15 = pfVar13;
    }
    fVar35 = SQRT(pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15);
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar29 = 0.0;
    if (*pfVar15 <= fVar35) {
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar29 = *pfVar15;
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar30 = (fVar35 - *pfVar15) / (1.0 - fVar29);
      fVar35 = 0.9999;
      if (fVar30 <= 0.9999) {
        fVar35 = fVar30;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar30) {
        fVar29 = fVar35;
      }
    }
    pfVar15 = pfVar5;
    if (*pcVar2 != '\0') {
      pfVar15 = pfVar13;
    }
    fVar30 = SQRT(pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15);
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar35 = 0.0;
    if (*pfVar15 <= fVar30) {
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar35 = *pfVar15;
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
      fVar31 = (fVar30 - *pfVar15) / (1.0 - fVar35);
      fVar30 = 0.9999;
      if (fVar31 <= 0.9999) {
        fVar30 = fVar31;
      }
      fVar35 = 0.0;
      if (0.0 <= fVar31) {
        fVar35 = fVar30;
      }
    }
    pfVar15 = pfVar5;
    if (*pcVar2 != '\0') {
      pfVar15 = pfVar13;
    }
    FUN_02569464(&local_94,pfVar15);
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f0960);
        puVar27 = &DAT_054f0958;
        if (iVar10 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar27 = &DAT_054f0958;
      }
    }
    else {
      puVar27 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar27 = puVar27 + *pbVar1;
      }
    }
    local_e0 = CONCAT44(local_e0._4_4_,0x2f);
    uVar11 = 0;
    if (((*(uint *)((long)puVar27 + 4) >> 0xf & 1) == 0) && (*pcVar2 != '\0')) {
      if ((*(char *)(param_1 + 0x17ac) == '\0') &&
         (local_e0 = CONCAT44(local_e0._4_4_,2), (*(uint *)(param_1 + 0xec8) >> 2 & 1) != 0)) {
        uVar11 = 3;
      }
      else {
        uVar11 = 0;
      }
    }
    fVar30 = fVar29 * fVar29;
    uVar18 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    if (fVar35 <= 0.0) {
      fVar31 = 180.0;
    }
    else {
      uVar22 = uVar18 - local_94;
      if (uVar22 == 0) {
LAB_024197c4:
        fVar31 = 8.381903e-08;
        uVar23 = uVar22;
      }
      else {
        uVar23 = local_94 - uVar18;
        uVar3 = uVar22;
        if (uVar18 <= local_94) {
          uVar3 = uVar23;
        }
        if (uVar3 < 0x80000001) {
          if (uVar18 <= local_94) {
            fVar31 = 8.381903e-08;
            goto LAB_024197fc;
          }
        }
        else {
          uVar22 = -uVar3;
          if (local_94 < uVar18) goto LAB_024197c4;
        }
        fVar31 = -8.381903e-08;
        uVar23 = uVar22;
      }
LAB_024197fc:
      fVar31 = fVar31 * (float)uVar23;
    }
    fVar36 = (float)uVar18 * 8.381903e-08;
    if (fVar30 == 0.0) {
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x960) + 0xf0))(lVar19 + 0x960);
      *(int *)(param_1 + 0x1858) = (int)(long)(*pfVar15 * 11930465.0);
    }
    else {
      fVar37 = *(float *)(param_1 + 0x1820);
      fVar32 = (float)FUN_023294cc(param_1);
      fVar37 = fVar37 / fVar32;
      fVar32 = 1.0;
      if (fVar37 <= 1.0) {
        fVar32 = fVar37;
      }
      fVar34 = 0.0;
      if (0.0 <= fVar37) {
        fVar34 = fVar32;
      }
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x990) + 0xf0))(lVar19 + 0x990);
      fVar38 = *pfVar15;
      lVar19 = FUN_0251e98c(1);
      pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x960) + 0xf0))(lVar19 + 0x960);
      fVar32 = *pfVar15;
      fVar38 = fVar38 + fVar34 * (fVar32 - fVar38);
      fVar37 = *(float *)(param_1 + 0x1838);
      if (fVar32 <= fVar37) {
        if (fVar32 < fVar37) {
          fVar38 = fVar37 - fVar38;
          bVar7 = false;
          bVar8 = false;
          if (fVar38 <= fVar37) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar38) && !NAN(fVar32)) {
              bVar7 = fVar38 == fVar32;
              bVar8 = fVar32 <= fVar38;
            }
          }
          fVar37 = fVar32;
          if (bVar8 && !bVar7) {
            fVar37 = fVar38;
          }
          goto LAB_024198f8;
        }
      }
      else {
        fVar38 = fVar37 + fVar38;
        bVar7 = false;
        bVar8 = false;
        if (fVar37 <= fVar38) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar38) && !NAN(fVar32)) {
            bVar7 = fVar38 < fVar32;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          fVar32 = fVar38;
        }
        fVar37 = fVar32;
LAB_024198f8:
        *(float *)(param_1 + 0x1838) = fVar37;
      }
      *(uint *)(param_1 + 0x1854) = local_94;
      *(int *)(param_1 + 0x1858) = (int)(long)(fVar37 * 11930465.0);
      uVar18 = *(uint *)(param_1 + 0x17cc);
      *(uint *)(param_1 + 0x17cc) = uVar18 | 0x200000;
      puVar27 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar27 = *(undefined8 **)(param_1 + 0x4c8);
      }
      if (local_94 == *(uint *)((long)puVar27 + 0x2b4)) {
        *(uint *)(param_1 + 0x17cc) = uVar18 & 0xffdfffff;
      }
    }
    FUN_0231d604(param_1);
    fVar32 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
    fVar32 = fVar32 * 8.381903e-08;
    if (fVar36 <= 360.0) {
      if (fVar36 < 0.0) {
        fVar37 = fVar36 / 360.0 + -1.0;
        goto LAB_0241999c;
      }
    }
    else {
      fVar37 = fVar36 / 360.0;
LAB_0241999c:
      fVar36 = fVar36 - (float)(int)fVar37 * 360.0;
    }
    if (fVar32 <= 360.0) {
      if (fVar32 < 0.0) {
        fVar37 = fVar32 / 360.0 + -1.0;
        goto LAB_024199d8;
      }
    }
    else {
      fVar37 = fVar32 / 360.0;
LAB_024199d8:
      fVar32 = fVar32 - (float)(int)fVar37 * 360.0;
    }
    fVar37 = 0.0;
    if (fVar36 == fVar32) {
LAB_024199f4:
      fVar38 = -fVar37;
    }
    else {
      fVar37 = fVar36 - fVar32;
      fVar38 = fVar32 - fVar36;
      fVar34 = fVar37;
      if (fVar36 <= fVar32) {
        fVar34 = fVar38;
      }
      if (fVar34 <= 180.0) {
        if (fVar32 < fVar36) goto LAB_024199f4;
      }
      else {
        fVar38 = 360.0 - fVar34;
        fVar37 = fVar38;
        if (fVar36 <= fVar32) goto LAB_024199f4;
      }
    }
    *(float *)(param_1 + 0x1834) = fVar38;
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x8a0) + 0xf0))(lVar19 + 0x8a0);
    fVar32 = *(float *)(param_1 + 0x17bc);
    fVar36 = fVar30;
    if (fVar30 <= fVar32) {
      if (fVar30 < fVar32) {
        fVar37 = fVar32 - *pfVar15;
        bVar7 = false;
        bVar8 = false;
        if (fVar37 <= fVar32) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar37) && !NAN(fVar30)) {
            bVar7 = fVar37 == fVar30;
            bVar8 = fVar30 <= fVar37;
          }
        }
        if (bVar8 && !bVar7) {
          fVar36 = fVar37;
        }
        goto LAB_02419a50;
      }
    }
    else {
      fVar37 = *pfVar15 + fVar32;
      bVar7 = false;
      bVar8 = false;
      if (fVar32 <= fVar37) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar37) && !NAN(fVar30)) {
          bVar7 = fVar37 < fVar30;
          bVar8 = false;
        }
      }
      if (bVar7 != bVar8) {
        fVar36 = fVar37;
      }
LAB_02419a50:
      *(float *)(param_1 + 0x17bc) = fVar36;
    }
    local_b8 = uVar11;
    local_b4 = fVar30;
    local_b0 = 0.0 < fVar35;
    local_ac = fVar31;
    local_a8 = FUN_0256a1c4(param_1 + 0xec0);
    local_a4 = 1;
    uVar33 = FUN_02417014(param_1,&local_b8);
    local_d4 = *(undefined4 *)(param_1 + 0x17bc);
    local_bc = *(undefined4 *)(param_1 + 0x15b4);
    local_cc = CONCAT44(uVar11,uVar33);
    uStack_c4 = 0;
    local_c0 = 1;
    local_e0 = CONCAT44(CONCAT31(local_e0._5_3_,0.0 < fVar35),*(undefined4 *)(param_1 + 0x1820));
    local_d8 = fVar29;
    local_d0 = fVar31;
    fVar29 = (float)FUN_024171c8(param_1,&local_e0);
    *(float *)(param_1 + 0x1820) = fVar29;
    fVar35 = (float)FUN_023294cc(param_1);
    lVar16 = FUN_0251e98c(1);
    lVar19 = 0x6c0;
    lVar20 = lVar16 + 0x6c0;
    if (fVar29 <= fVar35) {
      lVar19 = 0x690;
      lVar20 = lVar16 + 0x690;
    }
    pfVar15 = (float *)(**(code **)(*(long *)(lVar16 + lVar19) + 0xf0))(lVar20);
    fVar30 = *pfVar15;
    fVar31 = *(float *)(param_1 + 0x1820);
    fVar29 = (float)FUN_0231ebc4(param_1);
    fVar35 = *(float *)(param_1 + 0x183c);
    if (fVar31 <= fVar29 * 0.5) {
      fVar38 = 0.0;
    }
    if (fVar38 <= fVar35) {
      if (fVar38 < fVar35) {
        fVar30 = fVar35 - fVar30;
        bVar7 = true;
        if ((fVar38 < fVar30) && (bVar7 = false, !NAN(fVar35) && !NAN(fVar30))) {
          bVar7 = fVar35 < fVar30;
        }
        goto LAB_02419b50;
      }
    }
    else {
      fVar30 = fVar30 + fVar35;
      bVar7 = true;
      if ((fVar30 < fVar38) && (bVar7 = false, !NAN(fVar30) && !NAN(fVar35))) {
        bVar7 = fVar30 < fVar35;
      }
LAB_02419b50:
      if (!bVar7) {
        fVar38 = fVar30;
      }
      *(float *)(param_1 + 0x183c) = fVar38;
    }
    fVar29 = *(float *)(param_1 + 0x1820);
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x750) + 0xf0))(lVar19 + 0x750);
    puVar27 = *(undefined8 **)(param_1 + 0x60);
    bVar7 = true;
    if ((*pfVar15 <= fVar29) && (bVar7 = false, !NAN(fVar29))) {
      bVar7 = fVar29 == 0.0;
    }
    fVar35 = *pfVar15;
    if (!bVar7) {
      fVar35 = fVar29;
    }
    if (puVar27 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar27 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar27 = &DAT_05240280;
      }
    }
    if (((puVar27[0x227] != 0) && (lVar19 = *(long *)(puVar27[0x227] + 0x78), lVar19 != 0)) &&
       (plVar26 = *(long **)(lVar19 + 0x48), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x30))(*(undefined4 *)(param_1 + 0x183c),plVar26,&DAT_054beca8);
    }
    puVar27 = *(undefined8 **)(param_1 + 0x60);
    if (puVar27 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar27 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar27 = &DAT_05240280;
      }
    }
    if (((puVar27[0x227] != 0) && (lVar19 = *(long *)(puVar27[0x227] + 0x78), lVar19 != 0)) &&
       (plVar26 = *(long **)(lVar19 + 0x48), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x30))(fVar35,plVar26,&DAT_054bec98);
    }
    puVar27 = *(undefined8 **)(param_1 + 0x60);
    if (puVar27 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar27 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar27 = &DAT_05240280;
      }
    }
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_e8 = "PlayerAIMove";
    FUN_01707d90(puVar27,&local_f0,6,0,0);
    uVar12 = FUN_02545954(pbVar1);
    if (((uVar12 & 1) != 0) && (*PTR_DAT_04bc2de0 != '\0')) {
      *(undefined4 *)(param_1 + 0x1820) = 0;
    }
  }
  pfVar15 = pfVar5;
  if (*pcVar2 != '\0') {
    pfVar15 = pfVar13;
  }
  fVar29 = SQRT(pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15);
  lVar19 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
  if (fVar29 < *pfVar15) {
LAB_02419d34:
    cVar17 = *pcVar2;
  }
  else {
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar35 = *pfVar15;
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar29 = (fVar29 - *pfVar15) / (1.0 - fVar35);
    if (fVar29 < 0.0) goto LAB_02419d34;
    cVar17 = *pcVar2;
    fVar35 = 0.9999;
    if (fVar29 <= 0.9999) {
      fVar35 = fVar29;
    }
    if (fVar35 != 0.0) goto LAB_02419d74;
  }
  pfVar15 = pfVar5;
  if (cVar17 != '\0') {
    pfVar15 = pfVar13;
  }
  fVar29 = *pfVar15 - *(float *)(param_1 + 0x1590);
  fVar35 = pfVar15[1] - *(float *)(param_1 + 0x1594);
  if (SQRT(fVar35 * fVar35 + fVar29 * fVar29) <= 0.1) {
    uVar12 = FUN_02545954(pbVar1);
    if (((uVar12 & 1) == 0) || (*PTR_DAT_04bc2de0 == '\0')) {
      FUN_0236a88c(param_1,6,1,0);
      return;
    }
    FUN_0237432c(param_1,6);
    return;
  }
LAB_02419d74:
  pfVar15 = pfVar5;
  if (cVar17 != '\0') {
    pfVar15 = pfVar13;
  }
  fVar35 = SQRT(pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15);
  lVar19 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
  fVar30 = 0.0;
  fVar29 = 0.0;
  if (*pfVar15 <= fVar35) {
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar29 = *pfVar15;
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar31 = (fVar35 - *pfVar15) / (1.0 - fVar29);
    fVar35 = 0.9999;
    if (fVar31 <= 0.9999) {
      fVar35 = fVar31;
    }
    fVar29 = 0.0;
    if (0.0 <= fVar31) {
      fVar29 = fVar35;
    }
  }
  pfVar15 = pfVar5;
  if (*pcVar2 != '\0') {
    pfVar15 = pfVar13;
  }
  FUN_02569464(&local_e0,pfVar15);
  uVar11 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  if (uVar11 - (uint)local_e0 != 0) {
    uVar18 = uVar11 - (uint)local_e0;
    if (uVar11 <= (uint)local_e0) {
      uVar18 = (uint)local_e0 - uVar11;
    }
    uVar11 = -uVar18;
    if (uVar18 < 0x80000001) {
      uVar11 = uVar18;
    }
    fVar30 = (float)uVar11 * 8.381903e-08;
  }
  lVar19 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar19 + 0xa80) + 0xf0))(lVar19 + 0xa80);
  lVar19 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar19 + 0xab0) + 0xf0))(lVar19 + 0xab0);
  fVar35 = (float)FUN_023294cc(param_1);
  lVar19 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x7e0) + 0xf0))(lVar19 + 0x7e0);
  fVar36 = *pfVar15;
  fVar31 = (float)FUN_023294cc(param_1);
  if (*(int *)(param_1 + 0x1840) != 0) {
    bVar9 = true;
  }
  if ((((!bVar9) && (0.2 <= fVar29)) && (4 < *(uint *)(param_1 + 0x1c04))) &&
     (fVar35 + (fVar36 - fVar31) * 0.2 < *(float *)(*(long *)(param_1 + 0x68) + 0x2dc))) {
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0xb40) + 0xf0))(lVar19 + 0xb40);
    if (180.0 - *pfVar15 < fVar30) {
      plVar26 = *(long **)(param_1 + 0x68);
      if (*pcVar2 != '\0') {
        pfVar5 = pfVar13;
      }
      FUN_02569464(&local_f0,pfVar5);
      local_b8 = (uint)local_f0 ^ 0x80000000;
      (**(code **)(*plVar26 + 0x160))(plVar26,&local_b8);
      FUN_02372704(param_1,0xd,0,1);
    }
  }
  return;
}

