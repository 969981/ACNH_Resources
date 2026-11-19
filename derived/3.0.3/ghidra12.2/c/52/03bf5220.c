
void FUN_03bf5220(long *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ushort uVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  undefined2 *puVar14;
  char cVar15;
  undefined2 uVar16;
  uint uVar17;
  ulong uVar18;
  undefined2 *puVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  int *piVar23;
  char *pcVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
  ulong *puVar30;
  ushort *puVar31;
  long lVar32;
  long lVar33;
  undefined4 *puVar34;
  ulong uVar35;
  char *pcVar36;
  int iVar37;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined *local_78;
  ulong local_70;
  
  FUN_03bef0a0(param_2 + 1,param_3,param_5);
  *param_2 = param_4;
  uVar17 = *(uint *)(param_4 + 0xc);
  uVar35 = (ulong)uVar17;
  if (uVar17 != 0) {
    if ((int)uVar17 < 1) {
LAB_03bf52fc:
      uVar35 = (ulong)*(uint *)(param_2 + 0xd);
      if ((int)*(uint *)(param_2 + 0xd) < 1) goto LAB_03bf5384;
    }
    else {
      lVar32 = *(long *)PTR_DAT_04bb2698;
      if (lVar32 == 0) {
        pvVar13 = malloc(uVar35);
      }
      else {
        plVar12 = param_6;
        if (param_6 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar32 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03bf52fc;
        }
        pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar35,8);
      }
      if (pvVar13 == (void *)0x0) goto LAB_03bf52fc;
      *(uint *)(param_2 + 0xd) = uVar17;
      param_2[0xe] = (long)pvVar13;
    }
    uVar18 = uVar35 & 3;
    if (uVar35 - 1 < 3) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      do {
        *(undefined1 *)(param_2[0xe] + uVar21) = 0xff;
        *(undefined1 *)(param_2[0xe] + uVar21 + 1) = 0xff;
        *(undefined1 *)(param_2[0xe] + uVar21 + 2) = 0xff;
        lVar32 = param_2[0xe] + uVar21;
        uVar21 = uVar21 + 4;
        *(undefined1 *)(lVar32 + 3) = 0xff;
      } while ((uVar35 & 0xfffffffc) != uVar21);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)(param_2[0xe] + uVar21) = 0xff;
      uVar21 = uVar21 + 1;
    }
  }
LAB_03bf5384:
  uVar17 = *(uint *)(param_3 + 8);
  uVar35 = (ulong)uVar17;
  if ((uVar17 != 0) && (0 < (int)uVar17)) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      puVar14 = malloc(uVar35 << 3);
    }
    else {
      plVar12 = param_6;
      if (param_6 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar32 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03bf5494;
      }
      puVar14 = (undefined2 *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar35 << 3,8);
    }
    if (puVar14 != (undefined2 *)0x0) {
      uVar18 = uVar35 & 3;
      puVar19 = puVar14;
      if ((uVar17 & 3) != 0) {
        do {
          *puVar19 = 0xffff;
          uVar18 = uVar18 - 1;
          *(undefined1 *)(puVar19 + 1) = 0;
          *(undefined4 *)(puVar19 + 2) = 0;
          puVar19 = puVar19 + 4;
        } while (uVar18 != 0);
      }
      if (2 < (uVar35 - 1 & 0x1fffffffffffffff)) {
        do {
          *puVar19 = 0xffff;
          *(undefined1 *)(puVar19 + 1) = 0;
          *(undefined4 *)(puVar19 + 2) = 0;
          puVar19[4] = 0xffff;
          *(undefined1 *)(puVar19 + 5) = 0;
          *(undefined4 *)(puVar19 + 6) = 0;
          puVar19[8] = 0xffff;
          *(undefined1 *)(puVar19 + 9) = 0;
          *(undefined4 *)(puVar19 + 10) = 0;
          puVar19[0xc] = 0xffff;
          *(undefined1 *)(puVar19 + 0xd) = 0;
          *(undefined4 *)(puVar19 + 0xe) = 0;
          puVar19 = puVar19 + 0x10;
        } while (puVar19 != puVar14 + uVar35 * 4);
      }
      *(uint *)(param_2 + 0xf) = uVar17;
      param_2[0x10] = (long)puVar14;
    }
  }
LAB_03bf5494:
  uVar17 = *(uint *)(param_3 + 0x18);
  if ((uVar17 != 0) && (0 < (int)uVar17)) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      pvVar13 = malloc((ulong)uVar17);
    }
    else {
      plVar12 = param_6;
      if (param_6 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar32 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03bf550c;
      }
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,(ulong)uVar17,8);
    }
    if (pvVar13 != (void *)0x0) {
      *(uint *)(param_2 + 0x11) = uVar17;
      param_2[0x12] = (long)pvVar13;
    }
  }
LAB_03bf550c:
  *(long *)(param_2[0x15] + 8) = param_3;
  uVar5 = *(ushort *)(param_1[1] + 0x44);
  if ((ulong)uVar5 != 0) {
    uVar35 = 0;
LAB_03bf5580:
    lVar32 = *(long *)(*(long *)(param_1[1] + 0x48) + uVar35 * 8);
    if (lVar32 != 0) {
      plVar12 = (long *)(lVar32 + 8);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      iVar10 = *(int *)(param_4 + 0xc) + -1;
      if (-1 < iVar10) {
        iVar37 = 0;
        pcVar36 = *(char **)(lVar32 + 0x10);
        lVar11 = *(long *)(param_4 + 0x38);
        uVar18 = *(ulong *)PTR_DAT_04bb38c0;
        uVar21 = *(ulong *)PTR_DAT_04bb38c8;
        do {
          iVar8 = iVar10 + iVar37;
          if (iVar8 < 0 != SCARRY4(iVar10,iVar37)) {
            iVar8 = iVar8 + 1;
          }
          uVar17 = iVar8 >> 1;
          uVar20 = (ulong)*(uint *)(lVar11 + (long)(int)uVar17 * 4);
          pcVar22 = (char *)(uVar21 | uVar20);
          pcVar24 = pcVar22 + 0x100000000;
          if (uVar18 <= uVar20) {
            pcVar24 = pcVar22;
          }
          iVar8 = strcmp(pcVar36,pcVar24);
          if (iVar8 == 0) {
            if (*(uint *)(param_2 + 0xd) <= uVar17) {
              uVar17 = 0;
            }
            *(char *)(param_2[0xe] + (long)(int)uVar17) = (char)uVar35;
            (**(code **)(*(long *)(lVar32 + 8) + 0x18))(plVar12);
            iVar10 = *(int *)(param_3 + 4) + -1;
            if (-1 < iVar10) {
              iVar37 = 0;
              pcVar36 = *(char **)(lVar32 + 0x10);
              lVar32 = param_2[2];
              uVar18 = *(ulong *)PTR_DAT_04bb38c0;
              uVar21 = *(ulong *)PTR_DAT_04bb38c8;
              goto LAB_03bf5690;
            }
            break;
          }
          if (iVar8 < 1) {
            iVar10 = uVar17 - 1;
          }
          else {
            iVar37 = uVar17 + 1;
          }
        } while (iVar37 <= iVar10);
      }
    }
    goto LAB_03bf5570;
  }
LAB_03bf56dc:
  if (*(int *)(param_3 + 8) == 0) {
LAB_03bf5dd4:
    uVar35 = (ulong)*(uint *)(param_3 + 0x18);
    if (*(uint *)(param_3 + 0x18) != 0) {
      lVar32 = param_2[8];
      lVar11 = param_2[9];
      uVar18 = 0;
      do {
        lVar29 = lVar32 + uVar18 * 0xc;
        iVar10 = *(int *)(lVar29 + 4);
        iVar37 = *(int *)(lVar29 + 8);
        if (iVar10 <= iVar37) {
          lVar29 = ((long)iVar37 - (long)iVar10) + 1;
          puVar31 = (ushort *)(lVar11 + 0x10 + (long)iVar10 * 0x18);
          do {
            if ((*puVar31 & 0x1c) == 0) {
              lVar29 = (long)(int)uVar18;
              if (*(uint *)(param_2 + 0x11) <= uVar18) {
                lVar29 = 0;
              }
              *(undefined1 *)(param_2[0x12] + lVar29) = 1;
              uVar35 = (ulong)*(uint *)(param_3 + 0x18);
              break;
            }
            lVar29 = lVar29 + -1;
            puVar31 = puVar31 + 0xc;
          } while (lVar29 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar35);
    }
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_5,param_6);
    (**(code **)(*param_1 + 0x20))(param_1);
    DataMemoryBarrier(2,2);
    *(undefined1 *)(param_2 + 0x16) = 1;
    return;
  }
  uVar35 = 0;
  lVar32 = param_2[5];
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  puVar28 = (ulong *)PTR_DAT_04bb38c0;
  puVar30 = (ulong *)PTR_DAT_04bb38c8;
LAB_03bf5784:
  lVar11 = lVar32 + uVar35 * 0x20;
  if ((*(ushort *)(lVar11 + 6) & 1) != 0) {
    piVar23 = (int *)(*puVar30 | (ulong)*(uint *)(lVar11 + 0x18));
    piVar3 = piVar23 + 0x40000000;
    if (*puVar28 <= (ulong)*(uint *)(lVar11 + 0x18)) {
      piVar3 = piVar23;
    }
    if (piVar3 != (int *)0x0) {
      if (*piVar3 == 0) {
        if (*(char *)((long)piVar3 + 0x16) == '\0') {
          uVar5 = *(ushort *)(piVar3 + 5);
          if (-1 < (short)uVar5) {
            uVar17 = (uint)uVar5;
            if (*(uint *)(param_2 + 0xd) <= (uint)uVar5) {
              uVar17 = 0;
            }
            if ((char)*(byte *)(param_2[0xe] + (ulong)uVar17) < '\0') {
              (**(code **)(*param_1 + 0x20))();
              puVar28 = (ulong *)PTR_DAT_04bb38c0;
              puVar30 = (ulong *)PTR_DAT_04bb38c8;
            }
            else {
              lVar29 = *(long *)(*(long *)(param_1[1] + 0x48) +
                                (ulong)*(byte *)(param_2[0xe] + (ulong)uVar17) * 8);
              if (*(int *)(lVar29 + 0x60) == 0) {
                iVar10 = piVar3[2];
                lVar33 = (long)piVar3[1];
                if (piVar3[1] <= iVar10) {
                  do {
                    uVar17 = *(uint *)(lVar32 + lVar33 * 0x20 + 0x1c);
                    if (uVar17 != 0) {
                      uVar21 = *puVar30 | (ulong)uVar17;
                      uVar18 = uVar21 + 0x100000000;
                      if (*puVar28 <= (ulong)uVar17) {
                        uVar18 = uVar21;
                      }
                      uVar18 = (ulong)*(uint *)(*(long *)(param_4 + 0x40) +
                                               (long)*(int *)(uVar18 + 0xc) * 4);
                      pcVar24 = (char *)(*puVar30 | uVar18);
                      pcVar36 = pcVar24 + 0x100000000;
                      if (*puVar28 <= uVar18) {
                        pcVar36 = pcVar24;
                      }
                      uVar18 = (ulong)*(uint *)(lVar29 + 0x6c);
                      if ((int)*(uint *)(lVar29 + 0x6c) < 1) {
                        uVar16 = 0xffff;
                      }
                      else {
                        puVar34 = (undefined4 *)(*(long *)(lVar29 + 0x70) + 8);
                        do {
                          if ((*(char **)(puVar34 + -2) != (char *)0x0) &&
                             (iVar10 = strcmp(*(char **)(puVar34 + -2),pcVar36), iVar10 == 0)) {
                            uVar16 = (undefined2)*puVar34;
                            goto LAB_03bf5a24;
                          }
                          puVar34 = puVar34 + 4;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                        uVar16 = 0xffff;
LAB_03bf5a24:
                        puVar28 = (ulong *)PTR_DAT_04bb38c0;
                        puVar30 = (ulong *)PTR_DAT_04bb38c8;
                      }
                      lVar27 = (long)(int)(uint)lVar33;
                      if (*(uint *)(param_2 + 0xf) <= (uint)lVar33) {
                        lVar27 = 0;
                      }
                      *(undefined2 *)(param_2[0x10] + lVar27 * 8) = uVar16;
                      iVar10 = piVar3[2];
                    }
                    bVar7 = lVar33 < iVar10;
                    lVar33 = lVar33 + 1;
                  } while (bVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((*(ushort *)(lVar11 + 6) & 1) == 0) {
    puVar26 = (undefined8 *)(*puVar30 | (ulong)*(uint *)(lVar11 + 0x18));
    puVar4 = puVar26 + 0x20000000;
    if (*puVar28 <= (ulong)*(uint *)(lVar11 + 0x18)) {
      puVar4 = puVar26;
    }
    if (((uint)*puVar4 >> 1 & 1) != 0) {
      uVar17 = (uint)*puVar4 & 3;
      lVar11 = 0;
      uVar17 = uVar17 - (uVar17 >> 1);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      uVar21 = (ulong)((*(uint *)((long)puVar4 +
                                 (long)(int)((uVar17 + (uVar17 >> 0x10) & 0x3f) - 1) * 4 + 8) &
                       0xffffff) + *(int *)(*param_2 + 0x70));
      uVar18 = *puVar30 | uVar21;
      local_70 = uVar18 + 0x100000000;
      if (*puVar28 <= uVar21) {
        local_70 = uVar18;
      }
      do {
        local_78 = puVar1;
        if (*(char *)(local_70 + lVar11) == '\0') {
LAB_03bf5880:
          iVar10 = (int)lVar11;
joined_r0x03bf5884:
          if (0 < iVar10) {
            lVar29 = 1;
            goto LAB_03bf58a0;
          }
          break;
        }
        if (*(char *)(local_70 + lVar11 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_03bf5880;
        }
        if (*(char *)(local_70 + lVar11 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          iVar10 = (int)lVar11;
          goto joined_r0x03bf5884;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
    }
  }
  goto LAB_03bf5774;
  while( true ) {
    if (iVar9 < 1) {
      iVar10 = iVar8 + -1;
    }
    else {
      iVar37 = iVar8 + 1;
    }
    if (iVar10 < iVar37) break;
LAB_03bf5690:
    iVar8 = iVar10 + iVar37;
    if (iVar8 < 0 != SCARRY4(iVar10,iVar37)) {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 >> 1;
    uVar20 = (ulong)*(uint *)(lVar32 + (long)iVar8 * 4);
    pcVar22 = (char *)(uVar21 | uVar20);
    pcVar24 = pcVar22 + 0x100000000;
    if (uVar18 <= uVar20) {
      pcVar24 = pcVar22;
    }
    iVar9 = strcmp(pcVar36,pcVar24);
    if (iVar9 == 0) {
      uVar18 = (ulong)((int)uVar35 - 0x40);
      if (uVar35 < 0x40) {
        uVar18 = uVar35;
      }
      lVar32 = 0xa0;
      if (uVar35 < 0x40) {
        lVar32 = 0x98;
      }
      *(ulong *)((long)param_2 + lVar32) =
           *(ulong *)((long)param_2 + lVar32) | 1L << (uVar18 & 0x3f);
      break;
    }
  }
LAB_03bf5570:
  uVar35 = uVar35 + 1;
  if (uVar35 == uVar5) goto LAB_03bf56dc;
  goto LAB_03bf5580;
  while (lVar29 = lVar29 + 1, lVar29 - lVar11 != 1) {
LAB_03bf58a0:
    if (*(char *)((long)(local_70 + lVar29) + -1) == '[') {
      uVar18 = lVar29 - 1;
      iVar10 = (int)uVar18;
      if (-1 < iVar10) {
        uVar21 = 0;
        goto LAB_03bf58d0;
      }
      break;
    }
  }
  goto LAB_03bf5774;
  while( true ) {
    if (*(char *)(local_70 + uVar21 + 1) == '\0') {
      uVar21 = uVar21 + 1;
      goto LAB_03bf5a84;
    }
    if (*(char *)(local_70 + uVar21 + 2) == '\0') {
      uVar21 = uVar21 + 2;
      goto LAB_03bf5a84;
    }
    uVar21 = uVar21 + 3;
    if (uVar21 == 0x80001) break;
LAB_03bf58d0:
    if (*(char *)(local_70 + uVar21) == '\0') {
LAB_03bf5a84:
      uVar20 = uVar21 & 0xffffffff;
      if ((int)uVar21 <= iVar10) goto LAB_03bf5774;
      goto LAB_03bf5a90;
    }
  }
  uVar20 = 0;
  if (iVar10 < 0) {
LAB_03bf5a90:
    uVar25 = 0xffffffff;
    uVar21 = uVar18;
    do {
      if (*(char *)(local_70 + uVar21) == ']') {
        if (-1 < (int)uVar21) {
          lVar11 = 0;
          goto LAB_03bf5ad0;
        }
        break;
      }
      uVar21 = uVar21 + 1;
      uVar25 = (ulong)((int)uVar25 + 1);
    } while (uVar20 != uVar21);
  }
  goto LAB_03bf5774;
  while( true ) {
    if (*(char *)(local_70 + lVar11 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03bf5b0c;
    }
    if (*(char *)(local_70 + lVar11 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_03bf5b0c;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) break;
LAB_03bf5ad0:
    if (*(char *)(local_70 + lVar11) == '\0') goto LAB_03bf5b0c;
  }
  lVar11 = 0;
LAB_03bf5b0c:
  local_c0 = 0x40;
  local_7d = 0;
  local_bc[0] = 0;
  pvVar13 = (void *)(local_70 + lVar29);
  if ((int)lVar11 <= iVar10) {
    pvVar13 = *(void **)(PTR_PTR_04bb2238 + 8);
  }
  local_d0 = puVar2;
  local_c8 = local_bc;
  if ((int)uVar25 < 0) {
    uVar25 = 0;
    do {
      if (*(char *)((long)pvVar13 + uVar25) == '\0') goto LAB_03bf5b40;
      if (*(char *)((long)pvVar13 + uVar25 + 1) == '\0') {
        uVar25 = uVar25 + 1;
        goto LAB_03bf5b40;
      }
      if (*(char *)((long)pvVar13 + uVar25 + 2) == '\0') {
        uVar25 = uVar25 + 2;
        goto LAB_03bf5b40;
      }
      uVar25 = uVar25 + 3;
    } while (uVar25 != 0x80001);
  }
  else {
LAB_03bf5b40:
    if ((int)uVar25 < 0x40) {
      if ((int)uVar25 < 1) goto LAB_03bf5b8c;
    }
    else {
      uVar25 = 0x3f;
    }
    memcpy(local_bc,pvVar13,uVar25 & 0xffffffff);
    puVar30 = (ulong *)PTR_DAT_04bb38c8;
    puVar28 = (ulong *)PTR_DAT_04bb38c0;
    local_bc[uVar25 & 0xffffffff] = 0;
  }
LAB_03bf5b8c:
  uVar5 = *(ushort *)(param_1[1] + 0x44);
  if ((ulong)uVar5 != 0) {
    uVar20 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_1[1] + 0x48) + uVar20 * 8);
      (**(code **)(*(long *)(lVar11 + 8) + 0x18))();
      local_d8 = *(undefined1 **)(lVar11 + 0x10);
      local_e0 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      puVar6 = local_c8;
      (**(code **)(local_e0 + 0x18))(&local_e0);
      puVar28 = (ulong *)PTR_DAT_04bb38c0;
      puVar30 = (ulong *)PTR_DAT_04bb38c8;
      if (puVar6 == local_d8) {
LAB_03bf576c:
        if (*(int *)(lVar11 + 0x60) == 0) {
          lVar11 = (long)(int)uVar35;
          if (*(uint *)(param_2 + 0xf) <= uVar35) {
            lVar11 = 0;
          }
          lVar29 = param_2[0x10] + lVar11 * 8;
          *(char *)(lVar29 + 4) = (char)uVar20;
          *(char *)(lVar29 + 5) = (char)uVar18;
          *(byte *)(lVar29 + 2) = *(byte *)(lVar29 + 2) | 4;
          *(char *)(lVar29 + 6) = (char)uVar21 + '\x01';
          (**(code **)(local_78 + 0x18))(&local_78);
          puVar30 = (ulong *)PTR_DAT_04bb38c8;
          puVar28 = (ulong *)PTR_DAT_04bb38c0;
          lVar11 = 0;
          goto LAB_03bf5d40;
        }
        break;
      }
      uVar25 = 0;
      bVar7 = true;
      do {
        if (local_c8[uVar25] != local_d8[uVar25]) break;
        if (local_c8[uVar25] == '\0') {
          if (bVar7) goto LAB_03bf576c;
          break;
        }
        if (local_c8[uVar25 + 1] != local_d8[uVar25 + 1]) break;
        if (local_c8[uVar25 + 1] == '\0') goto LAB_03bf576c;
        if (local_c8[uVar25 + 2] != local_d8[uVar25 + 2]) break;
        if (local_c8[uVar25 + 2] == '\0') goto LAB_03bf576c;
        bVar7 = uVar25 < 0x7fffe;
        uVar25 = uVar25 + 3;
      } while (uVar25 != 0x80001);
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar5);
  }
  goto LAB_03bf5774;
  while( true ) {
    if (*(char *)(local_70 + lVar11 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03bf5da8;
    }
    if (*(char *)(local_70 + lVar11 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_03bf5da8;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) break;
LAB_03bf5d40:
    if (*(char *)(local_70 + lVar11) == '\0') {
LAB_03bf5da8:
      cVar15 = (char)lVar11;
      goto LAB_03bf5dc8;
    }
  }
  cVar15 = '\0';
LAB_03bf5dc8:
  *(char *)(lVar29 + 7) = cVar15 - (char)uVar21;
LAB_03bf5774:
  uVar35 = uVar35 + 1;
  if (*(uint *)(param_3 + 8) <= uVar35) goto LAB_03bf5dd4;
  goto LAB_03bf5784;
}

