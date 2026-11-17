
void FUN_02a19170(long param_1,long param_2)

{
  bool bVar1;
  MutexType *pMVar2;
  int *piVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined8 *puVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined1 uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  uint *puVar28;
  char *pcVar29;
  int iVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
  undefined4 *puVar34;
  undefined1 uVar35;
  uint uVar36;
  undefined4 local_23c;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined8 uStack_210;
  uint local_204;
  int local_200 [2];
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined8 uStack_1e8;
  int local_1e0 [6];
  undefined8 uStack_1c8;
  int local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  uint uStack_1a8;
  char local_1a4;
  undefined1 uStack_1a3;
  char cStack_1a2;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  uint *local_70;
  
  cVar13 = *(char *)(param_2 + 1);
  uVar31 = *(undefined8 *)(param_1 + 0x1bc64);
  lVar8 = *(long *)(param_2 + 8);
  lVar9 = *(long *)(param_2 + 0x10);
  uStack_1a0._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0x20);
  uStack_1a0._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  local_1b8._4_4_ = *(undefined4 *)(param_1 + 0x1bc5c);
  local_1b0._0_4_ = *(undefined4 *)(param_1 + 0x1bc60);
  local_1b8._0_4_ = CONCAT31(local_1b8._1_3_,*(char *)(param_1 + 0x1bc58));
  uVar20 = *(undefined4 *)(param_1 + 0x1bc6c);
  local_1b0._4_4_ = (int)uVar31;
  uStack_1a8 = (uint)((ulong)uVar31 >> 0x20);
  iVar21 = *(int *)(param_2 + 0x40);
  local_1a4 = (char)uVar20;
  uStack_1a3 = (undefined1)((uint)uVar20 >> 8);
  cStack_1a2 = (char)((uint)uVar20 >> 0x10);
  uStack_1a1 = (undefined1)((uint)uVar20 >> 0x18);
  local_23c = *(undefined4 *)(param_2 + 0x44);
  FUN_0298cf50(param_1 + 0x518,&local_1b8);
  FUN_029e57f0(param_1 + 0x7958);
  FUN_029f0b80(param_1 + 0x90a0);
  FUN_029c2c90(param_1 + 0xa7e0);
  FUN_029ae480(param_1 + 0xd5f0);
  FUN_029df740(param_1 + 0x10400);
  lVar24 = *(long *)PTR_DAT_04bb26a8;
  if (*(char *)(param_1 + 0x1bc58) == '\0') {
LAB_02a1925c:
    uVar10 = *(uint *)(lVar24 + 0x728);
    if (uVar10 != 0xffffffff) {
      if (*(uint *)(lVar24 + 0x770) <= uVar10) {
        uVar10 = 0;
      }
      lVar24 = *(long *)(lVar24 + 0x778) + (long)(int)uVar10 * 400;
      goto LAB_02a192cc;
    }
    iVar19 = -1;
    bVar18 = 0 < *(int *)(param_1 + 0xc);
  }
  else {
    iVar19 = *(int *)(lVar24 + 0x7c0);
    if (iVar19 == 0) {
      lVar24 = FUN_029993c0(lVar24 + 0x7c8,(undefined8 *)(param_1 + 0x1bc64),2);
    }
    else {
      if (iVar19 == -1) goto LAB_02a1925c;
      uVar10 = iVar19 - 1;
      if (*(uint *)(lVar24 + 0x2e70) <= uVar10) {
        uVar10 = 0;
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0x2e78) + (long)(int)uVar10 * 0x228 + 0x28);
    }
LAB_02a192cc:
    iVar19 = -1;
    bVar18 = 0 < *(int *)(param_1 + 0xc);
    if ((lVar24 != 0) && (0 < *(int *)(param_1 + 0xc))) {
      iVar19 = *(int *)(lVar24 + 0xc);
      bVar18 = true;
    }
  }
  iVar23 = -1;
  iVar11 = 0;
  if (iVar19 != 99999 && -1 < iVar19) {
    iVar11 = iVar19;
  }
  *(int *)(param_1 + 0x1a060) = iVar11;
  iVar19 = -1;
  lVar24 = *(long *)(lVar8 + 0x38);
  if ((lVar24 != 0) && (bVar18)) {
    iVar19 = *(int *)(lVar24 + 0xc);
    iVar23 = *(int *)(lVar24 + 0x10);
  }
  lVar24 = param_1 + 0x288;
  lVar25 = *(long *)(param_1 + 0x310);
  iVar11 = 0;
  if (iVar19 != 99999 && -1 < iVar19) {
    iVar11 = iVar19;
  }
  if ((lVar25 == 0) || (uVar10 = *(uint *)(param_1 + 0x31c), uVar10 == 0)) {
LAB_02a194b8:
    bVar18 = false;
  }
  else {
    uVar36 = 0;
    if (uVar10 != 0) {
      uVar36 = 0xb7fae0fb / uVar10;
    }
    uVar36 = 0xb7fae0fb - uVar36 * uVar10;
    uVar7 = uVar36;
    do {
      iVar19 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3))
      ;
      if (iVar19 == -0x48051f05) {
        uVar36 = *(uint *)(lVar25 + (long)(int)uVar7 * 8 + 4);
        if ((uVar36 < *(uint *)(param_1 + 0x2e0)) &&
           (lVar33 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar36 * 8), lVar33 != 0)) {
          bVar18 = *(int *)(lVar33 + 0x38) != 0;
          goto joined_r0x02a193cc;
        }
        break;
      }
      if (iVar19 == 0) break;
      uVar6 = 0;
      if ((int)(uVar7 + 1) < (int)uVar10) {
        uVar6 = uVar7 + 1;
      }
      uVar7 = uVar6;
    } while (uVar6 != uVar36);
    bVar18 = false;
joined_r0x02a193cc:
    if ((*(char *)(param_1 + 0x1a0c8) != '\0') && (!bVar18)) {
      uVar36 = 0;
      if (uVar10 != 0) {
        uVar36 = 0x28a547ac / uVar10;
      }
      uVar36 = 0x28a547ac - uVar36 * uVar10;
      uVar32 = (ulong)uVar36;
      uVar7 = uVar36;
      while (iVar19 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar7 << 3)), iVar19 != 0) {
        if (iVar19 == 0x28a547ac) {
          uVar7 = *(uint *)(lVar25 + (long)(int)uVar7 * 8 + 4);
          if (((uVar7 < *(uint *)(param_1 + 0x2e0)) &&
              (lVar33 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar7 * 8), lVar33 != 0))
             && (*(int *)(lVar33 + 0x38) != 0)) {
            bVar18 = true;
            goto LAB_02a194bc;
          }
          break;
        }
        uVar6 = 0;
        if ((int)(uVar7 + 1) < (int)uVar10) {
          uVar6 = uVar7 + 1;
        }
        uVar7 = uVar6;
        if (uVar6 == uVar36) break;
      }
      do {
        iVar19 = *(int *)(lVar25 + (-(uVar32 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3));
        if (iVar19 == 0) goto LAB_02a194b8;
        iVar30 = (int)uVar32;
        if (iVar19 == 0x28a547ac) {
          uVar10 = *(uint *)(lVar25 + (long)iVar30 * 8 + 4);
          if (((uVar10 < *(uint *)(param_1 + 0x2e0)) &&
              (lVar25 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar10 * 8), lVar25 != 0))
             && (lVar25 = *(long *)(lVar25 + 0x30), lVar25 != 0)) {
            bVar18 = *(int *)(lVar25 + 0x48) == 3;
            break;
          }
          goto LAB_02a194b8;
        }
        uVar7 = 0;
        if (iVar30 + 1 < (int)uVar10) {
          uVar7 = iVar30 + 1;
        }
        uVar32 = (ulong)uVar7;
        if (uVar7 == uVar36) goto LAB_02a194b8;
      } while( true );
    }
  }
LAB_02a194bc:
  *(bool *)(lVar9 + 0xc) = bVar18;
  local_1e0[0] = -1;
  local_1e0[1] = 0;
  local_1e0[2] = 0;
  local_1e0[3] = 0;
  local_1e0[4] = 0;
  local_1e0[5] = 0;
  uStack_1c8._0_4_ = 0;
  uStack_1c8._4_4_ = 0;
  if (iVar11 < 1) {
    bVar1 = (bool)(bVar18 ^ 1);
    if (*(char *)(param_1 + 0x1a0c8) == '\0') {
      bVar1 = true;
    }
    uStack_1f8 = (uint *)CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
    if (!bVar1) goto LAB_02a194f0;
LAB_02a195f0:
    plVar5 = (long *)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
    local_1b8 = (uint *)0x0;
    local_1b0._0_4_ = -1;
    local_1b0._4_4_ = -1;
  }
  else {
LAB_02a194f0:
    uVar32 = FUN_03f11150(lVar24,local_1e0);
    if ((((uVar32 & 1) == 0) && (*(char *)(param_1 + 0x1a0c8) != '\0')) && (!(bool)(bVar18 ^ 1))) {
      uVar32 = FUN_03f11150(lVar24,local_1e0,0x28a547ac);
    }
    if ((uVar32 & 1) == 0) {
LAB_02a195dc:
      if (iVar23 < 0xfa1) {
        iVar23 = 4000;
      }
      uStack_1f8 = (uint *)CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
      if ((*(char *)(param_1 + 0x1a0c8) == '\0') &&
         (uStack_1f8 = (uint *)CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8), 0 < iVar11)) {
        uStack_1a8 = uStack_1a8 & 0xffffff00;
        local_1b8 = &uStack_1a8;
        local_1b0._0_4_ = 0;
        local_1b0._4_4_ = 0x100;
        local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar11);
        local_228 = 0x48f9770;
        uStack_224 = 0;
        uStack_220._0_4_ = 0x40e5c7a;
        uStack_220._4_4_ = 0;
        FUN_02a21700(&local_1b8,&local_228,2,&local_78);
        local_a8 = (undefined8 *)0x0;
        local_a0 = 0;
        local_98 = 0xff;
        local_80 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_200[0] = 0x48f9770;
        local_200[1] = 0;
        uStack_1f8 = local_1b8;
        uVar32 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,local_200);
        if (((uVar32 & 1) != 0) &&
           (((local_a0 != 0 && (*(uint *)(local_a0 + 0x18) != 0)) &&
            (plVar5 = (long *)((ulong)*(uint *)(local_a0 + 0x18) + local_a0),
            *plVar5 == 0x101feff464e494d)))) {
          local_1b0._0_4_ = iVar23 + -4000;
          local_1e0[1] = 0;
          local_1e0[4] = 0;
          local_1e0[2] = 0;
          local_1e0[3] = 0;
          local_1e0[0] = (int)local_1b0;
          goto LAB_02a19758;
        }
      }
      goto LAB_02a195f0;
    }
    if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) == 0) {
      lVar25 = CONCAT44(local_1e0[3],local_1e0[2]);
      if ((lVar25 != 0) && (local_1e0[4] == *(int *)(lVar25 + 0x10))) {
        lVar33 = *(long *)(*(long *)(lVar25 + 0x120) + 8);
        lVar25 = *(long *)(lVar33 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar25 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar25 = lVar33 + 0x70;
          }
          lVar25 = *(long *)(lVar25 + 8);
          if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar25 + 0x18) + lVar25) == 0x101feff464e494d))
          goto LAB_02a19530;
        }
      }
      goto LAB_02a195dc;
    }
LAB_02a19530:
    lVar25 = CONCAT44(local_1e0[3],local_1e0[2]);
    if (((lVar25 == 0) || (*(int *)(lVar25 + 0x10) != local_1e0[4])) ||
       ((*(int *)(lVar25 + 0xc) == 0 ||
        ((*(int *)(lVar25 + 0xc) == 7 || (0.0 < *(float *)(lVar25 + 0x2c))))))) goto LAB_02a195dc;
    local_1b0._0_4_ = FUN_03b46270();
    plVar5 = (long *)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
    if ((int)local_1b0 == 0) goto LAB_02a195dc;
LAB_02a19758:
    local_1b8 = (uint *)local_1e0;
    local_1b0._4_4_ = iVar11;
  }
  uStack_1c8 = plVar5;
  FUN_029e3cc0(param_1 + 0x1a0d0,&local_1b8);
  lVar25 = *(long *)(param_1 + 0x310);
  *(int *)(param_1 + 0x1a0cc) = iVar11;
  local_1e0[0] = -1;
  local_1e0[1] = 0;
  local_1e0[2] = 0;
  local_1e0[3] = 0;
  local_1e0[4] = 0;
  local_1e0[5] = 0;
  uStack_1c8._0_4_ = 0;
  uStack_1c8._4_4_ = 0;
  if ((lVar25 != 0) && (uVar10 = *(uint *)(param_1 + 0x31c), uVar10 != 0)) {
    uVar36 = 0;
    if (uVar10 != 0) {
      uVar36 = 0xf4bad04d / uVar10;
    }
    uVar36 = 0xf4bad04d - uVar36 * uVar10;
    uVar7 = uVar36;
    do {
      iVar19 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3))
      ;
      if (iVar19 == -0xb452fb3) {
        uVar10 = *(uint *)(lVar25 + (long)(int)uVar7 * 8 + 4);
        if ((uVar10 < *(uint *)(param_1 + 0x2e0)) &&
           (lVar25 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar10 * 8), lVar25 != 0)) {
          iVar19 = *(int *)(lVar25 + 0x38);
          *(bool *)(lVar9 + 0x20) = iVar19 != 0;
          if (iVar19 == 0) goto LAB_02a19804;
          uVar32 = FUN_03f11150(lVar24,local_1e0);
          if ((uVar32 & 1) == 0) {
LAB_02a19cc8:
            bVar18 = false;
            iVar19 = -1;
LAB_02a19cd0:
            puVar26 = local_a8;
            lVar25 = CONCAT44(local_1e0[3],local_1e0[2]);
            if ((((lVar25 != 0) && (*(int *)(lVar25 + 0x10) == local_1e0[4])) &&
                (*(int *)(lVar25 + 0xc) != 0)) && (*(int *)(lVar25 + 0xc) != 7)) {
              iVar11 = *(int *)(param_1 + 0x1bb90);
              bVar17 = iVar19 >= 0;
              bVar1 = (bVar17 && iVar11 != iVar19) && (iVar19 < 0 || iVar19 <= iVar11);
              if (!bVar17 || (iVar11 == iVar19 || iVar19 > iVar11)) goto LAB_02a1ac00;
              lVar33 = *(long *)(*(long *)(lVar25 + 0x120) + 8);
              lVar25 = *(long *)(lVar33 + 0x38);
              if (DAT_05aebc00 != '\0') {
                lVar25 = lVar33 + 0x70;
              }
              pcVar29 = (char *)0x0;
              if (lVar25 != 0) {
                if ((*(byte *)(lVar25 + 0x11) >> 5 & 1) == 0) {
                  pcVar29 = (char *)0x0;
                  if (*(long *)(lVar25 + 8) != 0) {
                    puVar28 = (uint *)(*(long *)(lVar25 + 8) + 0x24);
                    pcVar29 = (char *)((ulong)*puVar28 + (long)puVar28);
                  }
                }
                else {
                  pcVar29 = "<NoSound>";
                }
              }
              local_a8 = (undefined8 *)((ulong)local_a8 & 0xffffffff00000000);
              puVar16 = local_a8;
              local_a8._4_4_ = SUB84(puVar26,4);
              local_a8 = puVar16;
              if (((*pcVar29 != 'B') || (pcVar29[1] != 'G')) ||
                 ((((pcVar29[2] != 'M' || ((pcVar29[3] != '_' || (pcVar29[4] != 'D')))) ||
                   (pcVar29[5] != 'J')) ||
                  ((((pcVar29[6] != '_' || (pcVar29[7] != 'D')) || (pcVar29[8] != 'e')) ||
                   ((pcVar29[9] != 'm' || (pcVar29[10] != 'o')))))))) {
                lVar25 = 0;
                pcVar4 = pcVar29 + 7;
                goto LAB_02a1a894;
              }
              pcVar4 = pcVar29 + 0xc;
              if (pcVar4 == "First_L") goto LAB_02a1ac0c;
              uVar32 = 0;
              bVar17 = true;
              goto LAB_02a1a854;
            }
          }
          else {
            if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
LAB_02a197b8:
              lVar25 = CONCAT44(local_1e0[3],local_1e0[2]);
              if (((lVar25 == 0) || (*(int *)(lVar25 + 0x10) != local_1e0[4])) ||
                 ((*(int *)(lVar25 + 0xc) == 0 ||
                  ((*(int *)(lVar25 + 0xc) == 7 || (0.0 < *(float *)(lVar25 + 0x2c)))))))
              goto LAB_02a19cc8;
              iVar19 = FUN_03b46270();
              bVar18 = true;
              goto LAB_02a19cd0;
            }
            lVar25 = CONCAT44(local_1e0[3],local_1e0[2]);
            if (lVar25 != 0) {
              if (local_1e0[4] == *(int *)(lVar25 + 0x10)) {
                lVar33 = *(long *)(*(long *)(lVar25 + 0x120) + 8);
                lVar25 = *(long *)(lVar33 + 0x38);
                if ((DAT_05aebc00 != '\0') || (lVar25 != 0)) {
                  if (DAT_05aebc00 != '\0') {
                    lVar25 = lVar33 + 0x70;
                  }
                  lVar25 = *(long *)(lVar25 + 8);
                  if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x18) != 0)) &&
                     (*(long *)((ulong)*(uint *)(lVar25 + 0x18) + lVar25) == 0x101feff464e494d))
                  goto LAB_02a197b8;
                }
              }
              goto LAB_02a19cc8;
            }
            bVar18 = false;
            iVar19 = -1;
          }
          bVar1 = false;
          *(undefined4 *)(param_1 + 0x1bb90) = 0x7fffffff;
          goto LAB_02a19824;
        }
        break;
      }
      if (iVar19 == 0) break;
      uVar6 = 0;
      if ((int)(uVar7 + 1) < (int)uVar10) {
        uVar6 = uVar7 + 1;
      }
      uVar7 = uVar6;
    } while (uVar6 != uVar36);
  }
  *(undefined1 *)(lVar9 + 0x20) = 0;
LAB_02a19804:
  uVar20 = *(undefined4 *)(lVar9 + 0x24);
  bVar1 = false;
  bVar18 = false;
  *(undefined4 *)(lVar9 + 0x24) = 0;
  iVar19 = -1;
  *(undefined4 *)(lVar9 + 0x28) = uVar20;
  *(undefined4 *)(lVar9 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1bb90) = 0x7fffffff;
  goto LAB_02a19824;
  while( true ) {
    if (pcVar29[lVar25 + 8] == '\0') {
      lVar25 = lVar25 + 1;
      goto LAB_02a1a8cc;
    }
    if (pcVar29[lVar25 + 9] == '\0') {
      lVar25 = lVar25 + 2;
      goto LAB_02a1a8cc;
    }
    lVar25 = lVar25 + 3;
    if (lVar25 == 0x80001) break;
LAB_02a1a894:
    if (pcVar29[lVar25 + 7] == '\0') {
LAB_02a1a8cc:
      if ((((6 < (int)lVar25) && (uVar32 = (ulong)((int)lVar25 - 7), pcVar4[uVar32] == 'I')) &&
          ((pcVar4[uVar32 + 1] == 'n' &&
           (((pcVar4[uVar32 + 2] == 't' && (pcVar4[uVar32 + 3] == 'r')) &&
            (pcVar4[uVar32 + 4] == 'o')))))) &&
         ((pcVar4[uVar32 + 5] == '_' && (pcVar4[uVar32 + 6] == 'L')))) {
        uVar20 = 1;
        goto LAB_02a1aa7c;
      }
      break;
    }
  }
  lVar25 = 0;
  do {
    if (pcVar29[lVar25 + 7] == '\0') {
LAB_02a1a974:
      if (((5 < (int)lVar25) && (uVar32 = (ulong)((int)lVar25 - 6), pcVar4[uVar32] == 'S')) &&
         ((pcVar4[uVar32 + 1] == 'o' &&
          ((((pcVar4[uVar32 + 2] == 'n' && (pcVar4[uVar32 + 3] == 'g')) &&
            (pcVar4[uVar32 + 4] == '_')) && (pcVar4[uVar32 + 5] == 'L')))))) {
        uVar20 = 2;
        goto LAB_02a1aa7c;
      }
      break;
    }
    if (pcVar29[lVar25 + 8] == '\0') {
      lVar25 = lVar25 + 1;
      goto LAB_02a1a974;
    }
    if (pcVar29[lVar25 + 9] == '\0') {
      lVar25 = lVar25 + 2;
      goto LAB_02a1a974;
    }
    lVar25 = lVar25 + 3;
  } while (lVar25 != 0x80001);
  lVar25 = 0;
  do {
    if (pcVar29[lVar25 + 7] == '\0') {
LAB_02a1aa14:
      if (((6 < (int)lVar25) && (uVar32 = (ulong)((int)lVar25 - 7), pcVar4[uVar32] == 'O')) &&
         (((pcVar4[uVar32 + 1] == 'u' &&
           ((pcVar4[uVar32 + 2] == 't' && (pcVar4[uVar32 + 3] == 'r')))) &&
          ((pcVar4[uVar32 + 4] == 'o' &&
           ((pcVar4[uVar32 + 5] == '_' && (pcVar4[uVar32 + 6] == 'L')))))))) {
        uVar20 = 3;
LAB_02a1aa7c:
        local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,uVar20);
        local_1b0 = &local_1a4;
        uStack_1a8 = 4;
        local_200[0] = 0;
        uStack_1a1 = 0;
        local_1a4 = '\0';
        local_1b8._0_4_ = 0x4a99718;
        local_1b8._4_4_ = 0;
        if (local_1b0 != pcVar4) {
          cStack_1a2 = pcVar29[9];
          local_1a4 = (char)*(undefined2 *)pcVar4;
          uStack_1a3 = (undefined1)((ushort)*(undefined2 *)pcVar4 >> 8);
        }
        FUN_038d30c0(local_200,&local_1b8,10);
        uVar20 = local_a8._0_4_;
        goto LAB_02a1abf0;
      }
      break;
    }
    if (pcVar29[lVar25 + 8] == '\0') {
      lVar25 = lVar25 + 1;
      goto LAB_02a1aa14;
    }
    if (pcVar29[lVar25 + 9] == '\0') {
      lVar25 = lVar25 + 2;
      goto LAB_02a1aa14;
    }
    lVar25 = lVar25 + 3;
  } while (lVar25 != 0x80001);
  if (*pcVar4 == 'E') {
    if (((pcVar29[8] != 'm') || (pcVar29[9] != 'i')) || (pcVar29[10] != 's')) goto LAB_02a1abe8;
    if (((pcVar29[0xb] != 's') || (pcVar29[0xc] != 'i')) ||
       ((pcVar29[0xd] != 'o' || (pcVar29[0xe] != 'n')))) goto LAB_02a1ace4;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,4);
    local_1b0 = pcVar29 + 0x10;
    local_1b8 = (uint *)(PTR_DAT_04bb2020 + 0x10);
    FUN_02a1ad00(local_200,&local_1b8);
    local_200[0] = local_200[0] + 200;
    uVar20 = 4;
  }
  else if (((*pcVar4 == 'M') && (pcVar29[8] == 'e')) &&
          ((pcVar29[9] == 'l' && (pcVar29[10] == 'o')))) {
    if ((pcVar29[0xb] == 'd') && (pcVar29[0xc] == 'y')) {
      local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,5);
      local_1b0 = pcVar29 + 0xe;
      local_1b8 = (uint *)(PTR_DAT_04bb2020 + 0x10);
      FUN_02a1ad00(local_200,&local_1b8);
      local_200[0] = local_200[0] + 300;
      uVar20 = 5;
    }
    else {
LAB_02a1ace4:
      local_200[0] = 0;
      uVar20 = 0;
    }
  }
  else {
LAB_02a1abe8:
    local_200[0] = 0;
    uVar20 = 0;
  }
  goto LAB_02a1abf0;
LAB_02a1ac0c:
  local_200[0] = 0x191;
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,6);
  uVar20 = 6;
  goto LAB_02a1abf0;
  while( true ) {
    if (pcVar4[uVar32] == '\0') {
      if (bVar17) goto LAB_02a1ac0c;
      break;
    }
    bVar17 = uVar32 < 0x80000;
    uVar32 = uVar32 + 1;
    if (uVar32 == 0x80001) break;
LAB_02a1a854:
    if (pcVar4[uVar32] != "First_L"[uVar32]) break;
  }
  if (pcVar4 == "Intro_Second_L") {
LAB_02a1ac64:
    local_200[0] = 0x1f5;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,7);
    uVar20 = 7;
  }
  else {
    uVar32 = 0;
    bVar17 = true;
    do {
      if (pcVar4[uVar32] != "Intro_Second_L"[uVar32]) break;
      if (pcVar4[uVar32] == '\0') {
        if (bVar17) goto LAB_02a1ac64;
        break;
      }
      bVar17 = uVar32 < 0x80000;
      uVar32 = uVar32 + 1;
    } while (uVar32 != 0x80001);
    if ((((*pcVar4 != 'O') || (pcVar29[0xd] != 'u')) || (pcVar29[0xe] != 't')) ||
       ((pcVar29[0xf] != 'r' || (pcVar29[0x10] != 'o')))) goto LAB_02a1ace4;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,8);
    local_1b0 = pcVar29 + 0x12;
    local_1b8 = (uint *)(PTR_DAT_04bb2020 + 0x10);
    FUN_02a1ad00(local_200,&local_1b8);
    local_200[0] = local_200[0] + 600;
    uVar20 = 8;
  }
LAB_02a1abf0:
  *(int *)(lVar9 + 0x2c) = local_200[0];
  uVar12 = *(undefined4 *)(lVar9 + 0x24);
  *(undefined4 *)(lVar9 + 0x24) = uVar20;
  *(undefined4 *)(lVar9 + 0x28) = uVar12;
LAB_02a1ac00:
  *(int *)(param_1 + 0x1bb90) = iVar19;
LAB_02a19824:
  iVar11 = *(int *)(lVar9 + 0x2c);
  *(bool *)(lVar9 + 0x21) = bVar1;
  local_200[0] = -1;
  uVar10 = *(uint *)(lVar9 + 0x24);
  local_200[1] = 0;
  uStack_1f8._0_4_ = 0;
  uStack_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  local_1ec = 0;
  uStack_1e8._0_4_ = 0;
  uStack_1e8._4_4_ = 0;
  if (iVar11 < 1) {
    iVar23 = 0;
    bVar1 = false;
    uVar36 = 0;
    uStack_1e8 = (long *)0x0;
  }
  else {
    uStack_1a8 = uStack_1a8 & 0xffffff00;
    local_1b8 = &uStack_1a8;
    local_1b0._0_4_ = 0;
    local_1b0._4_4_ = 0x100;
    iVar23 = 0;
    if (iVar11 != 99999) {
      iVar23 = iVar11;
    }
    local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar23);
    iVar23 = iVar19 + 0xc80;
    local_204 = uVar10;
    FUN_02a21b90(&local_1b8,&local_204,&local_78);
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    local_98 = 0xff;
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_228 = 0x48f9770;
    uStack_224 = 0;
    uStack_220 = local_1b8;
    uVar32 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_228);
    uVar36 = uVar10;
    if ((((uVar32 & 1) == 0) || (local_a0 == 0)) ||
       ((*(uint *)(local_a0 + 0x18) == 0 ||
        (plVar5 = (long *)((ulong)*(uint *)(local_a0 + 0x18) + local_a0),
        *plVar5 != 0x101feff464e494d)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      local_200[1] = 0;
      uStack_1f0 = 0;
      uStack_1f8._0_4_ = 0;
      uStack_1f8._4_4_ = 0;
      local_200[0] = iVar23;
      uStack_1e8 = plVar5;
    }
  }
  local_228 = 0xffffffff;
  uStack_224 = 0;
  uStack_220._0_4_ = 0;
  uStack_220._4_4_ = 0;
  uStack_218 = 0;
  local_214 = 0;
  uStack_210._0_4_ = 0;
  uStack_210._4_4_ = 0;
  if (iVar21 < 1) {
    local_23c = 0;
LAB_02a19a6c:
    plVar5 = (long *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
    bVar17 = false;
  }
  else {
    uStack_1a8 = uStack_1a8 & 0xffffff00;
    local_1bc = 0;
    if (iVar21 != 99999) {
      local_1bc = iVar21;
    }
    local_1b8 = &uStack_1a8;
    local_1b0._0_4_ = 0;
    local_1b0._4_4_ = 0x100;
    local_22c = local_23c;
    FUN_02a21b90(&local_1b8,&local_22c,&local_1bc);
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    local_70 = local_1b8;
    local_90 = 0;
    uStack_88 = 0;
    local_98 = 0xff;
    local_80 = 0;
    local_78 = &PTR_LAB_048f9770;
    uVar32 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    if (((((uVar32 & 1) == 0) || (local_a0 == 0)) || (*(uint *)(local_a0 + 0x18) == 0)) ||
       (plVar5 = (long *)((ulong)*(uint *)(local_a0 + 0x18) + local_a0),
       *plVar5 != 0x101feff464e494d)) goto LAB_02a19a6c;
    bVar17 = true;
    local_228 = 0;
    uStack_224 = 0;
    uStack_218 = 0;
    uStack_220._0_4_ = 0;
    uStack_220._4_4_ = 0;
  }
  uStack_1a8 = 0;
  local_190 = 0;
  local_1b8 = (uint *)0x0;
  local_1b0._0_4_ = -1;
  local_1b0._4_4_ = -1;
  local_198 = 0xffffffff;
  if (bVar18) {
    local_1b8 = (uint *)local_1e0;
    local_1b0._0_4_ = iVar19;
    local_1b0._4_4_ = iVar11;
    uStack_1a8 = uVar10;
  }
  if (bVar17) {
    local_198 = CONCAT44(local_23c,iVar21);
    uStack_1a0 = &local_228;
  }
  else {
    uStack_1a0 = (undefined4 *)0x0;
    if (0 < iVar21) {
      local_190 = 1;
      uStack_1a0 = (undefined4 *)0x0;
    }
  }
  uStack_210 = plVar5;
  FUN_029d73ac(param_1 + 0x1aa80,&local_1b8);
  uStack_1a8 = 0;
  local_1b8 = (uint *)0x0;
  local_1b0._0_4_ = -1;
  local_1b0._4_4_ = -1;
  local_190 = 0;
  local_198 = 0xffffffff;
  if (bVar1) {
    local_1b8 = (uint *)local_200;
    local_1b0._0_4_ = iVar23;
    local_1b0._4_4_ = iVar11;
    uStack_1a8 = uVar36;
  }
  if (bVar17) {
    local_198 = CONCAT44(local_23c,iVar21);
    uStack_1a0 = &local_228;
  }
  else {
    uStack_1a0 = (undefined4 *)0x0;
    if (0 < iVar21) {
      local_190 = 1;
      uStack_1a0 = (undefined4 *)0x0;
    }
  }
  FUN_029d73ac(param_1 + 0x1b308,&local_1b8);
  lVar25 = *(long *)(param_1 + 0x310);
  local_1b8._0_4_ = 0xffffffff;
  local_1b8._4_4_ = 0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  uStack_1a8 = 0;
  local_1a4 = '\0';
  uStack_1a3 = 0;
  cStack_1a2 = 0;
  uStack_1a1 = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  if ((lVar25 != 0) && (uVar10 = *(uint *)(param_1 + 0x31c), uVar10 != 0)) {
    uVar36 = 0;
    if (uVar10 != 0) {
      uVar36 = 0x28a547ac / uVar10;
    }
    uVar36 = 0x28a547ac - uVar36 * uVar10;
    uVar7 = uVar36;
    while (iVar21 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar7 << 3)), iVar21 != 0) {
      if (iVar21 == 0x28a547ac) {
        uVar10 = *(uint *)(lVar25 + (long)(int)uVar7 * 8 + 4);
        if (((*(uint *)(param_1 + 0x2e0) <= uVar10) ||
            (lVar25 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar10 * 8), lVar25 == 0))
           || (*(int *)(lVar25 + 0x38) == 0)) break;
        uVar32 = FUN_03f11150(lVar24,&local_1b8,0x28a547ac);
        if ((uVar32 & 1) == 0) break;
        if (CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0) == 0) {
          lVar25 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
          if ((lVar25 == 0) || (uStack_1a8 != *(uint *)(lVar25 + 0x10))) break;
          lVar33 = *(long *)(*(long *)(lVar25 + 0x120) + 8);
          lVar25 = *(long *)(lVar33 + 0x38);
          if ((DAT_05aebc00 == '\0') && (lVar25 == 0)) break;
          if (DAT_05aebc00 != '\0') {
            lVar25 = lVar33 + 0x70;
          }
          lVar25 = *(long *)(lVar25 + 8);
          if (((lVar25 == 0) || (*(uint *)(lVar25 + 0x18) == 0)) ||
             (*(long *)((ulong)*(uint *)(lVar25 + 0x18) + lVar25) != 0x101feff464e494d)) break;
        }
        lVar25 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
        if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x10) == uStack_1a8)) &&
           ((*(int *)(lVar25 + 0xc) != 0 &&
            ((*(int *)(lVar25 + 0xc) != 7 && (*(float *)(lVar25 + 0x2c) <= 0.0)))))) {
          uVar20 = FUN_03b46270();
          local_a8 = (undefined8 *)0x0;
          local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (0.0 < *(float *)(*(long *)(param_1 + 0x38) + 0xb8))) {
            local_a8 = &local_1b8;
            local_a0 = CONCAT44(local_a0._4_4_,uVar20);
          }
          goto LAB_02a19dd0;
        }
        break;
      }
      uVar6 = 0;
      if ((int)(uVar7 + 1) < (int)uVar10) {
        uVar6 = uVar7 + 1;
      }
      uVar7 = uVar6;
      if (uVar6 == uVar36) break;
    }
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
LAB_02a19dd0:
  FUN_029b1748(param_1 + 0x1bb98,&local_a8);
  lVar25 = *(long *)(param_2 + 8);
  if (*(char *)(lVar25 + 0xc175) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc7) = 1;
    lVar25 = *(long *)(param_2 + 8);
  }
  *(undefined1 *)(lVar25 + 0xc175) = 0;
  lVar25 = DAT_055f6860;
  cVar14 = *(char *)(param_1 + 0x1bcca);
  if (cVar14 == '\0') {
    if (*(char *)(param_1 + 0x1bcc7) != '\0') {
      pMVar2 = (MutexType *)(DAT_055f6860 + 0x89660);
      piVar3 = (int *)(DAT_055f6860 + 0x89630);
      nn::os::LockMutex(pMVar2);
      iVar21 = *piVar3;
      iVar19 = *(int *)(lVar25 + 0x89634);
      nn::os::UnlockMutex(pMVar2);
      if (((iVar21 == 3) && (iVar19 == 0)) || ((iVar21 == 2 && (iVar19 != 0)))) {
        *(undefined1 *)(param_1 + 0x1bcc7) = 0;
        *(undefined1 *)(param_1 + 0x1bcca) = 1;
      }
      else if (*(char *)(param_1 + 0x1bcca) == '\0') goto LAB_02a1a028;
LAB_02a19e9c:
      uVar20 = FUN_006bd550(&DAT_040e5cf5,0);
      lVar25 = *(long *)PTR_DAT_04bb26a8;
      plVar5 = (long *)(lVar25 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar25 + 0xb3b58));
      if (*(int *)(lVar25 + 0xb3b88) < *(int *)(lVar25 + 0xb3ba0)) {
        puVar26 = *(undefined8 **)(lVar25 + 0xb3b90);
        if (puVar26 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar25 + 0xb3b90) = *puVar26;
        }
        *(undefined1 *)((long)puVar26 + 2) = 0;
        *(undefined2 *)puVar26 = 0x100;
        *(undefined4 *)((long)puVar26 + 4) = uVar20;
        *(undefined4 *)(puVar26 + 1) = 0x3f800000;
        plVar27 = puVar26 + 2;
        *plVar27 = 0;
        puVar26[3] = 0;
        lVar33 = *plVar5;
        *plVar5 = (long)plVar27;
        puVar26[3] = plVar5;
        *plVar27 = lVar33;
        if (lVar33 != 0) {
          *(long **)(lVar33 + 8) = plVar27;
        }
        *(int *)(lVar25 + 0xb3b88) = *(int *)(lVar25 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar25 + 0xb3b58));
      if ((*(char *)(param_1 + 0x1bcca) == cVar14) || (*(char *)(param_1 + 0x1bcca) == '\0')) {
        local_1b8 = (uint *)(PTR_DAT_04bb2020 + 0x10);
        local_1b0._0_4_ = 0x40e5cf5;
        local_1b0._4_4_ = 0;
        FUN_02a55844(&local_1b8,0);
      }
      else {
        uVar20 = FUN_006bd550(&DAT_040e5cf5,0);
        lVar25 = *(long *)PTR_DAT_04bb26a8;
        plVar5 = (long *)(lVar25 + 0xb3b78);
        nn::os::LockMutex((MutexType *)(lVar25 + 0xb3b58));
        if (*(int *)(lVar25 + 0xb3b88) < *(int *)(lVar25 + 0xb3ba0)) {
          puVar26 = *(undefined8 **)(lVar25 + 0xb3b90);
          if (puVar26 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar25 + 0xb3b90) = *puVar26;
          }
          *(undefined2 *)puVar26 = 0;
          *(undefined1 *)((long)puVar26 + 2) = 1;
          puVar26[3] = 0;
          plVar27 = puVar26 + 2;
          *plVar27 = 0;
          *(undefined4 *)((long)puVar26 + 4) = uVar20;
          *(undefined4 *)(puVar26 + 1) = 0x3f800000;
          lVar33 = *plVar5;
          *plVar5 = (long)plVar27;
          puVar26[3] = plVar5;
          *plVar27 = lVar33;
          if (lVar33 != 0) {
            *(long **)(lVar33 + 8) = plVar27;
          }
          *(int *)(lVar25 + 0xb3b88) = *(int *)(lVar25 + 0xb3b88) + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar25 + 0xb3b58));
      }
    }
  }
  else {
    bVar18 = false;
    if (*(long *)(param_1 + 0x40) != 0) {
      bVar18 = 0.0 < *(float *)(*(long *)(param_1 + 0x40) + 0xb8);
    }
    cVar15 = *(char *)(param_1 + 0x1bcc9);
    *(bool *)(param_1 + 0x1bcc9) = bVar18;
    if ((bVar18 != false) || (cVar15 == '\0')) goto LAB_02a19e9c;
    *(undefined1 *)(param_1 + 0x1bcca) = 0;
  }
LAB_02a1a028:
  local_1b8._0_4_ = 0xffffffff;
  local_1b8._4_4_ = 0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  uStack_1a8 = 0;
  local_1a4 = '\0';
  uStack_1a3 = 0;
  cStack_1a2 = 0;
  uStack_1a1 = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  uVar32 = FUN_03f11150(lVar24,&local_1b8,0x28a547ac);
  if ((uVar32 & 1) == 0) {
    bVar18 = false;
    iVar21 = -1;
  }
  else {
    if (CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0) == 0) {
      lVar25 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
      if ((lVar25 != 0) && (uStack_1a8 == *(uint *)(lVar25 + 0x10))) {
        lVar33 = *(long *)(*(long *)(lVar25 + 0x120) + 8);
        lVar25 = *(long *)(lVar33 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar25 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar25 = lVar33 + 0x70;
          }
          lVar25 = *(long *)(lVar25 + 8);
          if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar25 + 0x18) + lVar25) == 0x101feff464e494d))
          goto LAB_02a1a064;
        }
      }
    }
    else {
LAB_02a1a064:
      lVar25 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
      if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x10) == uStack_1a8)) &&
         ((*(int *)(lVar25 + 0xc) != 0 &&
          ((*(int *)(lVar25 + 0xc) != 7 && (*(float *)(lVar25 + 0x2c) <= 0.0)))))) {
        iVar21 = FUN_03b46270();
        bVar18 = iVar21 != 0;
        if (!bVar18) {
          iVar21 = -1;
        }
        goto LAB_02a1a0f8;
      }
    }
    bVar18 = false;
    iVar21 = -1;
  }
LAB_02a1a0f8:
  local_a8 = (undefined8 *)0x0;
  local_a0._0_5_ =
       CONCAT14(*(byte *)(*(long *)(*(long *)PTR_DAT_04bb26a8 + 0x6c8) + 0x82) & 1,0xffffffff);
  if (bVar18) {
    local_a8 = &local_1b8;
    local_a0 = CONCAT44(local_a0._4_4_,iVar21);
  }
  FUN_029f1ce4(param_1 + 0x1a518,&local_a8);
  lVar25 = *(long *)(param_1 + 0x3c0);
  if (lVar25 == 0) {
    iVar21 = -1;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x3cc);
    if (uVar10 == 0) {
      iVar21 = -1;
    }
    else {
      uVar36 = 0;
      if (uVar10 != 0) {
        uVar36 = 0xda6e347d / uVar10;
      }
      uVar36 = 0xda6e347d - uVar36 * uVar10;
      iVar21 = -1;
      uVar7 = uVar36;
      do {
        iVar19 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3
                                   ));
        if (iVar19 == -0x2591cb83) {
          iVar21 = *(int *)(lVar25 + (long)(int)uVar7 * 8 + 4);
          break;
        }
        if (iVar19 == 0) break;
        uVar6 = 0;
        if ((int)(uVar7 + 1) < (int)uVar10) {
          uVar6 = uVar7 + 1;
        }
        uVar7 = uVar6;
      } while (uVar6 != uVar36);
    }
  }
  local_1b8._0_4_ = 0xffffffff;
  local_1b8._4_4_ = 0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  uStack_1a8 = 0;
  local_1a4 = '\0';
  uStack_1a3 = 0;
  cStack_1a2 = 0;
  uStack_1a1 = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  *(bool *)(lVar9 + 0x71) = 0 < *(int *)(*(long *)(param_1 + 0x3a8) + (long)iVar21 * 4);
  uVar32 = FUN_03f11150(lVar24,&local_1b8,0x28a547ac);
  if ((uVar32 & 1) == 0) {
    bVar18 = false;
    iVar21 = -1;
  }
  else {
    if (CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0) == 0) {
      lVar25 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
      if ((lVar25 != 0) && (uStack_1a8 == *(uint *)(lVar25 + 0x10))) {
        lVar33 = *(long *)(*(long *)(lVar25 + 0x120) + 8);
        lVar25 = *(long *)(lVar33 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar25 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar25 = lVar33 + 0x70;
          }
          lVar25 = *(long *)(lVar25 + 8);
          if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar25 + 0x18) + lVar25) == 0x101feff464e494d))
          goto LAB_02a1a200;
        }
      }
    }
    else {
LAB_02a1a200:
      lVar25 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
      if (((lVar25 != 0) && (*(uint *)(lVar25 + 0x10) == uStack_1a8)) &&
         ((*(int *)(lVar25 + 0xc) != 0 &&
          ((*(int *)(lVar25 + 0xc) != 7 && (*(float *)(lVar25 + 0x2c) <= 0.0)))))) {
        iVar21 = FUN_03b46270();
        bVar18 = iVar21 != 0;
        if (!bVar18) {
          iVar21 = -1;
        }
        goto LAB_02a1a290;
      }
    }
    bVar18 = false;
    iVar21 = -1;
  }
LAB_02a1a290:
  lVar25 = *(long *)(param_1 + 0x3c0);
  local_a8 = (undefined8 *)0x0;
  if (lVar25 == 0) {
    lVar33 = *(long *)(param_1 + 0x3a8);
    iVar19 = -1;
    local_a0._4_4_ = *(undefined4 *)(lVar33 + -4);
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x3cc);
    if (uVar10 == 0) {
LAB_02a1a30c:
      iVar19 = -1;
LAB_02a1a31c:
      lVar33 = *(long *)(param_1 + 0x3a8);
      puVar34 = (undefined4 *)(lVar33 + (long)iVar19 * 4);
    }
    else {
      uVar36 = 0;
      if (uVar10 != 0) {
        uVar36 = 0x80c8d15e / uVar10;
      }
      uVar36 = 0x80c8d15e - uVar36 * uVar10;
      uVar7 = uVar36;
      do {
        iVar19 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3
                                   ));
        if (iVar19 == -0x7f372ea2) {
          iVar19 = *(int *)(lVar25 + (long)(int)uVar7 * 8 + 4);
          goto LAB_02a1a31c;
        }
        if (iVar19 == 0) goto LAB_02a1a30c;
        uVar6 = 0;
        if ((int)(uVar7 + 1) < (int)uVar10) {
          uVar6 = uVar7 + 1;
        }
        uVar7 = uVar6;
      } while (uVar6 != uVar36);
      lVar33 = *(long *)(param_1 + 0x3a8);
      puVar34 = (undefined4 *)(lVar33 + -4);
    }
    local_a0._4_4_ = *puVar34;
    if (uVar10 == 0) {
      iVar19 = -1;
    }
    else {
      uVar36 = 0;
      if (uVar10 != 0) {
        uVar36 = 0x9b02a43c / uVar10;
      }
      uVar36 = 0x9b02a43c - uVar36 * uVar10;
      iVar19 = -1;
      uVar7 = uVar36;
      do {
        iVar11 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3
                                   ));
        if (iVar11 == -0x64fd5bc4) {
          iVar19 = *(int *)(lVar25 + (long)(int)uVar7 * 8 + 4);
          break;
        }
        if (iVar11 == 0) break;
        uVar6 = 0;
        if ((int)(uVar7 + 1) < (int)uVar10) {
          uVar6 = uVar7 + 1;
        }
        uVar7 = uVar6;
      } while (uVar6 != uVar36);
    }
  }
  local_a0._0_4_ = -1;
  local_98 = CONCAT11(local_98._1_1_,(char)*(undefined4 *)(lVar33 + (long)iVar19 * 4));
  if (bVar18) {
    local_a8 = &local_1b8;
    local_a0._0_4_ = iVar21;
  }
  FUN_029d3cf8(param_1 + 0x1a948,&local_a8);
  if (cVar13 == '\0') goto LAB_02a1a64c;
  if ((*(char *)(lVar8 + 0x20) == '\0') || (*(int *)(param_1 + 0x1bc18) == *(int *)(lVar8 + 0x24)))
  {
    uVar35 = 1;
  }
  else {
    uVar35 = 0;
    *(int *)(param_1 + 0x1bc18) = *(int *)(lVar8 + 0x24);
  }
  lVar25 = *(long *)(param_1 + 0x310);
  if ((lVar25 != 0) && (uVar10 = *(uint *)(param_1 + 0x31c), uVar10 != 0)) {
    uVar36 = 0;
    if (uVar10 != 0) {
      uVar36 = 0x593eebec / uVar10;
    }
    uVar36 = 0x593eebec - uVar36 * uVar10;
    uVar7 = uVar36;
    while (iVar21 = *(int *)(lVar25 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar7 << 3)), iVar21 != 0) {
      if (iVar21 == 0x593eebec) {
        uVar10 = *(uint *)(lVar25 + (long)(int)uVar7 * 8 + 4);
        if ((uVar10 < *(uint *)(param_1 + 0x2e0)) &&
           (lVar25 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar10 * 8), lVar25 != 0)) {
          bVar18 = *(int *)(lVar25 + 0x38) != 0;
          goto LAB_02a1a474;
        }
        break;
      }
      uVar6 = 0;
      if ((int)(uVar7 + 1) < (int)uVar10) {
        uVar6 = uVar7 + 1;
      }
      uVar7 = uVar6;
      if (uVar6 == uVar36) break;
    }
  }
  bVar18 = false;
LAB_02a1a474:
  *(bool *)(lVar9 + 0xd) = bVar18;
  local_1b8._0_4_ = 0xffffffff;
  local_1b8._4_4_ = 0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  uStack_1a8 = 0;
  local_1a4 = '\0';
  uStack_1a3 = 0;
  cStack_1a2 = 0;
  uStack_1a1 = 0;
  uStack_1a0._0_4_ = 0;
  uStack_1a0._4_4_ = 0;
  FUN_03f11150(lVar24,&local_1b8);
  lVar24 = CONCAT44(local_1b0._4_4_,(int)local_1b0);
  if (lVar24 == 0) {
LAB_02a1a508:
    uVar22 = 0;
    *(undefined4 *)(param_1 + 0x1bc24) = 0xffffffff;
  }
  else {
    bVar18 = (bool)(bVar18 ^ 1);
    if (*(uint *)(lVar24 + 0x10) != uStack_1a8) {
      bVar18 = true;
    }
    if (bVar18) goto LAB_02a1a508;
    lVar25 = *(long *)(*(long *)(lVar24 + 0x120) + 8);
    lVar24 = *(long *)(lVar25 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar24 = lVar25 + 0x70;
    }
    pcVar29 = (char *)0x0;
    if (lVar24 == 0) {
LAB_02a1a528:
      uVar32 = 0;
      bVar18 = true;
      do {
        if (pcVar29[uVar32] != "DummyLoop"[uVar32]) break;
        if (pcVar29[uVar32] == '\0') {
          if (bVar18) goto LAB_02a1a5a4;
          break;
        }
        bVar18 = uVar32 < 0x80000;
        uVar32 = uVar32 + 1;
      } while (uVar32 != 0x80001);
      iVar21 = FUN_03b46270();
      if (iVar21 < 0) goto LAB_02a1a5a4;
      iVar19 = *(int *)(param_1 + 0x1bc24);
      *(int *)(param_1 + 0x1bc24) = iVar21;
      uVar22 = 0;
      if (iVar21 < iVar19) {
        uVar22 = uVar35;
      }
    }
    else {
      if ((*(byte *)(lVar24 + 0x11) >> 5 & 1) != 0) {
        pcVar29 = "<NoSound>";
        goto LAB_02a1a528;
      }
      pcVar29 = (char *)0x0;
      if ((*(long *)(lVar24 + 8) == 0) ||
         (puVar28 = (uint *)(*(long *)(lVar24 + 8) + 0x24),
         pcVar29 = (char *)((ulong)*puVar28 + (long)puVar28), pcVar29 != "DummyLoop"))
      goto LAB_02a1a528;
LAB_02a1a5a4:
      uVar22 = 0;
    }
  }
  *(undefined1 *)(lVar9 + 0xe) = uVar22;
  lVar24 = *(long *)(param_1 + 0x310);
  bVar18 = false;
  if (lVar24 != 0) {
    uVar10 = *(uint *)(param_1 + 0x31c);
    if (uVar10 != 0) {
      uVar36 = 0;
      if (uVar10 != 0) {
        uVar36 = 0xde18a5c8 / uVar10;
      }
      uVar36 = 0xde18a5c8 - uVar36 * uVar10;
      uVar7 = uVar36;
      do {
        iVar21 = *(int *)(lVar24 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3
                                   ));
        if (iVar21 == -0x21e75a38) {
          uVar10 = *(uint *)(lVar24 + (long)(int)uVar7 * 8 + 4);
          if (uVar10 < *(uint *)(param_1 + 0x2e0)) {
            lVar24 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar10 * 8);
            bVar18 = false;
            if (lVar24 != 0) {
              bVar18 = *(int *)(lVar24 + 0x38) != 0;
            }
            goto LAB_02a1a634;
          }
          break;
        }
        if (iVar21 == 0) break;
        uVar6 = 0;
        if ((int)(uVar7 + 1) < (int)uVar10) {
          uVar6 = uVar7 + 1;
        }
        uVar7 = uVar6;
      } while (uVar6 != uVar36);
    }
    bVar18 = false;
  }
LAB_02a1a634:
  *(bool *)(lVar9 + 0xf) = bVar18;
  *(undefined2 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x24) = 0xffffffffffffffff;
  *(undefined4 *)(lVar8 + 0x2c) = 0;
  *(undefined4 *)(lVar8 + 0x30) = 0;
LAB_02a1a64c:
  *(undefined4 *)(lVar8 + 0x4c) = 0;
  *(undefined4 *)(lVar8 + 0x50) = 0;
  *(undefined4 *)(lVar8 + 0x54) = 0;
  *(undefined4 *)(lVar8 + 0x58) = 0;
  *(undefined4 *)(lVar8 + 0x5c) = 0;
  *(undefined4 *)(lVar8 + 0x60) = 0;
  *(undefined4 *)(lVar8 + 100) = 0;
  *(undefined4 *)(lVar8 + 0x68) = 0;
  *(undefined4 *)(lVar8 + 0x6c) = 0;
  *(undefined4 *)(lVar8 + 0x70) = 0;
  *(undefined4 *)(lVar8 + 0x74) = 0;
  *(undefined4 *)(lVar8 + 0x78) = 0;
  *(undefined4 *)(lVar8 + 0x7c) = 0;
  *(undefined4 *)(lVar8 + 0x80) = 0;
  uVar10 = 0;
  while( true ) {
    while (uVar36 = uVar10, uVar36 == 0) {
      uVar10 = 1;
    }
    if (uVar36 == 6) break;
    uVar32 = (ulong)uVar36;
    if (9 < uVar36) {
      uVar32 = 0;
    }
    *(undefined4 *)(lVar8 + 0x9c + uVar32 * 4) = 0;
    uVar32 = (ulong)uVar36;
    if (9 < uVar36) {
      uVar32 = 0;
    }
    *(undefined4 *)(lVar8 + 0xc4 + uVar32 * 4) = 0;
    uVar10 = 6;
    if ((int)uVar36 < 6) {
      uVar10 = uVar36 + 1;
    }
  }
  return;
}

