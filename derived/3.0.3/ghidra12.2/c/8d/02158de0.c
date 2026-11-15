
/* WARNING: Removing unreachable block (ram,0x02159164) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02158de0(undefined *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  ushort uVar10;
  short sVar11;
  char cVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  ulong *puVar21;
  undefined1 *__src;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  char *pcVar25;
  ulong uVar26;
  float *pfVar27;
  float *pfVar28;
  uint uVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  void *__src_00;
  ulong uVar33;
  undefined8 *puVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 local_1ec;
  ulong local_1e8;
  undefined4 local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined8 local_1c4 [7];
  undefined1 local_185;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_16c [31];
  undefined1 local_14d;
  void *local_d8;
  int local_d0;
  undefined1 local_6d;
  
  uVar18 = *(uint *)(param_1 + 0x7f0);
  if (**(char **)(param_1 + 0x6e8) == '\0') {
    if ((uVar18 >> 0xd & 1) == 0) {
      return;
    }
    uVar18 = uVar18 & 0xffffdfff;
    *(uint *)(param_1 + 0x7f0) = uVar18;
  }
  if ((uVar18 >> 9 & 1) != 0) {
    lVar32 = *(long *)(param_1 + 0x740);
    (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(param_1 + 0x738);
    puVar13 = PTR_DAT_04bb2720;
    lVar23 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x740) + lVar23) == '\0') {
LAB_02158e84:
        iVar19 = (int)lVar23;
joined_r0x02158e88:
        if (((((5 < iVar19) && (*(char *)(lVar32 + (ulong)(iVar19 - 6)) == 'O')) &&
             (lVar32 = (ulong)(iVar19 - 6) + lVar32, *(char *)(lVar32 + 1) == 'f')) &&
            ((*(char *)(lVar32 + 2) == 'f' && (*(char *)(lVar32 + 3) == 'i')))) &&
           ((*(char *)(lVar32 + 4) == 'c' && (*(char *)(lVar32 + 5) == 'e')))) {
          lVar23 = *(long *)PTR_DAT_04bb2720;
          iVar19 = 0;
          if (lVar23 != 0) {
            if (*(long *)(lVar23 + 0x330) == 0) {
              iVar19 = 0;
            }
            else {
              puVar31 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
              iVar17 = FUN_006bd550(*puVar31,0);
              iVar19 = 0;
              if (iVar17 == 0x758f7eaf) {
                iVar19 = 0;
                if (*(long *)puVar13 != 0) {
                  lVar23 = *(long *)(*(long *)puVar13 + 0x330);
                  iVar19 = 0;
                  if (lVar23 != 0) {
                    iVar19 = *(int *)(lVar23 + 0x244);
                  }
                }
              }
            }
          }
          if (*(int *)(PTR_DAT_04bbe4b0 + 0xa0) != iVar19) {
            pcVar25 = *(char **)(param_1 + 0x740);
            if (*pcVar25 == 'r') {
              __src = &DAT_04066e12;
              if ((pcVar25[1] == 'c') && (__src = &DAT_04076b75, pcVar25[2] != 'o')) {
                __src = &DAT_04066e12;
              }
            }
            else {
              __src = &DAT_04066e12;
            }
            lVar23 = 0;
            local_14d = 0;
            local_170 = 0x20;
            goto LAB_02159010;
          }
          pcVar25 = *(char **)(param_1 + 0x740);
          if (*pcVar25 == 'm') {
            if ((pcVar25[1] != 'n') || (pcVar25[2] != 'c')) goto LAB_02159074;
            puVar31 = &DAT_053f6340;
          }
          else {
            if (((*pcVar25 != 'o') || (pcVar25[1] != 't')) || (pcVar25[2] != 'g')) {
LAB_02159074:
              uVar33 = FUN_0215c394(&DAT_053f6340);
              if ((uVar33 & 1) != 0) goto LAB_021590d8;
              puVar31 = &DAT_053f6350;
              goto LAB_021590d0;
            }
            puVar31 = &DAT_053f6350;
          }
          uVar33 = FUN_0215c394(puVar31);
          if ((uVar33 & 1) != 0) goto LAB_021590d8;
          puVar31 = &DAT_053f6360;
          goto LAB_021590d0;
        }
        break;
      }
      lVar24 = *(long *)(param_1 + 0x740) + lVar23;
      if (*(char *)(lVar24 + 1) == '\0') {
        lVar23 = lVar23 + 1;
        goto LAB_02158e84;
      }
      if (*(char *)(lVar24 + 2) == '\0') {
        iVar19 = (int)lVar23 + 2;
        goto joined_r0x02158e88;
      }
      lVar23 = lVar23 + 3;
    } while (lVar23 != 0x80001);
    goto LAB_02159254;
  }
  goto LAB_02159260;
  while( true ) {
    if (__src[lVar23 + 1] == '\0') {
      lVar23 = lVar23 + 1;
      goto LAB_0215909c;
    }
    if (__src[lVar23 + 2] == '\0') {
      lVar23 = lVar23 + 2;
      goto LAB_0215909c;
    }
    lVar23 = lVar23 + 3;
    if (lVar23 == 0x80001) break;
LAB_02159010:
    if (__src[lVar23] == '\0') {
LAB_0215909c:
      iVar19 = (int)lVar23;
      if (0x1f < iVar19) {
        iVar19 = 0x1f;
      }
      goto LAB_021590a8;
    }
  }
  iVar19 = 0;
LAB_021590a8:
  local_178 = local_16c;
  memcpy(local_16c,__src,(long)iVar19);
  local_16c[iVar19] = 0;
  puVar31 = &local_180;
  local_180 = PTR_DAT_04bb2028 + 0x10;
LAB_021590d0:
  uVar33 = FUN_0215c394(puVar31);
  if ((uVar33 & 1) != 0) {
LAB_021590d8:
    puVar13 = PTR_LAB_04bc2138;
    pcVar25 = *(char **)(param_1 + 0x740);
    if (*pcVar25 == 's') {
      if ((pcVar25[1] == 'z') && (pcVar25[2] == 'a')) goto LAB_02159124;
    }
    else if ((*pcVar25 == 'r') && ((pcVar25[1] == 'c' && (pcVar25[2] == 'o')))) {
LAB_02159124:
      lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      *(long *)(lVar23 + 0xad78) = lVar23;
      *(undefined **)(lVar23 + 0xad80) = puVar13;
      *(undefined8 *)(lVar23 + 0xad88) = 0;
      local_180 = (undefined *)CONCAT44(local_180._4_4_,5);
      *(long *)(lVar23 + 0xac80) = lVar23 + 0xad70;
      *(undefined4 *)(lVar23 + 0xadfc) = 0;
      *(undefined4 *)(lVar23 + 0xadf0) = 0x20;
    }
    local_180 = (undefined *)((ulong)local_180 & 0xffffffff00000000);
    local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
    FUN_01e5a930(0x40000000,*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0),0,PTR_DAT_04bb2150,
                 &local_180,&local_1d8,PTR_DAT_04bc1600,0);
    FUN_01e57c78(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0),PTR_DAT_04bb37e0,0,1);
    **(undefined1 **)(param_1 + 0x6e8) = 0;
    **(undefined1 **)(param_1 + 0x798) = 0;
    *(undefined4 *)(param_1 + 0x7ec) = 0;
    FUN_0218bba0(*(undefined8 *)PTR_DAT_04bb46e8,param_1 + 0x738,param_1 + 0x6e0,param_1 + 0x790);
    uVar18 = *(uint *)(param_1 + 0x7f0);
    *(uint *)(param_1 + 0x7f0) = uVar18 | 1;
    if ((uVar18 >> 8 & 1) != 0) {
      local_180 = (undefined *)CONCAT44(local_180._4_4_,4);
      *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xad28) =
           *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xad28) & 0xffef;
      FUN_0212eca8(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xaa50,0,0);
    }
  }
LAB_02159254:
  uVar18 = *(uint *)(param_1 + 0x7f0) & 0xfffffdff;
  *(uint *)(param_1 + 0x7f0) = uVar18;
LAB_02159260:
  lVar23 = *(long *)(param_1 + 8);
  plVar30 = *(long **)(lVar23 + 0x3b8);
  if (plVar30 != (long *)0x0) {
    puVar9 = (uint *)(plVar30 + 0xef6);
    local_1d8 = param_1;
    if ((uVar18 >> 0xf & 1) == 0) {
      iVar19 = *(int *)(param_1 + 0x7ec);
      if (iVar19 == 3) {
        if ((uVar18 >> 8 & 1) != 0) {
          local_180 = (undefined *)CONCAT44(local_180._4_4_,4);
          uVar10 = *(ushort *)(plVar30 + 0x15a5);
          if (((uVar10 >> 4 & 1) != 0) || ((*(ushort *)((long)plVar30 + 0xad2a) >> 4 & 1) != 0)) {
            local_180 = (undefined *)CONCAT44(local_180._4_4_,4);
            *(ushort *)(plVar30 + 0x15a5) = uVar10 & 0xffef;
            FUN_0212eca8(plVar30 + 0x154a,0,0);
            *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) & 0xfffffeff;
          }
        }
        if ((*(byte *)((long)plVar30 + 0xad5a) >> 1 & 1) != 0) goto LAB_0215979c;
        uVar22 = 4;
        goto LAB_021594ec;
      }
      if (iVar19 == 2) {
        iVar19 = *(int *)(param_1 + 0x7f4);
        *(int *)(param_1 + 0x7f4) = iVar19 + 1;
        lVar32 = *(long *)(lVar23 + 0x3b0);
        iVar17 = *(int *)(*(long *)(lVar32 + 0x370) + 8);
        if (iVar17 == 0) {
          bVar15 = 0x95 < iVar19;
          iVar19 = *(int *)(lVar32 + 0x4b8);
joined_r0x02159500:
          local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar17);
joined_r0x02159500:
          if (iVar19 != 0) goto LAB_02159480;
LAB_02159504:
          bVar16 = true;
          uVar33 = plVar30[0x15ab];
          if (((uint)uVar33 >> 0x11 & 1) == 0) goto LAB_02159494;
LAB_02159510:
          uVar18 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
          piVar1 = (int *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
          piVar8 = piVar1 + uVar18;
          if (0x11 < uVar18) {
            piVar8 = piVar1;
          }
          piVar1 = (int *)PTR_DAT_04bb3238;
          if (uVar18 != 0xffffffff) {
            piVar1 = piVar8;
          }
          if (((uVar33 >> 0x23 & 1) != 0) || (*piVar1 == *(int *)(lVar23 + 0x230))) {
LAB_021595d0:
            *(undefined4 *)(param_1 + 0x7ec) = 3;
            lVar23 = *(long *)(lVar23 + 0x3b8);
            if ((*(byte *)(lVar23 + 0xad5b) >> 4 & 1) != 0) {
              lVar32 = *(long *)(lVar23 + 0x18);
              uVar35 = *(byte *)(lVar32 + 0x290) & 0xffffffef;
              *(char *)(lVar32 + 0x290) = (char)uVar35;
              uVar18 = 3;
              if (((uVar35 >> 3 & 1) == 0) && (uVar18 = 2, (uVar35 >> 2 & 1) == 0)) {
                uVar18 = uVar35 >> 1 & 1;
              }
              local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar18);
              *(uint *)(lVar32 + 0x294) = uVar18;
              *(ulong *)(lVar23 + 0xad58) = *(ulong *)(lVar23 + 0xad58) & 0xffffffffefffffff;
            }
            goto LAB_0215979c;
          }
        }
        else {
          if ((*(int *)(lVar32 + 0x360) != 0xc) || (iVar17 == 0)) {
            bVar15 = true;
            iVar19 = *(int *)(lVar32 + 0x4b8);
            goto joined_r0x02159500;
          }
          local_180 = (undefined *)CONCAT44(local_180._4_4_,0xc);
          if (*(int *)(lVar32 + 0x360) == 0xc) {
            bVar15 = *(char *)(*(long *)(lVar32 + 0x370) + 0x15) != '\0';
            iVar19 = *(int *)(lVar32 + 0x4b8);
            goto joined_r0x02159500;
          }
          bVar15 = false;
          if (*(int *)(lVar32 + 0x4b8) == 0) goto LAB_02159504;
LAB_02159480:
          bVar16 = *(int *)(lVar32 + 0x378) != 0x23;
          uVar33 = plVar30[0x15ab];
          if (((uint)uVar33 >> 0x11 & 1) != 0) goto LAB_02159510;
LAB_02159494:
          if ((uVar33 >> 0x23 & 1) != 0) goto LAB_021595d0;
        }
        iVar19 = *(int *)((long)plVar30 + 0x77f4);
        if (iVar19 != 0x2e) {
          uVar18 = *puVar9;
          if (((((0x2e < uVar18) || ((1L << ((ulong)uVar18 & 0x3f) & 0x4000080000f8U) == 0)) &&
               (iVar19 != 0x1f)) && (uVar18 != 0x1f)) &&
             ((!(bool)(bVar16 | bVar15 ^ 1U) || ((iVar19 != 1 && (uVar18 != 1)))))) {
            uVar33 = FUN_0215c598(&local_1d8);
            if ((uVar33 & 1) != 0) goto LAB_02159324;
            FUN_0215be40(param_1);
          }
        }
      }
      else if (iVar19 == 1) {
        if ((uVar18 >> 7 & 1) == 0) {
          if ((*(byte *)((long)plVar30 + 0xad5a) >> 1 & 1) != 0) {
            uVar18 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
            piVar1 = (int *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
            piVar8 = piVar1 + uVar18;
            if (0x11 < uVar18) {
              piVar8 = piVar1;
            }
            piVar1 = (int *)PTR_DAT_04bb3238;
            if (uVar18 != 0xffffffff) {
              piVar1 = piVar8;
            }
            if (*piVar1 == *(int *)(lVar23 + 0x230)) {
              *(undefined4 *)(param_1 + 0x7ec) = 3;
              FUN_01ea5bd8(*(undefined8 *)(lVar23 + 0x3b8));
              goto LAB_0215979c;
            }
          }
          if ((((*(int *)((long)plVar30 + 0x77f4) == 1) || (*puVar9 == 1)) &&
              (local_180 = (undefined *)CONCAT44(local_180._4_4_,0xc),
              *(int *)(*(long *)(lVar23 + 0x3b0) + 0x360) == 0xc)) ||
             ((*(int *)((long)plVar30 + 0x77f4) == 0x2e || (*puVar9 == 0x2e)))) {
            *(undefined4 *)(param_1 + 0x7f4) = 0;
            uVar22 = 2;
            goto LAB_021594ec;
          }
        }
        else {
          if (((*PTR_DAT_04bb4120 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04bb4120), iVar19 != 0)) {
            *(undefined **)PTR_DAT_04bb4118 = PTR_DAT_04bb4100 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb4120);
          }
          uVar33 = (**(code **)*plVar30)(plVar30,PTR_DAT_04bb4118);
          if ((uVar33 & 1) == 0) {
LAB_021596b4:
            FUN_01e7b7bc(&local_180);
            (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
            __src_00 = *(void **)(param_1 + 0x6e8);
            if (local_d8 != __src_00) {
              (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
              lVar23 = 0;
              do {
                if (*(char *)(*(long *)(param_1 + 0x6e8) + lVar23) == '\0') goto LAB_0215973c;
                lVar32 = *(long *)(param_1 + 0x6e8) + lVar23;
                if (*(char *)(lVar32 + 1) == '\0') {
                  lVar23 = lVar23 + 1;
                  goto LAB_0215973c;
                }
                if (*(char *)(lVar32 + 2) == '\0') {
                  lVar23 = lVar23 + 2;
                  goto LAB_0215973c;
                }
                lVar23 = lVar23 + 3;
              } while (lVar23 != 0x80001);
              lVar23 = 0;
LAB_0215973c:
              iVar19 = (int)lVar23;
              if (local_d0 <= (int)lVar23) {
                iVar19 = local_d0 + -1;
              }
              memcpy(local_d8,__src_00,(long)iVar19);
              *(undefined1 *)((long)local_d8 + (long)iVar19) = 0;
            }
            if (*puVar9 != 0x23) {
              (**(code **)(*plVar30 + 0x38))(plVar30,0x23,&local_180,1);
            }
            uVar18 = *(uint *)(param_1 + 0x7f0);
LAB_02159790:
            uVar18 = uVar18 & 0xfffffb7f;
          }
          else {
            iVar19 = *(int *)((long)plVar30 + 0x77f4);
            if ((((iVar19 != 0x1f) && (iVar19 != 0x53)) && (*puVar9 != 0x53)) && (*puVar9 != 0x1f))
            {
              uVar18 = *(uint *)(param_1 + 0x7f0);
              if ((uVar18 >> 10 & 1) != 0) {
LAB_021596a8:
                if ((*(byte *)((long)plVar30 + 0xad5a) & 6) != 0) goto LAB_02159790;
              }
              goto LAB_021596b4;
            }
            uVar18 = *(uint *)(param_1 + 0x7f0);
            if ((uVar18 >> 10 & 1) != 0) {
              if ((iVar19 != 0x1f) && (*puVar9 != 0x1f)) goto LAB_021596a8;
              goto LAB_02159790;
            }
            uVar18 = uVar18 & 0xffffff7f;
          }
          *(uint *)(param_1 + 0x7f0) = uVar18;
        }
      }
    }
    else {
      if (*puVar9 - 3 < 5 || *puVar9 == 0x1b) goto LAB_0215979c;
      *(uint *)(param_1 + 0x7f0) = uVar18 & 0xffff7fff;
      FUN_0215b800(param_1);
LAB_02159324:
      uVar22 = 1;
LAB_021594ec:
      *(undefined4 *)(param_1 + 0x7ec) = uVar22;
    }
LAB_0215979c:
    uVar18 = *(uint *)(param_1 + 0x7f0);
  }
  if ((uVar18 & 1) != 0) {
    return;
  }
  puVar31 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar31 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar19 = __cxa_guard_acquire(&DAT_052461c0);
      puVar31 = &DAT_05240280;
      if (iVar19 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar31 = &DAT_05240280;
    }
  }
  puVar14 = PTR_DAT_04bb2f70;
  puVar13 = PTR_DAT_04bb2bc0;
  if ((puVar31[0x227] != 0) && (lVar23 = *(long *)(puVar31[0x227] + 0x78), lVar23 != 0)) {
    if (*(int *)(lVar23 + 0x18) < 1) {
      local_6d = 0;
      local_170 = 0x100;
      local_178 = local_16c;
      local_16c[0] = 0;
      local_180 = PTR_DAT_04bb21f8 + 0x10;
      lVar23 = *(long *)(*(long *)(*(long *)(lVar23 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_180,"%s.as",lVar23 + *(int *)(lVar23 + 0x24) + (long)*(int *)(lVar23 + 8))
      ;
    }
    else {
      lVar23 = *(long *)(**(long **)(lVar23 + 0x20) + 0x98);
      if ((((lVar23 != 0) && ((*(byte *)(lVar23 + 0x46) >> 6 & 1) != 0)) &&
          (uVar18 = *(uint *)(lVar23 + 0xa0), 0 < (int)uVar18)) &&
         (lVar32 = *(long *)(lVar23 + 0x28), lVar32 != 0)) {
        uVar35 = 0;
        puVar2 = PTR_DAT_04bb2bc0 + 0x10;
        puVar3 = PTR_DAT_04bb21f8 + 0x10;
        do {
          uVar29 = uVar35;
          if (*(uint *)(lVar23 + 0x20) <= uVar35) {
            uVar29 = 0;
          }
          uVar33 = (ulong)uVar29;
          if (lVar32 != 0) {
            plVar30 = (long *)(lVar32 + uVar33 * 0x28);
            if (*(int *)(*plVar30 + 4) == 0x36) {
              iVar19 = *(int *)(*plVar30 + 8);
              local_1d0 = local_1c4;
              if (iVar19 < 0x60000000) {
                lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                if (0 < *(int *)(lVar24 + iVar19)) {
                  puVar31 = (undefined8 *)
                            (lVar24 + *(int *)(lVar24 + 0x24) +
                            (long)*(int *)(((ulong)(uint)((int *)(lVar24 + iVar19))[1] & 0xfffffff)
                                           + lVar24 + 4));
                  goto LAB_02159910;
                }
                puVar31 = &DAT_0407ebb1;
                local_1d8 = PTR_DAT_04bb2f70;
LAB_02159958:
                local_1d8 = local_1d8 + 0x10;
                local_185 = 0;
                local_1c8 = 0x40;
                lVar24 = 0;
                do {
                  if (*(char *)((long)puVar31 + lVar24) == '\0') {
LAB_0215999c:
                    iVar19 = (int)lVar24;
                    if (0x3f < iVar19) {
                      iVar19 = 0x3f;
                    }
                    goto LAB_021599b4;
                  }
                  if (*(char *)((long)puVar31 + lVar24 + 1) == '\0') {
                    lVar24 = lVar24 + 1;
                    goto LAB_0215999c;
                  }
                  if (*(char *)((long)puVar31 + lVar24 + 2) == '\0') {
                    lVar24 = lVar24 + 2;
                    goto LAB_0215999c;
                  }
                  lVar24 = lVar24 + 3;
                } while (lVar24 != 0x80001);
                iVar19 = 0;
LAB_021599b4:
                memcpy(local_1c4,puVar31,(long)iVar19);
                *(undefined1 *)((long)local_1c4 + (long)iVar19) = 0;
              }
              else {
                uVar29 = iVar19 + 0xa0000000;
                if (*(uint *)(lVar23 + 0x80) <= uVar29) {
                  uVar29 = 0;
                }
                lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar29 * 0x32;
                puVar31 = *(undefined8 **)(lVar24 + (ulong)*(byte *)(lVar24 + 0x20));
LAB_02159910:
                local_185 = 0;
                local_1c8 = 0x40;
                local_1d8 = puVar14;
                if (local_1c4 != puVar31) goto LAB_02159958;
              }
              *(undefined1 *)((long)local_1d0 + (long)local_1c8 + -1) = 0;
              local_1d8 = puVar2;
              (**(code **)(puVar13 + 0x28))(&local_1d8);
              puVar31 = local_1d0;
              (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(param_1 + 0x738);
              puVar34 = *(undefined8 **)(param_1 + 0x740);
              if (puVar31 == puVar34) {
LAB_02159a88:
                (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(param_1 + 0x738);
                lVar24 = 0;
                do {
                  if (*(char *)(*(long *)(param_1 + 0x740) + lVar24) == '\0') {
LAB_02159ad8:
                    if (((5 < (int)lVar24) &&
                        (uVar26 = (ulong)((int)lVar24 - 6), *(char *)((long)puVar34 + uVar26) == 'O'
                        )) && (*(char *)((long)puVar34 + uVar26 + 1) == 'f')) {
                      if (((*(char *)((long)puVar34 + uVar26 + 2) == 'f') &&
                          (*(char *)((long)puVar34 + uVar26 + 3) == 'i')) &&
                         (*(char *)((long)puVar34 + uVar26 + 4) == 'c')) {
                        bVar15 = *(char *)((long)puVar34 + uVar26 + 5) == 'e';
                      }
                      else {
                        bVar15 = false;
                      }
                      goto LAB_02159b44;
                    }
                    break;
                  }
                  lVar6 = *(long *)(param_1 + 0x740) + lVar24;
                  if (*(char *)(lVar6 + 1) == '\0') {
                    lVar24 = lVar24 + 1;
                    goto LAB_02159ad8;
                  }
                  if (*(char *)(lVar6 + 2) == '\0') {
                    lVar24 = lVar24 + 2;
                    goto LAB_02159ad8;
                  }
                  lVar24 = lVar24 + 3;
                } while (lVar24 != 0x80001);
                bVar15 = false;
LAB_02159b44:
                if (*plVar30 == 0) {
                  local_6d = 0;
                  local_170 = 0x100;
                  local_16c[0] = 0;
                  plVar20 = (long *)(lVar32 + uVar33 * 0x28 + 0x10);
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar3;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  if (*plVar30 != 0) {
                    iVar19 = *(int *)(*plVar30 + 8);
                    fVar36 = 0.0;
                    fVar37 = 0.0;
                    fVar38 = 0.0;
                    goto LAB_02159c84;
                  }
                  local_6d = 0;
                  local_170 = 0x100;
                  local_16c[0] = 0;
                  local_180 = PTR_DAT_04bb21f8 + 0x10;
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  iVar19 = 0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                  fVar38 = 0.0;
                }
                else {
                  iVar19 = *(int *)(*plVar30 + 8);
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if (DAT_053f6318 < *piVar1) {
                      pfVar27 = (float *)(((ulong)(uint)piVar1[(long)DAT_053f6318 + 1] & 0xfffffff)
                                          + lVar24 + 4);
                    }
                    else {
                      pfVar27 = (float *)0x0;
                    }
                    pfVar28 = (float *)PTR_DAT_04bb2150;
                    if (pfVar27 != (float *)0x0) {
                      pfVar28 = pfVar27;
                    }
                  }
                  else {
                    uVar29 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar29) {
                      uVar29 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar29 * 0x32;
                    pfVar28 = (float *)(lVar24 + (ulong)*(byte *)(lVar24 + DAT_053f6318 + 0x20));
                  }
                  fVar38 = *pfVar28;
                  fVar37 = pfVar28[1];
                  fVar36 = pfVar28[2];
LAB_02159c84:
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if ((int)DAT_053f632c < *piVar1) {
                      iVar19 = *(int *)(((ulong)(uint)piVar1[(long)(int)DAT_053f632c + 1] &
                                        0xfffffff) + lVar24 + 4);
                    }
                    else {
                      iVar19 = 0;
                    }
                  }
                  else {
                    uVar29 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar29) {
                      uVar29 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar29 * 0x32;
                    iVar19 = *(int *)(lVar24 + (ulong)*(byte *)(lVar24 + (int)DAT_053f632c + 0x20));
                  }
                }
                if (bVar15) {
                  if (((fVar38 == 0.0) && (fVar37 == 0.0)) && (fVar36 == 0.0)) goto LAB_02159d7c;
LAB_02159d88:
                  uVar29 = 1;
                }
                else {
                  if (iVar19 != 0) goto LAB_02159d88;
LAB_02159d7c:
                  uVar29 = 0;
                }
                if (*plVar30 == 0) {
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  puVar4 = PTR_DAT_04bb21f8 + 0x10;
                  plVar20 = (long *)(lVar32 + uVar33 * 0x28 + 0x10);
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  if (*plVar30 != 0) {
                    iVar19 = *(int *)(*plVar30 + 8);
                    fVar36 = 0.0;
                    fVar37 = 0.0;
                    fVar38 = 0.0;
                    goto LAB_02159edc;
                  }
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  iVar19 = 0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                  fVar38 = 0.0;
                }
                else {
                  iVar19 = *(int *)(*plVar30 + 8);
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if ((int)DAT_053f631c < *piVar1) {
                      pfVar27 = (float *)(((ulong)(uint)piVar1[(long)(int)DAT_053f631c + 1] &
                                          0xfffffff) + lVar24 + 4);
                    }
                    else {
                      pfVar27 = (float *)0x0;
                    }
                    pfVar28 = (float *)PTR_DAT_04bb2150;
                    if (pfVar27 != (float *)0x0) {
                      pfVar28 = pfVar27;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    pfVar28 = (float *)(lVar24 + (ulong)*(byte *)(lVar24 + (int)DAT_053f631c + 0x20)
                                       );
                  }
                  fVar38 = *pfVar28;
                  fVar37 = pfVar28[1];
                  fVar36 = pfVar28[2];
LAB_02159edc:
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if (DAT_053f632c._4_4_ < *piVar1) {
                      iVar19 = *(int *)(((ulong)(uint)piVar1[(long)DAT_053f632c._4_4_ + 1] &
                                        0xfffffff) + lVar24 + 4);
                    }
                    else {
                      iVar19 = 0;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    iVar19 = *(int *)(lVar24 + (ulong)*(byte *)(lVar24 + DAT_053f632c._4_4_ + 0x20))
                    ;
                  }
                }
                if (bVar15) {
                  if (((fVar38 != 0.0) || (fVar37 != 0.0)) || (fVar36 != 0.0)) goto LAB_02159fdc;
                }
                else if (iVar19 != 0) {
LAB_02159fdc:
                  uVar29 = uVar29 | 2;
                }
                if (*plVar30 == 0) {
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  puVar4 = PTR_DAT_04bb21f8 + 0x10;
                  plVar20 = (long *)(lVar32 + uVar33 * 0x28 + 0x10);
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  if (*plVar30 != 0) {
                    iVar19 = *(int *)(*plVar30 + 8);
                    fVar36 = 0.0;
                    fVar37 = 0.0;
                    fVar38 = 0.0;
                    goto LAB_0215a130;
                  }
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  iVar19 = 0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                  fVar38 = 0.0;
                }
                else {
                  iVar19 = *(int *)(*plVar30 + 8);
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if (DAT_053f631c._4_4_ < *piVar1) {
                      pfVar27 = (float *)(((ulong)(uint)piVar1[(long)DAT_053f631c._4_4_ + 1] &
                                          0xfffffff) + lVar24 + 4);
                    }
                    else {
                      pfVar27 = (float *)0x0;
                    }
                    pfVar28 = (float *)PTR_DAT_04bb2150;
                    if (pfVar27 != (float *)0x0) {
                      pfVar28 = pfVar27;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    pfVar28 = (float *)(lVar24 + (ulong)*(byte *)(lVar24 + DAT_053f631c._4_4_ + 0x20
                                                                 ));
                  }
                  fVar38 = *pfVar28;
                  fVar37 = pfVar28[1];
                  fVar36 = pfVar28[2];
LAB_0215a130:
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if ((int)DAT_053f6334 < *piVar1) {
                      iVar19 = *(int *)(((ulong)(uint)piVar1[(long)(int)DAT_053f6334 + 1] &
                                        0xfffffff) + lVar24 + 4);
                    }
                    else {
                      iVar19 = 0;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    iVar19 = *(int *)(lVar24 + (ulong)*(byte *)(lVar24 + (int)DAT_053f6334 + 0x20));
                  }
                }
                if (bVar15) {
                  if (((fVar38 != 0.0) || (fVar37 != 0.0)) || (fVar36 != 0.0)) goto LAB_0215a230;
                }
                else if (iVar19 != 0) {
LAB_0215a230:
                  uVar29 = uVar29 | 4;
                }
                if (*plVar30 == 0) {
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  puVar4 = PTR_DAT_04bb21f8 + 0x10;
                  plVar20 = (long *)(lVar32 + uVar33 * 0x28 + 0x10);
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  if (*plVar30 != 0) {
                    iVar19 = *(int *)(*plVar30 + 8);
                    fVar36 = 0.0;
                    fVar37 = 0.0;
                    fVar38 = 0.0;
                    goto LAB_0215a384;
                  }
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  iVar19 = 0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                  fVar38 = 0.0;
                }
                else {
                  iVar19 = *(int *)(*plVar30 + 8);
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if ((int)DAT_053f6324 < *piVar1) {
                      pfVar27 = (float *)(((ulong)(uint)piVar1[(long)(int)DAT_053f6324 + 1] &
                                          0xfffffff) + lVar24 + 4);
                    }
                    else {
                      pfVar27 = (float *)0x0;
                    }
                    pfVar28 = (float *)PTR_DAT_04bb2150;
                    if (pfVar27 != (float *)0x0) {
                      pfVar28 = pfVar27;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    pfVar28 = (float *)(lVar24 + (ulong)*(byte *)(lVar24 + (int)DAT_053f6324 + 0x20)
                                       );
                  }
                  fVar38 = *pfVar28;
                  fVar37 = pfVar28[1];
                  fVar36 = pfVar28[2];
LAB_0215a384:
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if (DAT_053f6334._4_4_ < *piVar1) {
                      iVar19 = *(int *)(((ulong)(uint)piVar1[(long)DAT_053f6334._4_4_ + 1] &
                                        0xfffffff) + lVar24 + 4);
                    }
                    else {
                      iVar19 = 0;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    iVar19 = *(int *)(lVar24 + (ulong)*(byte *)(lVar24 + DAT_053f6334._4_4_ + 0x20))
                    ;
                  }
                }
                if (bVar15) {
                  if (((fVar38 != 0.0) || (fVar37 != 0.0)) || (fVar36 != 0.0)) goto LAB_0215a484;
                }
                else if (iVar19 != 0) {
LAB_0215a484:
                  uVar29 = uVar29 | 8;
                }
                if (*plVar30 == 0) {
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  puVar4 = PTR_DAT_04bb21f8 + 0x10;
                  plVar20 = (long *)(lVar32 + uVar33 * 0x28 + 0x10);
                  lVar24 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar24 + *(int *)(lVar24 + 0x24) + (long)*(int *)(lVar24 + 8));
                  if (*plVar30 != 0) {
                    iVar19 = *(int *)(*plVar30 + 8);
                    fVar36 = 0.0;
                    fVar37 = 0.0;
                    fVar38 = 0.0;
                    goto LAB_0215a5d8;
                  }
                  local_170 = 0x100;
                  local_6d = 0;
                  local_16c[0] = 0;
                  lVar32 = *(long *)(*plVar20 + 8);
                  local_180 = puVar4;
                  local_178 = local_16c;
                  FUN_038d1270(&local_180,"%s.as",
                               lVar32 + *(int *)(lVar32 + 0x24) + (long)*(int *)(lVar32 + 8));
                  iVar19 = 0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                  fVar38 = 0.0;
                }
                else {
                  iVar19 = *(int *)(*plVar30 + 8);
                  if (iVar19 < 0x60000000) {
                    lVar24 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar24 + iVar19);
                    if (DAT_053f6324._4_4_ < *piVar1) {
                      pfVar27 = (float *)(((ulong)(uint)piVar1[(long)DAT_053f6324._4_4_ + 1] &
                                          0xfffffff) + lVar24 + 4);
                    }
                    else {
                      pfVar27 = (float *)0x0;
                    }
                    pfVar28 = (float *)PTR_DAT_04bb2150;
                    if (pfVar27 != (float *)0x0) {
                      pfVar28 = pfVar27;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar24 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    pfVar28 = (float *)(lVar24 + (ulong)*(byte *)(lVar24 + DAT_053f6324._4_4_ + 0x20
                                                                 ));
                  }
                  fVar38 = *pfVar28;
                  fVar37 = pfVar28[1];
                  fVar36 = pfVar28[2];
LAB_0215a5d8:
                  if (iVar19 < 0x60000000) {
                    lVar32 = *(long *)(*(long *)(lVar32 + uVar33 * 0x28 + 0x10) + 8);
                    piVar1 = (int *)(lVar32 + iVar19);
                    if (DAT_053f633c < *piVar1) {
                      iVar19 = *(int *)(((ulong)(uint)piVar1[(long)DAT_053f633c + 1] & 0xfffffff) +
                                        lVar32 + 4);
                    }
                    else {
                      iVar19 = 0;
                    }
                  }
                  else {
                    uVar5 = iVar19 + 0xa0000000;
                    if (*(uint *)(lVar23 + 0x80) <= uVar5) {
                      uVar5 = 0;
                    }
                    lVar32 = *(long *)(lVar23 + 0x88) + (ulong)uVar5 * 0x32;
                    iVar19 = *(int *)(lVar32 + (ulong)*(byte *)(lVar32 + DAT_053f633c + 0x20));
                  }
                }
                if (bVar15) {
                  if (((fVar38 != 0.0) || (fVar37 != 0.0)) || (fVar36 != 0.0)) goto LAB_0215a6d0;
                }
                else if (iVar19 != 0) {
LAB_0215a6d0:
                  uVar29 = uVar29 | 0x10;
                }
                uVar5 = uVar29 - (uVar29 >> 1 & 0x55555555);
                uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
                uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
                uVar5 = uVar5 + (uVar5 >> 8);
                uVar5 = uVar5 + (uVar5 >> 0x10);
                uVar7 = uVar5 & 0x3f;
                if ((uVar5 & 0x3f) != 0) {
                  FUN_038e7ea0(&local_180);
                  uVar18 = (uint)local_180 ^ (uint)local_180 << 0xb;
                  local_180 = (undefined *)CONCAT44((undefined4)local_178,local_180._4_4_);
                  uVar18 = uVar18 >> 8 ^ local_178._4_4_ >> 0x13 ^ uVar18 ^ local_178._4_4_;
                  local_178 = (char *)CONCAT44(uVar18,local_178._4_4_);
                  uVar18 = (uint)((ulong)uVar18 * (ulong)uVar7 >> 0x20);
                  if (uVar18 < uVar7) {
                    iVar17 = FUN_038cd8b0(uVar29,uVar18 + 1);
                    iVar19 = iVar17;
                    if (3 < iVar17) {
                      iVar19 = 4;
                    }
                    if (iVar17 < 0) goto LAB_0215ac08;
                  }
                  else {
LAB_0215ac08:
                    iVar19 = 0;
                  }
                  if (bVar15) {
                    puVar21 = (ulong *)FUN_03ec4d1c(lVar23,plVar30,(&DAT_053f6318)[iVar19]);
                  }
                  else {
                    puVar21 = (ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
                  }
                  local_1e8 = *puVar21;
                  local_1e0 = (undefined4)puVar21[1];
                  iVar19 = FUN_03ec4c28(lVar23,plVar30,
                                        *(undefined4 *)((long)&DAT_053f632c + (long)iVar19 * 4));
                  local_1ec = (undefined4)(long)((float)iVar19 * 11930465.0);
                  *(undefined4 *)(param_1 + 0x7e8) = local_1ec;
                  FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_1e8,&local_1ec,0);
                  goto LAB_0215a834;
                }
              }
              else {
                uVar26 = 0;
                bVar15 = true;
                do {
                  if (*(char *)((long)local_1d0 + uVar26) != *(char *)((long)puVar34 + uVar26))
                  break;
                  if (*(char *)((long)local_1d0 + uVar26) == '\0') {
                    if (bVar15) goto LAB_02159a88;
                    break;
                  }
                  cVar12 = *(char *)((long)local_1d0 + uVar26 + 1);
                  if (cVar12 != *(char *)((long)puVar34 + uVar26 + 1)) break;
                  if (cVar12 == '\0') goto LAB_02159a88;
                  cVar12 = *(char *)((long)local_1d0 + uVar26 + 2);
                  if (cVar12 != *(char *)((long)puVar34 + uVar26 + 2)) break;
                  if (cVar12 == '\0') goto LAB_02159a88;
                  bVar15 = uVar26 < 0x7fffe;
                  uVar26 = uVar26 + 3;
                } while (uVar26 != 0x80001);
              }
            }
          }
          uVar35 = uVar35 + 1;
          if (uVar35 == uVar18) break;
          lVar32 = *(long *)(lVar23 + 0x28);
        } while( true );
      }
    }
  }
  (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(param_1 + 0x738);
  (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(param_1 + 0x738);
  pcVar25 = *(char **)(param_1 + 0x740);
  if (pcVar25 == "manChairOffice") {
LAB_0215a7f4:
    uVar33 = FUN_01e5e100(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0));
    if ((uVar33 & 1) != 0) {
      lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      uVar33 = FUN_01e5e100(*(undefined8 *)(*(long *)(lVar23 + 8) + 0x3b0));
      if ((uVar33 & 1) != 0) {
        *(ulong *)(lVar23 + 0xad58) = *(ulong *)(lVar23 + 0xad58) | 0x400001000;
      }
LAB_0215a834:
      *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 1;
      FUN_0215b800(param_1);
      return;
    }
    pcVar25 = *(char **)(param_1 + 0x740);
  }
  else {
    uVar33 = 0;
    bVar15 = true;
    do {
      if (pcVar25[uVar33] != "manChairOffice"[uVar33]) break;
      if (pcVar25[uVar33] == '\0') {
        if (bVar15) goto LAB_0215a7f4;
        break;
      }
      bVar15 = uVar33 < 0x80000;
      uVar33 = uVar33 + 1;
    } while (uVar33 != 0x80001);
  }
  if (((*pcVar25 == 'c') && (pcVar25[1] == 'm')) && (pcVar25[2] == 'l')) {
    uVar33 = FUN_0180b7a0();
    puVar13 = PTR_DAT_04bb2720;
    if ((uVar33 & 1) == 0) {
      lVar23 = *(long *)PTR_DAT_04bb2720;
      iVar19 = 0;
      if (lVar23 != 0) {
        if (*(long *)(lVar23 + 0x330) == 0) {
          iVar19 = 0;
        }
        else {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar17 = FUN_006bd550(*puVar31,0);
          iVar19 = 0;
          if (iVar17 == 0x758f7eaf) {
            iVar19 = 0;
            if (*(long *)puVar13 != 0) {
              lVar23 = *(long *)(*(long *)puVar13 + 0x330);
              iVar19 = 0;
              if (lVar23 != 0) {
                iVar19 = *(int *)(lVar23 + 0x244);
              }
            }
          }
        }
      }
      if ((*(int *)(PTR_DAT_04bbe4b0 + 0x84) != iVar19) &&
         (sVar11 = *(short *)PTR_DAT_04bb6298, sVar11 != -1)) {
        local_180 = (undefined *)CONCAT44(local_180._4_4_,0x17);
        puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
        if (0xff < (uint)(int)sVar11) {
          puVar9 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((((*puVar9 >> 0x17 & 1) != 0) && (*(int *)(*(long *)(param_1 + 8) + 0x750) == 2)) &&
           (((byte)param_1[0x7f1] >> 4 & 1) == 0)) {
          FUN_0215b800(param_1);
          *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x1000;
        }
      }
    }
  }
  uVar33 = FUN_0180b7a0();
  puVar13 = PTR_DAT_04bb2720;
  if ((uVar33 & 1) != 0) {
    return;
  }
  lVar23 = *(long *)PTR_DAT_04bb2720;
  iVar19 = 0;
  if (lVar23 != 0) {
    if (*(long *)(lVar23 + 0x330) == 0) {
      iVar19 = 0;
    }
    else {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar17 = FUN_006bd550(*puVar31,0);
      iVar19 = 0;
      if (iVar17 == 0x758f7eaf) {
        iVar19 = 0;
        if (*(long *)puVar13 != 0) {
          lVar23 = *(long *)(*(long *)puVar13 + 0x330);
          iVar19 = 0;
          if (lVar23 != 0) {
            iVar19 = *(int *)(lVar23 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar19) {
    return;
  }
  sVar11 = *(short *)PTR_DAT_04bb6298;
  if (sVar11 == -1) {
    return;
  }
  local_180 = (undefined *)CONCAT44(local_180._4_4_,0x17);
  puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
  if (0xff < (uint)(int)sVar11) {
    puVar9 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar9 >> 0x17 & 1) == 0) {
    return;
  }
  pcVar25 = *(char **)(param_1 + 0x740);
  cVar12 = *pcVar25;
  if (cVar12 == 'p') {
    if (pcVar25[1] != 'o') {
      return;
    }
    if (pcVar25[2] != 'o') {
      return;
    }
LAB_0215aaa4:
    FUN_0215cb30(param_1);
    pcVar25 = *(char **)(param_1 + 0x740);
    cVar12 = *pcVar25;
  }
  else if (cVar12 == 's') {
    if (pcVar25[1] != 'p') {
      return;
    }
    if (pcVar25[2] != 'n') {
      return;
    }
    goto LAB_0215aaa4;
  }
  puVar13 = PTR_DAT_04bb2020;
  if (cVar12 != 'a') {
    return;
  }
  if (pcVar25[1] != 'l') {
    return;
  }
  if (pcVar25[2] != 'w') {
    return;
  }
  local_180 = PTR_DAT_04bb2020 + 0x10;
  local_178 = &DAT_040716fb;
  uVar18 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_180,PTR_DAT_04bb3238,1);
  puVar14 = PTR_DAT_04bb27c0;
  local_1e8 = CONCAT44(local_1e8._4_4_,uVar18);
  lVar23 = *(long *)PTR_DAT_04bb27c0;
  if (lVar23 == 0) {
    return;
  }
  if (((uVar18 == 0) ||
      (plVar30 = *(long **)(*(long *)(*(long *)(lVar23 + 0x1c0) + 8) + (ulong)(uVar18 >> 0x14) * 8),
      plVar30 == (long *)0x0)) ||
     (((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar30 + 0x46) != uVar18)))) {
    plVar30 = (long *)0x0;
  }
  if ((*(int *)(lVar23 + 0x288) == 1) || (*(int *)(lVar23 + 0x288) == -1)) {
    plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar23 = *(long *)puVar14;
    iVar19 = (**(code **)(*plVar20 + 0x60))();
    if (iVar19 < 0x11) {
      uVar18 = 1;
      goto LAB_0215acac;
    }
    if (*(uint *)(lVar23 + 0x5e8) < 5) {
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar23 + 0x5e8) & 0x1f) & 1;
      goto LAB_0215acac;
    }
  }
  uVar18 = 0;
LAB_0215acac:
  if (plVar30 != (long *)0x0) {
    lVar23 = plVar30[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar19 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar33 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    uVar35 = 0;
    if ((int)lVar23 == 1) {
      uVar35 = uVar18;
    }
    if (((((uVar33 & 1) != 0) && (uVar35 != 0)) && (plVar30[0x77] != 0)) &&
       (lVar23 = *(long *)(plVar30[0x77] + 0xaa48), lVar23 != 0)) {
      (**(code **)(*(long *)(lVar23 + 0x6e0) + 0x18))(lVar23 + 0x6e0);
      (**(code **)(*(long *)(lVar23 + 0x6e0) + 0x18))(lVar23 + 0x6e0);
      if (*(char **)(lVar23 + 0x6e8) == "AlpWorkbenchConversation") {
LAB_0215ad7c:
        if (**(char **)(param_1 + 0x6e8) == '\0') {
          local_180 = puVar13 + 0x10;
          local_178 = "AlwWorkbenchConversation";
          FUN_008aa0a0(param_1 + 0x6e0,&local_180,0xffffffff);
          *(undefined4 *)(param_1 + 0x7ec) = 1;
          FUN_0215b800(param_1);
          local_1d8 = (undefined *)
                      CONCAT44(local_1d8._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
          FUN_00adda18(&local_180,&local_1d8,0);
          FUN_00adda18(&local_1d8,&local_1e8,0);
          puVar13 = PTR_DAT_04bb6928;
          if ((((local_180 != (undefined *)0x0) && ((char)local_178 != '\0')) &&
              ((local_178._1_1_ != '\0' &&
               ((local_1d8 != (undefined *)0x0 && ((char)local_1d0 != '\0')))))) &&
             (local_1d0._1_1_ != '\0')) {
            FUN_02085e20(*(undefined8 *)(*(long *)(local_180 + 0x3b8) + 0x18),0,
                         local_1e8 & 0xffffffff,PTR_DAT_04bb6928,0);
            FUN_02085e20(*(undefined8 *)(*(long *)(local_1d8 + 0x3b8) + 0x18),0,
                         *(undefined4 *)(*(long *)(param_1 + 8) + 0x230),puVar13,0);
          }
        }
      }
      else {
        uVar33 = 0;
        bVar15 = true;
        do {
          cVar12 = (*(char **)(lVar23 + 0x6e8))[uVar33];
          if (cVar12 != "AlpWorkbenchConversation"[uVar33]) {
            return;
          }
          if (cVar12 == '\0') {
            if (!bVar15) {
              return;
            }
            goto LAB_0215ad7c;
          }
          bVar15 = uVar33 < 0x80000;
          uVar33 = uVar33 + 1;
        } while (uVar33 != 0x80001);
      }
    }
  }
  return;
}

