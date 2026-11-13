
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011828b0(long param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 *__dest;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  int iVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  uint uVar22;
  void *pvVar23;
  char *pcVar24;
  long *plVar25;
  void *pvVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  char *pcVar31;
  undefined1 *__src;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f4;
  undefined1 local_1ec;
  undefined *local_1e8;
  char *local_1e0;
  int local_1d8;
  char local_1d4 [63];
  undefined1 local_195;
  undefined *local_190;
  undefined1 *local_188;
  int local_180;
  undefined1 local_17c [31];
  undefined1 local_15d;
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined2 local_13c;
  undefined2 uStack_13a;
  long local_138;
  undefined8 uStack_130;
  undefined1 local_c5;
  undefined **local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined *local_a8 [4];
  int local_84;
  
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      (**(code **)(*(long *)(param_1 + 0x2df0) + 0x18))(param_1 + 0x2df0);
      pvVar23 = *(void **)(param_1 + 0x2df8);
      (**(code **)(*(long *)(param_1 + 0x2e48) + 0x18))(param_1 + 0x2e48);
      puVar15 = PTR_DAT_04bb2020;
      local_1e0 = *(char **)(param_1 + 0x2e50);
      local_1e8 = PTR_DAT_04bb2020 + 0x10;
      if (*local_1e0 == '\0') {
        iVar7 = *(int *)(param_1 + 0x2ea0);
        local_1e0 = DAT_050b8c50;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x2ea0);
      }
      if (iVar7 == 0) {
        FUN_0074fda4(&local_158,"Event_%s",pvVar23);
        lVar14 = local_150;
        lVar16 = *(long *)PTR_DAT_04bb28b0;
        FUN_038d18d0(lVar16 + 0x3090,local_150,0xffffffff);
        FUN_038d18d0(lVar16 + 0x3120,lVar14,0xffffffff);
      }
      pvVar26 = *(void **)(param_1 + 0x2ed8);
      if (pvVar26 == pvVar23) {
        puVar15 = puVar15 + 0x10;
      }
      else {
        lVar14 = 0;
        do {
          if (*(char *)((long)pvVar23 + lVar14) == '\0') goto LAB_01183094;
          if (*(char *)((long)pvVar23 + lVar14 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_01183094;
          }
          if (*(char *)((long)pvVar23 + lVar14 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_01183094;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_01183094:
        iVar7 = (int)lVar14;
        if (*(int *)(param_1 + 12000) <= (int)lVar14) {
          iVar7 = *(int *)(param_1 + 12000) + -1;
        }
        memcpy(pvVar26,pvVar23,(long)iVar7);
        *(undefined1 *)((long)pvVar26 + (long)iVar7) = 0;
        puVar15 = local_1e8;
      }
      pcVar24 = *(char **)(param_1 + 0x2f30);
      (**(code **)(puVar15 + 0x18))(&local_1e8);
      pcVar31 = local_1e0;
      if (pcVar24 != local_1e0) {
        (**(code **)(local_1e8 + 0x18))(&local_1e8);
        lVar14 = 0;
        do {
          if (local_1e0[lVar14] == '\0') goto LAB_01183248;
          if (local_1e0[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_01183248;
          }
          if (local_1e0[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_01183248;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_01183248:
        iVar7 = (int)lVar14;
        if (*(int *)(param_1 + 0x2f38) <= (int)lVar14) {
          iVar7 = *(int *)(param_1 + 0x2f38) + -1;
        }
        memcpy(pcVar24,pcVar31,(long)iVar7);
        pcVar24[iVar7] = '\0';
      }
      if (*(int *)(param_1 + 0x2ea0) == 1) {
        *(undefined4 *)(param_1 + 0x51e0) = 1;
        lVar14 = FUN_01185f80(param_1 + 0x2f90,param_1 + 0x2ed0,*(undefined8 *)(param_1 + 0x2ec8));
        if (lVar14 != 0) {
          uVar21 = **(undefined8 **)(lVar14 + 0x28);
          *(undefined1 *)(param_1 + 0x2fd0) = 1;
          *(undefined8 *)(param_1 + 0x2fc8) = uVar21;
          uVar10 = FUN_01186110(param_1 + 0x2ed0,param_1 + 0x2f28,param_1 + 0x2f80,
                                (undefined4 *)(param_1 + 0x51e0),*(undefined8 *)(param_1 + 0x2ec8));
          goto joined_r0x011832e8;
        }
      }
      else {
        uVar10 = FUN_01185a1c(param_1 + 0x2eb8);
joined_r0x011832e8:
        if ((uVar10 & 1) != 0) goto LAB_011828f8;
      }
LAB_0118290c:
      *(byte *)(param_1 + 0x5fcc) = *(byte *)(param_1 + 0x5fcc) | 1;
      if (*(long *)(param_1 + 0x2eb0) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x2eb0) + 8) = 4;
      }
      iVar7 = 5;
    }
    else {
LAB_011828f8:
      iVar7 = FUN_011863b0(param_1 + 0x2eb8);
      if (iVar7 == 1) goto LAB_0118290c;
      if (*(int *)(param_1 + 0x2ea0) == 0 && iVar7 == 0) {
        if (*(long *)(*(long *)PTR_DAT_04bb28b0 + 0x2ff8) == 0) goto LAB_01182a44;
      }
      else if (iVar7 != 0) {
LAB_01182a44:
        iVar7 = *(int *)(param_1 + 8);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        goto joined_r0x01182934;
      }
      iVar7 = 2;
    }
    *(int *)(param_1 + 8) = iVar7;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar7 != 2) goto LAB_01182c78;
LAB_01182938:
    uVar10 = FUN_01186520(param_1 + 0x2eb8,param_1 + 0x10,*(undefined8 *)(param_1 + 0xa8));
    if ((uVar10 & 1) == 0) {
      lVar14 = *(long *)(param_1 + 0x2eb0);
      iVar7 = 5;
      if (lVar14 != 0) {
        uVar20 = 4;
        goto LAB_0118304c;
      }
    }
    else {
      lVar14 = param_1 + 0xb0;
      lVar16 = param_1 + 0x51e8;
      iVar7 = *(int *)(param_1 + 0x40);
      if (iVar7 != 0) {
        uVar21 = *(undefined8 *)(param_1 + 0xa8);
        lVar9 = param_1 + 0x2de8;
        lVar18 = *(long *)(param_1 + 0x38);
        lVar30 = lVar18;
        do {
          uStack_140 = (undefined4)lVar9;
          local_13c = (undefined2)((ulong)lVar9 >> 0x20);
          uStack_13a = (undefined2)((ulong)lVar9 >> 0x30);
          local_158 = &PTR_LAB_049836e0;
          iVar19 = *(int *)(lVar30 + 0x20);
          local_150 = lVar14;
          local_138 = lVar16;
          uStack_130 = uVar21;
          local_148 = param_1 + 0x5f60;
          if (iVar19 != 0) {
            lVar13 = *(long *)(lVar30 + 0x18);
            lVar18 = lVar13;
            do {
              if ((*(char *)(lVar18 + 0x41) != '\0') && (*(char *)(lVar18 + 0x40) == '\0')) {
                FUN_01178904(&local_158,lVar18,*(undefined8 *)(lVar18 + 0x38));
                lVar13 = *(long *)(lVar30 + 0x18);
                iVar19 = *(int *)(lVar30 + 0x20);
              }
              lVar18 = lVar18 + 0x48;
            } while (lVar18 != lVar13 + (long)iVar19 * 0x48);
            lVar18 = *(long *)(param_1 + 0x38);
            iVar7 = *(int *)(param_1 + 0x40);
          }
          lVar30 = lVar30 + 0x30;
        } while (lVar30 != lVar18 + (long)iVar7 * 0x30);
        if (iVar7 != 0) {
          lVar30 = lVar18;
          do {
            iVar19 = *(int *)(lVar30 + 0x20);
            if (iVar19 != 0) {
              plVar8 = *(long **)(lVar30 + 0x18);
              plVar25 = plVar8;
              do {
                if (((*(char *)((long)plVar8 + 0x41) != '\0') && ((char)plVar8[8] != '\0')) &&
                   ((int)plVar8[1] != 0)) {
                  lVar9 = *plVar8;
                  do {
                    lVar9 = lVar9 + 0x18;
                    *(int *)(plVar8[6] + 0x30) = *(int *)(plVar8[6] + 0x30) + 1;
                  } while (lVar9 != *plVar8 + (long)(int)plVar8[1] * 0x18);
                  plVar25 = *(long **)(lVar30 + 0x18);
                  iVar19 = *(int *)(lVar30 + 0x20);
                }
                plVar8 = plVar8 + 9;
              } while (plVar8 != plVar25 + (long)iVar19 * 9);
              lVar18 = *(long *)(param_1 + 0x38);
              iVar7 = *(int *)(param_1 + 0x40);
            }
            lVar30 = lVar30 + 0x30;
          } while (lVar30 != lVar18 + (long)iVar7 * 0x30);
          if (iVar7 != 0) {
            lVar30 = lVar18;
            do {
              iVar19 = *(int *)(lVar30 + 0x20);
              if (iVar19 != 0) {
                lVar9 = *(long *)(lVar30 + 0x18);
                lVar18 = lVar9;
                do {
                  if (((*(char *)(lVar9 + 0x41) != '\0') && (*(char *)(lVar9 + 0x40) != '\0')) &&
                     (*(int *)(lVar9 + 0x20) != 0)) {
                    lVar18 = *(long *)(lVar9 + 0x18);
                    do {
                      lVar18 = lVar18 + 0x18;
                      *(int *)(*(long *)(lVar9 + 0x30) + 0x34) =
                           *(int *)(*(long *)(lVar9 + 0x30) + 0x34) + 1;
                    } while (lVar18 != *(long *)(lVar9 + 0x18) + (long)*(int *)(lVar9 + 0x20) * 0x18
                            );
                    lVar18 = *(long *)(lVar30 + 0x18);
                    iVar19 = *(int *)(lVar30 + 0x20);
                  }
                  lVar9 = lVar9 + 0x48;
                } while (lVar9 != lVar18 + (long)iVar19 * 0x48);
                lVar18 = *(long *)(param_1 + 0x38);
                iVar7 = *(int *)(param_1 + 0x40);
              }
              lVar30 = lVar30 + 0x30;
            } while (lVar30 != lVar18 + (long)iVar7 * 0x30);
          }
        }
      }
      lVar30 = *(long *)(param_1 + 0xc0);
      if (lVar30 != param_1 + 0xb8) {
        uVar21 = *(undefined8 *)(param_1 + 0xa8);
        lVar9 = lVar30 + -0x158;
        do {
          FUN_010f9530(lVar9,uVar21);
          lVar30 = *(long *)(lVar30 + 8);
          lVar9 = lVar30 + -0x158;
        } while (lVar9 != param_1 + -0xa0);
        iVar7 = *(int *)(param_1 + 0x40);
      }
      puVar15 = PTR_FUN_04bbb7f8;
      if (iVar7 != 0) {
        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        lVar9 = *(long *)(param_1 + 0x38);
        lVar30 = lVar9;
        do {
          iVar19 = *(int *)(lVar30 + 0x20);
          if (iVar19 != 0) {
            plVar25 = *(long **)(lVar30 + 0x18);
            plVar8 = plVar25;
            do {
              if (((*(char *)((long)plVar8 + 0x41) != '\0') && ((char)plVar8[8] != '\0')) &&
                 ((int)plVar8[1] != 0)) {
                puVar28 = (undefined8 *)*plVar8;
                do {
                  lVar9 = plVar8[6];
                  local_150 = *(long *)puVar28[2] + 2;
                  local_158 = ppuVar1;
                  if (*(int *)(lVar9 + 0xf8) < *(int *)(lVar9 + 0x110)) {
                    puVar29 = *(undefined8 **)(lVar9 + 0x100);
                    if (puVar29 != (undefined8 *)0x0) {
                      *(undefined8 *)(lVar9 + 0x100) = *puVar29;
                    }
                    FUN_010f5d80(puVar29,&local_158,*(undefined8 *)(lVar9 + 0x10));
                    plVar25 = puVar29 + 0xb;
                    *plVar25 = 0;
                    puVar29[0xc] = 0;
                    lVar18 = *(long *)(lVar9 + 0xe8);
                    *(long **)(lVar9 + 0xe8) = plVar25;
                    *plVar25 = lVar18;
                    puVar29[0xc] = lVar9 + 0xe8;
                    if (lVar18 != 0) {
                      *(long **)(lVar18 + 8) = plVar25;
                    }
                    *(int *)(lVar9 + 0xf8) = *(int *)(lVar9 + 0xf8) + 1;
                  }
                  else {
                    puVar29 = (undefined8 *)0x0;
                  }
                  puVar27 = puVar28 + 3;
                  *puVar28 = puVar15;
                  puVar28[1] = puVar29;
                  puVar28 = puVar27;
                } while (puVar27 != (undefined8 *)(*plVar8 + (long)(int)plVar8[1] * 0x18));
                plVar25 = *(long **)(lVar30 + 0x18);
                iVar19 = *(int *)(lVar30 + 0x20);
              }
              plVar8 = plVar8 + 9;
            } while (plVar8 != plVar25 + (long)iVar19 * 9);
            lVar9 = *(long *)(param_1 + 0x38);
            iVar7 = *(int *)(param_1 + 0x40);
          }
          puVar5 = PTR_FUN_04bbb800;
          lVar30 = lVar30 + 0x30;
        } while (lVar30 != lVar9 + (long)iVar7 * 0x30);
        if (iVar7 != 0) {
          ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          lVar30 = lVar9;
          do {
            iVar19 = *(int *)(lVar30 + 0x20);
            if (iVar19 != 0) {
              lVar18 = *(long *)(lVar30 + 0x18);
              lVar9 = lVar18;
              do {
                if (((*(char *)(lVar9 + 0x41) != '\0') && (*(char *)(lVar9 + 0x40) != '\0')) &&
                   (*(int *)(lVar9 + 0x20) != 0)) {
                  puVar28 = *(undefined8 **)(lVar9 + 0x18);
                  do {
                    lVar18 = *(long *)(lVar9 + 0x30);
                    local_150 = *(long *)puVar28[2] + 2;
                    local_158 = ppuVar1;
                    if (*(int *)(lVar18 + 0x128) < *(int *)(lVar18 + 0x140)) {
                      puVar29 = *(undefined8 **)(lVar18 + 0x130);
                      if (puVar29 != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar18 + 0x130) = *puVar29;
                      }
                      FUN_01184470(puVar29,&local_158,*(undefined8 *)(lVar18 + 0x10));
                      plVar8 = puVar29 + 4;
                      *plVar8 = 0;
                      puVar29[5] = 0;
                      lVar13 = *(long *)(lVar18 + 0x118);
                      *(long **)(lVar18 + 0x118) = plVar8;
                      *plVar8 = lVar13;
                      puVar29[5] = lVar18 + 0x118;
                      if (lVar13 != 0) {
                        *(long **)(lVar13 + 8) = plVar8;
                      }
                      *(int *)(lVar18 + 0x128) = *(int *)(lVar18 + 0x128) + 1;
                    }
                    else {
                      puVar29 = (undefined8 *)0x0;
                    }
                    puVar27 = puVar28 + 3;
                    *puVar28 = puVar5;
                    puVar28[1] = puVar29;
                    puVar28 = puVar27;
                  } while (puVar27 !=
                           (undefined8 *)
                           (*(long *)(lVar9 + 0x18) + (long)*(int *)(lVar9 + 0x20) * 0x18));
                  lVar18 = *(long *)(lVar30 + 0x18);
                  iVar19 = *(int *)(lVar30 + 0x20);
                }
                lVar9 = lVar9 + 0x48;
              } while (lVar9 != lVar18 + (long)iVar19 * 0x48);
              lVar9 = *(long *)(param_1 + 0x38);
              iVar7 = *(int *)(param_1 + 0x40);
            }
            lVar30 = lVar30 + 0x30;
          } while (lVar30 != lVar9 + (long)iVar7 * 0x30);
        }
      }
      *(undefined1 **)(param_1 + 0x78) = &LAB_01183f80;
      uVar10 = FUN_010fa760(lVar14,lVar16);
      lVar14 = *(long *)(param_1 + 0x2eb0);
      bVar6 = (uVar10 & 1) == 0;
      iVar7 = 3;
      if (bVar6) {
        iVar7 = 5;
      }
      uVar20 = 4;
      if (!bVar6) {
        uVar20 = 5;
      }
      if (lVar14 != 0) {
LAB_0118304c:
        *(undefined4 *)(lVar14 + 8) = uVar20;
      }
    }
    *(int *)(param_1 + 8) = iVar7;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar7 != 3) goto LAB_01183064;
LAB_01182c80:
    if (*(int *)(param_1 + 0xc) == 0) {
      pvVar23 = *(void **)(param_1 + 0x5f78);
      (**(code **)(*(long *)(param_1 + 0x2ed0) + 0x18))(param_1 + 0x2ed0);
      pvVar26 = *(void **)(param_1 + 0x2ed8);
      if (pvVar23 != pvVar26) {
        (**(code **)(*(long *)(param_1 + 0x2ed0) + 0x18))(param_1 + 0x2ed0);
        lVar14 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x2ed8) + lVar14) == '\0') goto LAB_01183130;
          lVar16 = *(long *)(param_1 + 0x2ed8) + lVar14;
          if (*(char *)(lVar16 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_01183130;
          }
          if (*(char *)(lVar16 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_01183130;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_01183130:
        iVar7 = (int)lVar14;
        if (*(int *)(param_1 + 0x5f80) <= (int)lVar14) {
          iVar7 = *(int *)(param_1 + 0x5f80) + -1;
        }
        memcpy(pvVar23,pvVar26,(long)iVar7);
        *(undefined1 *)((long)pvVar23 + (long)iVar7) = 0;
      }
      lVar14 = *(long *)(param_1 + 0xc0);
      if (lVar14 != param_1 + 0xb8) {
        lVar16 = lVar14 + -0x158;
        do {
          FUN_0071ca50(&local_158,lVar16 + 8,0);
          lVar14 = *(long *)(lVar14 + 8);
          lVar16 = lVar14 + -0x158;
        } while (lVar16 != param_1 + -0xa0);
      }
      puVar15 = PTR_DAT_04bb27c0;
      if (*(int *)(param_1 + 0x2ea0) == 0) {
        uVar12 = *(uint *)(param_1 + 0x2ea4);
        if ((uVar12 == 0) || (lVar14 = *(long *)PTR_DAT_04bb27c0, lVar14 == 0)) {
LAB_01183338:
          puVar17 = (uint *)PTR_DAT_04bb3238;
          for (lVar14 = *(long *)(param_1 + 0xc0); lVar14 + -0x158 != param_1 + -0xa0;
              lVar14 = *(long *)(lVar14 + 8)) {
            plVar8 = (long *)(lVar14 + -0x120);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            pcVar31 = *(char **)(lVar14 + -0x118);
            (**(code **)(DAT_050b5970 + 0x18))(&DAT_050b5970);
            if (pcVar31 == DAT_050b5978) {
LAB_01183420:
              puVar17 = (uint *)(lVar14 + -0x150);
              break;
            }
            cVar3 = **(char **)(lVar14 + -0x118);
            if (cVar3 == *DAT_050b5978) {
              if (cVar3 == '\0') goto LAB_01183420;
              lVar16 = 0x7fffe;
              pcVar31 = DAT_050b5978;
              pcVar24 = *(char **)(lVar14 + -0x118);
              while( true ) {
                if (pcVar24[1] != pcVar31[1]) break;
                if (pcVar24[1] == '\0') goto LAB_01183420;
                if (pcVar24[2] != pcVar31[2]) break;
                if (pcVar24[2] == '\0') goto LAB_01183420;
                if ((lVar16 == 0) || (cVar3 = pcVar24[3], cVar3 != pcVar31[3])) break;
                lVar16 = lVar16 + -3;
                pcVar31 = pcVar31 + 3;
                pcVar24 = pcVar24 + 3;
                if (cVar3 == '\0') goto LAB_01183420;
              }
            }
          }
          puVar15 = PTR_DAT_04bb27c0;
          uVar12 = *puVar17;
          if (uVar12 == 0) {
            lVar14 = *(long *)PTR_DAT_04bb27c0;
            if (lVar14 == 0) goto LAB_011835d8;
            uVar12 = *(uint *)PTR_DAT_04bbb7f0;
            if (((uVar12 == 0) ||
                (plVar8 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                    ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
               (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar12))))
            {
              plVar8 = (long *)0x0;
            }
            if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
              plVar25 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar14 = *(long *)puVar15;
              iVar7 = (**(code **)(*plVar25 + 0x60))();
              if (iVar7 < 0x11) {
                uVar22 = 1;
              }
              else {
                if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01183e4c;
                uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_01183e4c:
              uVar22 = 0;
            }
            if (plVar8 == (long *)0x0) {
              uVar12 = 0;
            }
            else {
              lVar14 = plVar8[0x2a];
              if ((*PTR_DAT_04bbb7e8 & 1) == 0) {
                iVar7 = __cxa_guard_acquire(PTR_DAT_04bbb7e8);
                if (iVar7 != 0) {
                  *(undefined **)PTR_DAT_04bbb7e0 = PTR_DAT_04bb2e50 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bbb7e8);
                }
              }
              uVar10 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbb7e0);
              uVar12 = 0;
              uVar2 = 0;
              if ((int)lVar14 == 1) {
                uVar2 = uVar22;
              }
              if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
                plVar25 = (long *)plVar8[0x50];
                puVar17 = (uint *)PTR_DAT_04bb3238;
                if (plVar25 != plVar8 + 0x4f) {
                  plVar11 = plVar25 + -1;
                  do {
                    if ((char)plVar25[-1] == '\0') {
                      *(undefined1 *)plVar11 = 1;
                      puVar17 = (uint *)((long)plVar11 + 4);
                      break;
                    }
                    plVar25 = (long *)plVar25[1];
                    plVar11 = plVar25 + -1;
                  } while (plVar11 != plVar8 + 0x4e);
                }
                uVar12 = *puVar17;
                *(uint *)(param_1 + 0x5fc8) = uVar12;
              }
            }
          }
          puVar15 = PTR_DAT_04bb27c0;
          lVar14 = *(long *)PTR_DAT_04bb27c0;
          if (lVar14 != 0) {
            if ((((uVar12 == 0) ||
                 (lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                    (ulong)(uVar12 >> 0x14) * 8), lVar16 == 0)) ||
                ((*(uint *)(lVar16 + 0x248) >> 1 & 1) != 0)) ||
               (*(uint *)(lVar16 + 0x230) != uVar12)) {
              lVar16 = 0;
            }
            if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
              plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar14 = *(long *)puVar15;
              iVar7 = (**(code **)(*plVar8 + 0x60))();
              if (iVar7 < 0x11) {
                uVar12 = 1;
              }
              else {
                if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0118356c;
                uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_0118356c:
              uVar12 = 0;
            }
            if (lVar16 != 0) {
              uVar12 = uVar12 ^ 1;
              if (*(int *)(lVar16 + 0x150) != 1) {
                uVar12 = 1;
              }
              if ((uVar12 == 0) && (*(long *)(lVar16 + 0x98) != 0)) {
                lVar16 = *(long *)(*(long *)(lVar16 + 0x98) + 0x290);
                *(long *)(param_1 + 0x5f60) = lVar16;
                lVar14 = *(long *)PTR_DAT_04bb28f8;
                *(long *)(lVar14 + 0xc0) = lVar16;
                *(long *)(lVar14 + 200) = lVar16;
                *(long *)(lVar16 + 0x10) = lVar14 + 8;
                *(long *)(lVar16 + 0x18) = param_1 + 0x5f60;
                if (*(int *)(lVar14 + 0x50) == 0) {
                  FUN_03ebb160(lVar14 + 0x48,8);
                }
              }
            }
          }
        }
        else {
          lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8));
          if ((lVar16 == 0) ||
             (((*(uint *)(lVar16 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar16 + 0x230) != uVar12))))
          {
            lVar16 = 0;
          }
          if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar14 = *(long *)puVar15;
            iVar7 = (**(code **)(*plVar8 + 0x60))();
            if (iVar7 < 0x11) {
              uVar12 = 1;
            }
            else {
              if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_011832f0;
              uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_011832f0:
            uVar12 = 0;
          }
          if (lVar16 == 0) goto LAB_01183338;
          uVar12 = uVar12 ^ 1;
          if (*(int *)(lVar16 + 0x150) != 1) {
            uVar12 = 1;
          }
          if (((uVar12 != 0) || (*(long *)(lVar16 + 0x98) == 0)) ||
             (*(long *)(*(long *)(lVar16 + 0x98) + 0x290) == 0)) goto LAB_01183338;
          FUN_01ba83f4(param_1 + 0x5f60);
        }
LAB_011835d8:
        FUN_010faa20(param_1 + 0xb0);
        FUN_01188cd4(param_1 + 0x51e8);
        FUN_0070f7e0(*(undefined8 *)PTR_DAT_04bb3240,PTR_PTR_04bb2238,PTR_PTR_04bb2238);
      }
      FUN_0068ce30(param_1 + 0x10,0);
    }
    FUN_010faba0(param_1 + 0xb0);
    iVar7 = *(int *)(param_1 + 0x2ea0);
    if ((iVar7 == 0) && (0 < *(int *)(param_1 + 0x5f58))) {
      *(int *)(param_1 + 0x5f58) = *(int *)(param_1 + 0x5f58) + -1;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
LAB_011836fc:
      if (iVar7 == 0) {
        if ((*(char *)(param_1 + 0x2ea9) != '\0') && (*(int *)(param_1 + 0xc) == 0)) {
          FUN_0258b710(local_a8,param_1 + 0x2ea8);
          local_c5 = 0;
          local_150 = (long)&local_148 + 4;
          local_148._0_4_ = 0x80;
          local_c0 = (undefined **)0x0;
          local_b8 = (undefined8 *)0x0;
          local_158 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
          local_b0 = (undefined8 *)0x0;
          local_195 = 0;
          local_1d8 = 0x40;
          local_148._4_4_ = s_1FrameBug_040812b5._0_4_;
          uStack_140 = s_1FrameBug_040812b5._4_4_;
          local_13c = 0x67;
          local_1d4[0] = '\0';
          local_188 = local_17c;
          local_1e8 = PTR_DAT_04bb2bc0 + 0x10;
          local_180 = 0x20;
          local_15d = 0;
          lVar14 = *(long *)PTR_DAT_04bb3240;
          plVar8 = (long *)(lVar14 + 0xdf90);
          local_17c[0] = 0;
          local_190 = PTR_DAT_04bb2028 + 0x10;
          local_1e0 = local_1d4;
          (**(code **)(*plVar8 + 0x18))(plVar8);
          pcVar31 = *(char **)(lVar14 + 0xdf98);
          if (local_1d4 != pcVar31) {
            (**(code **)(*plVar8 + 0x18))(plVar8);
            lVar16 = 0;
            do {
              if (*(char *)(*(long *)(lVar14 + 0xdf98) + lVar16) == '\0') goto LAB_01183c20;
              lVar30 = *(long *)(lVar14 + 0xdf98) + lVar16;
              if (*(char *)(lVar30 + 1) == '\0') {
                lVar16 = lVar16 + 1;
                goto LAB_01183c20;
              }
              if (*(char *)(lVar30 + 2) == '\0') {
                lVar16 = lVar16 + 2;
                goto LAB_01183c20;
              }
              lVar16 = lVar16 + 3;
            } while (lVar16 != 0x80001);
            lVar16 = 0;
LAB_01183c20:
            iVar7 = (int)lVar16;
            if (local_1d8 <= (int)lVar16) {
              iVar7 = local_1d8 + -1;
            }
            memcpy(local_1d4,pcVar31,(long)iVar7);
            local_1d4[iVar7] = '\0';
          }
          __dest = local_188;
          plVar8 = (long *)(lVar14 + 0xe028);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          __src = *(undefined1 **)(lVar14 + 0xe030);
          if (__dest != __src) {
            (**(code **)(*(long *)(lVar14 + 0xe028) + 0x18))(plVar8);
            lVar16 = 0;
            do {
              if (*(char *)(*(long *)(lVar14 + 0xe030) + lVar16) == '\0') goto LAB_01183cc0;
              lVar30 = *(long *)(lVar14 + 0xe030) + lVar16;
              if (*(char *)(lVar30 + 1) == '\0') {
                lVar16 = lVar16 + 1;
                goto LAB_01183cc0;
              }
              if (*(char *)(lVar30 + 2) == '\0') {
                lVar16 = lVar16 + 2;
                goto LAB_01183cc0;
              }
              lVar16 = lVar16 + 3;
            } while (lVar16 != 0x80001);
            lVar16 = 0;
LAB_01183cc0:
            iVar7 = (int)lVar16;
            if (local_180 <= (int)lVar16) {
              iVar7 = local_180 + -1;
            }
            memcpy(__dest,__src,(long)iVar7);
            __dest[iVar7] = 0;
          }
          local_c0 = &local_1e8;
          local_200 = 0xfffe;
          FUN_0277d4ac(&local_200);
          local_1f8 = 0;
          local_1f4 = 0xfffe;
          FUN_0277d4ac(&local_1f4);
          local_1ec = 0;
          local_b8 = (undefined8 *)0x0;
          local_b0 = (undefined8 *)0x0;
          if (DAT_054542e5 != '\0') {
            local_200 = CONCAT44(DAT_054542e0,_DAT_054542dc);
            local_1f8 = DAT_054542e4;
            local_b8 = &local_200;
          }
          if (DAT_054542f1 != '\0') {
            local_1f4 = CONCAT44(DAT_054542ec,_DAT_054542e8);
            local_1ec = DAT_054542f0;
            local_b0 = &local_1f4;
          }
          FUN_0258bbec(local_a8,&local_158);
          local_a8[0] = PTR_DAT_04bc3230 + 0x10;
          iVar7 = FUN_0258bfc8(local_a8);
          if (iVar7 == -1) {
LAB_01183dbc:
            if (local_84 == 0) {
              local_84 = 1;
            }
          }
          else {
            iVar7 = (**(code **)(local_a8[0] + 0x20))(local_a8);
            local_158 = (undefined **)CONCAT44(local_158._4_4_,iVar7);
            if (0xc < iVar7) goto LAB_01183dbc;
          }
          FUN_02601530(local_a8);
        }
        lVar14 = *(long *)(param_1 + 0xc0);
        if (lVar14 != param_1 + 0xb8) {
          lVar16 = lVar14 + -0x158;
          do {
            FUN_0071ca50(&local_158,lVar16 + 8,0);
            if (((local_158 != (undefined **)0x0) && ((char)local_150 != '\0')) &&
               ((local_150._2_1_ != '\0' && ((*(byte *)(lVar16 + 0x150) & 3) != 1)))) {
              (**(code **)(**(long **)(lVar16 + 0x10) + 0x100))();
            }
            lVar14 = *(long *)(lVar14 + 8);
            lVar16 = lVar14 + -0x158;
          } while (lVar16 != param_1 + -0xa0);
        }
      }
      lVar14 = *(long *)(param_1 + 0xc0);
      if (lVar14 != param_1 + 0xb8) {
        lVar16 = lVar14 + -0x158;
        do {
          FUN_0071ca50(&local_158,lVar16 + 8,0);
          if (((local_158 != (undefined **)0x0) && ((char)local_150 != '\0')) &&
             (local_150._2_1_ != '\0')) {
            bVar4 = *(byte *)(lVar16 + 0x150);
            lVar16 = *(long *)(lVar16 + 0x10);
            if (*(long **)(lVar16 + 0x280) != (long *)0x0) {
              (**(code **)(**(long **)(lVar16 + 0x280) + 0x50))();
              *(undefined8 *)(lVar16 + 0x280) = 0;
            }
            *(undefined8 *)(lVar16 + 0x288) = 0;
            *(undefined8 *)(lVar16 + 0x2a0) = 0;
            *(undefined1 *)(lVar16 + 0x2a8) = 0xff;
            if (*(long *)(lVar16 + 0x290) != 0) {
              *(undefined1 *)(*(long *)(lVar16 + 0x290) + 0xc) = 0xff;
            }
            if ((bVar4 & 1) != 0) {
              *(undefined8 *)(lVar16 + 0x2b8) = 0;
              *(undefined8 *)(lVar16 + 0x2b0) = 0;
              *(undefined1 *)(lVar16 + 0x2c0) = 0xff;
            }
          }
          lVar14 = *(long *)(lVar14 + 8);
          lVar16 = lVar14 + -0x158;
        } while (lVar16 != param_1 + -0xa0);
      }
      *(undefined8 *)(param_1 + 8) = 4;
      iVar7 = *(int *)(param_1 + 0x5fc8);
      plVar8 = (long *)PTR_DAT_04bb27c0;
      goto joined_r0x011837b0;
    }
    lVar14 = *(long *)(param_1 + 0xc0);
    if (lVar14 != param_1 + 0xb8) {
      lVar16 = lVar14 + -0x158;
      do {
        FUN_0071ca50(&local_158,lVar16 + 8,0);
        if ((((local_158 != (undefined **)0x0) && ((char)local_150 != '\0')) &&
            (local_150._2_1_ != '\0')) &&
           (lVar30 = *(long *)(lVar16 + 0xf0), lVar30 != lVar16 + 0xe8)) {
          lVar9 = lVar30 + -0x58;
          do {
            uVar10 = FUN_010f6690(lVar9);
            if ((uVar10 & 1) != 0) {
              iVar7 = *(int *)(param_1 + 0x2ea0);
              goto LAB_011836fc;
            }
            lVar30 = *(long *)(lVar30 + 8);
            lVar9 = lVar30 + -0x58;
          } while (lVar9 != lVar16 + 0x90);
        }
        lVar14 = *(long *)(lVar14 + 8);
        lVar16 = lVar14 + -0x158;
      } while (lVar16 != param_1 + -0xa0);
    }
    iVar7 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (iVar7 == 4) goto LAB_0118306c;
joined_r0x011836e4:
    if (iVar7 != 5) {
      s_1FrameBug_040812b5[0] = s_1FrameBug_040812b5[0];
      s_1FrameBug_040812b5[1] = s_1FrameBug_040812b5[1];
      s_1FrameBug_040812b5[2] = s_1FrameBug_040812b5[2];
      s_1FrameBug_040812b5[3] = s_1FrameBug_040812b5[3];
      s_1FrameBug_040812b5[4] = s_1FrameBug_040812b5[4];
      s_1FrameBug_040812b5[5] = s_1FrameBug_040812b5[5];
      s_1FrameBug_040812b5[6] = s_1FrameBug_040812b5[6];
      s_1FrameBug_040812b5[7] = s_1FrameBug_040812b5[7];
      return;
    }
    if (*(int *)(param_1 + 0xc) != 0) goto LAB_01183b00;
  }
  else {
joined_r0x01182934:
    if (iVar7 == 2) goto LAB_01182938;
LAB_01182c78:
    if (iVar7 == 3) goto LAB_01182c80;
LAB_01183064:
    if (iVar7 != 4) goto joined_r0x011836e4;
LAB_0118306c:
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar7 = *(int *)(param_1 + 0x5fc8);
      plVar8 = (long *)PTR_DAT_04bb27c0;
joined_r0x011837b0:
      PTR_DAT_04bb27c0 = (undefined *)plVar8;
      if ((iVar7 != 0) && (lVar14 = *plVar8, lVar14 != 0)) {
        uVar12 = *(uint *)PTR_DAT_04bbb7f0;
        if (((uVar12 == 0) ||
            ((plVar25 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar25 == (long *)0x0 ||
             ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)))) || (*(uint *)(plVar25 + 0x46) != uVar12)
           ) {
          plVar25 = (long *)0x0;
        }
        if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *plVar8;
          iVar7 = (**(code **)(*plVar11 + 0x60))();
          if (iVar7 < 0x11) {
            uVar12 = 1;
          }
          else {
            if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01183994;
            uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_01183994:
          uVar12 = 0;
        }
        if (plVar25 != (long *)0x0) {
          lVar14 = plVar25[0x2a];
          if ((*PTR_DAT_04bbb7e8 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_04bbb7e8);
            if (iVar7 != 0) {
              *(undefined **)PTR_DAT_04bbb7e0 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bbb7e8);
            }
          }
          uVar10 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bbb7e0);
          uVar22 = 0;
          if ((int)lVar14 == 1) {
            uVar22 = uVar12;
          }
          if (((uVar10 & 1) != 0) && (uVar22 != 0)) {
            plVar8 = (long *)plVar25[0x50];
            if (plVar8 != plVar25 + 0x4f) {
              plVar11 = plVar8 + -1;
              do {
                if (*(int *)((long)plVar11 + 4) == *(int *)(param_1 + 0x5fc8)) {
                  *(undefined1 *)plVar11 = 0;
                  break;
                }
                plVar8 = (long *)plVar8[1];
                plVar11 = plVar8 + -1;
              } while (plVar11 != plVar25 + 0x4e);
            }
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x2ea0) == 0) {
      lVar14 = *(long *)(param_1 + 0x5f60);
      if (lVar14 != 0) {
        lVar16 = *(long *)(lVar14 + 0x10);
        if (lVar16 == 0) {
          if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
            lVar16 = 0;
          }
          else {
            lVar16 = **(long **)(lVar14 + 0x20);
          }
        }
        if (*(int *)(lVar16 + 0x48) - 7U < 2) {
          if (*(int *)(lVar16 + 0x48) == 7) {
            FUN_03ebb160(lVar16 + 0x40,6);
          }
          else {
            FUN_01bf7ffc(lVar16);
          }
        }
        if ((*(int *)(lVar16 + 0x48) != 0) ||
           (*(int *)(lVar16 + 0x2548) == 1 && 1 < *(int *)(lVar16 + 0x254c) + 1U)) {
          iVar7 = *(int *)(param_1 + 8);
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          goto joined_r0x011836e4;
        }
        lVar14 = *(long *)(param_1 + 0x5f60);
        if (lVar14 != 0) {
          lVar16 = *(long *)PTR_DAT_04bb28f8;
          FUN_01bf7258(lVar16 + 0xd0);
          *(undefined8 *)(lVar16 + 0xc0) = 0;
          *(undefined8 *)(lVar16 + 200) = 0;
          *(undefined8 *)(lVar14 + 0x10) = 0;
          if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar14 + 0x18) = 0;
            *(undefined8 *)(lVar14 + 0x18) = 0;
          }
          *(undefined1 *)(lVar14 + 0x1ba) = 0;
          *(undefined8 *)(param_1 + 0x5f60) = 0;
        }
      }
      FUN_01189040(param_1 + 0x51e8,0);
      lVar14 = *(long *)(param_1 + 0x2eb0);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x2eb0);
    }
    if (lVar14 != 0) {
      *(undefined4 *)(lVar14 + 8) = 6;
    }
    *(undefined8 *)(param_1 + 8) = 5;
  }
  lVar14 = *(long *)(param_1 + 0xc0);
  if (lVar14 != param_1 + 0xb8) {
    lVar16 = lVar14 + -0x158;
    do {
      FUN_0071ca50(&local_158,lVar16 + 8,0);
      if (((local_158 != (undefined **)0x0) && ((char)local_150 != '\0')) &&
         (local_150._2_1_ != '\0')) {
        FUN_010f9740(lVar16);
      }
      lVar14 = *(long *)(lVar14 + 8);
      lVar16 = lVar14 + -0x158;
    } while (lVar16 != param_1 + -0xa0);
  }
  if (*(int *)(param_1 + 0x2ea0) == 0) {
    uVar21 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    lVar14 = *(long *)PTR_DAT_04bb28b0;
    FUN_038d18d0(lVar14 + 0x3090,uVar21,0xffffffff);
    FUN_038d18d0(lVar14 + 0x3120,uVar21,0xffffffff);
  }
LAB_01183b00:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

