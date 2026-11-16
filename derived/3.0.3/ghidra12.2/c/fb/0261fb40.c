
undefined8 FUN_0261fb40(long param_1,ushort *param_2,ushort param_3,byte *param_4,uint param_5)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  short *psVar13;
  ulong uVar14;
  ushort *puVar15;
  long lVar16;
  byte bVar17;
  long *plVar18;
  undefined8 uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ushort uVar23;
  int *piVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  uint *puVar28;
  ushort *puVar29;
  ushort *puVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  ushort *puVar34;
  short *psVar35;
  ushort *puVar36;
  uint local_f4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  byte local_74 [4];
  byte local_70 [4];
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if (param_2 == (ushort *)0x0) {
    return 0;
  }
  uVar10 = (uint)param_3;
  uVar5 = uVar10 - *(ushort *)(param_1 + 0xea6e0);
  if (*(uint *)(param_1 + 0xea6c0) <= uVar5) {
    return 0;
  }
  puVar28 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar5 * 8);
  if (puVar28 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *puVar28;
  if (uVar5 == 0 || puVar28 == (uint *)(ulong)uVar5) {
LAB_0261fbb4:
    uVar5 = 0;
  }
  else {
    puVar20 = (uint *)((long)puVar28 - (long)(ulong)uVar5);
    uVar5 = 0;
    if (*puVar20 != 0) {
      uVar5 = puVar20[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
        lVar25 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar25 = 0x1c;
        }
        lVar25 = (long)puVar20 + lVar25 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar25 != 0) {
          uVar7 = 0;
          if ((ulong)uVar5 != 0) {
            uVar7 = (uint)((ulong)((long)puVar28 - lVar25) / (ulong)uVar5);
          }
          if (*puVar20 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < DAT_05557770) &&
             (uVar5 = (uint)*(ushort *)(DAT_05557778 + (long)(int)uVar7 * 2), uVar5 < 2))
          goto LAB_0261fbb8;
        }
      }
      goto LAB_0261fbb4;
    }
  }
LAB_0261fbb8:
  *(uint *)(param_2 + 100) = uVar5;
  *param_2 = param_3;
  if (*puVar28 == 0) {
LAB_0261fd38:
    iVar8 = 0;
  }
  else {
    cVar3 = DAT_055576f0;
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = -1;
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
        if (-1 < (int)DAT_0555774c) {
          psVar35 = (short *)((DAT_0555774c & 0xffffffff) + (long)puVar28);
          if (psVar35 == (short *)0x0) goto LAB_0261fd38;
          iVar8 = (int)*psVar35;
          goto LAB_0261fd3c;
        }
        if ((int)DAT_0555774c != -1) goto LAB_0261fd38;
      }
      puVar20 = (uint *)(ulong)*puVar28;
      iVar8 = 0;
      if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_0261fd3c;
      lVar25 = 0xc;
      if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
        lVar25 = 0x1c;
      }
      lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
      if (lVar25 == 0) goto LAB_0261fd38;
      uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
      DAT_0555774c = CONCAT44(DAT_0555774c._4_4_,0xfffffffe);
      iVar8 = 0;
      if (uVar11 == 0) goto LAB_0261fd3c;
      piVar24 = (int *)(lVar25 + 4);
      while (piVar24[-1] != 0x39dede36) {
        piVar24 = piVar24 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          iVar8 = 0;
          goto LAB_0261fd3c;
        }
      }
      iVar8 = 0;
      if (*piVar24 != -1) {
        iVar8 = *piVar24;
      }
      DAT_0555774c = CONCAT44(DAT_0555774c._4_4_,iVar8);
    } while (*puVar28 != 0);
    iVar8 = 0;
  }
LAB_0261fd3c:
  *(int *)(param_2 + 2) = iVar8;
  if (*puVar28 != 0) {
    cVar3 = DAT_055576f0;
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = -1;
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
          if ((ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar28) != (ushort *)0x0) {
            uVar23 = *(ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar28);
            goto LAB_0261fe2c;
          }
          break;
        }
        if (DAT_0555772c._4_4_ != 0xffffffff) break;
      }
      puVar20 = (uint *)(ulong)*puVar28;
      uVar23 = 0xfffe;
      if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_0261fe2c;
      lVar25 = 0xc;
      if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
        lVar25 = 0x1c;
      }
      lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
      if (lVar25 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
      DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
      if (uVar11 == 0) break;
      piVar24 = (int *)(lVar25 + 4);
      while (piVar24[-1] != -0x765cb7d4) {
        piVar24 = piVar24 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_0261fe28;
      }
      iVar8 = 0;
      if (*piVar24 != -1) {
        iVar8 = *piVar24;
      }
      DAT_0555772c = CONCAT44(iVar8,(undefined4)DAT_0555772c);
      if (*puVar28 == 0) break;
    } while( true );
  }
LAB_0261fe28:
  uVar23 = 0xfffe;
LAB_0261fe2c:
  local_90 = (undefined *)(ulong)uVar23;
  FUN_0277d4ac(&local_90);
  puVar29 = param_2 + 4;
  *(undefined4 *)puVar29 = (undefined4)local_90;
  *(undefined4 *)(param_2 + 6) = local_90._4_4_;
  plVar26 = (long *)PTR_DAT_04bb43c0;
  lVar32 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar29);
  puVar1 = PTR_DAT_04bc0510;
  lVar25 = *plVar26;
  if (lVar25 == 0) {
    return 0;
  }
  lVar32 = *(long *)(lVar32 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
  if (*(uint *)(lVar32 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  local_98 = 0;
  local_a0 = *(undefined4 *)(param_2 + 4);
  uStack_9c = *(undefined4 *)(param_2 + 6);
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_a0);
  if (*plVar26 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar25 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar29);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar5 < *(uint *)(lVar25 + 0x1d8)) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar25 != 0) {
          local_98 = lVar25;
        }
      }
    }
  }
  uVar11 = FUN_026222e0(param_1,puVar29);
  if ((uVar11 & 1) != 0) {
    lVar25 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
    if (((lVar25 == 0) || ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) != 2)) ||
       (*(int *)(lVar25 + 0x3e4) == 1)) {
      uVar5 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
      if (1 < uVar5) goto LAB_0261fff4;
    }
    else {
      uVar5 = *(uint *)(*(long *)PTR_DAT_04bbaed0 + 0x274);
    }
    if (uVar5 == 1) {
      iVar8 = FUN_01ad7260(&local_a8);
      if (((iVar8 != 0) && (iVar8 = FUN_01ad7260(&local_a8), 1 < iVar8)) &&
         (puVar15 = (ushort *)FUN_01afd600(&local_a8), puVar15 != (ushort *)0x0)) {
        *puVar15 = *puVar15 & 0xfff8 | 1;
      }
      *(undefined4 *)(param_2 + 4) = local_a0;
      *(undefined4 *)(param_2 + 6) = uStack_9c;
    }
  }
LAB_0261fff4:
  local_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)(param_2 + 6);
  lVar25 = *plVar26;
  local_90 = puVar1 + 0x10;
  local_80 = 0;
  uVar5 = FUN_0277d6c4(&local_88);
  if (*plVar26 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar25 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar29);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar5 < *(uint *)(lVar25 + 0x1d8)) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar25 != 0) {
          local_80 = lVar25;
        }
      }
    }
  }
  uVar6 = FUN_01af0770(&local_90,0,0);
  *(undefined4 *)(param_2 + 0x10) = uVar6;
  iVar8 = 0;
  if (*param_4 < 8) {
    local_74[0] = *param_4;
    lVar25 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
    if (lVar25 == 0) {
      iVar8 = 0;
    }
    else {
      if (*(char *)(param_1 + 8) == '\0') {
        lVar32 = lVar25 + 0x194b0;
        plVar18 = (long *)(lVar25 + 0x194b8);
        lVar33 = lVar32;
        if (*plVar18 == 0) {
          lVar33 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar33 + 0x108) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar33 + 0x108), puVar12 == (undefined8 *)0x0)) {
          local_f4 = 0;
        }
        else {
          local_f4 = (**(code **)*puVar12)();
        }
        lVar16 = *(long *)(lVar33 + 0xf0) + *(long *)(lVar33 + 0xe8);
        FUN_0263d5ac(param_1 + 0x20,lVar16);
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar16 + 0xa0);
        uVar19 = *(undefined8 *)(lVar16 + 0xa4);
        uVar6 = *(undefined4 *)(lVar16 + 0xb4);
        *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(lVar16 + 0xac);
        *(undefined8 *)(param_1 + 0xc4) = uVar19;
        *(undefined4 *)(param_1 + 0xd4) = uVar6;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        if (0 < *(int *)(param_1 + 0xe0)) {
          lVar16 = 0;
          puVar12 = *(undefined8 **)(param_1 + 0xf0);
          do {
            puVar21 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar16 * 8);
            lVar16 = lVar16 + 1;
            *puVar21 = puVar12;
            *(undefined8 **)(param_1 + 0xf0) = puVar21;
            puVar12 = puVar21;
          } while (lVar16 < *(int *)(param_1 + 0xe0));
        }
        *(undefined4 *)(param_1 + 0xe0) = 0;
        memset((void *)(param_1 + 0x308),0,60000);
        uVar11 = 0;
        lVar16 = 0x20;
        do {
          uVar5 = *(uint *)(param_1 + 0xc0);
          if (0x13 < uVar5) {
            uVar5 = 0x14;
          }
          if (uVar11 < uVar5) {
            psVar35 = (short *)(param_1 + lVar16);
            if (*psVar35 == -2) {
              psVar13 = psVar35;
            }
            else {
              lVar27 = *plVar26;
              uVar5 = FUN_0277d6c4(psVar35);
              psVar13 = (short *)PTR_DAT_04bb37e0;
              if (*plVar26 == 0) {
                plVar26 = (long *)PTR_DAT_04bb43c0;
              }
              else {
                lVar27 = *(long *)(lVar27 + 0x57e58);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                plVar26 = (long *)PTR_DAT_04bb43c0;
                if (uVar5 < *(uint *)(lVar27 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
                    psVar13 = psVar35;
                  }
                }
              }
            }
            uVar4 = FUN_0277d6c4(psVar13);
            *(undefined2 *)(param_1 + uVar11 * 2 + 0x2e0) = uVar4;
          }
          uVar11 = uVar11 + 1;
          lVar16 = lVar16 + 8;
        } while (uVar11 != 0x14);
        (**(code **)(*(long *)(param_1 + 0x10) + 0x40))();
        lVar16 = lVar32;
        if (*plVar18 == 0) {
          lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar16 + 0xd0) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar16 + 0xd0), puVar12 == (undefined8 *)0x0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)*puVar12)();
        }
        psVar35 = (short *)(param_1 + 0xed78);
        lVar27 = *(long *)(lVar16 + 0xb8) + *(long *)(lVar16 + 0xb0);
        FUN_0263d5ac(psVar35,lVar27);
        *(undefined4 *)(param_1 + 0xee18) = *(undefined4 *)(lVar27 + 0xa0);
        uVar19 = *(undefined8 *)(lVar27 + 0xac);
        uVar22 = *(undefined8 *)(lVar27 + 0xa4);
        uVar6 = *(undefined4 *)(lVar27 + 0xb4);
        *(undefined4 *)(param_1 + 0xee30) = 0;
        *(undefined8 *)(param_1 + 0xee24) = uVar19;
        *(undefined4 *)(param_1 + 0xee2c) = uVar6;
        *(undefined8 *)(param_1 + 0xee1c) = uVar22;
        if (0 < *(int *)(param_1 + 0xee38)) {
          lVar27 = 0;
          puVar12 = *(undefined8 **)(param_1 + 61000);
          do {
            puVar21 = *(undefined8 **)(*(long *)(param_1 + 0xee40) + lVar27 * 8);
            lVar27 = lVar27 + 1;
            *puVar21 = puVar12;
            *(undefined8 **)(param_1 + 61000) = puVar21;
            puVar12 = puVar21;
          } while (lVar27 < *(int *)(param_1 + 0xee38));
        }
        *(undefined4 *)(param_1 + 0xee38) = 0;
        memset((void *)(param_1 + 0xf060),0,60000);
        uVar11 = 0;
        do {
          uVar7 = *(uint *)(param_1 + 0xee18);
          if (0x13 < uVar7) {
            uVar7 = 0x14;
          }
          if (uVar11 < uVar7) {
            psVar13 = psVar35;
            if (*psVar35 != -2) {
              lVar27 = *plVar26;
              uVar7 = FUN_0277d6c4(psVar35);
              psVar13 = (short *)PTR_DAT_04bb37e0;
              if (*plVar26 == 0) {
                plVar26 = (long *)PTR_DAT_04bb43c0;
              }
              else {
                lVar27 = *(long *)(lVar27 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                plVar26 = (long *)PTR_DAT_04bb43c0;
                if (uVar7 < *(uint *)(lVar27 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
                    psVar13 = psVar35;
                  }
                }
              }
            }
            uVar4 = FUN_0277d6c4(psVar13);
            *(undefined2 *)(param_1 + 0xf038 + uVar11 * 2) = uVar4;
          }
          uVar11 = uVar11 + 1;
          psVar35 = psVar35 + 4;
        } while (uVar11 != 0x14);
        (**(code **)(*(long *)(param_1 + 0xed68) + 0x40))((long *)(param_1 + 0xed68));
        if (*plVar18 == 0) {
          lVar32 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar32 + 0x178) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar32 + 0x178), puVar12 == (undefined8 *)0x0)) {
          FUN_0262a3f0(param_1 + 0x1dac0,*(long *)(lVar32 + 0x160) + *(long *)(lVar32 + 0x158));
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar11 = (**(code **)*puVar12)();
          FUN_0262a3f0(param_1 + 0x1dac0,*(long *)(lVar32 + 0x160) + *(long *)(lVar32 + 0x158));
          *(undefined1 *)(param_1 + 8) = 1;
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar32 + 0x178) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar32 + 0x178) + 8),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar16 + 0xd0) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0xd0) + 8), puVar12 != (undefined8 *)0x0))
        {
          (**(code **)*puVar12)();
        }
        if ((((local_f4 & 1) != 0) && (*(long *)(lVar33 + 0x108) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar33 + 0x108) + 8), puVar12 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar12)();
        }
      }
      lVar32 = *plVar26;
      uVar5 = FUN_0277d6c4(puVar29);
      if (*plVar26 == 0) {
LAB_026205e4:
        iVar9 = 0;
      }
      else {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if (((*(uint *)(lVar32 + 0x1d8) <= uVar5) ||
            (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
           (iVar8 = FUN_0277d6c4(puVar29), 14999 < iVar8)) goto LAB_026205e4;
        uVar11 = FUN_0277d6c4(puVar29);
        piVar24 = (int *)(param_1 + 0x308) + (uVar11 & 0xffffffff);
        if (0x752 < ((uint)(uVar11 >> 3) & 0x1fffffff)) {
          piVar24 = (int *)(param_1 + 0x308);
        }
        iVar9 = *piVar24;
      }
      lVar32 = *plVar26;
      *(int *)(param_2 + 10) = iVar9;
      uVar5 = FUN_0277d6c4(puVar29);
      if (*plVar26 == 0) {
LAB_02620674:
        iVar31 = 0;
      }
      else {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if (((*(uint *)(lVar32 + 0x1d8) <= uVar5) ||
            (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
           (iVar8 = FUN_0277d6c4(puVar29), 14999 < iVar8)) goto LAB_02620674;
        uVar14 = FUN_0277d6c4(puVar29);
        uVar11 = uVar14 & 0xffffffff;
        if (0x752 < ((uint)(uVar14 >> 3) & 0x1fffffff)) {
          uVar11 = 0;
        }
        iVar31 = *(int *)(param_1 + 0xf060 + uVar11 * 4);
        plVar26 = (long *)PTR_DAT_04bb43c0;
      }
      lVar32 = *plVar26;
      *(int *)(param_2 + 0xc) = iVar31;
      uVar5 = FUN_0277d6c4(puVar29);
      if (*plVar26 == 0) {
LAB_02620704:
        iVar8 = 0;
      }
      else {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if (((*(uint *)(lVar32 + 0x1d8) <= uVar5) ||
            (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
           (iVar8 = FUN_0277d6c4(puVar29), 14999 < iVar8)) goto LAB_02620704;
        uVar14 = FUN_0277d6c4(puVar29);
        uVar11 = uVar14 & 0xffffffff;
        if (0x752 < ((uint)(uVar14 >> 3) & 0x1fffffff)) {
          uVar11 = 0;
        }
        iVar8 = *(int *)(param_1 + 0x68ab0 + uVar11 * 4);
        plVar26 = (long *)PTR_DAT_04bb43c0;
      }
      *(int *)(param_2 + 0xe) = iVar8;
      if ((*(long **)(lVar25 + 0xd0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar25 + 0xd0), puVar12 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar12)();
        uVar5 = uVar5 ^ 1;
      }
      iVar8 = iVar31 + iVar9 + iVar8;
      local_88 = *(undefined4 *)(param_2 + 4);
      uStack_84 = *(undefined4 *)(param_2 + 6);
      lVar32 = *plVar26;
      local_80 = 0;
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar7 = FUN_0277d6c4(&local_88);
      if (*plVar26 != 0) {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar32 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar32 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(puVar29);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
          if (uVar7 < *(uint *)(lVar32 + 0x1d8)) {
            lVar32 = *(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar32 != 0) {
              local_80 = lVar32;
            }
          }
        }
      }
      local_70[0] = 0;
      local_70[1] = 0;
      FUN_01adab50(&local_90,local_70);
      puVar1 = PTR_DAT_04bb43c0;
      uVar7 = 0;
      do {
        local_6c = uVar7;
        if ((local_6c != 0) && (local_68 = local_6c, local_6c < 0xe)) {
          uVar7 = local_6c + 7;
          if (-1 < (int)local_6c) {
            uVar7 = local_6c;
          }
          local_64 = local_6c;
          if (((uint)((int)uVar7 >> 3) < 2) &&
             ((local_70[(uint)((int)uVar7 >> 3)] >> (ulong)(local_6c & 7) & 1) != 0)) {
            if (local_6c == 9) goto LAB_026208ec;
            break;
          }
        }
        uVar7 = local_6c + 1;
      } while (local_6c + 1 != 0xe);
      lVar32 = *(long *)(lVar25 + 0xb0);
      lVar33 = *(long *)(lVar25 + 0xb8);
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(puVar29);
      if (*(long *)puVar1 == 0) {
LAB_026208d8:
        iVar9 = 0;
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_026208d8;
        iVar9 = FUN_02815f98(lVar33 + lVar32,puVar29);
      }
      iVar8 = iVar9 + iVar8;
      *(int *)(param_2 + 10) = *(int *)(param_2 + 10) + iVar9;
LAB_026208ec:
      puVar1 = PTR_DAT_04bb43c0;
      lVar32 = *(long *)(lVar25 + 0xb0);
      lVar33 = *(long *)(lVar25 + 0xb8);
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(puVar29);
      if (*(long *)puVar1 == 0) {
LAB_0262095c:
        iVar9 = 0;
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (*(uint *)(lVar16 + 0x1d8) <= uVar7) goto LAB_0262095c;
        if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_026e84a0(lVar33 + lVar32 + 0x1fc8,puVar29);
        }
      }
      iVar8 = iVar9 + iVar8;
      *(int *)(param_2 + 0xe) = *(int *)(param_2 + 0xe) + iVar9;
      plVar26 = (long *)PTR_DAT_04bb43c0;
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar25 + 0xd0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar25 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
    }
  }
  *(int *)(param_2 + 8) = iVar8;
  local_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)(param_2 + 6);
  lVar25 = *plVar26;
  local_80 = 0;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_88);
  if (*plVar26 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar25 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar29);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar5 < *(uint *)(lVar25 + 0x1d8)) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar25 != 0) {
          local_80 = lVar25;
        }
      }
    }
  }
  iVar8 = FUN_01ad7260(&local_90);
  puVar1 = PTR_DAT_04bb4f78;
  if (iVar8 == 0) {
    iVar8 = FUN_01afcfa0(&local_90);
    bVar2 = iVar8 != 0;
  }
  else {
    bVar2 = true;
  }
  *(bool *)((long)param_2 + 0xbd) = bVar2;
  bVar17 = *param_4;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar17);
  lVar25 = FUN_025830c0(*(undefined8 *)puVar1,&local_90,1);
  if (lVar25 == 0) {
    bVar17 = 0;
  }
  else {
    lVar32 = lVar25 + 0x194b0;
    if (*(long *)(lVar25 + 0x194b8) == 0) {
      lVar32 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar32 + 0x86b0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar32 + 0x86b0);
      uVar11 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar12)();
      }
    }
    if (param_3 < 0x800) {
      bVar17 = *(byte *)(*(long *)(lVar32 + 0x8698) + *(long *)(lVar32 + 0x8690) +
                         (ulong)(param_3 >> 3) + 0x100) >> (ulong)(uVar10 & 7) & 1;
    }
    else {
      bVar17 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar32 + 0x86b0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar32 + 0x86b0) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  *(byte *)(param_2 + 0x12) = bVar17;
  uVar7 = 0;
  uVar5 = *puVar28;
  if ((uVar5 != 0) && (puVar28 != (uint *)(ulong)uVar5)) {
    puVar20 = (uint *)((long)puVar28 - (long)(ulong)uVar5);
    uVar7 = 0;
    if (*puVar20 != 0) {
      uVar5 = puVar20[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
        lVar25 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar25 = 0x1c;
        }
        lVar25 = (long)puVar20 + lVar25 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar25 != 0) {
          uVar7 = 0;
          if ((ulong)uVar5 != 0) {
            uVar7 = (uint)((ulong)((long)puVar28 - lVar25) / (ulong)uVar5);
          }
          if (*puVar20 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < DAT_055577b0) &&
             (uVar7 = (uint)*(ushort *)(DAT_055577b8 + (long)(int)uVar7 * 2), uVar7 < 0x53))
          goto LAB_02620be8;
        }
      }
      uVar7 = 0;
    }
  }
LAB_02620be8:
  *(uint *)(param_2 + 0x60) = uVar7;
  uVar19 = *(undefined8 *)puVar1;
  *(undefined1 *)((long)param_2 + 0x25) = 1;
  bVar17 = *param_4;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar17);
  lVar25 = FUN_02583354(uVar19,&local_90,1);
  if (lVar25 == 0) {
    uVar23 = 0;
  }
  else {
    lVar32 = lVar25 + 0x194b0;
    if (*(long *)(lVar25 + 0x194b8) == 0) {
      lVar32 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar32 + 0x86b0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar32 + 0x86b0);
      uVar11 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar12)();
      }
    }
    if (param_3 < 0x800) {
      uVar23 = *(ushort *)
                (*(long *)(lVar32 + 0x8698) + *(long *)(lVar32 + 0x8690) + (ulong)param_3 * 2 +
                0x400);
    }
    else {
      uVar23 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar32 + 0x86b0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar32 + 0x86b0) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  param_2[0x14] = uVar23;
  bVar17 = *param_4;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar17);
  lVar25 = FUN_025830c0(*(undefined8 *)puVar1,&local_90,1);
  if (lVar25 == 0) {
    bVar17 = 0;
  }
  else {
    lVar32 = lVar25 + 0x194b0;
    if (*(long *)(lVar25 + 0x194b8) == 0) {
      lVar32 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar32 + 0x86b0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar32 + 0x86b0);
      uVar11 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar12)();
      }
    }
    if (param_3 < 0x800) {
      bVar17 = *(byte *)(*(long *)(lVar32 + 0x8698) + *(long *)(lVar32 + 0x8690) +
                         (ulong)(param_3 >> 3) + 0x200) >> (ulong)(uVar10 & 7) & 1;
    }
    else {
      bVar17 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar32 + 0x86b0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar32 + 0x86b0) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  *(byte *)(param_2 + 0x13) = bVar17;
  bVar17 = *param_4;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar17);
  lVar25 = FUN_025830c0(*(undefined8 *)puVar1,&local_90,1);
  if (lVar25 == 0) {
    bVar17 = 0;
  }
  else {
    lVar32 = lVar25 + 0x194b0;
    if (*(long *)(lVar25 + 0x194b8) == 0) {
      lVar32 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar32 + 0x86b0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar32 + 0x86b0);
      uVar11 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar12)();
      }
    }
    if (param_3 < 0x800) {
      bVar17 = *(byte *)(*(long *)(lVar32 + 0x8698) + *(long *)(lVar32 + 0x8690) +
                         (ulong)(param_3 >> 3) + 0x300) >> (ulong)(uVar10 & 7) & 1;
    }
    else {
      bVar17 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar32 + 0x86b0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar32 + 0x86b0) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  *(byte *)((long)param_2 + 0x27) = bVar17;
  uVar10 = *puVar28;
  if (uVar10 != 0) {
    cVar3 = DAT_055576f0;
LAB_02620e94:
    if (cVar3 == '\0') {
      DAT_055576f4 = 0xffffffffffffffff;
      DAT_055576fc = 0xffffffffffffffff;
      cVar3 = '\x01';
      DAT_055576f0 = '\x01';
      DAT_05557704 = 0xffffffffffffffff;
      DAT_0555770c = 0xffffffffffffffff;
      DAT_05557714 = -1;
      DAT_0555771c = 0xffffffffffffffff;
      DAT_05557724 = 0xffffffffffffffff;
      DAT_0555772c = -1;
      DAT_05557734 = 0xffffffffffffffff;
      DAT_0555773c = 0xffffffffffffffff;
      DAT_05557744 = 0xffffffffffffffff;
      DAT_0555774c = 0xffffffffffffffff;
      DAT_05557754 = 0xffffffffffffffff;
      DAT_0555775c = 0xffffffffffffffff;
      uVar10 = *puVar28;
    }
    else {
      if (-1 < (int)DAT_055576f4) {
        puVar20 = (uint *)((DAT_055576f4 & 0xffffffff) + (long)puVar28);
        if ((puVar20 != (uint *)0x0) && (uVar10 = *puVar20, uVar10 < 0x4f)) goto LAB_02620f74;
LAB_02620f70:
        uVar10 = 0;
        goto LAB_02620f74;
      }
      if ((int)DAT_055576f4 != -1) goto LAB_02620f70;
    }
    puVar20 = (uint *)(ulong)uVar10;
    uVar10 = 0;
    if ((puVar20 == (uint *)0x0) || (puVar28 == puVar20)) goto LAB_02620f74;
    lVar25 = 0xc;
    if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
      lVar25 = 0x1c;
    }
    lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
    uVar10 = 0;
    if (lVar25 == 0) goto LAB_02620f74;
    uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
    DAT_055576f4 = CONCAT44(DAT_055576f4._4_4_,0xfffffffe);
    if (uVar11 == 0) goto LAB_02620f70;
    piVar24 = (int *)(lVar25 + 4);
    while (piVar24[-1] != 0x5f405bfb) {
      piVar24 = piVar24 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02620f70;
    }
    iVar8 = 0;
    if (*piVar24 != -1) {
      iVar8 = *piVar24;
    }
    DAT_055576f4 = CONCAT44(DAT_055576f4._4_4_,iVar8);
    uVar10 = *puVar28;
    if (uVar10 == 0) goto LAB_02620f70;
    goto LAB_02620e94;
  }
  uVar10 = 0;
LAB_02620f74:
  *(char *)(param_2 + 0x62) = (char)uVar10;
  if (*puVar28 != 0) {
    cVar3 = DAT_055576f0;
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = -1;
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
          puVar29 = (ushort *)((DAT_05557734 & 0xffffffff) + (long)puVar28);
          if (puVar29 != (ushort *)0x0) {
            uVar23 = *puVar29;
            goto LAB_02621060;
          }
          break;
        }
        if ((int)DAT_05557734 != -1) break;
      }
      puVar20 = (uint *)(ulong)*puVar28;
      uVar23 = 0xfffe;
      if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_02621060;
      lVar25 = 0xc;
      if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
        lVar25 = 0x1c;
      }
      lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
      if (lVar25 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
      DAT_05557734 = CONCAT44(DAT_05557734._4_4_,0xfffffffe);
      if (uVar11 == 0) break;
      piVar24 = (int *)(lVar25 + 4);
      while (piVar24[-1] != 0x1bbfa75e) {
        piVar24 = piVar24 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_0262105c;
      }
      iVar8 = 0;
      if (*piVar24 != -1) {
        iVar8 = *piVar24;
      }
      DAT_05557734 = CONCAT44(DAT_05557734._4_4_,iVar8);
      if (*puVar28 == 0) break;
    } while( true );
  }
LAB_0262105c:
  uVar23 = 0xfffe;
LAB_02621060:
  local_90 = (undefined *)(ulong)uVar23;
  FUN_0277d4ac(&local_90);
  puVar29 = param_2 + 0x16;
  *(undefined4 *)puVar29 = (undefined4)local_90;
  *(undefined4 *)(param_2 + 0x18) = local_90._4_4_;
  if (*puVar28 == 0) {
LAB_026213a8:
    param_2[0x1a] = 0;
    return 0;
  }
  cVar3 = DAT_055576f0;
  do {
    if (cVar3 == '\0') {
      cVar3 = '\x01';
      DAT_055576f4 = 0xffffffffffffffff;
      DAT_055576fc = 0xffffffffffffffff;
      DAT_055576f0 = '\x01';
      DAT_05557704 = 0xffffffffffffffff;
      DAT_0555770c = 0xffffffffffffffff;
      DAT_05557714 = -1;
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
      if (-1 < DAT_05557714) {
        if ((ushort *)((ulong)DAT_05557714._4_4_ + (long)puVar28) != (ushort *)0x0) {
          uVar23 = *(ushort *)((ulong)DAT_05557714._4_4_ + (long)puVar28);
          param_2[0x1a] = uVar23;
          puVar1 = PTR_DAT_04bb43c0;
          if (uVar23 == 0) {
            return 0;
          }
          lVar25 = *(long *)PTR_DAT_04bb43c0;
          uVar10 = FUN_0277d6c4(puVar29);
          if (*(long *)puVar1 == 0) {
LAB_026211b8:
            if (*puVar29 != 0xfffe) {
              return 0;
            }
          }
          else {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if ((*(uint *)(lVar25 + 0x1d8) <= uVar10) ||
               (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
            goto LAB_026211b8;
          }
          FUN_02629c40(param_1,param_2,param_4,0,param_5 & 1);
          if (*puVar28 == 0) goto LAB_026212b0;
          cVar3 = DAT_055576f0;
          break;
        }
        goto LAB_026213a8;
      }
      if (DAT_05557714._4_4_ != 0xffffffff) goto LAB_026213a8;
    }
    puVar20 = (uint *)(ulong)*puVar28;
    if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_026213a8;
    lVar25 = 0xc;
    if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
      lVar25 = 0x1c;
    }
    lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
    if (lVar25 == 0) goto LAB_026213a8;
    uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
    DAT_05557714 = CONCAT44(0xfffffffe,(undefined4)DAT_05557714);
    if (uVar11 == 0) goto LAB_026213a8;
    piVar24 = (int *)(lVar25 + 4);
    while (piVar24[-1] != 0x13a65775) {
      piVar24 = piVar24 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_026213a8;
    }
    iVar8 = 0;
    if (*piVar24 != -1) {
      iVar8 = *piVar24;
    }
    DAT_05557714 = CONCAT44(iVar8,(undefined4)DAT_05557714);
    if (*puVar28 == 0) goto LAB_026213a8;
  } while( true );
LAB_02621204:
  if (cVar3 == '\0') {
    cVar3 = '\x01';
    DAT_055576f4 = 0xffffffffffffffff;
    DAT_055576fc = 0xffffffffffffffff;
    DAT_055576f0 = '\x01';
    DAT_05557704 = 0xffffffffffffffff;
    DAT_0555770c = 0xffffffffffffffff;
    DAT_05557714 = -1;
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
      if ((ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar28) == (ushort *)0x0) {
        uVar23 = 0xfffe;
      }
      else {
        uVar23 = *(ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar28);
      }
      goto LAB_026212b4;
    }
    if (DAT_05557734._4_4_ != 0xffffffff) goto LAB_026212b0;
  }
  puVar20 = (uint *)(ulong)*puVar28;
  uVar23 = 0xfffe;
  if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_026212b4;
  lVar25 = 0xc;
  if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
    lVar25 = 0x1c;
  }
  lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
  if (lVar25 == 0) goto LAB_026212b0;
  uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
  DAT_05557734 = CONCAT44(0xfffffffe,(int)DAT_05557734);
  if (uVar11 == 0) goto LAB_026212b0;
  piVar24 = (int *)(lVar25 + 4);
  while (piVar24[-1] != 0x5c1fdd8e) {
    piVar24 = piVar24 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_026212b0;
  }
  iVar8 = 0;
  if (*piVar24 != -1) {
    iVar8 = *piVar24;
  }
  DAT_05557734 = CONCAT44(iVar8,(int)DAT_05557734);
  if (*puVar28 == 0) goto LAB_026212b0;
  goto LAB_02621204;
LAB_026212b0:
  uVar23 = 0xfffe;
LAB_026212b4:
  local_90 = (undefined *)(ulong)uVar23;
  FUN_0277d4ac(&local_90);
  puVar29 = param_2 + 0x22;
  *(undefined4 *)puVar29 = (undefined4)local_90;
  *(undefined4 *)(param_2 + 0x24) = local_90._4_4_;
  if (*puVar28 == 0) {
LAB_026213b4:
    uVar23 = 0;
  }
  else {
    cVar3 = DAT_055576f0;
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = -1;
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
        if (-1 < (int)DAT_0555771c) {
          puVar15 = (ushort *)((DAT_0555771c & 0xffffffff) + (long)puVar28);
          if (puVar15 == (ushort *)0x0) {
            uVar23 = 0;
          }
          else {
            uVar23 = *puVar15;
          }
          goto LAB_026213b8;
        }
        if ((int)DAT_0555771c != -1) goto LAB_026213b4;
      }
      puVar20 = (uint *)(ulong)*puVar28;
      uVar23 = 0;
      if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_026213b8;
      lVar25 = 0xc;
      if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
        lVar25 = 0x1c;
      }
      lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
      if (lVar25 == 0) goto LAB_026213b4;
      uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
      DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,0xfffffffe);
      uVar23 = 0;
      if (uVar11 == 0) goto LAB_026213b8;
      piVar24 = (int *)(lVar25 + 4);
      while (piVar24[-1] != 0x54062da5) {
        piVar24 = piVar24 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar23 = 0;
          goto LAB_026213b8;
        }
      }
      iVar8 = 0;
      if (*piVar24 != -1) {
        iVar8 = *piVar24;
      }
      DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,iVar8);
    } while (*puVar28 != 0);
    uVar23 = 0;
  }
LAB_026213b8:
  param_2[0x26] = uVar23;
  puVar1 = PTR_DAT_04bb43c0;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(puVar29);
  if (*(long *)puVar1 == 0) {
LAB_02621408:
    if (*puVar29 != 0xfffe) {
      return 0;
    }
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((*(uint *)(lVar25 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_02621408;
  }
  FUN_02629c40(param_1,param_2,param_4,1,param_5 & 1);
  if (*puVar28 != 0) {
    cVar3 = DAT_055576f0;
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        DAT_055576f0 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = -1;
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
          puVar29 = (ushort *)((DAT_0555773c & 0xffffffff) + (long)puVar28);
          if (puVar29 != (ushort *)0x0) {
            uVar23 = *puVar29;
            goto LAB_0262154c;
          }
          break;
        }
        if ((int)DAT_0555773c != -1) break;
      }
      puVar20 = (uint *)(ulong)*puVar28;
      uVar23 = 0xfffe;
      if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_0262154c;
      lVar25 = 0xc;
      if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
        lVar25 = 0x1c;
      }
      lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
      if (lVar25 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
      DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,0xfffffffe);
      if (uVar11 == 0) break;
      piVar24 = (int *)(lVar25 + 4);
      while (piVar24[-1] != 0x617ff43e) {
        piVar24 = piVar24 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_02621548;
      }
      iVar8 = 0;
      if (*piVar24 != -1) {
        iVar8 = *piVar24;
      }
      DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,iVar8);
      if (*puVar28 == 0) break;
    } while( true );
  }
LAB_02621548:
  uVar23 = 0xfffe;
LAB_0262154c:
  local_90 = (undefined *)(ulong)uVar23;
  FUN_0277d4ac(&local_90);
  puVar29 = param_2 + 0x2e;
  *(undefined4 *)puVar29 = (undefined4)local_90;
  *(undefined4 *)(param_2 + 0x30) = local_90._4_4_;
  if (*puVar28 == 0) {
LAB_02621664:
    uVar23 = 0;
  }
  else {
    cVar3 = DAT_055576f0;
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        DAT_055576f0 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = -1;
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
        if (-1 < (long)DAT_0555771c) {
          if ((ushort *)((ulong)DAT_0555771c._4_4_ + (long)puVar28) == (ushort *)0x0)
          goto LAB_02621664;
          uVar23 = *(ushort *)((ulong)DAT_0555771c._4_4_ + (long)puVar28);
          goto LAB_02621668;
        }
        if (DAT_0555771c._4_4_ != 0xffffffff) goto LAB_02621664;
      }
      puVar20 = (uint *)(ulong)*puVar28;
      uVar23 = 0;
      if ((*puVar28 == 0) || (puVar28 == puVar20)) goto LAB_02621668;
      lVar25 = 0xc;
      if (*(char *)((long)puVar28 + (10 - (long)puVar20)) != '\0') {
        lVar25 = 0x1c;
      }
      lVar25 = (long)puVar28 + (lVar25 - (long)puVar20);
      if (lVar25 == 0) goto LAB_02621664;
      uVar11 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar20));
      DAT_0555771c = CONCAT44(0xfffffffe,(int)DAT_0555771c);
      uVar23 = 0;
      if (uVar11 == 0) goto LAB_02621668;
      piVar24 = (int *)(lVar25 + 4);
      while (piVar24[-1] != 0x69660415) {
        piVar24 = piVar24 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar23 = 0;
          goto LAB_02621668;
        }
      }
      iVar8 = 0;
      if (*piVar24 != -1) {
        iVar8 = *piVar24;
      }
      DAT_0555771c = CONCAT44(iVar8,(int)DAT_0555771c);
    } while (*puVar28 != 0);
    uVar23 = 0;
  }
LAB_02621668:
  param_2[0x32] = uVar23;
  puVar1 = PTR_DAT_04bb43c0;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(puVar29);
  if (*(long *)puVar1 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) goto LAB_026216c4;
  }
  if (*puVar29 != 0xfffe) {
    return 0;
  }
LAB_026216c4:
  FUN_02629c40(param_1,param_2,param_4,2,param_5 & 1);
  puVar15 = (ushort *)FUN_02633cd0(puVar28,0x13,0xd35f282e,0);
  if (puVar15 == (ushort *)0x0) {
    uVar23 = 0xfffe;
  }
  else {
    uVar23 = *puVar15;
  }
  local_90 = (undefined *)(ulong)uVar23;
  FUN_0277d4ac(&local_90);
  puVar30 = param_2 + 0x3a;
  *(undefined4 *)puVar30 = (undefined4)local_90;
  *(undefined4 *)(param_2 + 0x3c) = local_90._4_4_;
  puVar15 = (ushort *)FUN_02633cd0(puVar28,0xc,0xdb46d805,0);
  if (puVar15 == (ushort *)0x0) {
    uVar23 = 0;
  }
  else {
    uVar23 = *puVar15;
  }
  param_2[0x3e] = uVar23;
  uVar11 = FUN_0277d9a8(puVar30);
  if (((uVar11 & 1) != 0) || (*puVar30 == 0xfffe)) {
    FUN_02629c40(param_1,param_2,param_4,3,param_5 & 1);
    puVar15 = (ushort *)FUN_02633cd0(puVar28,0x14,0xee3f019e,0);
    if (puVar15 == (ushort *)0x0) {
      uVar23 = 0xfffe;
    }
    else {
      uVar23 = *puVar15;
    }
    local_90 = (undefined *)(ulong)uVar23;
    FUN_0277d4ac(&local_90);
    puVar34 = param_2 + 0x46;
    *(undefined4 *)puVar34 = (undefined4)local_90;
    *(undefined4 *)(param_2 + 0x48) = local_90._4_4_;
    puVar15 = (ushort *)FUN_02633cd0(puVar28,0xd,0xe626f1b5,0);
    if (puVar15 == (ushort *)0x0) {
      uVar23 = 0;
    }
    else {
      uVar23 = *puVar15;
    }
    param_2[0x4a] = uVar23;
    uVar11 = FUN_0277d9a8(puVar34);
    if (((uVar11 & 1) != 0) || (*puVar34 == 0xfffe)) {
      FUN_02629c40(param_1,param_2,param_4,4,param_5 & 1);
      puVar15 = (ushort *)FUN_02633cd0(puVar28,0x15,0xa99f7b4e,0);
      if (puVar15 == (ushort *)0x0) {
        uVar23 = 0xfffe;
      }
      else {
        uVar23 = *puVar15;
      }
      local_90 = (undefined *)(ulong)uVar23;
      FUN_0277d4ac(&local_90);
      puVar36 = param_2 + 0x52;
      *(undefined4 *)puVar36 = (undefined4)local_90;
      *(undefined4 *)(param_2 + 0x54) = local_90._4_4_;
      puVar15 = (ushort *)FUN_02633cd0(puVar28,0xe,0xa1868b65,0);
      if (puVar15 == (ushort *)0x0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *puVar15;
      }
      param_2[0x56] = uVar23;
      uVar11 = FUN_0277d9a8(puVar36);
      if (((uVar11 & 1) != 0) || (*puVar36 == 0xfffe)) {
        FUN_02629c40(param_1,param_2,param_4,5,param_5 & 1);
        cVar3 = param_2[0x16] != 0xfffe;
        *(char *)(param_2 + 0x5e) = cVar3;
        if (param_2[0x22] != 0xfffe) {
          cVar3 = '\x01';
          if (param_2[0x16] != 0xfffe) {
            cVar3 = '\x02';
          }
          *(char *)(param_2 + 0x5e) = cVar3;
        }
        if (*puVar29 != 0xfffe) {
          cVar3 = cVar3 + '\x01';
          *(char *)(param_2 + 0x5e) = cVar3;
        }
        if (*puVar30 != 0xfffe) {
          cVar3 = cVar3 + '\x01';
          *(char *)(param_2 + 0x5e) = cVar3;
        }
        if (*puVar34 != 0xfffe) {
          cVar3 = cVar3 + '\x01';
          *(char *)(param_2 + 0x5e) = cVar3;
        }
        if (*puVar36 != 0xfffe) {
          *(char *)(param_2 + 0x5e) = cVar3 + '\x01';
        }
        return 1;
      }
    }
  }
  return 0;
}

