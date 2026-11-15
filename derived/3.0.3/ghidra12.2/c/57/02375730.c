
/* WARNING: Removing unreachable block (ram,0x02375e78) */
/* WARNING: Removing unreachable block (ram,0x02376cbc) */
/* WARNING: Removing unreachable block (ram,0x02376a24) */

void FUN_02375730(long param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  long *plVar14;
  float *pfVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  char cVar23;
  uint *puVar24;
  uint *puVar25;
  int *piVar26;
  ushort uVar27;
  undefined8 *puVar28;
  long *plVar29;
  char *pcVar30;
  char *pcVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 local_b0;
  char *local_a8;
  uint local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_86;
  int local_84;
  undefined4 local_80;
  undefined8 local_78;
  
  local_84 = param_2;
  local_b0._0_4_ = param_2;
  puVar13 = (uint *)FUN_0251d928(param_2);
  puVar6 = PTR_DAT_04bc2fe8;
  pcVar30 = PTR_DAT_04bc2fe0;
  if (*puVar13 != 0) {
    cVar23 = *PTR_DAT_04bc2fe0;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *pcVar30 = 1;
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        uVar11 = *puVar13;
      }
      else {
        uVar11 = *(uint *)(puVar6 + 0x3c);
        if (-1 < (int)uVar11) {
          if (((char *)((ulong)uVar11 + (long)puVar13) != (char *)0x0) &&
             (*(char *)((ulong)uVar11 + (long)puVar13) == '\0')) {
            uVar11 = *(uint *)(param_1 + 0x17cc);
            goto LAB_023758a4;
          }
          break;
        }
        if (uVar11 != 0xffffffff) break;
        uVar11 = *puVar13;
      }
      if ((uVar11 == 0) || (puVar25 = (uint *)(ulong)uVar11, puVar13 == puVar25)) break;
      lVar19 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar25)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar13 + (lVar19 - (long)puVar25);
      if (lVar19 == 0) break;
      uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar25));
      *(undefined4 *)(puVar6 + 0x3c) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar26 = (int *)(lVar19 + 4);
      while (piVar26[-1] != 0x5dcf7b24) {
        piVar26 = piVar26 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_0237588c;
      }
      iVar10 = 0;
      if (*piVar26 != -1) {
        iVar10 = *piVar26;
      }
      *(int *)(puVar6 + 0x3c) = iVar10;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_0237588c:
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(undefined8 *)(param_1 + 0x1844) = 0;
  uVar11 = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
  *(uint *)(param_1 + 0x17cc) = uVar11;
LAB_023758a4:
  *(undefined4 *)(param_1 + 0x1c04) = 0;
  *(undefined4 *)(param_1 + 0x1d98) = 0xc;
  puVar5 = PTR_DAT_04bb27f8;
  if ((uVar11 >> 0x12 & 1) == 0) {
    local_80 = 0;
    *(uint *)(param_1 + 0x17cc) = uVar11 | 0x40000;
    uVar34 = 0;
    if ((*(byte *)(param_1 + 0x18fa) & 1) == 0) {
      uVar34 = 0x3f800000;
    }
    local_b0._0_4_ = 0;
    FUN_02472404(uVar34,param_1);
    if (((*(long *)puVar5 != 0) && ((*(byte *)(*(long *)puVar5 + 0x1a71) >> 1 & 1) != 0)) &&
       (*(int *)(param_1 + 0x1810) == 4)) {
      FUN_02472404(0,param_1);
    }
  }
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfbffffff;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffc4400 | 0x11;
  *(undefined4 *)(param_1 + 0x1be0) = 0x3f800000;
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  if (((puVar28[0x227] != 0) && (lVar19 = *(long *)(puVar28[0x227] + 0x78), lVar19 != 0)) &&
     (plVar14 = *(long **)(lVar19 + 0x48), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x30))(0,plVar14,PTR_DAT_04bbde48);
  }
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  if (((puVar28[0x227] != 0) && (lVar19 = *(long *)(puVar28[0x227] + 0x78), lVar19 != 0)) &&
     (plVar14 = *(long **)(lVar19 + 0x48), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x30))(0,plVar14,PTR_DAT_04bbde50);
  }
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  if (((puVar28[0x227] != 0) && (lVar19 = *(long *)(puVar28[0x227] + 0x78), lVar19 != 0)) &&
     (plVar14 = *(long **)(lVar19 + 0x48), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x28))(plVar14,PTR_DAT_04bbde40,0);
  }
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar28 + 0x5f04) = 1;
  *(undefined1 *)(param_1 + 0x1c34) = 0;
  *(undefined1 *)(param_1 + 0x1c64) = 0;
  *(undefined1 *)(param_1 + 0x1c1d) = 0;
  *(undefined1 *)(param_1 + 0x1c55) = 0;
  *(undefined4 *)(param_1 + 0x1c10) = *(undefined4 *)(param_1 + 0x1c14);
  *(undefined4 *)(param_1 + 0x1c48) = *(undefined4 *)(param_1 + 0x1c4c);
  lVar19 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x840) + 0xf0))(lVar19 + 0x840);
  fVar32 = *pfVar15;
  if (0.0 <= fVar32) {
    fVar32 = -fVar32;
  }
  *(float *)(param_1 + 0x182c) = fVar32;
  *(float *)(param_1 + 0x1828) = fVar32;
  lVar19 = FUN_0251e98c(1);
  puVar16 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x810) + 0xf0))(lVar19 + 0x810);
  *(undefined4 *)(param_1 + 0x1830) = *puVar16;
  uVar11 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar18 = *(uint *)(*(long *)(param_1 + 0x70) + 0x288);
    uVar11 = 0;
    if (uVar18 < 0x149) {
      uVar11 = uVar18;
    }
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar11);
  puVar25 = (uint *)FUN_0251d928(uVar11);
  if (*puVar25 != 0) {
    cVar23 = *pcVar30;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *pcVar30 = 1;
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        uVar11 = *puVar25;
      }
      else {
        uVar11 = *(uint *)(puVar6 + 0x9c);
        if (-1 < (int)uVar11) {
          if (((char *)((ulong)uVar11 + (long)puVar25) != (char *)0x0) &&
             (*(char *)((ulong)uVar11 + (long)puVar25) != '\0')) {
            local_b0 = (undefined *)CONCAT44(local_b0._4_4_,param_2);
            puVar25 = (uint *)FUN_0251d928(param_2);
            if (*puVar25 == 0) goto LAB_02375d14;
            cVar23 = *pcVar30;
            goto LAB_02375c40;
          }
          break;
        }
        if (uVar11 != 0xffffffff) break;
        uVar11 = *puVar25;
      }
      if ((uVar11 == 0) || (puVar24 = (uint *)(ulong)uVar11, puVar25 == puVar24)) break;
      lVar19 = 0xc;
      if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar25 + (lVar19 - (long)puVar24);
      if (lVar19 == 0) break;
      uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
      *(undefined4 *)(puVar6 + 0x9c) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar26 = (int *)(lVar19 + 4);
      while (piVar26[-1] != -0x3fcc26a6) {
        piVar26 = piVar26 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_02375d4c;
      }
      iVar10 = 0;
      if (*piVar26 != -1) {
        iVar10 = *piVar26;
      }
      *(int *)(puVar6 + 0x9c) = iVar10;
      if (*puVar25 == 0) break;
    } while( true );
  }
LAB_02375d4c:
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  plVar14 = (long *)PTR_DAT_04bb39b0;
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar10 = FUN_00a74b78(pbVar1);
    uVar27 = 0;
    uVar11 = *puVar13;
    if ((uVar11 != 0) && (puVar13 != (uint *)(ulong)uVar11)) {
      puVar25 = (uint *)((long)puVar13 - (long)(ulong)uVar11);
      if ((*puVar25 != 0) &&
         ((uVar11 = puVar25[1], uVar11 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
        lVar19 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
        if (lVar19 != 0) {
          uVar18 = 0;
          if ((ulong)uVar11 != 0) {
            uVar18 = (uint)((ulong)((long)puVar13 - lVar19) / (ulong)uVar11);
          }
          if (*puVar25 <= uVar18) {
            uVar18 = 0xffffffff;
          }
          if ((uVar18 < *(uint *)PTR_DAT_04bc2ff0) &&
             (uVar27 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar18 * 2),
             uVar27 < 9)) goto LAB_02375e04;
        }
      }
      uVar27 = 0;
    }
LAB_02375e04:
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        local_b0._0_4_ = iVar10;
        iVar12 = __cxa_guard_acquire(&DAT_054f0960);
        puVar25 = (uint *)&DAT_054f0958;
        if (iVar12 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar25 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar25 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar25 = puVar25 + (ulong)*pbVar1 * 2;
      }
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
    if ((uVar27 == 8) || ((*puVar25 >> 1 & 1) != 0)) {
      uVar11 = 1;
      FUN_0231ca24(param_1,1);
    }
    else {
      uVar18 = *(uint *)(param_1 + 0x17d4);
      uVar11 = uVar18 >> 9 & 1;
      FUN_0231ca24(param_1,uVar11);
      plVar14 = (long *)PTR_DAT_04bb39b0;
      if (iVar10 == 9) {
        if ((uVar18 >> 9 & 1) == 0) {
          local_a8 = (char *)CONCAT44(local_a8._4_4_,
                                      *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x28c));
          local_b0 = *(undefined **)(*(long *)(param_1 + 0x68) + 0x284);
          uVar17 = FUN_016ec07c(0,&local_b0,1);
          if ((uVar17 & 1) != 0) {
            fVar32 = (float)FUN_016e37dc(&local_b0);
            if ((local_b0._4_4_ < fVar32) && ((*plVar14 == 0 || (*(int *)(*plVar14 + 0x15c) == 0))))
            {
              FUN_0232c350(param_1);
              FUN_0232d230(param_1);
              FUN_0232def0(param_1);
            }
          }
          goto LAB_02375d60;
        }
        goto LAB_02375f34;
      }
    }
    plVar14 = (long *)PTR_DAT_04bb39b0;
  }
  else {
LAB_02375d60:
    uVar11 = 0;
  }
LAB_02375f34:
  iVar10 = FUN_00a74b78(pbVar1);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar10);
  if (iVar10 != 0x13) {
    uVar11 = 1;
  }
  if (*puVar13 != 0) {
    cVar23 = *pcVar30;
    do {
      if (cVar23 != '\0') {
        uVar18 = *(uint *)(puVar6 + 0x30);
        if ((int)uVar18 < 0) {
          if ((uVar18 == 0xffffffff) && (uVar18 = *puVar13, uVar18 != 0)) goto LAB_02375fd0;
        }
        else if (((char *)((ulong)uVar18 + (long)puVar13) != (char *)0x0) &&
                (*(char *)((ulong)uVar18 + (long)puVar13) != '\0')) {
          local_b0 = (undefined *)CONCAT62(local_b0._2_6_,0x101);
          FUN_02330618(param_1,&local_b0);
        }
LAB_02376060:
        if (*puVar13 != 0) {
          cVar23 = *pcVar30;
          goto LAB_02376080;
        }
        break;
      }
      cVar23 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *pcVar30 = 1;
      *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
      uVar18 = *puVar13;
      if (uVar18 == 0) goto LAB_02376060;
LAB_02375fd0:
      puVar25 = (uint *)(ulong)uVar18;
      if (puVar13 == puVar25) goto LAB_02376060;
      lVar19 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar25)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar13 + (lVar19 - (long)puVar25);
      if (lVar19 == 0) goto LAB_02376060;
      uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar25));
      *(undefined4 *)(puVar6 + 0x30) = 0xfffffffe;
      if (uVar17 == 0) goto LAB_02376060;
      piVar26 = (int *)(lVar19 + 4);
      while (piVar26[-1] != -0x5609053e) {
        piVar26 = piVar26 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_02376060;
      }
      iVar10 = 0;
      if (*piVar26 != -1) {
        iVar10 = *piVar26;
      }
      *(int *)(puVar6 + 0x30) = iVar10;
    } while (*puVar13 != 0);
  }
LAB_023761d8:
  if (*(int *)(param_1 + 0x178) == 0) {
    local_b0._0_4_ = local_84;
    puVar25 = (uint *)FUN_0251d928(local_84);
    if (*puVar25 == 0) {
LAB_02376588:
      uVar18 = 0;
    }
    else {
      cVar23 = *pcVar30;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *pcVar30 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar18 = *(uint *)(puVar6 + 0xa4);
          if (-1 < (int)uVar18) {
            if (((byte *)((ulong)uVar18 + (long)puVar25) == (byte *)0x0) ||
               (bVar21 = *(byte *)((ulong)uVar18 + (long)puVar25), uVar18 = (uint)bVar21, 9 < bVar21
               )) goto LAB_02376588;
            goto LAB_0237658c;
          }
          if (uVar18 != 0xffffffff) goto LAB_02376588;
        }
        puVar24 = (uint *)(ulong)*puVar25;
        uVar18 = 0;
        if ((*puVar25 == 0) || (puVar25 == puVar24)) goto LAB_0237658c;
        lVar19 = 0xc;
        if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar25 + (lVar19 - (long)puVar24);
        if (lVar19 == 0) goto LAB_02376588;
        uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
        *(undefined4 *)(puVar6 + 0xa4) = 0xfffffffe;
        uVar18 = 0;
        if (uVar17 == 0) goto LAB_0237658c;
        piVar26 = (int *)(lVar19 + 4);
        while (piVar26[-1] != -0x6f9844f2) {
          piVar26 = piVar26 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) {
            uVar18 = 0;
            goto LAB_0237658c;
          }
        }
        iVar10 = 0;
        if (*piVar26 != -1) {
          iVar10 = *piVar26;
        }
        *(int *)(puVar6 + 0xa4) = iVar10;
      } while (*puVar25 != 0);
      uVar18 = 0;
    }
LAB_0237658c:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar18);
    if (uVar18 == 0) {
      if (*(int *)(param_1 + 0x1810) == 9) {
LAB_023766ac:
        *(undefined4 *)(param_1 + 0x1810) = 1;
      }
      else if (*(int *)(param_1 + 0x1810) == 8) {
        uVar17 = FUN_016ebc50(0,*(long *)(param_1 + 0x68) + 0x278);
        if ((uVar17 & 1) == 0) goto LAB_023766ac;
        *(undefined4 *)(param_1 + 0x1810) = 5;
      }
    }
    else {
      if (*puVar25 == 0) {
LAB_023766d0:
        uVar18 = 0;
      }
      else {
        cVar23 = *pcVar30;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *pcVar30 = 1;
            *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar18 = *(uint *)(puVar6 + 0xa4);
            if (-1 < (int)uVar18) {
              if (((byte *)((ulong)uVar18 + (long)puVar25) == (byte *)0x0) ||
                 (bVar21 = *(byte *)((ulong)uVar18 + (long)puVar25), uVar18 = (uint)bVar21,
                 9 < bVar21)) goto LAB_023766d0;
              goto LAB_023766d4;
            }
            if (uVar18 != 0xffffffff) goto LAB_023766d0;
          }
          puVar24 = (uint *)(ulong)*puVar25;
          uVar18 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar24)) goto LAB_023766d4;
          lVar19 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar25 + (lVar19 - (long)puVar24);
          if (lVar19 == 0) goto LAB_023766d0;
          uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
          *(undefined4 *)(puVar6 + 0xa4) = 0xfffffffe;
          uVar18 = 0;
          if (uVar17 == 0) goto LAB_023766d4;
          piVar26 = (int *)(lVar19 + 4);
          while (piVar26[-1] != -0x6f9844f2) {
            piVar26 = piVar26 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) {
              uVar18 = 0;
              goto LAB_023766d4;
            }
          }
          iVar10 = 0;
          if (*piVar26 != -1) {
            iVar10 = *piVar26;
          }
          *(int *)(puVar6 + 0xa4) = iVar10;
        } while (*puVar25 != 0);
        uVar18 = 0;
      }
LAB_023766d4:
      *(uint *)(param_1 + 0x1810) = uVar18;
    }
  }
  else {
    *(uint *)(param_1 + 0x1810) = *(byte *)(param_1 + 0x18f8) & 0xf;
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,local_84);
    puVar25 = (uint *)FUN_0251d928(local_84);
    if (*puVar25 != 0) {
      cVar23 = *pcVar30;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *pcVar30 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
          uVar18 = *puVar25;
        }
        else {
          uVar18 = *(uint *)(puVar6 + 0xa4);
          if (-1 < (int)uVar18) {
            if (((char *)((ulong)uVar18 + (long)puVar25) != (char *)0x0) &&
               (0xf6 < (byte)(*(char *)((ulong)uVar18 + (long)puVar25) - 10U))) goto LAB_023766d8;
            break;
          }
          if (uVar18 != 0xffffffff) break;
          uVar18 = *puVar25;
        }
        if ((uVar18 == 0) || (puVar24 = (uint *)(ulong)uVar18, puVar25 == puVar24)) break;
        lVar19 = 0xc;
        if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar25 + (lVar19 - (long)puVar24);
        if (lVar19 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
        *(undefined4 *)(puVar6 + 0xa4) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar26 = (int *)(lVar19 + 4);
        while (piVar26[-1] != -0x6f9844f2) {
          piVar26 = piVar26 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_023763f8;
        }
        iVar10 = 0;
        if (*piVar26 != -1) {
          iVar10 = *piVar26;
        }
        *(int *)(puVar6 + 0xa4) = iVar10;
        if (*puVar25 == 0) break;
      } while( true );
    }
LAB_023763f8:
    if (*(int *)(param_1 + 0x1810) != 1) {
      if (*(uint *)(param_1 + 0x1810) != 0) {
        if ((*(uint *)(param_1 + 0x1810) & 0xfffffffe) == 2) {
          puVar28 = *(undefined8 **)(param_1 + 0x60);
          if (puVar28 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(&DAT_052461c0);
              puVar28 = &DAT_05240280;
              if (iVar10 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar28 = &DAT_05240280;
            }
          }
          local_80 = 0;
          local_b0 = PTR_DAT_04bb2020 + 0x10;
          local_a8 = "CommonSitWait";
          if (puVar28[0x227] != 0) {
            lVar19 = *(long *)(puVar28[0x227] + 0x88);
            plVar29 = (long *)(lVar19 + 0x60);
            (**(code **)(*plVar29 + 0x18))(plVar29);
            (**(code **)(*plVar29 + 0x18))(plVar29);
            pcVar31 = *(char **)(lVar19 + 0x68);
            (**(code **)(local_b0 + 0x18))(&local_b0);
            pcVar30 = PTR_DAT_04bc2fe0;
            if (pcVar31 != local_a8) {
              pcVar31 = *(char **)(lVar19 + 0x68);
              if (*pcVar31 != *local_a8) goto LAB_02376558;
              if (*pcVar31 != '\0') {
                uVar17 = 0;
                do {
                  uVar20 = uVar17;
                  if ((uVar20 == 0x80000) || (pcVar31[uVar20 + 1] != local_a8[uVar20 + 1]))
                  goto LAB_02376558;
                  if (pcVar31[uVar20 + 1] == '\0') goto LAB_02376548;
                  if (pcVar31[uVar20 + 2] != local_a8[uVar20 + 2]) goto LAB_02376558;
                  uVar17 = uVar20 + 2;
                } while (pcVar31[uVar20 + 2] != '\0');
                uVar20 = uVar20 + 1;
LAB_02376548:
                if (0x7ffff < uVar20) goto LAB_02376558;
              }
            }
            goto LAB_023766d8;
          }
        }
LAB_02376558:
        FUN_023164ec(param_1,6);
      }
    }
  }
LAB_023766d8:
  local_86 = 1;
  local_88 = 0x100;
  if (*(long *)(param_1 + 0x298) == 0) {
    lVar19 = FUN_02547c90(pbVar1);
    if (*(char *)(lVar19 + 9) == '\0') {
      FUN_0252d8f0(&local_90,pbVar1);
      lVar19 = *plVar14;
      goto joined_r0x02376744;
    }
    puVar16 = (undefined4 *)FUN_02547c90(pbVar1);
    local_90 = *puVar16;
    uStack_8c = puVar16[1];
    lVar19 = *plVar14;
    if (lVar19 != 0) goto LAB_02376748;
LAB_02376790:
    bVar7 = true;
  }
  else {
    FUN_0233fe30(&local_90,*(long *)(param_1 + 0x298),&local_88);
    lVar19 = *plVar14;
joined_r0x02376744:
    if (lVar19 == 0) goto LAB_02376790;
LAB_02376748:
    if (*(int *)(lVar19 + 0x15c) == 0) goto LAB_02376790;
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar19 + 0x158);
    }
    bVar22 = *pbVar1;
    bVar21 = *pbVar2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    bVar7 = bVar21 == bVar22;
  }
  uVar17 = FUN_016e69f4(&local_90,bVar7);
  if (((uVar17 & 1) != 0) && (lVar19 = FUN_02547c90(pbVar1), *(char *)(lVar19 + 8) == '\0')) {
LAB_02376818:
    bVar21 = 1;
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_0237684c;
LAB_02376928:
    if (1 < local_84 - 0x2aU) {
      if ((local_84 == 0xe6) || (bVar21 == 0)) {
        FUN_02472404(0,param_1);
      }
      else {
        local_80 = 0;
        uVar34 = 0x3f800000;
        if ((*(byte *)(param_1 + 0x18f4) & 1) != 0) {
          uVar34 = 0;
        }
        local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
        FUN_02472404(uVar34,param_1);
        local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
      }
    }
    local_80 = 1;
    uVar34 = 0x3f800000;
    if ((*(byte *)(param_1 + 0x18f4) & 2) != 0) {
      uVar34 = 0;
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
    FUN_0244d1b8(uVar34,param_1);
    if (local_84 == 0xe6) {
      FUN_0244d1b8(0,param_1);
    }
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x55b5d9de) || (*(int *)(param_1 + 0x178) != 1))
    goto switchD_02376910_default;
    goto switchD_02376910_caseD_1;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_054f0960);
      puVar28 = &DAT_054f0958;
      if (iVar10 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar28 = &DAT_054f0958;
    }
  }
  else {
    puVar28 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar28 = puVar28 + *pbVar1;
    }
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x31);
  if ((*(uint *)((long)puVar28 + 4) >> 0x11 & 1) != 0) goto LAB_02376818;
  if (*(long *)PTR_DAT_04bb27f8 == 0) {
    if (*(int *)(param_1 + 0x178) != 0) {
      bVar21 = 0;
      goto LAB_02376928;
    }
    goto switchD_02376910_caseD_1;
  }
  bVar21 = *(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1;
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_02376928;
LAB_0237684c:
  puVar5 = PTR_DAT_04bb43c0;
  if ((bVar21 == 0) || (*(int *)(param_1 + 0x1810) == 5)) goto switchD_02376910_caseD_1;
  uVar18 = *puVar13;
  local_94 = 2;
  if ((uVar18 != 0) && (puVar13 != (uint *)(ulong)uVar18)) {
    puVar25 = (uint *)((long)puVar13 - (long)(ulong)uVar18);
    if ((*puVar25 != 0) && ((uVar18 = puVar25[1], uVar18 != 0 && ((ulong)(ushort)puVar25[2] != 0))))
    {
      lVar19 = 0xc;
      if (*(char *)((long)puVar25 + 10) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
      if (lVar19 != 0) {
        uVar4 = 0;
        if ((ulong)uVar18 != 0) {
          uVar4 = (uint)((ulong)((long)puVar13 - lVar19) / (ulong)uVar18);
        }
        if (*puVar25 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((uVar4 < *(uint *)PTR_DAT_04bc3118) &&
           (uVar27 = *(ushort *)(*(long *)(PTR_DAT_04bc3118 + 8) + (long)(int)uVar4 * 2),
           local_94 = (uint)uVar27, uVar27 < 5)) goto LAB_023768e8;
      }
    }
    local_94 = 2;
  }
LAB_023768e8:
  switch(local_94) {
  case 2:
    if (uVar11 == 0) goto LAB_02376dec;
    break;
  case 3:
    local_80 = 0;
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    if ((*(byte *)(param_1 + 0x18fa) & 1) == 0) goto LAB_02376dec;
  case 1:
switchD_02376910_caseD_1:
    uVar34 = 0;
LAB_02376a74:
    FUN_02472404(uVar34,param_1);
    break;
  case 4:
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar5 == 0) {
LAB_02376dec:
      uVar34 = 0x3f800000;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar11) ||
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_02376dec;
      FUN_01ad5d04(&local_b0,&local_90);
      uVar8 = FUN_0243b378(param_1);
      uVar9 = FUN_0235a9ec(param_1);
      local_78 = 0;
      local_80 = CONCAT13(local_80._3_1_,0x10000);
      local_80 = CONCAT22(local_80._2_2_,CONCAT11(uVar9,uVar8)) & 0xffff0101;
      uVar17 = FUN_01adc980(&local_b0,&local_80);
      uVar34 = 0x3f800000;
      if ((uVar17 & 1) == 0) {
        uVar34 = 0;
      }
    }
    goto LAB_02376a74;
  }
switchD_02376910_default:
  uVar11 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar18 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar11 = 0;
    if (uVar18 < 0x149) {
      uVar11 = uVar18;
    }
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar11);
  puVar24 = (uint *)FUN_0251d928(uVar11);
  puVar25 = (uint *)((long)puVar24 - (ulong)*puVar24);
  if ((((*puVar24 == 0) || (puVar25 == (uint *)0x0)) || (*puVar25 == 0)) ||
     ((uVar11 = puVar25[1], uVar11 == 0 || ((ulong)(ushort)puVar25[2] == 0)))) {
LAB_02376b18:
    FUN_0235ad50(param_1,param_1 + 0x18e0,1);
  }
  else {
    lVar19 = 0xc;
    if (*(char *)((long)puVar25 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
    if (lVar19 == 0) goto LAB_02376b18;
    uVar18 = 0;
    if ((ulong)uVar11 != 0) {
      uVar18 = (uint)((ulong)((long)puVar24 - lVar19) / (ulong)uVar11);
    }
    if (*puVar25 <= uVar18) {
      uVar18 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc2ff8 <= uVar18) ||
       (*(short *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar18 * 2) != 1))
    goto LAB_02376b18;
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,local_84);
  puVar25 = (uint *)FUN_0251d928(local_84);
  uVar11 = *puVar25;
  uVar18 = 0;
  if ((uVar11 != 0) && (puVar25 != (uint *)(ulong)uVar11)) {
    puVar24 = (uint *)((long)puVar25 - (long)(ulong)uVar11);
    uVar18 = 0;
    if (*puVar24 != 0) {
      uVar11 = puVar24[1];
      if ((uVar11 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
        lVar19 = 0xc;
        if (*(char *)((long)puVar24 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar24 + lVar19 + (ulong)(ushort)puVar24[2] * 8;
        if (lVar19 != 0) {
          uVar18 = 0;
          if ((ulong)uVar11 != 0) {
            uVar18 = (uint)((ulong)((long)puVar25 - lVar19) / (ulong)uVar11);
          }
          if (*puVar24 <= uVar18) {
            uVar18 = 0xffffffff;
          }
          if ((uVar18 < *(uint *)PTR_DAT_04bc3120) &&
             (uVar18 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc3120 + 8) + (long)(int)uVar18 * 2),
             uVar18 < 8)) goto LAB_02376bc8;
        }
      }
      uVar18 = 0;
    }
  }
LAB_02376bc8:
  *(uint *)(param_1 + 0x1bf8) = uVar18;
  lVar19 = *(long *)(param_1 + 0x298);
  if (lVar19 != 0) {
    if (*puVar13 != 0) {
      cVar23 = *pcVar30;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *pcVar30 = '\x01';
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar6 + 0x8c);
          if (-1 < (int)uVar11) {
            if ((char *)((ulong)uVar11 + (long)puVar13) != (char *)0x0) {
              bVar7 = *(char *)((ulong)uVar11 + (long)puVar13) == '\0';
              goto LAB_02376e10;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar25 = (uint *)(ulong)*puVar13;
        bVar7 = true;
        if ((*puVar13 == 0) || (puVar13 == puVar25)) goto LAB_02376e10;
        lVar3 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar25)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar13 + (lVar3 - (long)puVar25);
        if (lVar3 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar25));
        *(undefined4 *)(puVar6 + 0x8c) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar26 = (int *)(lVar3 + 4);
        while (piVar26[-1] != -0x6a8670d8) {
          piVar26 = piVar26 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_02376e0c;
        }
        iVar10 = 0;
        if (*piVar26 != -1) {
          iVar10 = *piVar26;
        }
        *(int *)(puVar6 + 0x8c) = iVar10;
        if (*puVar13 == 0) break;
      } while( true );
    }
LAB_02376e0c:
    bVar7 = true;
LAB_02376e10:
    *(bool *)(lVar19 + 0xc20a) = bVar7;
  }
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = "PlayerLowerBodyWaitAnimType";
  uVar11 = *(int *)(param_1 + 0x1810) - 2;
  if (uVar11 < 7) {
    local_80 = *(uint *)(&DAT_0417a870 + (long)(int)uVar11 * 4);
  }
  else {
    local_80 = 0;
  }
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  if (((puVar28[0x227] != 0) && (lVar19 = *(long *)(puVar28[0x227] + 0x78), lVar19 != 0)) &&
     (plVar14 = *(long **)(lVar19 + 0x48), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_b0,local_80);
  }
  iVar10 = *(int *)(param_1 + 0x178);
  if (iVar10 != 0) goto LAB_02376fc0;
  uVar11 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar18 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar11 = 0;
    if (uVar18 < 0x149) {
      uVar11 = uVar18;
    }
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar11);
  if (uVar11 - 0x1b < 0x125) {
                    /* WARNING: Could not recover jumptable at 0x02376ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&DAT_0417a732)[uVar11 - 0x1b] * 4 + 0x2376eec))();
    return;
  }
  FUN_0235b7ac(param_1 + 0x18f4,10);
  iVar10 = *(int *)(param_1 + 0x178);
  if (iVar10 != 0) goto LAB_02376fc0;
  pfVar15 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar15 = (float *)(param_1 + 0xeec);
  }
  fVar32 = SQRT(pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15);
  lVar19 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
  if (fVar32 < *pfVar15) {
LAB_02376fb0:
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffbfffff;
  }
  else {
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar33 = *pfVar15;
    lVar19 = FUN_0251e98c(1);
    pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x120) + 0xf0))(lVar19 + 0x120);
    fVar33 = (fVar32 - *pfVar15) / (1.0 - fVar33);
    fVar32 = 0.9999;
    if (fVar33 <= 0.9999) {
      fVar32 = fVar33;
    }
    if ((fVar33 < 0.0) || (fVar32 <= 0.0)) goto LAB_02376fb0;
  }
  iVar10 = *(int *)(param_1 + 0x178);
LAB_02376fc0:
  if (((iVar10 == 1) && (*(long *)(param_1 + 0x70) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x70) + 0x280) == 0xe)) {
    FUN_024b16f0(param_1);
  }
  return;
LAB_02375c40:
  if (cVar23 == '\0') {
    cVar23 = '\x01';
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *pcVar30 = 1;
    *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
LAB_02375c8c:
    puVar24 = (uint *)(ulong)*puVar25;
    if ((*puVar25 == 0) || (puVar25 == puVar24)) goto LAB_02375d14;
    lVar19 = 0xc;
    if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar25 + (lVar19 - (long)puVar24);
    if (lVar19 == 0) goto LAB_02375d14;
    uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
    *(undefined4 *)(puVar6 + 0x9c) = 0xfffffffe;
    if (uVar17 == 0) goto LAB_02375d14;
    piVar26 = (int *)(lVar19 + 4);
    while (piVar26[-1] != -0x3fcc26a6) {
      piVar26 = piVar26 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_02375d14;
    }
    iVar10 = 0;
    if (*piVar26 != -1) {
      iVar10 = *piVar26;
    }
    *(int *)(puVar6 + 0x9c) = iVar10;
    if (*puVar25 == 0) goto LAB_02375d14;
    goto LAB_02375c40;
  }
  uVar11 = *(uint *)(puVar6 + 0x9c);
  if ((int)uVar11 < 0) {
    if (uVar11 != 0xffffffff) goto LAB_02375d14;
    goto LAB_02375c8c;
  }
  if (((char *)((ulong)uVar11 + (long)puVar25) != (char *)0x0) &&
     (*(char *)((ulong)uVar11 + (long)puVar25) != '\0')) goto LAB_02375d4c;
LAB_02375d14:
  lVar19 = *(long *)(param_1 + 0x60);
  if (lVar19 != 0) {
    *(undefined4 *)(lVar19 + 0x12d0) = 0;
    *(undefined1 *)(lVar19 + 0x142d) = 0;
    **(undefined1 **)(lVar19 + 0x12e0) = 0;
    *(undefined4 *)(lVar19 + 0x1330) = 0xffffffff;
    *(undefined4 *)(lVar19 + 0x1428) = 0;
    *(undefined8 *)(lVar19 + 0x1334) = 0;
    *(undefined8 *)(lVar19 + 0x133c) = 0;
    *(undefined4 *)(lVar19 + 0x1344) = 0;
  }
  goto LAB_02375d4c;
LAB_02376080:
  if (cVar23 == '\0') {
    cVar23 = '\x01';
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *pcVar30 = 1;
    *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
    uVar18 = *puVar13;
  }
  else {
    uVar18 = *(uint *)(puVar6 + 0x48);
    if (-1 < (int)uVar18) {
      if (((char *)((ulong)uVar18 + (long)puVar13) != (char *)0x0) &&
         (*(char *)((ulong)uVar18 + (long)puVar13) != '\0')) {
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(&DAT_054f0960);
            puVar25 = (uint *)&DAT_054f0958;
            if (iVar10 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar25 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar25 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar25 = puVar25 + (ulong)*pbVar1 * 2;
          }
        }
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
        *puVar25 = *puVar25 | 0x20;
      }
      goto LAB_023761d8;
    }
    if (uVar18 != 0xffffffff) goto LAB_023761d8;
    uVar18 = *puVar13;
  }
  if ((uVar18 == 0) || (puVar25 = (uint *)(ulong)uVar18, puVar13 == puVar25)) goto LAB_023761d8;
  lVar19 = 0xc;
  if (*(char *)((long)puVar13 + (10 - (long)puVar25)) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar13 + (lVar19 - (long)puVar25);
  if (lVar19 == 0) goto LAB_023761d8;
  uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar25));
  *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
  if (uVar17 == 0) goto LAB_023761d8;
  piVar26 = (int *)(lVar19 + 4);
  while (piVar26[-1] != 0x1aaaddc1) {
    piVar26 = piVar26 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) goto LAB_023761d8;
  }
  iVar10 = 0;
  if (*piVar26 != -1) {
    iVar10 = *piVar26;
  }
  *(int *)(puVar6 + 0x48) = iVar10;
  if (*puVar13 == 0) goto LAB_023761d8;
  goto LAB_02376080;
}

