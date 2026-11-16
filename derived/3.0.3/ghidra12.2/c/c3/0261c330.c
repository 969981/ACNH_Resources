
void FUN_0261c330(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  char cVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ushort uVar18;
  uint *puVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  uint local_10c;
  undefined *local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  long local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined2 *local_c0;
  undefined4 *puStack_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined4 *local_a0;
  undefined4 *puStack_98;
  undefined4 *local_90;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 auStack_6c [3];
  
  puVar10 = (undefined8 *)(param_1 + 0xe9be0);
  *puVar10 = 0;
  *(undefined8 *)(param_1 + 0xe9be8) = 0;
  *(undefined8 *)(param_1 + 0xe9bf0) = 0;
  *(undefined8 *)(param_1 + 0xe9bf8) = 0;
  *(undefined8 *)(param_1 + 0xe9c00) = 0;
  *(undefined8 *)(param_1 + 0xe9c08) = 0;
  *(undefined8 *)(param_1 + 0xe9c10) = 0;
  *(undefined8 *)(param_1 + 0xe9c18) = 0;
  *(undefined8 *)(param_1 + 0xe9c20) = 0;
  *(undefined8 *)(param_1 + 0xe9c28) = 0;
  *(undefined8 *)(param_1 + 0xe9c30) = 0;
  *(undefined8 *)(param_1 + 0xe9c38) = 0;
  *(undefined8 *)(param_1 + 0xe9c40) = 0;
  *(undefined8 *)(param_1 + 0xe9c48) = 0;
  *(undefined8 *)(param_1 + 0xe9c50) = 0;
  *(undefined8 *)(param_1 + 0xe9c58) = 0;
  *(undefined8 *)(param_1 + 0xe9c60) = 0;
  *(undefined8 *)(param_1 + 0xe9c68) = 0;
  *(undefined8 *)(param_1 + 0xe9c70) = 0;
  *(undefined8 *)(param_1 + 0xe9c78) = 0;
  *(undefined8 *)(param_1 + 0xe9c80) = 0;
  *(undefined8 *)(param_1 + 0xe9c88) = 0;
  *(undefined8 *)(param_1 + 0xe9c90) = 0;
  *(undefined8 *)(param_1 + 0xe9c98) = 0;
  *(undefined8 *)(param_1 + 0xe9ca0) = 0;
  *(undefined8 *)(param_1 + 0xe9ca8) = 0;
  *(undefined8 *)(param_1 + 0xe9cb0) = 0;
  *(undefined8 *)(param_1 + 0xe9cb8) = 0;
  *(undefined8 *)(param_1 + 0xe9cc0) = 0;
  *(undefined8 *)(param_1 + 0xe9cc8) = 0;
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  *(undefined8 *)(param_1 + 0xe9cd0) = 0;
  *(undefined8 *)(param_1 + 0xe9cd8) = 0;
  local_80 = param_7;
  uStack_7c = param_6;
  local_78 = param_5;
  uStack_74 = param_4;
  local_70 = param_3;
  auStack_6c[0] = param_2;
  if (lVar13 != 0) {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar8 != 0) {
        lVar13 = lVar8 + 0x70;
      }
      goto LAB_0261c408;
    }
    if ((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) {
      lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      goto LAB_0261c408;
    }
  }
  lVar13 = 0;
LAB_0261c408:
  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
    local_10c = 0;
  }
  else {
    local_10c = (**(code **)*puVar14)();
  }
  lVar8 = *(long *)(lVar13 + 8);
  lVar24 = *(long *)(lVar13 + 0x10);
  uVar22 = 0;
  do {
    plVar15 = (long *)(lVar24 + lVar8 + 0x1e33b0 + uVar22 * 0x48);
    if (*plVar15 != 0 || plVar15[1] != 0) {
      lVar16 = *DAT_0537d558;
      bVar4 = *(byte *)(lVar16 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        pbVar3 = (byte *)(lVar16 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
        if (7 < bVar4) {
          pbVar3 = (byte *)(lVar16 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar16 + 0x472) != bVar4)) goto LAB_0261c470;
      }
      if ((DAT_05574040 != 0) &&
         (lVar16 = FUN_026eec4c(DAT_05574040,uVar22 & 0xffffffff), lVar16 != 0)) {
        uVar23 = 0;
        do {
          uVar21 = (ulong)(uVar23 >> 3);
          uVar6 = 1 << (ulong)(uVar23 & 7);
          if (((uVar6 & *(byte *)(param_1 + 0xe99e0 + uVar21)) != 0) &&
             ((uVar6 & *(byte *)((long)puVar10 + uVar21)) == 0)) {
            lVar17 = lVar16 + 0x194b0;
            if (*(long *)(lVar16 + 0x194b8) == 0) {
              lVar17 = *(long *)(DAT_05574040 + 0x20);
            }
            if (*(long **)(lVar17 + 0x86b0) == (long *)0x0) {
              uVar9 = 0;
            }
            else {
              puVar14 = (undefined8 *)**(long **)(lVar17 + 0x86b0);
              uVar9 = 0;
              if (puVar14 != (undefined8 *)0x0) {
                uVar9 = (**(code **)*puVar14)();
              }
            }
            bVar4 = *(byte *)(*(long *)(lVar17 + 0x8698) + *(long *)(lVar17 + 0x8690) + uVar21 +
                             0x100);
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar17 + 0x86b0) != 0)) &&
               (puVar14 = *(undefined8 **)(*(long *)(lVar17 + 0x86b0) + 8),
               puVar14 != (undefined8 *)0x0)) {
              (**(code **)*puVar14)();
            }
            if ((uVar6 & bVar4) != 0) {
              *(byte *)((long)puVar10 + uVar21) =
                   *(byte *)((long)puVar10 + uVar21) | (byte)(1 << (ulong)(uVar23 & 7));
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x800);
      }
    }
LAB_0261c470:
    uVar22 = uVar22 + 1;
  } while (uVar22 != 8);
  local_86 = 0;
  local_84 = 0;
  local_88 = *(undefined2 *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x495060);
  FUN_0277d4ac(&local_88);
  puStack_b8 = auStack_6c;
  puStack_98 = &uStack_7c;
  local_a0 = &local_78;
  local_b0 = &local_70;
  puStack_a8 = &uStack_74;
  uVar22 = 0;
  local_90 = &local_80;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_c0 = &local_88;
  do {
    uVar23 = (uint)uVar22;
    if ((*(byte *)((long)puVar10 + (uVar22 >> 3)) >> (ulong)(uVar23 & 7) & 1) != 0) {
      uVar6 = uVar23 - *(ushort *)(param_1 + 0xea6e0);
      if ((uVar6 < *(uint *)(param_1 + 0xea6c0)) &&
         (puVar25 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar6 * 8),
         puVar25 != (uint *)0x0)) {
        if (*puVar25 != 0) {
          cVar12 = DAT_055576f0;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_055576f0 = '\x01';
              DAT_055576f4 = 0xffffffffffffffff;
              DAT_055576fc = 0xffffffffffffffff;
              DAT_05557704 = 0xffffffffffffffff;
              DAT_0555770c = 0xffffffffffffffff;
              DAT_05557714 = 0xffffffffffffffff;
              DAT_0555771c = 0xffffffffffffffff;
              DAT_05557724 = 0xffffffffffffffff;
              DAT_0555772c = -1;
              DAT_05557734 = 0xffffffffffffffff;
              DAT_0555773c = 0xffffffffffffffff;
              DAT_05557744 = 0xffffffffffffffff;
              DAT_0555774c = 0xffffffffffffffff;
              DAT_05557754 = 0xffffffffffffffff;
              DAT_0555775c = 0xffffffffffffffff;
            }
            else {
              if (-1 < (int)DAT_05557734) {
                puVar2 = (undefined2 *)((DAT_05557734 & 0xffffffff) + (long)puVar25);
                if (puVar2 != (undefined2 *)0x0) {
                  uVar11 = *puVar2;
                  goto LAB_0261c804;
                }
                break;
              }
              if ((int)DAT_05557734 != -1) break;
            }
            puVar19 = (uint *)(ulong)*puVar25;
            uVar11 = 0xfffe;
            if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261c804;
            lVar8 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
            if (lVar8 == 0) goto LAB_0261c804;
            uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
            DAT_05557734 = CONCAT44(DAT_05557734._4_4_,0xfffffffe);
            if (uVar21 == 0) goto LAB_0261c804;
            piVar20 = (int *)(lVar8 + 4);
            while (piVar20[-1] != 0x1bbfa75e) {
              piVar20 = piVar20 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_0261c800;
            }
            iVar7 = 0;
            if (*piVar20 != -1) {
              iVar7 = *piVar20;
            }
            DAT_05557734 = CONCAT44(DAT_05557734._4_4_,iVar7);
            if (*puVar25 == 0) break;
          } while( true );
        }
LAB_0261c800:
        uVar11 = 0xfffe;
LAB_0261c804:
        uVar21 = FUN_0261cfc8(&local_c0,uVar11);
        if ((uVar21 & 1) == 0) {
          if (*puVar25 != 0) {
            cVar12 = DAT_055576f0;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                DAT_055576f0 = '\x01';
                DAT_055576f4 = 0xffffffffffffffff;
                DAT_055576fc = 0xffffffffffffffff;
                DAT_05557704 = 0xffffffffffffffff;
                DAT_0555770c = 0xffffffffffffffff;
                DAT_05557714 = 0xffffffffffffffff;
                DAT_0555771c = 0xffffffffffffffff;
                DAT_05557724 = 0xffffffffffffffff;
                DAT_0555772c = -1;
                DAT_05557734 = 0xffffffffffffffff;
                DAT_0555773c = 0xffffffffffffffff;
                DAT_05557744 = 0xffffffffffffffff;
                DAT_0555774c = 0xffffffffffffffff;
                DAT_05557754 = 0xffffffffffffffff;
                DAT_0555775c = 0xffffffffffffffff;
              }
              else {
                if (-1 < (long)DAT_05557734) {
                  if ((undefined2 *)((ulong)DAT_05557734._4_4_ + (long)puVar25) != (undefined2 *)0x0
                     ) {
                    uVar11 = *(undefined2 *)((ulong)DAT_05557734._4_4_ + (long)puVar25);
                    goto LAB_0261c904;
                  }
                  break;
                }
                if (DAT_05557734._4_4_ != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)*puVar25;
              uVar11 = 0xfffe;
              if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261c904;
              lVar8 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
              if (lVar8 == 0) goto LAB_0261c904;
              uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
              DAT_05557734 = CONCAT44(0xfffffffe,(int)DAT_05557734);
              if (uVar21 == 0) goto LAB_0261c904;
              piVar20 = (int *)(lVar8 + 4);
              while (piVar20[-1] != 0x5c1fdd8e) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_0261c900;
              }
              iVar7 = 0;
              if (*piVar20 != -1) {
                iVar7 = *piVar20;
              }
              DAT_05557734 = CONCAT44(iVar7,(int)DAT_05557734);
              if (*puVar25 == 0) break;
            } while( true );
          }
LAB_0261c900:
          uVar11 = 0xfffe;
LAB_0261c904:
          uVar21 = FUN_0261cfc8(&local_c0,uVar11);
          if ((uVar21 & 1) == 0) {
            if (*puVar25 != 0) {
              cVar12 = DAT_055576f0;
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  DAT_055576f0 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
                  DAT_0555771c = 0xffffffffffffffff;
                  DAT_05557724 = 0xffffffffffffffff;
                  DAT_0555772c = -1;
                  DAT_05557734 = 0xffffffffffffffff;
                  DAT_0555773c = 0xffffffffffffffff;
                  DAT_05557744 = 0xffffffffffffffff;
                  DAT_0555774c = 0xffffffffffffffff;
                  DAT_05557754 = 0xffffffffffffffff;
                  DAT_0555775c = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_0555773c) {
                    puVar2 = (undefined2 *)((DAT_0555773c & 0xffffffff) + (long)puVar25);
                    if (puVar2 != (undefined2 *)0x0) {
                      uVar11 = *puVar2;
                      goto LAB_0261ca04;
                    }
                    break;
                  }
                  if ((int)DAT_0555773c != -1) break;
                }
                puVar19 = (uint *)(ulong)*puVar25;
                uVar11 = 0xfffe;
                if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261ca04;
                lVar8 = 0xc;
                if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
                if (lVar8 == 0) goto LAB_0261ca04;
                uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
                DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,0xfffffffe);
                if (uVar21 == 0) goto LAB_0261ca04;
                piVar20 = (int *)(lVar8 + 4);
                while (piVar20[-1] != 0x617ff43e) {
                  piVar20 = piVar20 + 2;
                  uVar21 = uVar21 - 1;
                  if (uVar21 == 0) goto LAB_0261ca00;
                }
                iVar7 = 0;
                if (*piVar20 != -1) {
                  iVar7 = *piVar20;
                }
                DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,iVar7);
                if (*puVar25 == 0) break;
              } while( true );
            }
LAB_0261ca00:
            uVar11 = 0xfffe;
LAB_0261ca04:
            uVar21 = FUN_0261cfc8(&local_c0,uVar11);
            if ((uVar21 & 1) == 0) {
              if (*puVar25 != 0) {
                cVar12 = DAT_055576f0;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    DAT_055576f0 = '\x01';
                    DAT_055576f4 = 0xffffffffffffffff;
                    DAT_055576fc = 0xffffffffffffffff;
                    DAT_05557704 = 0xffffffffffffffff;
                    DAT_0555770c = 0xffffffffffffffff;
                    DAT_05557714 = 0xffffffffffffffff;
                    DAT_0555771c = 0xffffffffffffffff;
                    DAT_05557724 = 0xffffffffffffffff;
                    DAT_0555772c = -1;
                    DAT_05557734 = 0xffffffffffffffff;
                    DAT_0555773c = 0xffffffffffffffff;
                    DAT_05557744 = 0xffffffffffffffff;
                    DAT_0555774c = 0xffffffffffffffff;
                    DAT_05557754 = 0xffffffffffffffff;
                    DAT_0555775c = 0xffffffffffffffff;
                  }
                  else {
                    if (-1 < (long)DAT_0555773c) {
                      if ((undefined2 *)((ulong)DAT_0555773c._4_4_ + (long)puVar25) !=
                          (undefined2 *)0x0) {
                        uVar11 = *(undefined2 *)((ulong)DAT_0555773c._4_4_ + (long)puVar25);
                        goto LAB_0261cb14;
                      }
                      break;
                    }
                    if (DAT_0555773c._4_4_ != 0xffffffff) break;
                  }
                  puVar19 = (uint *)(ulong)*puVar25;
                  uVar11 = 0xfffe;
                  if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261cb14;
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
                  if (lVar8 == 0) goto LAB_0261cb14;
                  uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
                  DAT_0555773c = CONCAT44(0xfffffffe,(int)DAT_0555773c);
                  if (uVar21 == 0) goto LAB_0261cb14;
                  piVar20 = (int *)(lVar8 + 4);
                  while (piVar20[-1] != -0x2ca0d7d2) {
                    piVar20 = piVar20 + 2;
                    uVar21 = uVar21 - 1;
                    if (uVar21 == 0) goto LAB_0261cb10;
                  }
                  iVar7 = 0;
                  if (*piVar20 != -1) {
                    iVar7 = *piVar20;
                  }
                  DAT_0555773c = CONCAT44(iVar7,(int)DAT_0555773c);
                  if (*puVar25 == 0) break;
                } while( true );
              }
LAB_0261cb10:
              uVar11 = 0xfffe;
LAB_0261cb14:
              uVar21 = FUN_0261cfc8(&local_c0,uVar11);
              if ((uVar21 & 1) == 0) {
                if (*puVar25 != 0) {
                  cVar12 = DAT_055576f0;
                  do {
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      DAT_055576f0 = '\x01';
                      DAT_055576f4 = 0xffffffffffffffff;
                      DAT_055576fc = 0xffffffffffffffff;
                      DAT_05557704 = 0xffffffffffffffff;
                      DAT_0555770c = 0xffffffffffffffff;
                      DAT_05557714 = 0xffffffffffffffff;
                      DAT_0555771c = 0xffffffffffffffff;
                      DAT_05557724 = 0xffffffffffffffff;
                      DAT_0555772c = -1;
                      DAT_05557734 = 0xffffffffffffffff;
                      DAT_0555773c = 0xffffffffffffffff;
                      DAT_05557744 = 0xffffffffffffffff;
                      DAT_0555774c = 0xffffffffffffffff;
                      DAT_05557754 = 0xffffffffffffffff;
                      DAT_0555775c = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < (int)DAT_05557744) {
                        puVar2 = (undefined2 *)((DAT_05557744 & 0xffffffff) + (long)puVar25);
                        if (puVar2 != (undefined2 *)0x0) {
                          uVar11 = *puVar2;
                          goto LAB_0261cc1c;
                        }
                        break;
                      }
                      if ((int)DAT_05557744 != -1) break;
                    }
                    puVar19 = (uint *)(ulong)*puVar25;
                    uVar11 = 0xfffe;
                    if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261cc1c;
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
                    if (lVar8 == 0) goto LAB_0261cc1c;
                    uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
                    DAT_05557744 = CONCAT44(DAT_05557744._4_4_,0xfffffffe);
                    if (uVar21 == 0) goto LAB_0261cc1c;
                    piVar20 = (int *)(lVar8 + 4);
                    while (piVar20[-1] != -0x11c0fe62) {
                      piVar20 = piVar20 + 2;
                      uVar21 = uVar21 - 1;
                      if (uVar21 == 0) goto LAB_0261cc18;
                    }
                    iVar7 = 0;
                    if (*piVar20 != -1) {
                      iVar7 = *piVar20;
                    }
                    DAT_05557744 = CONCAT44(DAT_05557744._4_4_,iVar7);
                    if (*puVar25 == 0) break;
                  } while( true );
                }
LAB_0261cc18:
                uVar11 = 0xfffe;
LAB_0261cc1c:
                uVar21 = FUN_0261cfc8(&local_c0,uVar11);
                if ((uVar21 & 1) == 0) {
                  if (*puVar25 != 0) {
                    cVar12 = DAT_055576f0;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_055576f0 = '\x01';
                        DAT_055576f4 = 0xffffffffffffffff;
                        DAT_055576fc = 0xffffffffffffffff;
                        DAT_05557704 = 0xffffffffffffffff;
                        DAT_0555770c = 0xffffffffffffffff;
                        DAT_05557714 = 0xffffffffffffffff;
                        DAT_0555771c = 0xffffffffffffffff;
                        DAT_05557724 = 0xffffffffffffffff;
                        DAT_0555772c = -1;
                        DAT_05557734 = 0xffffffffffffffff;
                        DAT_0555773c = 0xffffffffffffffff;
                        DAT_05557744 = 0xffffffffffffffff;
                        DAT_0555774c = 0xffffffffffffffff;
                        DAT_05557754 = 0xffffffffffffffff;
                        DAT_0555775c = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (long)DAT_05557744) {
                          if ((undefined2 *)((ulong)DAT_05557744._4_4_ + (long)puVar25) !=
                              (undefined2 *)0x0) {
                            uVar11 = *(undefined2 *)((ulong)DAT_05557744._4_4_ + (long)puVar25);
                            goto LAB_0261cd28;
                          }
                          break;
                        }
                        if (DAT_05557744._4_4_ != 0xffffffff) break;
                      }
                      puVar19 = (uint *)(ulong)*puVar25;
                      uVar11 = 0xfffe;
                      if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261cd28;
                      lVar8 = 0xc;
                      if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                        lVar8 = 0x1c;
                      }
                      lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
                      if (lVar8 == 0) goto LAB_0261cd28;
                      uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
                      DAT_05557744 = CONCAT44(0xfffffffe,(int)DAT_05557744);
                      if (uVar21 == 0) goto LAB_0261cd28;
                      piVar20 = (int *)(lVar8 + 4);
                      while (piVar20[-1] != -0x566084b2) {
                        piVar20 = piVar20 + 2;
                        uVar21 = uVar21 - 1;
                        if (uVar21 == 0) goto LAB_0261cd24;
                      }
                      iVar7 = 0;
                      if (*piVar20 != -1) {
                        iVar7 = *piVar20;
                      }
                      DAT_05557744 = CONCAT44(iVar7,(int)DAT_05557744);
                      if (*puVar25 == 0) break;
                    } while( true );
                  }
LAB_0261cd24:
                  uVar11 = 0xfffe;
LAB_0261cd28:
                  uVar21 = FUN_0261cfc8(&local_c0,uVar11);
                  if ((uVar21 & 1) == 0) {
                    if (*puVar25 != 0) {
                      cVar12 = DAT_055576f0;
                      do {
                        if (cVar12 == '\0') {
                          cVar12 = '\x01';
                          DAT_055576f0 = '\x01';
                          DAT_055576f4 = 0xffffffffffffffff;
                          DAT_055576fc = 0xffffffffffffffff;
                          DAT_05557704 = 0xffffffffffffffff;
                          DAT_0555770c = 0xffffffffffffffff;
                          DAT_05557714 = 0xffffffffffffffff;
                          DAT_0555771c = 0xffffffffffffffff;
                          DAT_05557724 = 0xffffffffffffffff;
                          DAT_0555772c = -1;
                          DAT_05557734 = 0xffffffffffffffff;
                          DAT_0555773c = 0xffffffffffffffff;
                          DAT_05557744 = 0xffffffffffffffff;
                          DAT_0555774c = 0xffffffffffffffff;
                          DAT_05557754 = 0xffffffffffffffff;
                          DAT_0555775c = 0xffffffffffffffff;
                        }
                        else {
                          if (-1 < DAT_0555772c) {
                            if ((ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar25) !=
                                (ushort *)0x0) {
                              uVar18 = *(ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar25);
                              goto LAB_0261ce2c;
                            }
                            break;
                          }
                          if (DAT_0555772c._4_4_ != 0xffffffff) break;
                        }
                        puVar19 = (uint *)(ulong)*puVar25;
                        uVar18 = 0xfffe;
                        if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_0261ce2c;
                        lVar8 = 0xc;
                        if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                          lVar8 = 0x1c;
                        }
                        lVar8 = (long)puVar25 + (lVar8 - (long)puVar19);
                        if (lVar8 == 0) break;
                        uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
                        DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
                        if (uVar21 == 0) break;
                        piVar20 = (int *)(lVar8 + 4);
                        while (piVar20[-1] != -0x765cb7d4) {
                          piVar20 = piVar20 + 2;
                          uVar21 = uVar21 - 1;
                          if (uVar21 == 0) goto LAB_0261ce28;
                        }
                        iVar7 = 0;
                        if (*piVar20 != -1) {
                          iVar7 = *piVar20;
                        }
                        DAT_0555772c = CONCAT44(iVar7,(undefined4)DAT_0555772c);
                        if (*puVar25 == 0) break;
                      } while( true );
                    }
LAB_0261ce28:
                    uVar18 = 0xfffe;
LAB_0261ce2c:
                    local_c8 = (uint)uVar18;
                    local_c4 = 0;
                    FUN_0277d4ac(&local_c8);
                    puVar5 = PTR_DAT_04bb43c0;
                    lVar24 = *(long *)PTR_DAT_04bb43c0;
                    uVar6 = FUN_0277d6c4(&local_c8);
                    lVar8 = *(long *)puVar5;
                    if (lVar8 != 0) {
                      lVar24 = *(long *)(lVar24 + 0x57e58);
                      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if ((uVar6 < *(uint *)(lVar24 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                        local_d0 = 0;
                        local_d8 = local_c8;
                        uStack_d4 = local_c4;
                        local_e0 = puVar1;
                        uVar6 = FUN_0277d6c4(&local_d8);
                        if (DAT_053274a0 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x57e58);
                          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                            lVar8 = *(long *)PTR_DAT_04bc0428;
                            uVar6 = FUN_0277d6c4(&local_c8);
                            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                            if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
                              lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
                              if (lVar8 != 0) {
                                local_d0 = lVar8;
                              }
                            }
                          }
                        }
                        iVar7 = FUN_0277d6c4(&local_c8);
                        if ((((iVar7 != 0x38d8) && (iVar7 != 0x38e5)) &&
                            (iVar7 = FUN_01af103c(&local_e0), iVar7 != 0x126)) &&
                           ((iVar7 = FUN_01ad9fd0(&local_e0), iVar7 == 1 || (iVar7 == 2))))
                        goto LAB_0261c6c8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar21 = uVar22 >> 3 & 0x1fff;
      *(byte *)((long)puVar10 + uVar21) =
           *(byte *)((long)puVar10 + uVar21) & ((byte)(1 << (uVar22 & 7)) ^ 0xff);
    }
LAB_0261c6c8:
    uVar22 = (ulong)(uVar23 + 1);
    if (uVar23 + 1 == 0x800) {
      if ((((local_10c & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      return;
    }
  } while( true );
}

