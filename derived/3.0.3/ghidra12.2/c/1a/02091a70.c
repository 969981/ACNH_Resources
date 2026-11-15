
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff74 : 0x0209201c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02091a70(long param_1,long param_2,int *param_3,int *param_4,int param_5,uint param_6)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint *puVar19;
  char cVar20;
  byte bVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  ulong uVar26;
  int iVar27;
  int *piVar28;
  char *pcVar29;
  long lVar30;
  uint *puVar31;
  float fVar32;
  float fVar33;
  undefined2 local_8c;
  undefined1 local_8a;
  int local_88;
  uint local_84;
  undefined *local_80;
  char *pcStack_78;
  
  lVar30 = *(long *)PTR_DAT_04bb3968;
  if (lVar30 == 0) {
    return;
  }
  bVar6 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  local_88 = param_5;
  if (lVar23 == 0) {
LAB_02091b48:
    bVar15 = 0;
  }
  else {
    puVar24 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar23 = (**(code **)(*(long *)*puVar24 + 0x38))();
      if (lVar23 == 0) goto LAB_02091b48;
      lVar23 = lVar23 + 0x70;
    }
    else if (((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) ||
            (lVar23 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar23 == 0))
    goto LAB_02091b48;
    if ((*(long **)(lVar23 + 0x1bf260) == (long *)0x0) ||
       (puVar24 = (undefined8 *)**(long **)(lVar23 + 0x1bf260), puVar24 == (undefined8 *)0x0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = (**(code **)*puVar24)();
      uVar18 = uVar18 & 0xffffffff;
    }
    bVar15 = FUN_028d53e4(*(long *)(lVar23 + 0x1bf248) + *(long *)(lVar23 + 0x1bf240));
    if ((((uVar18 & 1) != 0) && (*(long *)(lVar23 + 0x1bf260) != 0)) &&
       (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x1bf260) + 8), puVar24 != (undefined8 *)0x0))
    {
      (**(code **)*puVar24)();
    }
  }
  puVar10 = PTR_DAT_04bb32f0;
  if (*(long *)PTR_DAT_04bb32f0 == 0) {
LAB_02091b88:
    bVar14 = false;
  }
  else {
    uVar16 = FUN_00883550();
    if (uVar16 < 2) {
      bVar14 = true;
    }
    else {
      if (*(long *)puVar10 == 0) goto LAB_02091b88;
      uVar16 = FUN_00883068();
      bVar14 = uVar16 < 2;
    }
  }
  uVar16 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  bVar21 = *(byte *)(param_2 + 8);
  if (((bVar21 < 0x23) && (*(byte *)(param_2 + 9) <= (byte)PTR_DAT_04bc27f0[bVar21])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar21 * 4) >> (ulong)(*(byte *)(param_2 + 9) & 0x1f) & 1
      ) != 0)) {
    if (bVar21 == 0xd) {
      bVar8 = true;
      goto LAB_02091c04;
    }
    FUN_020fd7d8();
  }
  bVar8 = false;
LAB_02091c04:
  puVar10 = PTR_DAT_04bc1568;
  bVar9 = bVar8;
  if ((uVar16 & 0xfffffffe) != 4) {
    bVar9 = true;
  }
  lVar23 = 0;
  uVar18 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcVar29 = PTR_DAT_04bc1560;
  do {
    uVar16 = *(uint *)((long)&DAT_041796ac + (-(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2))
    ;
    if ((int)*(uint *)(lVar30 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar30 + 0x169b8) != 0) &&
           (puVar31 = *(uint **)(*(long *)(lVar30 + 0x169b8) + 8), puVar31 != (uint *)0x0)) &&
          (((*(uint *)(lVar30 + 0x169d0) <= uVar16 ||
            (*(char *)(*(long *)(lVar30 + 0x169d8) + (long)(int)uVar16) != '\0')) &&
           ((uVar16 < *puVar31 && (puVar31[1] != 0)))))) && ((ushort)puVar31[2] != 0)) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar31 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar31 = (uint *)((ulong)(puVar31[1] * uVar16 + (uint)(ushort)puVar31[2] * 8 + iVar17) +
                          (long)puVar31);
        goto joined_r0x02091eb4;
      }
    }
    else if (uVar16 < *(uint *)(lVar30 + 0x16ac8)) {
      uVar22 = uVar16;
      if (*(uint *)(lVar30 + 0x16ab8) <= uVar16) {
        uVar22 = 0;
      }
      puVar31 = *(uint **)(*(long *)(lVar30 + 0x16ac0) + (ulong)uVar22 * 8);
joined_r0x02091eb4:
      if (puVar31 != (uint *)0x0) {
        if (bVar6 < 2 && (param_6 & 1) == 0) {
LAB_02091ed8:
          if (*param_3 == 0 && (((bVar15 | bVar14) ^ 0xff) & 1) == 0) {
            if (*puVar31 != 0) {
              cVar20 = *pcVar29;
              do {
                if (cVar20 == '\0') {
                  cVar20 = '\x01';
                  *(undefined8 *)puVar10 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                  *pcVar29 = '\x01';
                  *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
                }
                else {
                  uVar22 = *(uint *)(puVar10 + 100);
                  if (-1 < (int)uVar22) {
                    puVar2 = (undefined2 *)((ulong)uVar22 + (long)puVar31);
                    if (puVar2 != (undefined2 *)0x0) {
                      local_8c = *puVar2;
                      local_8a = *(undefined1 *)(puVar2 + 1);
                      goto LAB_02091fe0;
                    }
                    break;
                  }
                  if (uVar22 != 0xffffffff) break;
                }
                lVar7 = (long)puVar31 - (ulong)*puVar31;
                if ((*puVar31 == 0) || (lVar7 == 0)) break;
                lVar4 = 0xc;
                if (*(char *)(lVar7 + 10) != '\0') {
                  lVar4 = 0x1c;
                }
                if (lVar4 + lVar7 == 0) break;
                uVar26 = (ulong)*(ushort *)(lVar7 + 8);
                *(undefined4 *)(puVar10 + 100) = 0xfffffffe;
                if (uVar26 == 0) break;
                piVar28 = (int *)(lVar4 + lVar7 + 4);
                while (piVar28[-1] != -0x6437a430) {
                  piVar28 = piVar28 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_02091fd8;
                }
                iVar17 = 0;
                if (*piVar28 != -1) {
                  iVar17 = *piVar28;
                }
                *(int *)(puVar10 + 100) = iVar17;
                if (*puVar31 == 0) break;
              } while( true );
            }
LAB_02091fd8:
            local_8a = 0;
            local_8c = 0;
LAB_02091fe0:
            local_84 = 7;
            local_80 = (undefined *)CONCAT44(local_80._4_4_,7);
            if ((char)local_8c < '\0') {
              iVar17 = 0;
              uVar22 = 0;
              do {
                local_84 = uVar22;
                if (local_84 < 0x11) {
                  local_80 = (undefined *)CONCAT44(local_80._4_4_,local_84);
                  uVar22 = local_84 + 7;
                  if (-1 < (int)local_84) {
                    uVar22 = local_84;
                  }
                  if (2 < (uint)((int)uVar22 >> 3)) goto LAB_02092040;
                  local_80 = (undefined *)CONCAT44(local_80._4_4_,local_84);
                  uVar22 = *(byte *)((long)&local_8c + (ulong)(uint)((int)uVar22 >> 3)) >>
                           (ulong)(local_84 & 7) & 1;
                }
                else {
LAB_02092040:
                  uVar22 = 0;
                }
                iVar17 = iVar17 + uVar22;
                uVar22 = local_84 + 1;
              } while (local_84 + 1 != 0x11);
              if (iVar17 == 1) goto LAB_02091d40;
            }
          }
          local_80 = (undefined *)CONCAT44(local_80._4_4_,5);
          if (*puVar31 != 0) {
            cVar20 = *pcVar29;
            do {
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *pcVar29 = '\x01';
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
              }
              else {
                uVar22 = *(uint *)(puVar10 + 0x14);
                if (-1 < (int)uVar22) {
                  if (((byte *)((ulong)uVar22 + (long)puVar31) != (byte *)0x0) &&
                     ((*(byte *)((ulong)uVar22 + (long)puVar31) >> 5 & 1) != 0)) {
                    pcStack_78 = "CoffeTakeout";
                    local_80 = puVar1;
                    uVar26 = FUN_0273f0a0(&local_80);
                    pcVar29 = PTR_DAT_04bc1560;
                    if ((uVar26 & 1) == 0) goto LAB_02091d40;
                  }
                  break;
                }
                if (uVar22 != 0xffffffff) break;
              }
              lVar7 = (long)puVar31 - (ulong)*puVar31;
              if ((*puVar31 == 0) || (lVar7 == 0)) break;
              lVar4 = 0xc;
              if (*(char *)(lVar7 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              if (lVar4 + lVar7 == 0) break;
              uVar26 = (ulong)*(ushort *)(lVar7 + 8);
              *(undefined4 *)(puVar10 + 0x14) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar28 = (int *)(lVar4 + lVar7 + 4);
              while (piVar28[-1] != 0x430dbf65) {
                piVar28 = piVar28 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020921fc;
              }
              iVar17 = 0;
              if (*piVar28 != -1) {
                iVar17 = *piVar28;
              }
              *(int *)(puVar10 + 0x14) = iVar17;
              if (*puVar31 == 0) break;
            } while( true );
          }
LAB_020921fc:
          if (*param_3 == 0) {
            bVar21 = 2;
            if (*puVar31 != 0) {
              cVar20 = *pcVar29;
              do {
                if (cVar20 == '\0') {
                  cVar20 = '\x01';
                  *(undefined8 *)puVar10 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                  *pcVar29 = '\x01';
                  *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
                }
                else {
                  uVar22 = *(uint *)(puVar10 + 0x50);
                  if (-1 < (int)uVar22) {
                    if ((byte *)((ulong)uVar22 + (long)puVar31) != (byte *)0x0) {
                      uVar22 = (uint)*(byte *)((ulong)uVar22 + (long)puVar31);
                      goto LAB_02092340;
                    }
                    break;
                  }
                  if (uVar22 != 0xffffffff) break;
                }
                puVar19 = (uint *)(ulong)*puVar31;
                uVar22 = 2;
                if ((*puVar31 == 0) || (puVar31 == puVar19)) goto LAB_02092340;
                lVar7 = 0xc;
                if (*(char *)((long)puVar31 + (10 - (long)puVar19)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar31 + (lVar7 - (long)puVar19);
                if (lVar7 == 0) break;
                uVar26 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar19));
                *(undefined4 *)(puVar10 + 0x50) = 0xfffffffe;
                if (uVar26 == 0) break;
                piVar28 = (int *)(lVar7 + 4);
                while (piVar28[-1] != 0x67850558) {
                  piVar28 = piVar28 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_0209233c;
                }
                iVar17 = 0;
                if (*piVar28 != -1) {
                  iVar17 = *piVar28;
                }
                *(int *)(puVar10 + 0x50) = iVar17;
                if (*puVar31 == 0) break;
              } while( true );
            }
LAB_0209233c:
            uVar22 = 2;
LAB_02092340:
            if (1 < uVar22) {
              uVar22 = 2;
            }
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar22);
            if (*puVar31 != 0) {
              cVar20 = *pcVar29;
LAB_02092358:
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *pcVar29 = '\x01';
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
LAB_020923a0:
                puVar19 = (uint *)(ulong)*puVar31;
                bVar21 = 2;
                if ((*puVar31 == 0) || (puVar31 == puVar19)) goto LAB_02092430;
                lVar7 = 0xc;
                if (*(char *)((long)puVar31 + (10 - (long)puVar19)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar31 + (lVar7 - (long)puVar19);
                if (lVar7 == 0) goto LAB_0209242c;
                uVar26 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar19));
                *(undefined4 *)(puVar10 + 0x4c) = 0xfffffffe;
                if (uVar26 == 0) goto LAB_0209242c;
                piVar28 = (int *)(lVar7 + 4);
                while (piVar28[-1] != -0x5621fc7c) {
                  piVar28 = piVar28 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_0209242c;
                }
                iVar17 = 0;
                if (*piVar28 != -1) {
                  iVar17 = *piVar28;
                }
                *(int *)(puVar10 + 0x4c) = iVar17;
                if (*puVar31 == 0) goto LAB_0209242c;
                goto LAB_02092358;
              }
              uVar5 = *(uint *)(puVar10 + 0x4c);
              if ((int)uVar5 < 0) {
                if (uVar5 != 0xffffffff) goto LAB_0209242c;
                goto LAB_020923a0;
              }
              if ((byte *)((ulong)uVar5 + (long)puVar31) != (byte *)0x0) {
                bVar21 = *(byte *)((ulong)uVar5 + (long)puVar31);
                goto LAB_02092430;
              }
LAB_0209242c:
              bVar21 = 2;
            }
LAB_02092430:
            if (1 < bVar21) {
              bVar21 = 2;
            }
            if (0 < local_88) {
              local_84 = *(uint *)(param_2 + 0x10c);
              if ((bool)((int)local_84 < 1 & (bVar8 ^ 1U))) {
                if (local_88 == 2) {
                  if (bVar21 == 0) {
LAB_020924b0:
                    puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                    pcVar29 = PTR_DAT_04bc1560;
                    uVar5 = puVar19[3];
                    uVar22 = *puVar19 ^ *puVar19 << 0xb;
                    *puVar19 = puVar19[1];
                    puVar19[1] = puVar19[2];
                    uVar22 = uVar22 >> 8 ^ uVar5 >> 0x13 ^ uVar22 ^ uVar5;
                    puVar19[2] = uVar5;
                    puVar19[3] = uVar22;
                    if (0x45 < (uint)((ulong)uVar22 * 100 >> 0x20)) {
LAB_0209252c:
                      uVar22 = (uint)local_80;
                      goto LAB_02092530;
                    }
                  }
                }
                else {
                  if (local_88 != 1) goto LAB_02092204;
                  if (bVar21 != 2) {
                    if (bVar21 == 1) goto LAB_020924b0;
                    goto LAB_0209252c;
                  }
                }
              }
              else if (bVar9) {
                if ((uVar22 == 0) || (uVar22 == 1)) goto LAB_02092204;
              }
              else {
LAB_02092530:
                if (uVar22 == 0) goto LAB_02092204;
              }
              goto LAB_02091d40;
            }
          }
LAB_02092204:
          iVar17 = *(int *)(param_2 + 0x30);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar16);
          if (iVar17 != 0) {
            iVar27 = *(int *)(param_2 + 0x2c);
            do {
              iVar3 = 0;
              if (*(int *)(param_2 + 0x28) <= iVar27) {
                iVar3 = *(int *)(param_2 + 0x28);
              }
              puVar19 = (uint *)(*(long *)(param_2 + 0x20) + (long)(iVar27 - iVar3) * 0x10);
              if ((*(char *)((long)puVar19 + 0xd) != '\0') && (*puVar19 == uVar16))
              goto LAB_02091d40;
              iVar17 = iVar17 + -1;
              iVar27 = iVar27 + 1;
            } while (iVar17 != 0);
          }
          if (*param_3 == 0) {
            ppuVar25 = &PTR_LAB_04a71cd8;
          }
          else {
            ppuVar25 = &PTR_LAB_04a71d38;
          }
          iVar17 = (*(code *)ppuVar25[(long)*param_4 * 2])(puVar31);
          pcVar29 = PTR_DAT_04bc1560;
          local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar17);
          fVar32 = 0.4;
          if (iVar17 != 1) {
            fVar32 = 0.0;
          }
          fVar33 = 1.0;
          if (iVar17 != 0) {
            fVar33 = fVar32;
          }
          bVar11 = false;
          bVar12 = true;
          bVar13 = false;
          if (fVar33 < 1.0) {
            bVar11 = false;
            bVar12 = false;
            bVar13 = true;
            if (!NAN(fVar33)) {
              bVar11 = fVar33 < 0.0;
              bVar12 = fVar33 == 0.0;
              bVar13 = false;
            }
          }
          fVar32 = 0.4;
          if (bVar12 || bVar11 != bVar13) {
            fVar32 = fVar33;
          }
          **(float **)(*(long *)(param_1 + 8) + lVar23 * 8) = fVar32;
        }
        else if (*puVar31 != 0) {
          cVar20 = *pcVar29;
          do {
            if (cVar20 == '\0') {
              cVar20 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *pcVar29 = '\x01';
              *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar22 = *(uint *)(puVar10 + 0x48);
              if (-1 < (int)uVar22) {
                if (((char *)((ulong)uVar22 + (long)puVar31) != (char *)0x0) &&
                   (*(char *)((ulong)uVar22 + (long)puVar31) == '\0')) goto LAB_02091ed8;
                break;
              }
              if (uVar22 != 0xffffffff) break;
            }
            lVar7 = (long)puVar31 - (ulong)*puVar31;
            if ((*puVar31 == 0) || (lVar7 == 0)) break;
            lVar4 = 0xc;
            if (*(char *)(lVar7 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            if (lVar4 + lVar7 == 0) break;
            uVar26 = (ulong)*(ushort *)(lVar7 + 8);
            *(undefined4 *)(puVar10 + 0x48) = 0xfffffffe;
            if (uVar26 == 0) break;
            piVar28 = (int *)(lVar4 + lVar7 + 4);
            while (piVar28[-1] != -0xe691fac) {
              piVar28 = piVar28 + 2;
              uVar26 = uVar26 - 1;
              if (uVar26 == 0) goto LAB_02091d40;
            }
            iVar17 = 0;
            if (*piVar28 != -1) {
              iVar17 = *piVar28;
            }
            *(int *)(puVar10 + 0x48) = iVar17;
            if (*puVar31 == 0) break;
          } while( true );
        }
      }
    }
LAB_02091d40:
    lVar23 = lVar23 + 1;
    uVar18 = (ulong)((int)uVar18 + 1);
    if (lVar23 == 7) {
      return;
    }
  } while( true );
}

