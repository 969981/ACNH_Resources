
/* WARNING: Removing unreachable block (ram,0x01e72400) */
/* WARNING: Removing unreachable block (ram,0x01e72284) */
/* WARNING: Removing unreachable block (ram,0x01e7295c) */
/* WARNING: Removing unreachable block (ram,0x01e71520) */
/* WARNING: Removing unreachable block (ram,0x01e716a0) */
/* WARNING: Removing unreachable block (ram,0x01e71138) */
/* WARNING: Removing unreachable block (ram,0x01e71148) */
/* WARNING: Removing unreachable block (ram,0x01e71154) */
/* WARNING: Removing unreachable block (ram,0x01e71100) */
/* WARNING: Removing unreachable block (ram,0x01e71110) */
/* WARNING: Removing unreachable block (ram,0x01e7111c) */
/* WARNING: Removing unreachable block (ram,0x01e710c8) */
/* WARNING: Removing unreachable block (ram,0x01e710d8) */
/* WARNING: Removing unreachable block (ram,0x01e710e4) */
/* WARNING: Removing unreachable block (ram,0x01e71180) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x01e70e8c */
/* WARNING: Removing unreachable block (ram,0x01e71ccc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01e70a60(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  byte bVar15;
  undefined8 *puVar16;
  char *pcVar17;
  long lVar18;
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  char cVar27;
  uint *puVar28;
  int *piVar29;
  int iVar30;
  long lVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  int iVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined8 local_238;
  undefined4 local_230;
  float local_22c;
  undefined4 uStack_228;
  float local_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined *local_210;
  undefined *puStack_208;
  undefined8 local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_158;
  uint local_8c;
  undefined2 local_88;
  undefined1 local_86;
  uint local_84;
  undefined8 local_80;
  
  puVar2 = PTR_DAT_04bc1568;
  puVar1 = PTR_DAT_04bc1560;
  pcVar11 = PTR_DAT_04bc2b20;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    lVar18 = *(long *)(param_1 + 8);
    if (lVar18 == 0) {
LAB_01e70b24:
      pcVar17 = (char *)0x0;
    }
    else {
      uVar35 = *(uint *)(lVar18 + 0x508);
      if (uVar35 != 0xffffffff) {
        puVar19 = &DAT_053fe348 + (ulong)uVar35 * 0xba0;
        if (9 < uVar35) {
          puVar19 = &DAT_053fe348;
        }
        pcVar11 = puVar19 + 0x658;
        goto LAB_01e70b34;
      }
      uVar35 = *(uint *)(lVar18 + 0x50c);
      if (uVar35 == 0xffffffff) goto LAB_01e70b24;
      pcVar20 = &DAT_05454358 + (ulong)uVar35 * 0x2d8;
      if (0x10 < uVar35) {
        pcVar20 = &DAT_05454358;
      }
      pcVar17 = (char *)0x0;
      if (*pcVar20 != '\0') {
        pcVar17 = pcVar20;
      }
    }
    if (pcVar17 != (char *)0x0) {
      pcVar11 = pcVar17 + 0x90;
    }
  }
LAB_01e70b34:
  lVar18 = *(long *)PTR_DAT_04bb3968;
  if (lVar18 == 0) {
LAB_01e70bf0:
    puVar14 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar35 = *(uint *)(param_1 + 0xb030);
    if ((int)*(uint *)(lVar18 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar18 + 0x169b8) != 0) &&
           (puVar14 = *(uint **)(*(long *)(lVar18 + 0x169b8) + 8), puVar14 != (uint *)0x0)) &&
          ((*(uint *)(lVar18 + 0x169d0) <= uVar35 ||
           (*(char *)(*(long *)(lVar18 + 0x169d8) + (long)(int)uVar35) != '\0')))) &&
         (((uVar35 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar24 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar24 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar35 + (uint)(ushort)puVar14[2] * 8 + iVar24) +
                          (long)puVar14);
        if (puVar14 != (uint *)0x0) goto LAB_01e70bf8;
      }
      goto LAB_01e70bf0;
    }
    if (*(uint *)(lVar18 + 0x16ac8) <= uVar35) goto LAB_01e70bf0;
    if (*(uint *)(lVar18 + 0x16ab8) <= uVar35) {
      uVar35 = 0;
    }
    puVar14 = *(uint **)(*(long *)(lVar18 + 0x16ac0) + (ulong)uVar35 * 8);
    if (puVar14 == (uint *)0x0) goto LAB_01e70bf0;
  }
LAB_01e70bf8:
  local_86 = 0;
  local_88 = 0;
  uVar35 = *(uint *)(pcVar11 + 8);
  if (uVar35 == 0x10) {
    if (*puVar14 != 0) {
      cVar27 = *PTR_DAT_04bc1560;
      do {
        if (cVar27 == '\0') {
          cVar27 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar35 = *(uint *)(puVar2 + 100);
          if (-1 < (int)uVar35) {
            puVar3 = (undefined2 *)((ulong)uVar35 + (long)puVar14);
            if (puVar3 != (undefined2 *)0x0) {
              local_88 = *puVar3;
              local_86 = *(undefined1 *)(puVar3 + 1);
              goto LAB_01e70d88;
            }
            break;
          }
          if (uVar35 != 0xffffffff) break;
        }
        lVar18 = (long)puVar14 - (ulong)*puVar14;
        if ((*puVar14 == 0) || (lVar18 == 0)) break;
        lVar22 = 0xc;
        if (*(char *)(lVar18 + 10) != '\0') {
          lVar22 = 0x1c;
        }
        if (lVar22 + lVar18 == 0) break;
        uVar12 = (ulong)*(ushort *)(lVar18 + 8);
        *(undefined4 *)(puVar2 + 100) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar29 = (int *)(lVar22 + lVar18 + 4);
        while (piVar29[-1] != -0x6437a430) {
          piVar29 = piVar29 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_01e70d80;
        }
        iVar24 = 0;
        if (*piVar29 != -1) {
          iVar24 = *piVar29;
        }
        *(int *)(puVar2 + 100) = iVar24;
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_01e70d80:
    local_86 = 0;
    local_88 = 0;
LAB_01e70d88:
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 != 0) {
      puVar16 = *(undefined8 **)(lVar18 + 0x10);
      if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
        lVar18 = (**(code **)(*(long *)*puVar16 + 0x38))();
        if (lVar18 != 0) {
          lVar18 = lVar18 + 0x70;
          goto LAB_01e70ddc;
        }
      }
      else if (((puVar16 != (undefined8 *)0x0) && ((long *)puVar16[0x26] != (long *)0x0)) &&
              (lVar18 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar18 != 0)) {
LAB_01e70ddc:
        if ((*(long **)(lVar18 + 0x1bf260) == (long *)0x0) ||
           (puVar16 = (undefined8 *)**(long **)(lVar18 + 0x1bf260), puVar16 == (undefined8 *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)*puVar16)();
          uVar12 = uVar12 & 0xffffffff;
        }
        uVar13 = FUN_028d53e4(*(long *)(lVar18 + 0x1bf248) + *(long *)(lVar18 + 0x1bf240));
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar18 + 0x1bf260) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x1bf260) + 8),
           puVar16 != (undefined8 *)0x0)) {
          (**(code **)*puVar16)();
        }
        if ((uVar13 & 1) != 0) {
          local_80 = CONCAT44(local_80._4_4_,7);
          uVar12 = 0;
          local_238 = (undefined *)CONCAT44(local_238._4_4_,7);
          bVar15 = (byte)local_88 & 0x7f;
          goto LAB_01e70e94;
        }
      }
    }
  }
  else if ((param_2 & 1) != 0) {
    local_80 = CONCAT44(local_80._4_4_,uVar35);
    if (uVar35 < 0x11) {
      local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35);
      uVar10 = uVar35 + 7;
      if (-1 < (int)uVar35) {
        uVar10 = uVar35;
      }
      uVar12 = (ulong)(uint)((int)uVar10 >> 3);
      if ((uint)((int)uVar10 >> 3) < 3) {
        local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35);
        bVar15 = *(byte *)((long)&local_88 + uVar12) | (byte)(1 << (ulong)(uVar35 & 7));
LAB_01e70e94:
        *(byte *)((long)&local_88 + uVar12) = bVar15;
      }
    }
  }
  puVar16 = (undefined8 *)PTR_DAT_04bb37e0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  uVar35 = 0;
  do {
    local_80 = CONCAT44(local_80._4_4_,uVar35);
    if (0x10 < uVar35) goto LAB_01e70ee0;
    uVar8 = local_238._4_4_;
    local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35);
    uVar10 = uVar35 + 7;
    if (-1 < (int)uVar35) {
      uVar10 = uVar35;
    }
    if ((2 < (uint)((int)uVar10 >> 3)) ||
       (local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35),
       (*(byte *)((long)&local_88 + (ulong)(uint)((int)uVar10 >> 3)) >> (ulong)(uVar35 & 7) & 1) ==
       0)) goto LAB_01e70ee0;
    local_8c = uVar35;
    switch(uVar35) {
    case 0:
    case 10:
      lVar22 = *(long *)PTR_DAT_04bb26a8;
      lVar18 = *(long *)(FUN_00146c4c + lVar22 + 4);
      if (lVar18 != lVar22 + 0x146c48) {
        lVar31 = lVar18 + -0x20;
        do {
          lVar26 = *(long *)(lVar31 + 0x10);
          if (*(int *)(lVar31 + 0x18) < 1) {
            lVar26 = 0;
          }
          lVar21 = lVar26 - *(int *)(lVar31 + 0x1c);
          if (((lVar26 != 0 && lVar21 != 0) && (*(char *)(lVar21 + 0xc) == '\x05')) &&
             ((2 < *(int *)(lVar31 + 0x18) || (uVar35 != 0)))) goto switchD_01e70f5c_caseD_7;
          lVar18 = *(long *)(lVar18 + 8);
          lVar31 = lVar18 + -0x20;
        } while (lVar31 != lVar22 + 0x146c28);
      }
      break;
    case 1:
    case 2:
      uVar10 = 0x146998;
      uVar8 = 0x69a0;
      goto LAB_01e71044;
    case 3:
    case 4:
    case 0xb:
      if (0 < *(int *)(*(long *)PTR_DAT_04bb26a8 + 0x146c88)) goto switchD_01e70f5c_caseD_7;
      break;
    case 5:
    case 6:
      uVar10 = 0x146b50;
      uVar8 = 0x6b58;
LAB_01e71044:
      if (*(long *)(*(long *)PTR_DAT_04bb26a8 + (ulong)(uVar8 | 0x140000)) ==
          *(long *)PTR_DAT_04bb26a8 + (ulong)uVar10) break;
switchD_01e70f5c_caseD_7:
      local_80 = CONCAT44(local_80._4_4_,uVar35);
      if (uVar35 < 0x11) {
        local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35);
        uVar10 = uVar35 + 7;
        if (-1 < (int)uVar35) {
          uVar10 = uVar35;
        }
        uVar12 = (ulong)(uint)((int)uVar10 >> 3);
        if (2 < (uint)((int)uVar10 >> 3)) goto LAB_01e70ee0;
        bVar15 = *(byte *)((long)&local_88 + uVar12) | (byte)(1 << (ulong)(uVar35 & 7));
        goto LAB_01e70ed4;
      }
      goto LAB_01e70ee0;
    case 7:
    case 8:
    case 0xe:
      goto switchD_01e70f5c_caseD_7;
    case 9:
      uVar12 = (ulong)local_238._4_4_;
      local_238 = (undefined *)(uVar12 << 0x20);
      lVar18 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if (lVar18 != 0) {
        local_238 = (undefined *)(uVar12 << 0x20);
        lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar36 = *(float *)(lVar22 + 0x278) + 2.5;
        fVar37 = *(float *)(lVar22 + 0x280) + 2.5;
        fVar36 = (float)((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar37 = (float)((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar7 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
        iVar30 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
        iVar24 = iVar30 + 0x60;
        iVar34 = iVar7;
        do {
          lVar22 = *(long *)(lVar18 + 0xd0);
          puVar32 = (undefined4 *)puVar16;
          if (lVar22 != 0) {
            lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar22 + 0x198)) {
              lVar31 = lVar22 + 0x130;
            }
            iVar9 = *(int *)(lVar31 + 0x28);
            if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
              iVar4 = *(int *)(lVar31 + 0x2c);
              if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                 (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                 uVar10 < *(uint *)(lVar31 + 0x10))) {
                puVar32 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
              }
            }
          }
          if ((*(int *)(param_1 + 0xb038) != 0xf) ||
             ((((iVar9 = FUN_0277d6c4(puVar32), iVar9 != 0x1002 &&
                (iVar9 = FUN_0277d6c4(puVar32), iVar9 != 0x789)) &&
               (iVar9 = FUN_0277d6c4(puVar32), iVar9 != 0xad8)) &&
              (iVar9 = FUN_0277d6c4(puVar32), iVar9 != 0xd90)))) {
            puVar2 = PTR_DAT_04bb43c0;
            lVar22 = *(long *)PTR_DAT_04bb43c0;
            uVar10 = FUN_0277d6c4(puVar32);
            if (*(long *)puVar2 != 0) {
              lVar22 = *(long *)(lVar22 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              if (((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
                 ((uVar12 = FUN_0277e158(puVar32), (uVar12 & 1) == 0 &&
                  (uVar12 = FUN_0277e024(puVar32), (uVar12 & 1) == 0)))) {
                lVar22 = *(long *)puVar2;
                local_230 = *puVar32;
                local_22c = (float)puVar32[1];
                uStack_228 = 0;
                local_224 = 0.0;
                local_238 = puVar1;
                uVar8 = FUN_0277d6c4(&local_230);
                uVar10 = 0;
                if (*(long *)puVar2 == 0) goto LAB_01e714a8;
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar22 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(puVar32);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                  if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                     (puVar28 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                     puVar28 == (uint *)0x0)) goto LAB_01e714a4;
                  uVar8 = *puVar28;
                  uVar10 = 0;
                  if ((uVar8 != 0) && (puVar28 != (uint *)(ulong)uVar8)) {
                    puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar8);
                    uVar10 = 0;
                    if (*puVar23 != 0) {
                      uVar10 = puVar23[1];
                      if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                        lVar22 = 0xc;
                        if (*(char *)((long)puVar23 + 10) != '\0') {
                          lVar22 = 0x1c;
                        }
                        lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                        if (lVar22 != 0) {
                          uVar8 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                          }
                          if (*puVar23 <= uVar8) {
                            uVar8 = 0xffffffff;
                          }
                          if ((uVar8 < *(uint *)PTR_DAT_04bc0048) &&
                             (uVar6 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar8 * 2),
                             uVar10 = (uint)uVar6, uVar6 < 0x52)) goto LAB_01e714a8;
                        }
                      }
                      goto LAB_01e714a4;
                    }
                  }
                }
                else {
LAB_01e714a4:
                  uVar10 = 0;
                }
LAB_01e714a8:
                local_80 = CONCAT44(local_80._4_4_,uVar10);
                if (uVar10 - 1 < 9) goto switchD_01e70f5c_caseD_7;
              }
            }
            uVar12 = FUN_016d948c(puVar32);
            if ((uVar12 & 1) != 0) goto switchD_01e70f5c_caseD_7;
          }
          if (iVar34 < iVar7 + 0x5f) {
            iVar34 = iVar34 + 1;
          }
          else {
            iVar30 = iVar30 + 1;
            iVar34 = iVar7;
          }
        } while ((iVar7 != iVar34) || (iVar24 != iVar30));
      }
      break;
    case 0xc:
      local_238 = (undefined *)((ulong)local_238._4_4_ << 0x20);
      lVar18 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if (lVar18 != 0) {
        local_238 = (undefined *)CONCAT44(uVar8,1);
        lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar36 = *(float *)(lVar22 + 0x278) + 2.5;
        fVar37 = *(float *)(lVar22 + 0x280) + 2.5;
        fVar36 = (float)((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar37 = (float)((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar7 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
        iVar30 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
        iVar24 = iVar30 + 0x60;
        iVar34 = iVar7;
        do {
          lVar22 = *(long *)(lVar18 + 0xe0);
          puVar32 = (undefined4 *)puVar16;
          if (lVar22 != 0) {
            lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar22 + 0x198)) {
              lVar31 = lVar22 + 0x130;
            }
            iVar9 = *(int *)(lVar31 + 0x28);
            if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
              iVar4 = *(int *)(lVar31 + 0x2c);
              if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                 (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                 uVar10 < *(uint *)(lVar31 + 0x10))) {
                puVar32 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
              }
            }
          }
          uVar12 = FUN_0277e158(puVar32);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_0277e024(puVar32);
            puVar2 = PTR_DAT_04bb43c0;
            if ((uVar12 & 1) == 0) {
              local_238 = (undefined *)((ulong)local_238 & 0xffffffff00000000);
              lVar22 = *(long *)(lVar18 + 0xd0);
              puVar33 = (undefined4 *)puVar16;
              if (lVar22 != 0) {
                lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
                if (1 < *(uint *)(lVar22 + 0x198)) {
                  lVar31 = lVar22 + 0x130;
                }
                iVar9 = *(int *)(lVar31 + 0x28);
                if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
                  iVar4 = *(int *)(lVar31 + 0x2c);
                  if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                     (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                     uVar10 < *(uint *)(lVar31 + 0x10))) {
                    puVar33 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
                  }
                }
              }
              lVar31 = *(long *)PTR_DAT_04bb43c0;
              uVar10 = FUN_0277d6c4(puVar33);
              lVar22 = *(long *)puVar2;
              if (lVar22 != 0) {
                lVar31 = *(long *)(lVar31 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar31 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  uVar12 = FUN_0277e024(puVar33);
                  puVar2 = PTR_DAT_04bb43c0;
                  lVar22 = *(long *)PTR_DAT_04bb43c0;
                  if ((uVar12 & 1) == 0) {
                    local_238 = PTR_DAT_04bc0510 + 0x10;
                    local_230 = *puVar33;
                    local_22c = (float)puVar33[1];
                    uStack_228 = 0;
                    local_224 = 0.0;
                    uVar10 = FUN_0277d6c4(&local_230);
                    if (*(long *)puVar2 != 0) {
                      lVar22 = *(long *)(lVar22 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar22 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(puVar33);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                           (lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                           lVar22 != 0)) {
                          uStack_228 = (undefined4)lVar22;
                          local_224 = (float)((ulong)lVar22 >> 0x20);
                        }
                      }
                    }
                    uVar12 = FUN_01ae6020(&local_238);
                    if ((uVar12 & 1) == 0) {
                      iVar9 = FUN_01ae7550(&local_238);
                      local_80 = CONCAT44(local_80._4_4_,iVar9);
                      if (iVar9 - 1U < 6) goto LAB_01e71c90;
                    }
                    lVar22 = *(long *)PTR_DAT_04bb43c0;
                  }
                }
              }
              uVar10 = FUN_0277d6c4(puVar32);
              lVar31 = *(long *)PTR_DAT_04bb43c0;
              if (lVar31 != 0) {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  local_238 = PTR_DAT_04bc0510 + 0x10;
                  local_230 = *puVar32;
                  local_22c = (float)puVar32[1];
                  uStack_228 = 0;
                  local_224 = 0.0;
                  uVar10 = FUN_0277d6c4(&local_230);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01e71c20:
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_80 = CONCAT44(local_80._4_4_,0x56);
                  }
                  else {
                    lVar22 = *(long *)(lVar31 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_01e71c20;
                    lVar22 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(puVar32);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (puVar28 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar28 == (uint *)0x0)) goto LAB_01e71c20;
                    uStack_228 = SUB84(puVar28,0);
                    local_224 = (float)((ulong)puVar28 >> 0x20);
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x6a);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e71928;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e71928:
                    if (local_84 == 0x6a) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x6b);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e719d0;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e719d0:
                    if (local_84 == 0x6b) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x69);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e71a78;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e71a78:
                    if (local_84 == 0x69) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x56);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e71c74;
                          }
                        }
                        local_84 = 0;
                      }
                    }
                  }
LAB_01e71c74:
                  if (local_84 == (uint)local_80) goto switchD_01e70f5c_caseD_7;
                }
              }
            }
          }
LAB_01e71c90:
          if (iVar34 < iVar7 + 0x5f) {
            iVar34 = iVar34 + 1;
          }
          else {
            iVar30 = iVar30 + 1;
            iVar34 = iVar7;
          }
        } while ((iVar7 != iVar34) || (iVar24 != iVar30));
        local_238 = (undefined *)((ulong)local_238 & 0xffffffff00000000);
        lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar36 = *(float *)(lVar22 + 0x278) + 2.5;
        fVar37 = *(float *)(lVar22 + 0x280) + 2.5;
        fVar36 = (float)((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar37 = (float)((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar7 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
        iVar30 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
        iVar24 = iVar30 + 0x60;
        iVar34 = iVar7;
        do {
          lVar22 = *(long *)(lVar18 + 0xd0);
          puVar32 = (undefined4 *)puVar16;
          if (lVar22 != 0) {
            lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar22 + 0x198)) {
              lVar31 = lVar22 + 0x130;
            }
            iVar9 = *(int *)(lVar31 + 0x28);
            if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
              iVar4 = *(int *)(lVar31 + 0x2c);
              if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                 (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                 uVar10 < *(uint *)(lVar31 + 0x10))) {
                puVar32 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
              }
            }
          }
          uVar12 = FUN_0277e158(puVar32);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_0277e024(puVar32);
            puVar2 = PTR_DAT_04bb43c0;
            if ((uVar12 & 1) == 0) {
              lVar22 = *(long *)PTR_DAT_04bb43c0;
              uVar10 = FUN_0277d6c4(puVar32);
              lVar31 = *(long *)puVar2;
              if (lVar31 != 0) {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  local_238 = PTR_DAT_04bc0510 + 0x10;
                  local_230 = *puVar32;
                  local_22c = (float)puVar32[1];
                  uStack_228 = 0;
                  local_224 = 0.0;
                  uVar10 = FUN_0277d6c4(&local_230);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01e721c8:
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_80 = CONCAT44(local_80._4_4_,0x56);
                  }
                  else {
                    lVar22 = *(long *)(lVar31 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_01e721c8;
                    lVar22 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(puVar32);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (puVar28 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar28 == (uint *)0x0)) goto LAB_01e721c8;
                    uStack_228 = SUB84(puVar28,0);
                    local_224 = (float)((ulong)puVar28 >> 0x20);
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x6a);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e71fbc;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e71fbc:
                    if (local_84 == 0x6a) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x6b);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e72064;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e72064:
                    if (local_84 == 0x6b) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x69);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e7210c;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e7210c:
                    if (local_84 == 0x69) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x56);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e7221c;
                          }
                        }
                        local_84 = 0;
                      }
                    }
                  }
LAB_01e7221c:
                  if (local_84 == (uint)local_80) goto switchD_01e70f5c_caseD_7;
                }
              }
            }
          }
          if (iVar34 < iVar7 + 0x5f) {
            iVar34 = iVar34 + 1;
          }
          else {
            iVar30 = iVar30 + 1;
            iVar34 = iVar7;
          }
        } while ((iVar7 != iVar34) || (iVar24 != iVar30));
      }
      break;
    case 0xd:
      local_238 = (undefined *)((ulong)local_238._4_4_ << 0x20);
      lVar18 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if (lVar18 != 0) {
        local_238 = (undefined *)CONCAT44(uVar8,1);
        lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar36 = *(float *)(lVar22 + 0x278) + 2.5;
        fVar37 = *(float *)(lVar22 + 0x280) + 2.5;
        fVar36 = (float)((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar37 = (float)((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar7 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
        iVar30 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
        iVar24 = iVar30 + 0x60;
        iVar34 = iVar7;
        do {
          lVar22 = *(long *)(lVar18 + 0xe0);
          puVar32 = (undefined4 *)puVar16;
          if (lVar22 != 0) {
            lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar22 + 0x198)) {
              lVar31 = lVar22 + 0x130;
            }
            iVar9 = *(int *)(lVar31 + 0x28);
            if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
              iVar4 = *(int *)(lVar31 + 0x2c);
              if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                 (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                 uVar10 < *(uint *)(lVar31 + 0x10))) {
                puVar32 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
              }
            }
          }
          uVar12 = FUN_0277e158(puVar32);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_0277e024(puVar32);
            puVar2 = PTR_DAT_04bb43c0;
            if ((uVar12 & 1) == 0) {
              local_238 = (undefined *)((ulong)local_238 & 0xffffffff00000000);
              lVar22 = *(long *)(lVar18 + 0xd0);
              puVar33 = (undefined4 *)puVar16;
              if (lVar22 != 0) {
                lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
                if (1 < *(uint *)(lVar22 + 0x198)) {
                  lVar31 = lVar22 + 0x130;
                }
                iVar9 = *(int *)(lVar31 + 0x28);
                if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
                  iVar4 = *(int *)(lVar31 + 0x2c);
                  if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                     (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                     uVar10 < *(uint *)(lVar31 + 0x10))) {
                    puVar33 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
                  }
                }
              }
              lVar31 = *(long *)PTR_DAT_04bb43c0;
              uVar10 = FUN_0277d6c4(puVar33);
              lVar22 = *(long *)puVar2;
              if (lVar22 != 0) {
                lVar31 = *(long *)(lVar31 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar31 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  uVar12 = FUN_0277e024(puVar33);
                  puVar2 = PTR_DAT_04bb43c0;
                  lVar22 = *(long *)PTR_DAT_04bb43c0;
                  if ((uVar12 & 1) == 0) {
                    local_238 = PTR_DAT_04bc0510 + 0x10;
                    local_230 = *puVar33;
                    local_22c = (float)puVar33[1];
                    uStack_228 = 0;
                    local_224 = 0.0;
                    uVar10 = FUN_0277d6c4(&local_230);
                    if (*(long *)puVar2 != 0) {
                      lVar22 = *(long *)(lVar22 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar22 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(puVar33);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                           (lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                           lVar22 != 0)) {
                          uStack_228 = (undefined4)lVar22;
                          local_224 = (float)((ulong)lVar22 >> 0x20);
                        }
                      }
                    }
                    uVar12 = FUN_01ae6020(&local_238);
                    if ((uVar12 & 1) == 0) {
                      iVar9 = FUN_01ae7550(&local_238);
                      local_80 = CONCAT44(local_80._4_4_,iVar9);
                      if (iVar9 - 1U < 6) goto LAB_01e72920;
                    }
                    lVar22 = *(long *)PTR_DAT_04bb43c0;
                  }
                }
              }
              uVar10 = FUN_0277d6c4(puVar32);
              lVar31 = *(long *)PTR_DAT_04bb43c0;
              if (lVar31 != 0) {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  local_238 = PTR_DAT_04bc0510 + 0x10;
                  local_230 = *puVar32;
                  local_22c = (float)puVar32[1];
                  uStack_228 = 0;
                  local_224 = 0.0;
                  uVar10 = FUN_0277d6c4(&local_230);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01e728d0:
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_80 = CONCAT44(local_80._4_4_,0xa7);
                  }
                  else {
                    lVar22 = *(long *)(lVar31 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_01e728d0;
                    lVar22 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(puVar32);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (puVar28 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar28 == (uint *)0x0)) goto LAB_01e728d0;
                    uStack_228 = SUB84(puVar28,0);
                    local_224 = (float)((ulong)puVar28 >> 0x20);
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x70);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e72680;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e72680:
                    if (local_84 == 0x70) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0xa5);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e72728;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e72728:
                    if (local_84 == 0xa5) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0xa7);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e7290c;
                          }
                        }
                        local_84 = 0;
                      }
                    }
                  }
LAB_01e7290c:
                  if (local_84 == (uint)local_80) goto switchD_01e70f5c_caseD_7;
                }
              }
            }
          }
LAB_01e72920:
          if (iVar34 < iVar7 + 0x5f) {
            iVar34 = iVar34 + 1;
          }
          else {
            iVar30 = iVar30 + 1;
            iVar34 = iVar7;
          }
        } while ((iVar7 != iVar34) || (iVar24 != iVar30));
        local_238 = (undefined *)((ulong)local_238 & 0xffffffff00000000);
        lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar36 = *(float *)(lVar22 + 0x278) + 2.5;
        fVar37 = *(float *)(lVar22 + 0x280) + 2.5;
        fVar36 = (float)((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar37 = (float)((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar7 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
        iVar30 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
        iVar24 = iVar30 + 0x60;
        iVar34 = iVar7;
        do {
          lVar22 = *(long *)(lVar18 + 0xd0);
          puVar32 = (undefined4 *)puVar16;
          if (lVar22 != 0) {
            lVar31 = lVar22 + 0x130 + (ulong)*(uint *)(lVar22 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar22 + 0x198)) {
              lVar31 = lVar22 + 0x130;
            }
            iVar9 = *(int *)(lVar31 + 0x28);
            if (iVar9 <= iVar34 && iVar34 <= *(int *)(lVar31 + 8) + iVar9 + -1) {
              iVar4 = *(int *)(lVar31 + 0x2c);
              if ((iVar4 <= iVar30 && iVar30 <= *(int *)(lVar31 + 0xc) + iVar4 + -1) &&
                 (uVar10 = (iVar30 - iVar4) + (iVar34 - iVar9) * *(int *)(lVar31 + 0xc),
                 uVar10 < *(uint *)(lVar31 + 0x10))) {
                puVar32 = (undefined4 *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar10 * 8);
              }
            }
          }
          uVar12 = FUN_0277e158(puVar32);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_0277e024(puVar32);
            puVar2 = PTR_DAT_04bb43c0;
            if ((uVar12 & 1) == 0) {
              lVar22 = *(long *)PTR_DAT_04bb43c0;
              uVar10 = FUN_0277d6c4(puVar32);
              lVar31 = *(long *)puVar2;
              if (lVar31 != 0) {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  local_238 = PTR_DAT_04bc0510 + 0x10;
                  local_230 = *puVar32;
                  local_22c = (float)puVar32[1];
                  uStack_228 = 0;
                  local_224 = 0.0;
                  uVar10 = FUN_0277d6c4(&local_230);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01e72db0:
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_84 = 0xbc;
                    local_80 = CONCAT44(local_80._4_4_,0xa7);
                  }
                  else {
                    lVar22 = *(long *)(lVar31 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_01e72db0;
                    lVar22 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(puVar32);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
                       (puVar28 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar28 == (uint *)0x0)) goto LAB_01e72db0;
                    uStack_228 = SUB84(puVar28,0);
                    local_224 = (float)((ulong)puVar28 >> 0x20);
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0x70);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e72c4c;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e72c4c:
                    if (local_84 == 0x70) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0xa5);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e72cf4;
                          }
                        }
                        local_84 = 0;
                      }
                    }
LAB_01e72cf4:
                    if (local_84 == 0xa5) goto switchD_01e70f5c_caseD_7;
                    local_84 = 0;
                    local_80 = CONCAT44(local_80._4_4_,0xa7);
                    uVar10 = *puVar28;
                    if ((uVar10 != 0) && (puVar28 != (uint *)(ulong)uVar10)) {
                      puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar10);
                      local_84 = 0;
                      if (*puVar23 != 0) {
                        uVar10 = puVar23[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar23 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
                          if (lVar22 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar8 = (uint)((ulong)((long)puVar28 - lVar22) / (ulong)uVar10);
                            }
                            if (*puVar23 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_84 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar8 * 2), local_84 < 0xbd))
                            goto LAB_01e72dec;
                          }
                        }
                        local_84 = 0;
                      }
                    }
                  }
LAB_01e72dec:
                  if (local_84 == (uint)local_80) goto switchD_01e70f5c_caseD_7;
                }
              }
            }
          }
          if (iVar34 < iVar7 + 0x5f) {
            iVar34 = iVar34 + 1;
          }
          else {
            iVar30 = iVar30 + 1;
            iVar34 = iVar7;
          }
        } while ((iVar7 != iVar34) || (iVar24 != iVar30));
      }
    }
    local_80 = CONCAT44(local_80._4_4_,uVar35);
    if (uVar35 < 0x11) {
      local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35);
      uVar10 = uVar35 + 7;
      if (-1 < (int)uVar35) {
        uVar10 = uVar35;
      }
      uVar12 = (ulong)(uint)((int)uVar10 >> 3);
      if ((uint)((int)uVar10 >> 3) < 3) {
        bVar15 = *(byte *)((long)&local_88 + uVar12) & ((byte)(1 << (ulong)(uVar35 & 7)) ^ 0xff);
LAB_01e70ed4:
        local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar35);
        *(byte *)((long)&local_88 + uVar12) = bVar15;
      }
    }
LAB_01e70ee0:
    puVar19 = PTR_DAT_04bc1568;
    puVar2 = PTR_DAT_04bc1560;
    uVar10 = 0x11;
    if ((int)uVar35 < 0x11) {
      uVar10 = uVar35 + 1;
    }
    uVar35 = uVar10;
  } while (uVar10 != 0x11);
  if (*puVar14 != 0) {
    cVar27 = *PTR_DAT_04bc1560;
    do {
      if (cVar27 == '\0') {
        cVar27 = '\x01';
        *(undefined8 *)puVar19 = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar35 = *(uint *)(puVar19 + 0x14);
        if (-1 < (int)uVar35) {
          if ((byte *)((ulong)uVar35 + (long)puVar14) != (byte *)0x0) {
            uVar35 = (uint)*(byte *)((ulong)uVar35 + (long)puVar14);
            goto LAB_01e72f84;
          }
          break;
        }
        if (uVar35 != 0xffffffff) break;
      }
      puVar28 = (uint *)(ulong)*puVar14;
      uVar35 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar28)) goto LAB_01e72f84;
      lVar18 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar28)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar14 + (lVar18 - (long)puVar28);
      if (lVar18 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar28));
      *(undefined4 *)(puVar19 + 0x14) = 0xfffffffe;
      if (uVar12 == 0) break;
      piVar29 = (int *)(lVar18 + 4);
      while (piVar29[-1] != 0x430dbf65) {
        piVar29 = piVar29 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_01e72f80;
      }
      iVar24 = 0;
      if (*piVar29 != -1) {
        iVar24 = *piVar29;
      }
      *(int *)(puVar19 + 0x14) = iVar24;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_01e72f80:
  uVar35 = 0;
LAB_01e72f84:
  uVar10 = 0;
  uVar8 = 0;
  do {
    local_80 = CONCAT44(local_80._4_4_,uVar10);
    if (uVar10 < 0x11) {
      local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar10);
      uVar25 = uVar10 + 7;
      if (-1 < (int)uVar10) {
        uVar25 = uVar10;
      }
      if (2 < (uint)((int)uVar25 >> 3)) goto LAB_01e72f94;
      local_238 = (undefined *)CONCAT44(local_238._4_4_,uVar10);
      uVar25 = *(byte *)((long)&local_88 + (ulong)(uint)((int)uVar25 >> 3)) >> (ulong)(uVar10 & 7) &
               1;
    }
    else {
LAB_01e72f94:
      uVar25 = 0;
    }
    uVar10 = uVar10 + 1;
    uVar8 = uVar8 + uVar25;
  } while (uVar10 != 0x11);
  if (0 < (int)uVar8) {
    lVar18 = *(long *)(param_1 + 8);
    local_8c = 0;
    iVar24 = 0;
    uVar25 = *(uint *)(lVar18 + 0x294);
    uVar10 = *(uint *)(lVar18 + 0x288) ^ *(uint *)(lVar18 + 0x288) << 0xb;
    *(undefined4 *)(lVar18 + 0x288) = *(undefined4 *)(lVar18 + 0x28c);
    uVar10 = uVar10 >> 8 ^ uVar25 >> 0x13 ^ uVar10 ^ uVar25;
    uVar5 = *(undefined4 *)(lVar18 + 0x290);
    *(uint *)(lVar18 + 0x290) = uVar25;
    *(uint *)(lVar18 + 0x294) = uVar10;
    *(undefined4 *)(lVar18 + 0x28c) = uVar5;
    do {
      local_80 = CONCAT44(local_80._4_4_,local_8c);
      if (local_8c < 0x11) {
        local_238 = (undefined *)CONCAT44(local_238._4_4_,local_8c);
        uVar25 = local_8c + 7;
        if (-1 < (int)local_8c) {
          uVar25 = local_8c;
        }
        if (((uint)((int)uVar25 >> 3) < 3) &&
           (local_238 = (undefined *)CONCAT44(local_238._4_4_,local_8c),
           (*(byte *)((long)&local_88 + (ulong)(uint)((int)uVar25 >> 3)) >> (ulong)(local_8c & 7) &
           1) != 0)) {
          if (iVar24 == (int)((ulong)uVar10 * (ulong)uVar8 >> 0x20)) goto LAB_01e730b8;
          iVar24 = iVar24 + 1;
        }
      }
      local_8c = local_8c + 1;
    } while (local_8c != 0x11);
    local_8c = 0xffffffff;
LAB_01e730b8:
    uVar10 = FUN_01e73fe0(param_1,&local_8c);
    if ((uVar10 & 1) != 0) {
      FUN_01e63f1c(&local_238);
      local_84 = 0;
      local_238 = (undefined *)CONCAT44(local_238._4_4_,0x3f);
      local_198 = *(undefined4 *)(pcVar11 + 0xc);
      local_194 = *(undefined4 *)(pcVar11 + 0x10);
      local_190 = *(undefined4 *)(pcVar11 + 0x14);
      uVar12 = local_80 >> 0x20;
      local_80 = uVar12 << 0x20;
      if ((uVar35 & 1) == 0) {
        local_80 = uVar12 << 0x20;
        puVar16 = &local_80;
        FUN_01e6fdd0(&local_80,param_1,(uint *)(param_1 + 0xb030));
        local_15a = local_80._2_1_;
        local_159 = local_80._3_1_;
      }
      else {
        local_15a = *(undefined1 *)((long)puVar16 + 2);
        local_159 = *(undefined1 *)((long)puVar16 + 3);
      }
      local_15c = *(undefined2 *)puVar16;
      local_158 = *(undefined4 *)((long)puVar16 + 4);
      uStack_1d8 = (undefined *)CONCAT44(1,(undefined4)uStack_1d8);
      local_1d0._0_3_ = CONCAT12(1,(undefined2)local_1d0);
      if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
        FUN_021920b0((int *)(param_1 + 0xef10),&local_238);
      }
      goto LAB_01e73388;
    }
    if (((*(int *)(pcVar11 + 8) == 0x10) || (*(int *)(pcVar11 + 8) == 0xe)) &&
       (*(int *)(pcVar11 + 8) != 0x10)) goto LAB_01e73388;
  }
  local_80._0_4_ = 2;
  local_238._0_4_ = 2;
  if (((uVar35 >> 2 & 1) == 0) || (uVar12 = FUN_01e769a0(param_1), (uVar12 & 1) == 0)) {
    local_80 = CONCAT44(local_80._4_4_,3);
    local_238 = (undefined *)CONCAT44(local_238._4_4_,3);
    if ((uVar35 >> 3 & 1) != 0) {
      uVar10 = 0;
      goto LAB_01e73388;
    }
    FUN_01e76e90(param_1);
  }
  else {
    local_230 = 0;
    local_238 = PTR_DAT_04bc1968 + 0x10;
    local_1f0 = 0;
    local_1e8 = 0xfffe;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_200 = 0;
    local_210 = puVar1;
    puStack_208 = puVar2;
    puStack_1f8 = puVar2;
    FUN_0277d4ac(&local_1e8);
    local_1d0 = 0;
    local_230 = 0x10;
    local_200 = 0;
    local_1f0 = 0;
    local_22c = 0.0;
    uStack_228 = 0;
    local_224 = 0.0;
    uStack_220 = 0;
    local_21c = 0;
    uStack_218 = 0;
    local_80 = 0xfffe;
    local_1c0 = 0;
    local_1e0 = puVar1;
    uStack_1d8 = puVar2;
    local_1c8 = puVar2;
    FUN_0277d4ac(&local_80);
    local_1d0 = 0;
    local_1c0 = 0;
    local_230 = 0xf;
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_1e8 = local_80;
    local_22c = *(float *)(lVar18 + 0x278);
    local_224 = *(float *)(lVar18 + 0x280);
    uStack_220 = 0;
    local_21c = 0;
    uStack_218 = 0;
    local_1b8 = 0;
    uStack_228 = *(undefined4 *)(lVar18 + 0x27c);
    iVar24 = (int)((float)(int)(local_22c + -12.5) / 5.0) - (uint)(local_22c + -12.5 < 0.0);
    iVar30 = (int)((float)(int)(local_224 + -12.5) / 5.0) - (uint)(local_224 + -12.5 < 0.0);
    local_200 = CONCAT44(iVar30,iVar24);
    local_1f0 = CONCAT44(iVar30 + 5,iVar24 + 5);
    FUN_021dd4e0(&local_238);
    FUN_01e77180(param_1);
  }
  uVar10 = 1;
LAB_01e73388:
  return uVar10 & 1;
}

