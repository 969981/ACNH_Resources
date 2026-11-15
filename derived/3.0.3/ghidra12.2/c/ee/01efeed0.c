
/* WARNING: Removing unreachable block (ram,0x01effbd4) */
/* WARNING: Removing unreachable block (ram,0x01eff498) */
/* WARNING: Removing unreachable block (ram,0x01eff4a8) */
/* WARNING: Removing unreachable block (ram,0x01eff4b4) */
/* WARNING: Removing unreachable block (ram,0x01eff4e0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff80 : 0x01eff2ec */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01efeed0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  byte bVar15;
  char *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  char cVar25;
  uint *puVar26;
  int *piVar27;
  undefined4 *puVar28;
  int iVar29;
  char *pcVar30;
  int iVar31;
  undefined4 *puVar32;
  float fVar33;
  float fVar34;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_1cc;
  undefined1 local_1c6;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_154;
  undefined1 local_152;
  undefined1 local_151;
  undefined4 local_150;
  uint local_84;
  undefined2 local_80;
  undefined1 local_7e;
  uint local_7c;
  
  puVar8 = PTR_DAT_04bc1568;
  puVar1 = PTR_DAT_04bc1560;
  pcVar30 = PTR_DAT_04bc2b20;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    lVar19 = param_1[1];
    if (lVar19 == 0) {
LAB_01efef8c:
      pcVar16 = (char *)0x0;
    }
    else {
      uVar11 = *(uint *)(lVar19 + 0x508);
      if (uVar11 != 0xffffffff) {
        puVar20 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
        if (9 < uVar11) {
          puVar20 = &DAT_053fe348;
        }
        pcVar30 = puVar20 + 0x658;
        goto LAB_01efef9c;
      }
      uVar11 = *(uint *)(lVar19 + 0x50c);
      if (uVar11 == 0xffffffff) goto LAB_01efef8c;
      pcVar21 = &DAT_05454358 + (ulong)uVar11 * 0x2d8;
      if (0x10 < uVar11) {
        pcVar21 = &DAT_05454358;
      }
      pcVar16 = (char *)0x0;
      if (*pcVar21 != '\0') {
        pcVar16 = pcVar21;
      }
    }
    if (pcVar16 != (char *)0x0) {
      pcVar30 = pcVar16 + 0x90;
    }
  }
LAB_01efef9c:
  lVar19 = *(long *)PTR_DAT_04bb3968;
  if (lVar19 == 0) {
LAB_01eff054:
    puVar14 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x1d15);
    if ((int)*(uint *)(lVar19 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar19 + 0x169b8) != 0) &&
           (puVar14 = *(uint **)(*(long *)(lVar19 + 0x169b8) + 8), puVar14 != (uint *)0x0)) &&
          ((*(uint *)(lVar19 + 0x169d0) <= uVar11 ||
           (*(char *)(*(long *)(lVar19 + 0x169d8) + (long)(int)uVar11) != '\0')))) &&
         (((uVar11 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar22 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar22 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar11 + (uint)(ushort)puVar14[2] * 8 + iVar22) +
                          (long)puVar14);
        if (puVar14 != (uint *)0x0) goto LAB_01eff05c;
      }
      goto LAB_01eff054;
    }
    if (*(uint *)(lVar19 + 0x16ac8) <= uVar11) goto LAB_01eff054;
    if (*(uint *)(lVar19 + 0x16ab8) <= uVar11) {
      uVar11 = 0;
    }
    puVar14 = *(uint **)(*(long *)(lVar19 + 0x16ac0) + (ulong)uVar11 * 8);
    if (puVar14 == (uint *)0x0) goto LAB_01eff054;
  }
LAB_01eff05c:
  local_7e = 0;
  local_80 = 0;
  local_238 = *(uint *)(pcVar30 + 8);
  if (local_238 == 0x10) {
    if (*puVar14 != 0) {
      cVar25 = *PTR_DAT_04bc1560;
      do {
        if (cVar25 == '\0') {
          cVar25 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar8 + 100);
          if (-1 < (int)uVar11) {
            puVar2 = (undefined2 *)((ulong)uVar11 + (long)puVar14);
            if (puVar2 != (undefined2 *)0x0) {
              local_80 = *puVar2;
              local_7e = *(undefined1 *)(puVar2 + 1);
              goto LAB_01eff1e8;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
        }
        lVar19 = (long)puVar14 - (ulong)*puVar14;
        if ((*puVar14 == 0) || (lVar19 == 0)) break;
        lVar18 = 0xc;
        if (*(char *)(lVar19 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        if (lVar18 + lVar19 == 0) break;
        uVar12 = (ulong)*(ushort *)(lVar19 + 8);
        *(undefined4 *)(puVar8 + 100) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar27 = (int *)(lVar18 + lVar19 + 4);
        while (piVar27[-1] != -0x6437a430) {
          piVar27 = piVar27 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_01eff1e0;
        }
        iVar22 = 0;
        if (*piVar27 != -1) {
          iVar22 = *piVar27;
        }
        *(int *)(puVar8 + 100) = iVar22;
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_01eff1e0:
    local_7e = 0;
    local_80 = 0;
LAB_01eff1e8:
    lVar19 = *(long *)PTR_DAT_04bb46b0;
    if (lVar19 != 0) {
      puVar17 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar17 + 0x38))();
        if (lVar19 != 0) {
          lVar19 = lVar19 + 0x70;
          goto LAB_01eff23c;
        }
      }
      else if (((puVar17 != (undefined8 *)0x0) && ((long *)puVar17[0x26] != (long *)0x0)) &&
              (lVar19 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar19 != 0)) {
LAB_01eff23c:
        if ((*(long **)(lVar19 + 0x1bf260) == (long *)0x0) ||
           (puVar17 = (undefined8 *)**(long **)(lVar19 + 0x1bf260), puVar17 == (undefined8 *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)*puVar17)();
          uVar12 = uVar12 & 0xffffffff;
        }
        uVar13 = FUN_028d53e4(*(long *)(lVar19 + 0x1bf248) + *(long *)(lVar19 + 0x1bf240));
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar19 + 0x1bf260) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x1bf260) + 8),
           puVar17 != (undefined8 *)0x0)) {
          (**(code **)*puVar17)();
        }
        if ((uVar13 & 1) != 0) {
          local_238 = 7;
          uVar12 = 0;
          local_230 = (undefined *)CONCAT44(local_230._4_4_,7);
          bVar15 = (byte)local_80 & 0x7f;
          goto LAB_01eff2f4;
        }
      }
    }
  }
  else if (((param_2 & 1) != 0) && (local_238 < 0x11)) {
    local_230 = (undefined *)CONCAT44(local_230._4_4_,local_238);
    uVar11 = local_238 + 7;
    if (-1 < (int)local_238) {
      uVar11 = local_238;
    }
    uVar12 = (ulong)(uint)((int)uVar11 >> 3);
    if ((uint)((int)uVar11 >> 3) < 3) {
      local_230 = (undefined *)CONCAT44(local_230._4_4_,local_238);
      bVar15 = *(byte *)((long)&local_80 + uVar12) | (byte)(1 << (ulong)(local_238 & 7));
LAB_01eff2f4:
      *(byte *)((long)&local_80 + uVar12) = bVar15;
    }
  }
  puVar32 = (undefined4 *)PTR_DAT_04bb37e0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  uVar11 = 0;
  do {
    local_7c = uVar11;
    local_238 = uVar11;
    if (0x10 < uVar11) goto LAB_01eff340;
    local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11);
    uVar10 = uVar11 + 7;
    if (-1 < (int)uVar11) {
      uVar10 = uVar11;
    }
    if ((2 < (uint)((int)uVar10 >> 3)) ||
       (local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11),
       (*(byte *)((long)&local_80 + (ulong)(uint)((int)uVar10 >> 3)) >> (ulong)(uVar11 & 7) & 1) ==
       0)) goto LAB_01eff340;
    switch(uVar11) {
    case 2:
      uVar10 = 0x146998;
      uVar23 = 0x69a0;
      goto LAB_01eff414;
    default:
      goto switchD_01eff3c0_caseD_3;
    case 4:
      if (*(int *)(*(long *)PTR_DAT_04bb26a8 + 0x146c88) < 1) goto switchD_01eff3c0_caseD_3;
      break;
    case 6:
      uVar10 = 0x146b50;
      uVar23 = 0x6b58;
LAB_01eff414:
      if (*(long *)(*(long *)PTR_DAT_04bb26a8 + (ulong)(uVar23 | 0x140000)) ==
          *(long *)PTR_DAT_04bb26a8 + (ulong)uVar10) goto switchD_01eff3c0_caseD_3;
      break;
    case 9:
      uVar12 = (ulong)local_230._4_4_;
      local_230 = (undefined *)(uVar12 << 0x20);
      lVar19 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if (lVar19 != 0) {
        local_230 = (undefined *)(uVar12 << 0x20);
        fVar33 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278) + 2.5;
        fVar34 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280) + 2.5;
        fVar33 = (float)((int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar34 = (float)((int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar7 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
        iVar31 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
        iVar22 = iVar31 + 0x60;
        iVar29 = iVar7;
        do {
          lVar18 = *(long *)(lVar19 + 0xd0);
          puVar28 = puVar32;
          if (lVar18 != 0) {
            lVar3 = lVar18 + 0x130 + (ulong)*(uint *)(lVar18 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar18 + 0x198)) {
              lVar3 = lVar18 + 0x130;
            }
            iVar9 = *(int *)(lVar3 + 0x28);
            if (iVar9 <= iVar29 && iVar29 <= *(int *)(lVar3 + 8) + iVar9 + -1) {
              iVar4 = *(int *)(lVar3 + 0x2c);
              if ((iVar4 <= iVar31 && iVar31 <= *(int *)(lVar3 + 0xc) + iVar4 + -1) &&
                 (uVar10 = (iVar31 - iVar4) + (iVar29 - iVar9) * *(int *)(lVar3 + 0xc),
                 uVar10 < *(uint *)(lVar3 + 0x10))) {
                puVar28 = (undefined4 *)(*(long *)(lVar3 + 0x18) + (long)(int)uVar10 * 8);
              }
            }
          }
          lVar18 = (**(code **)(*param_1 + 0x3a0))(param_1);
          if ((*(int *)(lVar18 + 0x88) != 0xf) ||
             ((((iVar9 = FUN_0277d6c4(puVar28), iVar9 != 0x1002 &&
                (iVar9 = FUN_0277d6c4(puVar28), iVar9 != 0x789)) &&
               (iVar9 = FUN_0277d6c4(puVar28), iVar9 != 0xad8)) &&
              (iVar9 = FUN_0277d6c4(puVar28), iVar9 != 0xd90)))) {
            puVar8 = PTR_DAT_04bb43c0;
            lVar18 = *(long *)PTR_DAT_04bb43c0;
            uVar10 = FUN_0277d6c4(puVar28);
            if (*(long *)puVar8 != 0) {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if (((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
                 (uVar12 = FUN_0277e158(puVar28), (uVar12 & 1) == 0)) {
                uVar12 = FUN_0277e024(puVar28);
                puVar8 = PTR_DAT_04bb43c0;
                if ((uVar12 & 1) == 0) {
                  local_228 = *puVar28;
                  local_224 = puVar28[1];
                  local_220 = 0;
                  lVar18 = *(long *)PTR_DAT_04bb43c0;
                  local_230 = puVar1;
                  uVar10 = FUN_0277d6c4(&local_228);
                  if (*(long *)puVar8 == 0) {
                    local_238 = 0;
                    goto LAB_01eff868;
                  }
                  lVar18 = *(long *)(lVar18 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar18 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(puVar28);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                    if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                       (puVar26 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar26 == (uint *)0x0)) goto LAB_01eff85c;
                    uVar10 = *puVar26;
                    local_238 = 0;
                    if ((uVar10 != 0) && (puVar26 != (uint *)(ulong)uVar10)) {
                      puVar24 = (uint *)((long)puVar26 - (long)(ulong)uVar10);
                      local_238 = 0;
                      if (*puVar24 != 0) {
                        uVar10 = puVar24[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                          lVar18 = 0xc;
                          if (*(char *)((long)puVar24 + 10) != '\0') {
                            lVar18 = 0x1c;
                          }
                          lVar18 = (long)puVar24 + lVar18 + (ulong)(ushort)puVar24[2] * 8;
                          if (lVar18 != 0) {
                            uVar23 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar23 = (uint)((ulong)((long)puVar26 - lVar18) / (ulong)uVar10);
                            }
                            if (*puVar24 <= uVar23) {
                              uVar23 = 0xffffffff;
                            }
                            if ((uVar23 < *(uint *)PTR_DAT_04bc0048) &&
                               (uVar6 = *(ushort *)
                                         (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar23 * 2),
                               local_238 = (uint)uVar6, uVar6 < 0x52)) goto LAB_01eff868;
                          }
                        }
                        goto LAB_01eff85c;
                      }
                    }
                  }
                  else {
LAB_01eff85c:
                    local_238 = 0;
                  }
LAB_01eff868:
                  if ((8 < local_238 - 1) && (uVar12 = FUN_016d948c(puVar28), (uVar12 & 1) == 0))
                  goto LAB_01eff710;
                  goto switchD_01eff3c0_caseD_e;
                }
              }
            }
            uVar12 = FUN_016d948c(puVar28);
            if ((uVar12 & 1) != 0) goto switchD_01eff3c0_caseD_e;
          }
LAB_01eff710:
          if (iVar29 < iVar7 + 0x5f) {
            iVar29 = iVar29 + 1;
          }
          else {
            iVar31 = iVar31 + 1;
            iVar29 = iVar7;
          }
        } while ((iVar7 != iVar29) || (iVar22 != iVar31));
      }
switchD_01eff3c0_caseD_3:
      local_238 = uVar11;
      if (uVar11 < 0x11) {
        local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11);
        uVar10 = uVar11 + 7;
        if (-1 < (int)uVar11) {
          uVar10 = uVar11;
        }
        uVar12 = (ulong)(uint)((int)uVar10 >> 3);
        if (2 < (uint)((int)uVar10 >> 3)) goto LAB_01eff340;
        bVar15 = *(byte *)((long)&local_80 + uVar12) & ((byte)(1 << (ulong)(uVar11 & 7)) ^ 0xff);
        goto LAB_01eff338;
      }
      goto LAB_01eff340;
    case 0xe:
      break;
    }
switchD_01eff3c0_caseD_e:
    local_238 = uVar11;
    if (uVar11 < 0x11) {
      local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11);
      uVar10 = uVar11 + 7;
      if (-1 < (int)uVar11) {
        uVar10 = uVar11;
      }
      uVar12 = (ulong)(uint)((int)uVar10 >> 3);
      if ((uint)((int)uVar10 >> 3) < 3) {
        bVar15 = *(byte *)((long)&local_80 + uVar12) | (byte)(1 << (ulong)(uVar11 & 7));
LAB_01eff338:
        local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11);
        *(byte *)((long)&local_80 + uVar12) = bVar15;
      }
    }
LAB_01eff340:
    puVar20 = PTR_DAT_04bc1568;
    puVar8 = PTR_DAT_04bc1560;
    uVar10 = 0x11;
    if ((int)uVar11 < 0x11) {
      uVar10 = uVar11 + 1;
    }
    uVar11 = uVar10;
  } while (uVar10 != 0x11);
  if (*puVar14 != 0) {
    cVar25 = *PTR_DAT_04bc1560;
    do {
      if (cVar25 == '\0') {
        cVar25 = '\x01';
        *(undefined8 *)puVar20 = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 8) = 0xffffffffffffffff;
        *puVar8 = 1;
        *(undefined8 *)(puVar20 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar20 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar11 = *(uint *)(puVar20 + 0x14);
        if (-1 < (int)uVar11) {
          if ((byte *)((ulong)uVar11 + (long)puVar14) != (byte *)0x0) {
            bVar15 = *(byte *)((ulong)uVar11 + (long)puVar14);
            goto LAB_01eff9e4;
          }
          break;
        }
        if (uVar11 != 0xffffffff) break;
      }
      puVar26 = (uint *)(ulong)*puVar14;
      bVar15 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar26)) goto LAB_01eff9e4;
      lVar19 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar26)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar14 + (lVar19 - (long)puVar26);
      if (lVar19 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar26));
      *(undefined4 *)(puVar20 + 0x14) = 0xfffffffe;
      if (uVar12 == 0) break;
      piVar27 = (int *)(lVar19 + 4);
      while (piVar27[-1] != 0x430dbf65) {
        piVar27 = piVar27 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_01eff9e0;
      }
      iVar22 = 0;
      if (*piVar27 != -1) {
        iVar22 = *piVar27;
      }
      *(int *)(puVar20 + 0x14) = iVar22;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_01eff9e0:
  bVar15 = 0;
LAB_01eff9e4:
  uVar11 = 0;
  uVar10 = 0;
  do {
    local_238 = uVar11;
    if (uVar11 < 0x11) {
      local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11);
      uVar23 = uVar11 + 7;
      if (-1 < (int)uVar11) {
        uVar23 = uVar11;
      }
      if (2 < (uint)((int)uVar23 >> 3)) goto LAB_01eff9f4;
      local_230 = (undefined *)CONCAT44(local_230._4_4_,uVar11);
      uVar23 = *(byte *)((long)&local_80 + (ulong)(uint)((int)uVar23 >> 3)) >> (ulong)(uVar11 & 7) &
               1;
    }
    else {
LAB_01eff9f4:
      uVar23 = 0;
    }
    uVar11 = uVar11 + 1;
    uVar10 = uVar10 + uVar23;
  } while (uVar11 != 0x11);
  if (0 < (int)uVar10) {
    lVar19 = param_1[1];
    local_84 = 0;
    iVar22 = 0;
    uVar23 = *(uint *)(lVar19 + 0x294);
    uVar11 = *(uint *)(lVar19 + 0x288) ^ *(uint *)(lVar19 + 0x288) << 0xb;
    *(undefined4 *)(lVar19 + 0x288) = *(undefined4 *)(lVar19 + 0x28c);
    uVar11 = uVar11 >> 8 ^ uVar23 >> 0x13 ^ uVar11 ^ uVar23;
    uVar5 = *(undefined4 *)(lVar19 + 0x290);
    *(uint *)(lVar19 + 0x290) = uVar23;
    *(uint *)(lVar19 + 0x294) = uVar11;
    *(undefined4 *)(lVar19 + 0x28c) = uVar5;
    do {
      local_238 = local_84;
      if (local_84 < 0x11) {
        local_230 = (undefined *)CONCAT44(local_230._4_4_,local_84);
        uVar23 = local_84 + 7;
        if (-1 < (int)local_84) {
          uVar23 = local_84;
        }
        if (((uint)((int)uVar23 >> 3) < 3) &&
           (local_230 = (undefined *)CONCAT44(local_230._4_4_,local_84),
           (*(byte *)((long)&local_80 + (ulong)(uint)((int)uVar23 >> 3)) >> (ulong)(local_84 & 7) &
           1) != 0)) {
          if (iVar22 == (int)((ulong)uVar11 * (ulong)uVar10 >> 0x20)) goto LAB_01effb18;
          iVar22 = iVar22 + 1;
        }
      }
      local_84 = local_84 + 1;
    } while (local_84 != 0x11);
    local_84 = 0xffffffff;
LAB_01effb18:
    uVar11 = FUN_01effc70(param_1,&local_84);
    if ((uVar11 & 1) != 0) {
      FUN_01e63f1c(&local_230);
      local_7c = 0;
      local_230 = (undefined *)CONCAT44(local_230._4_4_,0x43);
      local_190 = *(undefined4 *)(pcVar30 + 0xc);
      local_18c = *(undefined4 *)(pcVar30 + 0x10);
      local_188 = *(undefined4 *)(pcVar30 + 0x14);
      local_238 = 0;
      if ((bVar15 & 1) == 0) {
        local_238 = 0;
        puVar32 = &local_238;
        FUN_01efa990(&local_238,param_1,(int)param_1[0x1d15]);
        local_152 = local_238._2_1_;
        local_151 = local_238._3_1_;
      }
      else {
        local_152 = *(undefined1 *)((long)puVar32 + 2);
        local_151 = *(undefined1 *)((long)puVar32 + 3);
      }
      local_154 = *(undefined2 *)puVar32;
      local_150 = puVar32[1];
      local_1cc = 1;
      local_1c6 = 1;
      if ((int)param_1[0x15ea] < *(int *)((long)param_1 + 0xaf54)) {
        FUN_021920b0(param_1 + 0x15ea,&local_230);
      }
      goto LAB_01effc34;
    }
    if (((*(int *)(pcVar30 + 8) == 0x10) || (*(int *)(pcVar30 + 8) == 0xe)) &&
       (*(int *)(pcVar30 + 8) != 0x10)) goto LAB_01effc34;
  }
  FUN_01f00d00(param_1);
  uVar11 = 1;
LAB_01effc34:
  return uVar11 & 1;
}

