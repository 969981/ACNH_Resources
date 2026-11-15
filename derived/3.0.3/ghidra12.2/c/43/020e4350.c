
/* WARNING: Type propagation algorithm not settling */

void FUN_020e4350(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char **ppcVar5;
  undefined1 *__src;
  byte bVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  ushort *puVar13;
  long *plVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  char *pcVar20;
  char *pcVar21;
  char cVar22;
  uint *puVar23;
  long lVar24;
  int *piVar25;
  uint uVar26;
  undefined1 *puVar27;
  char cVar28;
  char cVar29;
  uint *puVar30;
  ulong uVar31;
  uint uVar32;
  uint *puVar33;
  char *pcVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined8 *puVar37;
  undefined *puVar38;
  uint uVar39;
  long lVar40;
  undefined4 local_1f4;
  undefined **local_1f0;
  char *local_1e8;
  code *local_1e0;
  undefined8 uStack_1d8;
  long local_1b8;
  char *local_1b0;
  undefined **local_198;
  undefined4 local_190;
  undefined *local_188;
  undefined1 *local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [15];
  undefined1 local_155;
  uint local_14c [5];
  char *local_138 [2];
  undefined8 local_128;
  undefined1 auStack_124 [7];
  undefined1 local_11d;
  char *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [7];
  undefined1 local_fd;
  char *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [7];
  undefined1 local_dd;
  char *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [7];
  undefined1 local_bd;
  char *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [7];
  undefined1 local_9d;
  byte local_94 [4];
  uint local_90;
  undefined1 auStack_8c [4];
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [7];
  undefined1 local_6d;
  
  **(undefined1 **)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 0x30) = 0;
  **(undefined1 **)(param_1 + 0x50) = 0;
  **(undefined1 **)(param_1 + 0x70) = 0;
  **(undefined1 **)(param_1 + 0x90) = 0;
  **(undefined1 **)(param_1 + 0xb0) = 0;
  **(undefined1 **)(param_1 + 0xd0) = 0;
  **(undefined1 **)(param_1 + 0xf0) = 0;
  **(undefined1 **)(param_1 + 0x110) = 0;
  **(undefined1 **)(param_1 + 0x130) = 0;
  **(undefined1 **)(param_1 + 0x150) = 0;
  **(undefined1 **)(param_1 + 0x170) = 0;
  **(undefined1 **)(param_1 + 400) = 0;
  **(undefined1 **)(param_1 + 0x1b0) = 0;
  puVar38 = PTR_DAT_04bb2020;
  **(undefined1 **)(param_1 + 0x1d0) = 0;
  **(undefined1 **)(param_1 + 0x1f0) = 0;
  local_138[1] = "MuseumCafeAmiiboCustomer";
  local_138[0] = puVar38 + 0x10;
  sVar8 = FUN_0273ea30(local_138);
  if (sVar8 == 0) {
    return;
  }
  local_138[1] = "SetMuseumCafeAmiiboCustomer";
  local_138[0] = puVar38 + 0x10;
  iVar9 = FUN_02743000(local_138);
  puVar1 = PTR_DAT_04bb3768;
  if (iVar9 == 0) {
    return;
  }
  local_6d = 0;
  local_78 = 8;
  local_80 = local_74;
  local_74[0] = '\0';
  local_88 = PTR_DAT_04bb3768 + 0x10;
  FUN_02209f40(&local_88,auStack_8c,&local_90);
  if (*local_80 == '\0') {
    return;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_020e44d0:
    if (*pbVar16 < 8) goto LAB_020e4548;
LAB_020e44dc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020e4540:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_020e4548;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar18 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar23 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar23 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar23 & 8) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x471);
      }
    }
    local_94[0] = *pbVar16;
    if (7 < local_94[0]) goto LAB_020e4540;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020e44d0;
      }
      goto LAB_020e44dc;
    }
LAB_020e4548:
    local_94[0] = *pbVar16;
    if (7 < local_94[0]) {
      local_94[0] = 0xff;
    }
  }
  lVar18 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_94,1);
  if (lVar18 == 0) goto LAB_020e5c40;
  lVar24 = lVar18 + 0x194b0;
  if (*(long *)(lVar18 + 0x194b8) == 0) {
    lVar24 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    lVar18 = *(long *)(lVar24 + 0x28);
    if (lVar18 == 0) goto LAB_020e460c;
LAB_020e4594:
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar12 = *(long **)(lVar18 + 0x20);
      if (plVar12 == (long *)0x0) goto LAB_020e4624;
LAB_020e45bc:
      local_138[0] = *(char **)(lVar24 + 8);
      local_138[1] = *(char **)(lVar24 + 0x10);
      local_128 = 0x3ce60;
      (**(code **)(*plVar12 + 0x20))(plVar12,local_138);
      lVar40 = *(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8);
      if ((uVar11 & 1) == 0) goto LAB_020e4648;
      lVar18 = *(long *)(lVar24 + 0x28);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      lVar18 = *(long *)(lVar24 + 0x28);
      uVar11 = uVar11 & 0xffffffff;
      if ((lVar18 != 0) && (plVar12 = *(long **)(lVar18 + 0x20), plVar12 != (long *)0x0))
      goto LAB_020e45bc;
LAB_020e4624:
      lVar40 = *(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8);
      if ((uVar11 & 1) == 0) goto LAB_020e4648;
    }
    if ((lVar18 != 0) && (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar18 + 0x18))();
    }
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x194d8);
    if (lVar18 != 0) goto LAB_020e4594;
LAB_020e460c:
    lVar40 = *(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8);
  }
LAB_020e4648:
  puVar3 = PTR_DAT_04bbaaa8;
  puVar2 = PTR_DAT_04bbaaa0;
  local_138[0] = puVar1 + 0x10;
  local_11d = 0;
  local_138[1] = auStack_124;
  local_118 = local_138[0];
  puStack_110 = local_104;
  local_108 = 8;
  local_fd = 0;
  local_e8 = 8;
  local_dd = 0;
  local_c8 = 8;
  local_bd = 0;
  local_a8 = 8;
  local_9d = 0;
  local_128 = CONCAT35(auStack_124._1_3_,8);
  local_104[0] = 0;
  local_e4[0] = 0;
  local_c4[0] = 0;
  local_a4[0] = 0;
  local_f8 = local_138[0];
  puStack_f0 = local_e4;
  local_b8 = local_138[0];
  puStack_b0 = local_a4;
  local_d8 = local_138[0];
  puStack_d0 = local_c4;
  if ((int)local_90 < 0) {
    (**(code **)(local_88 + 0x18))(&local_88);
    FUN_038d1270(local_138,&DAT_0409e973,local_80);
    (**(code **)(local_88 + 0x18))(&local_88);
    FUN_038d1270(param_1 + 0x28,&DAT_0409e973,local_80);
    *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) | 2;
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bb3968;
    uVar39 = *(uint *)(lVar18 + 0x17580);
    uVar26 = uVar39;
    if ((int)uVar39 < 1) {
      if ((*(long *)(lVar18 + 0x17470) == 0) ||
         (puVar23 = *(uint **)(*(long *)(lVar18 + 0x17470) + 8), puVar23 == (uint *)0x0)) {
        uVar26 = 0;
      }
      else {
        uVar26 = *puVar23;
      }
    }
    uVar36 = *(uint *)(lVar18 + 0x173a8);
    if ((int)uVar36 < 1) {
      lVar24 = *(long *)(lVar18 + 0x17298);
      if ((lVar24 == 0) || (puVar23 = *(uint **)(lVar24 + 8), puVar23 == (uint *)0x0)) {
        uVar36 = 0;
      }
      else {
        uVar36 = *puVar23;
      }
    }
    if (0 < (int)uVar26) {
      uVar11 = 0;
      cVar29 = *PTR_DAT_04bbaaa0;
      do {
        if ((int)uVar39 < 1) {
          if ((((*(long *)(lVar18 + 0x17470) != 0) &&
               (puVar23 = *(uint **)(*(long *)(lVar18 + 0x17470) + 8), puVar23 != (uint *)0x0)) &&
              ((*(uint *)(lVar18 + 0x17488) <= uVar11 ||
               (*(char *)(*(long *)(lVar18 + 0x17490) + uVar11) != '\0')))) &&
             (((uVar11 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar11 + (uint)(ushort)puVar23[2] * 8 +
                                      iVar9) + (long)puVar23);
            goto joined_r0x020e4940;
          }
        }
        else if (uVar11 < uVar39) {
          uVar31 = uVar11;
          if (*(uint *)(lVar18 + 0x17570) <= uVar11) {
            uVar31 = 0;
          }
          puVar23 = *(uint **)(*(long *)(lVar18 + 0x17578) + uVar31 * 8);
joined_r0x020e4940:
          if (puVar23 != (uint *)0x0) {
            uVar15 = *puVar23;
            uVar32 = 0;
            if (uVar15 != 0) {
              do {
                puVar33 = (uint *)(ulong)uVar15;
                if (cVar29 != '\0') {
                  uVar15 = *(uint *)puVar3;
                  if ((int)uVar15 < 0) {
                    if (uVar15 == 0xffffffff) {
                      if (puVar33 != (uint *)0x0) goto LAB_020e4870;
                      uVar32 = 0;
                    }
                    else {
LAB_020e47e8:
                      uVar32 = 0;
                    }
                  }
                  else {
                    uVar32 = 0;
                    if ((ushort *)((ulong)uVar15 + (long)puVar23) != (ushort *)0x0) {
                      uVar32 = (uint)*(ushort *)((ulong)uVar15 + (long)puVar23);
                    }
                  }
                  goto LAB_020e47f0;
                }
                cVar29 = '\x01';
                *puVar2 = 1;
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                puVar33 = (uint *)(ulong)*puVar23;
                uVar32 = 0;
                if (puVar33 == (uint *)0x0) goto LAB_020e47f0;
LAB_020e4870:
                if (puVar23 == puVar33) goto LAB_020e47e8;
                lVar24 = 0xc;
                if (*(char *)((long)puVar23 + (10 - (long)puVar33)) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar23 + (lVar24 - (long)puVar33);
                if (lVar24 == 0) goto LAB_020e47e8;
                uVar31 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar33));
                *(undefined4 *)puVar3 = 0xfffffffe;
                uVar32 = 0;
                if (uVar31 == 0) goto LAB_020e47f0;
                piVar25 = (int *)(lVar24 + 4);
                while (piVar25[-1] != 0x4be509de) {
                  piVar25 = piVar25 + 2;
                  uVar31 = uVar31 - 1;
                  if (uVar31 == 0) {
                    uVar32 = 0;
                    goto LAB_020e47f0;
                  }
                }
                iVar9 = 0;
                if (*piVar25 != -1) {
                  iVar9 = *piVar25;
                }
                *(int *)puVar3 = iVar9;
                uVar15 = *puVar23;
              } while (uVar15 != 0);
              uVar32 = 0;
            }
LAB_020e47f0:
            if (local_90 == uVar32) {
              puVar13 = (ushort *)FUN_01023000(puVar23,1,0xd261e06c,*(undefined8 *)PTR_DAT_04bbaab0)
              ;
              if (puVar13 == (ushort *)0x0) {
                local_14c[0] = 0;
              }
              else {
                local_14c[0] = (uint)*puVar13;
              }
              puVar13 = (ushort *)FUN_01023000(puVar23,2,0xef01c9dc,*(undefined8 *)PTR_DAT_04bbaab8)
              ;
              if (puVar13 == (ushort *)0x0) {
                local_14c[1] = 0;
              }
              else {
                local_14c[1] = (uint)*puVar13;
              }
              puVar13 = (ushort *)FUN_01023000(puVar23,3,0xa8a1b30c,*(undefined8 *)PTR_DAT_04bbaac0)
              ;
              if (puVar13 == (ushort *)0x0) {
                local_14c[2] = 0;
              }
              else {
                local_14c[2] = (uint)*puVar13;
              }
              puVar13 = (ushort *)FUN_01023000(puVar23,4,0x95c19abc,*(undefined8 *)PTR_DAT_04bbaac8)
              ;
              if (puVar13 == (ushort *)0x0) {
                local_14c[3] = 0;
              }
              else {
                local_14c[3] = (uint)*puVar13;
              }
              puVar13 = (ushort *)FUN_01023000(puVar23,5,0xeadde7f7,*(undefined8 *)PTR_DAT_04bbaad0)
              ;
              if (puVar13 == (ushort *)0x0) {
                local_14c[4] = 0;
              }
              else {
                local_14c[4] = (uint)*puVar13;
              }
              if (0 < (int)uVar36) {
                lVar24 = 0;
                puVar1 = PTR_DAT_04bb35a0 + 0x10;
                puVar2 = PTR_DAT_04bb2ab0 + 0x10;
                puVar3 = puVar38 + 0x10;
                puVar4 = PTR_DAT_04bb3750 + 0x10;
                puVar33 = (uint *)PTR_DAT_04bbaae0;
                pcVar34 = PTR_DAT_04bbaad8;
                pcVar21 = PTR_DAT_04bbaaa0;
                puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
                goto LAB_020e4b1c;
              }
              break;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar26);
    }
  }
LAB_020e574c:
  puVar1 = PTR_DAT_04bb40b8;
  puVar38 = PTR_DAT_04bb40a8;
  lVar18 = 0;
  do {
    ppcVar5 = local_138 + lVar18 * 4;
    if (*local_138[lVar18 * 4 + 1] != '\0') {
      (**(code **)(*ppcVar5 + 0x18))(ppcVar5);
      (**(code **)(*ppcVar5 + 0x18))(ppcVar5);
      pcVar34 = local_138[lVar18 * 4 + 1];
      (**(code **)(local_88 + 0x18))(&local_88);
      if ((int)local_90 < 0) {
        if (pcVar34 == local_80) {
LAB_020e59fc:
          uVar39 = 1;
        }
        else {
          pcVar34 = local_138[lVar18 * 4 + 1];
          if (*pcVar34 == *local_80) {
            if (*pcVar34 == '\0') goto LAB_020e59fc;
            uVar11 = 0;
            pcVar21 = local_80 + 1;
            do {
              if (pcVar34[uVar11 + 1] != pcVar21[uVar11]) {
                pcVar21 = (char *)0x0;
                goto LAB_020e5b84;
              }
              if (pcVar34[uVar11 + 1] == '\0') {
                pcVar21 = (char *)0x1;
                goto LAB_020e5b84;
              }
              if (pcVar34[uVar11 + 2] != pcVar21[uVar11 + 1]) {
                pcVar21 = (char *)0x0;
                uVar11 = uVar11 + 1;
                goto LAB_020e5b84;
              }
              if (pcVar34[uVar11 + 2] == '\0') {
                uVar11 = uVar11 + 1;
                pcVar21 = (char *)0x1;
                goto LAB_020e5b84;
              }
              if (uVar11 == 0x7fffe) {
                uVar11 = 0x80000;
                goto LAB_020e5b84;
              }
              lVar24 = uVar11 + 3;
              uVar31 = uVar11 + 2;
              if (pcVar34[lVar24] != pcVar21[uVar11 + 2]) {
                pcVar21 = (char *)0x0;
                goto LAB_020e5b80;
              }
              uVar11 = uVar11 + 3;
            } while (pcVar34[lVar24] != '\0');
            pcVar21 = (char *)0x1;
LAB_020e5b80:
            uVar11 = uVar31;
LAB_020e5b84:
            uVar39 = (uint)(uVar11 < 0x80000) & (uint)pcVar21;
            if (-1 < (int)local_90) goto LAB_020e58d0;
          }
          else {
            uVar39 = 0;
          }
        }
LAB_020e5a08:
        uVar35 = *(undefined8 *)PTR_DAT_04bb4138;
        (**(code **)(*ppcVar5 + 0x18))(ppcVar5);
        uVar10 = FUN_006bd550(local_138[lVar18 * 4 + 1],0);
        local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,uVar10);
        puVar23 = (uint *)FUN_0079e770(uVar35,&local_1f0);
        if (puVar23 != (uint *)0x0) {
          uVar26 = *puVar23;
          if (uVar26 != 0) {
            cVar29 = *PTR_DAT_04bb40b0;
            do {
              if (cVar29 == '\0') {
                cVar29 = '\x01';
                *PTR_DAT_04bb40b0 = 1;
                *(undefined4 *)(puVar1 + 0xa0) = 0xffffffff;
                *(undefined8 *)puVar1 = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
                uVar26 = *puVar23;
              }
              else {
                uVar36 = *(uint *)(puVar1 + 0x30);
                if (-1 < (int)uVar36) {
                  if ((ushort *)((ulong)uVar36 + (long)puVar23) != (ushort *)0x0) {
                    uVar26 = (uint)*(ushort *)((ulong)uVar36 + (long)puVar23);
                    goto joined_r0x020e5ba8;
                  }
                  break;
                }
                if (uVar36 != 0xffffffff) break;
              }
              puVar33 = (uint *)(ulong)uVar26;
              uVar26 = 0;
              if ((puVar33 == (uint *)0x0) || (uVar26 = 0, puVar23 == puVar33))
              goto joined_r0x020e5ba8;
              lVar24 = 0xc;
              if (*(char *)((long)puVar23 + (10 - (long)puVar33)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar23 + (lVar24 - (long)puVar33);
              if (lVar24 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar33));
              *(undefined4 *)(puVar1 + 0x30) = 0xfffffffe;
              uVar26 = 0;
              if (uVar11 == 0) goto joined_r0x020e5ba8;
              piVar25 = (int *)(lVar24 + 4);
              while (piVar25[-1] != 0x504428b5) {
                piVar25 = piVar25 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) {
                  uVar26 = 0;
                  goto joined_r0x020e5ba8;
                }
              }
              iVar9 = 0;
              if (*piVar25 != -1) {
                iVar9 = *piVar25;
              }
              *(int *)(puVar1 + 0x30) = iVar9;
              uVar26 = *puVar23;
            } while (uVar26 != 0);
          }
          uVar26 = 0;
          goto joined_r0x020e5ba8;
        }
      }
      else {
        if (pcVar34 == local_80) {
          uVar39 = 1;
        }
        else {
          pcVar34 = local_138[lVar18 * 4 + 1];
          cVar29 = *pcVar34;
          uVar39 = (uint)(cVar29 == *local_80);
          if ((cVar29 == *local_80) && (cVar29 != '\0')) {
            cVar29 = pcVar34[1];
            uVar39 = (uint)(cVar29 == local_80[1]);
            if ((cVar29 == local_80[1]) && (cVar29 != '\0')) {
              uVar39 = (uint)(pcVar34[2] == local_80[2]);
            }
          }
          if ((int)local_90 < 0) goto LAB_020e5a08;
        }
LAB_020e58d0:
        uVar35 = *(undefined8 *)PTR_DAT_04bb4130;
        (**(code **)(*ppcVar5 + 0x18))(ppcVar5);
        uVar10 = FUN_006bd550(local_138[lVar18 * 4 + 1],0);
        local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,uVar10);
        puVar23 = (uint *)FUN_0079e4d0(uVar35,&local_1f0);
        if (puVar23 != (uint *)0x0) {
          uVar36 = *puVar23;
          if (uVar36 != 0) {
            cVar29 = *PTR_DAT_04bb40a0;
            do {
              if (cVar29 == '\0') {
                cVar29 = '\x01';
                *PTR_DAT_04bb40a0 = 1;
                *(undefined8 *)(puVar38 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar38 = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar38 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar38 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar38 + 0x68) = 0xffffffffffffffff;
                uVar36 = *puVar23;
              }
              else {
                uVar26 = *(uint *)(puVar38 + 0x40);
                if (-1 < (int)uVar26) {
                  if ((ushort *)((ulong)uVar26 + (long)puVar23) != (ushort *)0x0) {
                    uVar26 = (uint)*(ushort *)((ulong)uVar26 + (long)puVar23);
                    goto joined_r0x020e5ba8;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              uVar26 = 0;
              puVar33 = (uint *)(ulong)uVar36;
              if ((puVar33 == (uint *)0x0) || (uVar26 = 0, puVar23 == puVar33))
              goto joined_r0x020e5ba8;
              lVar24 = 0xc;
              if (*(char *)((long)puVar23 + (10 - (long)puVar33)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar23 + (lVar24 - (long)puVar33);
              if (lVar24 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar33));
              *(undefined4 *)(puVar38 + 0x40) = 0xfffffffe;
              uVar26 = 0;
              if (uVar11 == 0) goto joined_r0x020e5ba8;
              piVar25 = (int *)(lVar24 + 4);
              while (piVar25[-1] != 0x54706054) {
                piVar25 = piVar25 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) {
                  uVar26 = 0;
                  goto joined_r0x020e5ba8;
                }
              }
              iVar9 = 0;
              if (*piVar25 != -1) {
                iVar9 = *piVar25;
              }
              *(int *)(puVar38 + 0x40) = iVar9;
              uVar36 = *puVar23;
            } while (uVar36 != 0);
          }
          uVar26 = 0;
joined_r0x020e5ba8:
          if (uVar39 != 0) {
            uVar39 = uVar26;
            if (-1 < (int)local_90) {
              uVar39 = uVar26 + 0x1ae;
            }
            if ((uVar39 < 0x1fe) &&
               (cVar29 = *(char *)(lVar40 + 0x38888 + (ulong)uVar39), cVar29 != -1)) {
              *(char *)(lVar40 + 0x38888 + (ulong)uVar39) = cVar29 + '\x01';
            }
          }
          if (-1 < (int)local_90) {
            uVar26 = uVar26 + 0x1ae;
          }
          if ((uVar26 < 0x1fe) &&
             (cVar29 = *(char *)(lVar40 + 0x38a86 + (ulong)uVar26), cVar29 != -1)) {
            *(char *)(lVar40 + 0x38a86 + (ulong)uVar26) = cVar29 + '\x01';
          }
        }
      }
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 5);
LAB_020e5c40:
  *(undefined1 *)(param_1 + 0x25c) = 1;
  return;
LAB_020e4b1c:
  uVar39 = local_14c[lVar24];
  if (uVar39 != 0) {
    cVar29 = *pcVar34;
    uVar11 = 0;
    uVar26 = *(uint *)(lVar18 + 0x173a8);
    do {
      if ((int)uVar26 < 1) {
        lVar17 = *(long *)(lVar18 + 0x17298);
        if (((lVar17 != 0) && (puVar19 = *(uint **)(lVar17 + 8), puVar19 != (uint *)0x0)) &&
           (((*(uint *)(lVar18 + 0x172b0) <= uVar11 ||
             (*(char *)(*(long *)(lVar18 + 0x172b8) + uVar11) != '\0')) &&
            (((uVar11 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * (int)uVar11 + (uint)(ushort)puVar19[2] * 8 + iVar9
                                    ) + (long)puVar19);
          goto joined_r0x020e4c90;
        }
      }
      else if (uVar11 < uVar26) {
        uVar31 = uVar11;
        if (*(uint *)(lVar18 + 0x17398) <= uVar11) {
          uVar31 = 0;
        }
        puVar19 = *(uint **)(*(long *)(lVar18 + 0x173a0) + uVar31 * 8);
joined_r0x020e4c90:
        if (puVar19 != (uint *)0x0) {
          uVar15 = *puVar19;
          uVar32 = 0;
          if (uVar15 != 0) {
            do {
              puVar30 = (uint *)(ulong)uVar15;
              if (cVar29 != '\0') {
                uVar15 = *puVar33;
                if ((int)uVar15 < 0) {
                  if (uVar15 == 0xffffffff) {
                    if (puVar30 != (uint *)0x0) goto LAB_020e4bb8;
                    uVar32 = 0;
                  }
                  else {
LAB_020e4b34:
                    uVar32 = 0;
                  }
                }
                else {
                  uVar32 = 0;
                  if ((ushort *)((ulong)uVar15 + (long)puVar19) != (ushort *)0x0) {
                    uVar32 = (uint)*(ushort *)((ulong)uVar15 + (long)puVar19);
                  }
                }
                goto LAB_020e4b40;
              }
              cVar29 = '\x01';
              *pcVar34 = '\x01';
              puVar33[0] = 0xffffffff;
              puVar33[1] = 0xffffffff;
              puVar33[2] = 0xffffffff;
              puVar33[3] = 0xffffffff;
              puVar30 = (uint *)(ulong)*puVar19;
              uVar32 = 0;
              if (puVar30 == (uint *)0x0) goto LAB_020e4b40;
LAB_020e4bb8:
              if (puVar19 == puVar30) goto LAB_020e4b34;
              lVar17 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar30)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar19 + (lVar17 - (long)puVar30);
              if (lVar17 == 0) goto LAB_020e4b34;
              uVar31 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar30));
              *puVar33 = 0xfffffffe;
              uVar32 = 0;
              if (uVar31 == 0) goto LAB_020e4b40;
              puVar30 = (uint *)(lVar17 + 4);
              while (puVar30[-1] != 0x54706054) {
                puVar30 = puVar30 + 2;
                uVar31 = uVar31 - 1;
                if (uVar31 == 0) {
                  uVar32 = 0;
                  goto LAB_020e4b40;
                }
              }
              uVar15 = 0;
              if (*puVar30 != 0xffffffff) {
                uVar15 = *puVar30;
              }
              *puVar33 = uVar15;
              uVar15 = *puVar19;
            } while (uVar15 != 0);
            uVar32 = 0;
          }
LAB_020e4b40:
          if (uVar39 == uVar32) {
            uVar39 = (uint)lVar24;
            if (lVar24 != 4) goto LAB_020e4d78;
            uVar39 = *puVar23;
            if (uVar39 == 0) goto LAB_020e4d70;
            cVar22 = *pcVar21;
            goto LAB_020e4cc0;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar36);
  }
  goto LAB_020e4b10;
LAB_020e4cc0:
  if (cVar22 == '\0') {
    cVar22 = '\x01';
    *pcVar21 = '\x01';
    *puVar37 = 0xffffffffffffffff;
    puVar37[1] = 0xffffffffffffffff;
    puVar37[2] = 0xffffffffffffffff;
    puVar37[3] = 0xffffffffffffffff;
    uVar39 = *puVar23;
LAB_020e4cf0:
    puVar30 = (uint *)(ulong)uVar39;
    cVar28 = -1;
    if ((puVar30 == (uint *)0x0) || (puVar23 == puVar30)) goto LAB_020e4d74;
    lVar17 = 0xc;
    if (*(char *)((long)puVar23 + (10 - (long)puVar30)) != '\0') {
      lVar17 = 0x1c;
    }
    lVar17 = (long)puVar23 + (lVar17 - (long)puVar30);
    if (lVar17 == 0) goto LAB_020e4d70;
    uVar11 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar30));
    *(undefined4 *)((long)puVar37 + 0x1c) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_020e4d70;
    piVar25 = (int *)(lVar17 + 4);
    while (piVar25[-1] != 0x53bb0673) {
      piVar25 = piVar25 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_020e4d70;
    }
    iVar9 = 0;
    if (*piVar25 != -1) {
      iVar9 = *piVar25;
    }
    *(int *)((long)puVar37 + 0x1c) = iVar9;
    uVar39 = *puVar23;
    if (uVar39 == 0) goto LAB_020e4d70;
    goto LAB_020e4cc0;
  }
  uVar26 = *(uint *)((long)puVar37 + 0x1c);
  if ((int)uVar26 < 0) {
    if (uVar26 != 0xffffffff) goto LAB_020e4d70;
    goto LAB_020e4cf0;
  }
  if ((char *)((ulong)uVar26 + (long)puVar23) != (char *)0x0) {
    cVar28 = *(char *)((ulong)uVar26 + (long)puVar23);
    goto LAB_020e4d74;
  }
LAB_020e4d70:
  cVar28 = -1;
LAB_020e4d74:
  uVar39 = (uint)cVar28;
LAB_020e4d78:
  uVar26 = *puVar19;
  if (uVar26 != 0) {
    do {
      if (cVar29 == '\0') {
        cVar29 = '\x01';
        *pcVar34 = '\x01';
        puVar33[0] = 0xffffffff;
        puVar33[1] = 0xffffffff;
        puVar33[2] = 0xffffffff;
        puVar33[3] = 0xffffffff;
        uVar26 = *puVar19;
      }
      else {
        uVar15 = puVar33[2];
        if (-1 < (int)uVar15) {
          puVar27 = (undefined1 *)((ulong)uVar15 + (long)puVar19);
          goto LAB_020e4e28;
        }
        if (uVar15 != 0xffffffff) break;
      }
      puVar30 = (uint *)(ulong)uVar26;
      puVar27 = (undefined1 *)0x0;
      if ((puVar30 == (uint *)0x0) || (puVar19 == puVar30)) goto LAB_020e4e28;
      lVar17 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar30)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar19 + (lVar17 - (long)puVar30);
      puVar27 = (undefined1 *)0x0;
      if (lVar17 == 0) goto LAB_020e4e28;
      uVar11 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar30));
      puVar33[2] = 0xfffffffe;
      if (uVar11 == 0) break;
      puVar30 = (uint *)(lVar17 + 4);
      while (puVar30[-1] != 0x2f1b930d) {
        puVar30 = puVar30 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_020e4e24;
      }
      uVar26 = 0;
      if (*puVar30 != 0xffffffff) {
        uVar26 = *puVar30;
      }
      puVar33[2] = uVar26;
      uVar26 = *puVar19;
      if (uVar26 == 0) break;
    } while( true );
  }
LAB_020e4e24:
  puVar27 = (undefined1 *)0x0;
LAB_020e4e28:
  local_155 = 0;
  __src = *(undefined1 **)PTR_PTR_04bbaae8;
  if (puVar27 != (undefined1 *)0x0) {
    __src = puVar27;
  }
  local_168 = 0x10;
  local_170 = local_164;
  if (local_164 != __src) {
    lVar17 = 0;
    do {
      if (__src[lVar17] == '\0') {
LAB_020e4eac:
        iVar9 = (int)lVar17;
        if (0xf < iVar9) {
          iVar9 = 0xf;
        }
        goto LAB_020e4eb8;
      }
      if (__src[lVar17 + 1] == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_020e4eac;
      }
      if (__src[lVar17 + 2] == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_020e4eac;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    iVar9 = 0;
LAB_020e4eb8:
    local_178 = puVar1;
    memcpy(local_164,__src,(long)iVar9);
    local_164[iVar9] = 0;
  }
  local_198 = &local_178;
  local_190 = 0;
  ppcVar5 = local_138 + lVar24 * 4;
  local_180 = &DAT_040b5039;
  local_188 = puVar3;
  local_178 = puVar2;
  FUN_0076e020(&local_198,ppcVar5);
  FUN_020e3ad0(&local_1b8,param_1,0xb);
  if (uVar39 < 0x10) {
    (**(code **)(local_178 + 0x18))(&local_178);
    FUN_038d1270(param_1 + 8 + (ulong)uVar39 * 0x20,&DAT_0409e973,local_170);
    *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) | 1 << (ulong)(uVar39 & 0x1f);
  }
  puVar33 = (uint *)PTR_DAT_04bbaae0;
  pcVar34 = PTR_DAT_04bbaad8;
  pcVar21 = PTR_DAT_04bbaaa0;
  puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
  if (*local_1b0 == '\0') goto LAB_020e4b10;
  if (uVar39 != 0xb) {
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    pcVar34 = local_1b0;
    (**(code **)(*ppcVar5 + 0x18))(ppcVar5);
    pcVar20 = local_138[lVar24 * 4 + 1];
    if (pcVar34 != pcVar20) {
      uVar11 = 0;
      bVar7 = true;
      do {
        puVar33 = (uint *)PTR_DAT_04bbaae0;
        pcVar34 = PTR_DAT_04bbaad8;
        pcVar21 = PTR_DAT_04bbaaa0;
        puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
        if (local_1b0[uVar11] != pcVar20[uVar11]) break;
        if (local_1b0[uVar11] == '\0') {
          if (bVar7) goto LAB_020e50b4;
          break;
        }
        if (local_1b0[uVar11 + 1] != pcVar20[uVar11 + 1]) break;
        if (local_1b0[uVar11 + 1] == '\0') goto LAB_020e50b4;
        if (local_1b0[uVar11 + 2] != pcVar20[uVar11 + 2]) break;
        if (local_1b0[uVar11 + 2] == '\0') goto LAB_020e50b4;
        bVar7 = uVar11 < 0x7fffe;
        uVar11 = uVar11 + 3;
      } while (uVar11 != 0x80001);
      goto LAB_020e4b10;
    }
  }
LAB_020e50b4:
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  local_1f0 = (undefined **)(puVar38 + 0x10);
  local_1e8 = local_1b0;
  uVar26 = 0;
  do {
    pcVar34 = "";
    if (uVar26 < 0xe) {
      pcVar34 = *(char **)(PTR_DAT_04bb70a8 + (ulong)uVar26 * 8 + 0x58);
    }
    (*(code *)local_1f0[3])(&local_1f0);
    if (pcVar34 == local_1e8) {
LAB_020e5198:
      (**(code **)(local_1b8 + 0x18))(&local_1b8);
      FUN_006d8678(&local_1f0,"MuseumCafeRandomVisitSp_%s",local_1b0);
      FUN_0273f3c4(&local_1f0,2);
      break;
    }
    if (*pcVar34 == *local_1e8) {
      if (*pcVar34 == '\0') goto LAB_020e5198;
      lVar17 = 0x7fffe;
      pcVar21 = local_1e8;
      while( true ) {
        if (pcVar34[1] != pcVar21[1]) break;
        if (pcVar34[1] == '\0') goto LAB_020e5198;
        if (pcVar34[2] != pcVar21[2]) break;
        if (pcVar34[2] == '\0') goto LAB_020e5198;
        if ((lVar17 == 0) || (cVar29 = pcVar34[3], cVar29 != pcVar21[3])) break;
        lVar17 = lVar17 + -3;
        pcVar21 = pcVar21 + 3;
        pcVar34 = pcVar34 + 3;
        if (cVar29 == '\0') goto LAB_020e5198;
      }
    }
    uVar15 = 0xe;
    if ((int)uVar26 < 0xe) {
      uVar15 = uVar26 + 1;
    }
    uVar26 = uVar15;
  } while (uVar15 != 0xe);
  puVar38 = PTR_DAT_04bb2020;
  local_1f0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_1e8 = "boc";
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  pcVar34 = local_1b0;
  (*(code *)local_1f0[3])(&local_1f0);
  if (pcVar34 == local_1e8) {
LAB_020e52a0:
    local_1e8 = "CafeAmiiboCallFromCounter_boc";
LAB_020e54b0:
    local_1f0 = (undefined **)(puVar38 + 0x10);
    FUN_02743234(&local_1f0,1);
  }
  else {
    uVar11 = 0;
    bVar7 = true;
    do {
      if (local_1b0[uVar11] != local_1e8[uVar11]) break;
      if (local_1b0[uVar11] == '\0') {
        if (bVar7) goto LAB_020e52a0;
        break;
      }
      if (local_1b0[uVar11 + 1] != local_1e8[uVar11 + 1]) break;
      if (local_1b0[uVar11 + 1] == '\0') goto LAB_020e52a0;
      if (local_1b0[uVar11 + 2] != local_1e8[uVar11 + 2]) break;
      if (local_1b0[uVar11 + 2] == '\0') goto LAB_020e52a0;
      bVar7 = uVar11 < 0x7fffe;
      uVar11 = uVar11 + 3;
    } while (uVar11 != 0x80001);
    local_1f0 = (undefined **)(puVar38 + 0x10);
    local_1e8 = "bey";
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    pcVar34 = local_1b0;
    (*(code *)local_1f0[3])(&local_1f0);
    if (pcVar34 == local_1e8) {
LAB_020e538c:
      local_1e8 = "CafeAmiiboCallFromCounter_bey";
      goto LAB_020e54b0;
    }
    uVar11 = 0;
    bVar7 = true;
    do {
      if (local_1b0[uVar11] != local_1e8[uVar11]) break;
      if (local_1b0[uVar11] == '\0') {
        if (bVar7) goto LAB_020e538c;
        break;
      }
      if (local_1b0[uVar11 + 1] != local_1e8[uVar11 + 1]) break;
      if (local_1b0[uVar11 + 1] == '\0') goto LAB_020e538c;
      if (local_1b0[uVar11 + 2] != local_1e8[uVar11 + 2]) break;
      if (local_1b0[uVar11 + 2] == '\0') goto LAB_020e538c;
      bVar7 = uVar11 < 0x7fffe;
      uVar11 = uVar11 + 3;
    } while (uVar11 != 0x80001);
    local_1f0 = (undefined **)(puVar38 + 0x10);
    local_1e8 = "doc";
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    pcVar34 = local_1b0;
    (*(code *)local_1f0[3])(&local_1f0);
    if (pcVar34 == local_1e8) {
LAB_020e5470:
      local_1e8 = "CafeAmiiboCallFromCounter_doc";
      goto LAB_020e54b0;
    }
    uVar11 = 0;
    bVar7 = true;
    do {
      if (local_1b0[uVar11] != local_1e8[uVar11]) break;
      if (local_1b0[uVar11] == '\0') {
        if (bVar7) goto LAB_020e5470;
        break;
      }
      if (local_1b0[uVar11 + 1] != local_1e8[uVar11 + 1]) break;
      if (local_1b0[uVar11 + 1] == '\0') goto LAB_020e5470;
      if (local_1b0[uVar11 + 2] != local_1e8[uVar11 + 2]) break;
      if (local_1b0[uVar11 + 2] == '\0') goto LAB_020e5470;
      bVar7 = uVar11 < 0x7fffe;
      uVar11 = uVar11 + 3;
    } while (uVar11 != 0x80001);
    local_1f0 = (undefined **)(puVar38 + 0x10);
    local_1e8 = "hgh";
    uVar11 = FUN_00710cb0(&local_1b8,&local_1f0);
    if ((uVar11 & 1) != 0) {
      local_1e8 = "CafeAmiiboCallFromCounter_hgh";
      goto LAB_020e54b0;
    }
  }
  if (uVar39 < 0x10) {
    *(undefined4 *)(param_1 + 0x21c + (ulong)uVar39 * 4) = 0;
  }
  local_1f4 = 0xb;
  local_1e0 = FUN_020e4178;
  uStack_1d8 = 0;
  local_1e8 = (char *)&local_1f4;
  local_1f0 = &PTR_FUN_04a74088;
  iVar9 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar9 == 0) {
    puVar19 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    puVar37 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    lVar17 = (long)iVar9 << 3;
    do {
      puVar19 = (uint *)*puVar37;
      uVar11 = (*(code *)*local_1f0)(&local_1f0,puVar19);
      if ((uVar11 & 1) != 0) goto LAB_020e5548;
      puVar37 = puVar37 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
    puVar19 = (uint *)PTR_DAT_04bb3238;
LAB_020e5548:
    puVar38 = PTR_DAT_04bb2020;
  }
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  puVar33 = (uint *)PTR_DAT_04bbaae0;
  pcVar34 = PTR_DAT_04bbaad8;
  pcVar21 = PTR_DAT_04bbaaa0;
  puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
  if (lVar17 == 0) goto LAB_020e4b10;
  uVar39 = *puVar19;
  if ((((uVar39 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar39 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar39)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)PTR_DAT_04bb27c0;
    iVar9 = (**(code **)(*plVar14 + 0x60))();
    if (iVar9 < 0x11) {
      uVar39 = 1;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_020e564c;
      uVar39 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020e564c:
    uVar39 = 0;
  }
  puVar33 = (uint *)PTR_DAT_04bbaae0;
  pcVar34 = PTR_DAT_04bbaad8;
  pcVar21 = PTR_DAT_04bbaaa0;
  puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
  if (plVar12 != (long *)0x0) {
    lVar17 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = puVar4;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar11 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    puVar38 = PTR_DAT_04bb2020;
    uVar26 = 0;
    if ((int)lVar17 == 1) {
      uVar26 = uVar39;
    }
    puVar33 = (uint *)PTR_DAT_04bbaae0;
    pcVar34 = PTR_DAT_04bbaad8;
    pcVar21 = PTR_DAT_04bbaaa0;
    puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
    if (((uVar11 & 1) != 0) && (uVar26 != 0)) {
      FUN_006fb3d0(plVar12);
      puVar33 = (uint *)PTR_DAT_04bbaae0;
      pcVar34 = PTR_DAT_04bbaad8;
      pcVar21 = PTR_DAT_04bbaaa0;
      puVar37 = (undefined8 *)PTR_DAT_04bbaaa8;
    }
  }
LAB_020e4b10:
  lVar24 = lVar24 + 1;
  if (lVar24 == 5) goto LAB_020e574c;
  goto LAB_020e4b1c;
}

