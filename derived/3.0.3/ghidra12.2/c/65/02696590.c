
void FUN_02696590(long param_1,long param_2,uint *param_3,long param_4,long param_5,uint param_6,
                 long *param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined *puVar17;
  int *piVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  undefined8 *puVar29;
  long lVar30;
  uint *puVar31;
  int iVar32;
  int *piVar33;
  int iVar34;
  uint uVar35;
  char cVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  undefined4 local_1dc;
  uint local_1d8;
  int iStack_1d4;
  int local_1d0;
  uint local_1cc;
  uint local_184;
  undefined2 local_150;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  uint local_dc;
  undefined *local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  long local_c8;
  undefined *local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  puVar1 = PTR_DAT_04bb43c0;
  local_e8 = (uint *)0x0;
  local_f8 = PTR_DAT_04bc0510 + 0x10;
  local_f0 = (undefined4)*param_7;
  uStack_ec = *(undefined4 *)((long)param_7 + 4);
  lVar38 = *(long *)PTR_DAT_04bb43c0;
  uVar20 = FUN_0277d6c4(&local_f0);
  if (*(long *)puVar1 == 0) {
LAB_02696690:
    if (local_e8 == (uint *)0x0) {
      uVar12 = 0;
      uVar20 = 0xbc;
      goto LAB_026967c8;
    }
  }
  else {
    lVar38 = *(long *)(lVar38 + 0x57e58);
    uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
    if ((*(uint *)(lVar38 + 0x1d8) <= uVar20) ||
       (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar20 * 8) == 0)) goto LAB_02696690;
    lVar38 = *(long *)PTR_DAT_04bc0428;
    uVar20 = FUN_0277d6c4(param_7);
    uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
    if ((*(uint *)(lVar38 + 0x1d8) <= uVar20) ||
       (puVar28 = *(uint **)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar20 * 8),
       puVar28 == (uint *)0x0)) goto LAB_02696690;
    local_e8 = puVar28;
  }
  uVar21 = *local_e8;
  uVar20 = 0;
  uVar12 = 0;
  if ((uVar21 == 0) || (local_e8 == (uint *)(ulong)uVar21)) goto LAB_026967c8;
  puVar28 = (uint *)((long)local_e8 - (long)(ulong)uVar21);
  if (*puVar28 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = puVar28[1];
    if ((uVar20 == 0) || ((ulong)(ushort)puVar28[2] == 0)) {
LAB_02696740:
      uVar20 = 0;
      uVar21 = *puVar28;
    }
    else {
      lVar38 = 0xc;
      if (*(char *)((long)puVar28 + 10) != '\0') {
        lVar38 = 0x1c;
      }
      lVar38 = (long)puVar28 + lVar38 + (ulong)(ushort)puVar28[2] * 8;
      if (lVar38 == 0) goto LAB_02696740;
      uVar21 = 0;
      if ((ulong)uVar20 != 0) {
        uVar21 = (uint)((ulong)((long)local_e8 - lVar38) / (ulong)uVar20);
      }
      if (*puVar28 <= uVar21) {
        uVar21 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar21) goto LAB_02696740;
      uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar21 * 2);
      uVar20 = (uint)uVar12;
      if (0xbc < uVar12) {
        uVar20 = 0;
      }
      uVar21 = *puVar28;
    }
    if (((uVar21 != 0) && (uVar40 = puVar28[1], uVar40 != 0)) && ((ulong)(ushort)puVar28[2] != 0)) {
      lVar38 = 0xc;
      if (*(char *)((long)puVar28 + 10) != '\0') {
        lVar38 = 0x1c;
      }
      lVar38 = (long)puVar28 + lVar38 + (ulong)(ushort)puVar28[2] * 8;
      if (lVar38 != 0) {
        uVar35 = 0;
        if ((ulong)uVar40 != 0) {
          uVar35 = (uint)((ulong)((long)local_e8 - lVar38) / (ulong)uVar40);
        }
        if (uVar21 <= uVar35) {
          uVar35 = 0xffffffff;
        }
        if ((uVar35 < *(uint *)PTR_DAT_04bc0130) &&
           (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc0130 + 8) + (long)(int)uVar35 * 2),
           uVar12 < 0x15)) goto LAB_026967c8;
      }
    }
  }
  uVar12 = 0;
LAB_026967c8:
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_138 = 0;
  local_128 = 0;
  local_110 = 0;
  local_100 = 0;
  local_148 = puVar1;
  puStack_140 = puVar2;
  puStack_130 = puVar2;
  puStack_120 = puVar1;
  local_118 = puVar2;
  local_108 = puVar2;
  FUN_01afb7fc(&local_f8,&local_148,0);
  FUN_01afb7fc(&local_f8,&puStack_120,1);
  if ((*(int *)(param_1 + 8) < 0) || (uVar21 = *(uint *)(param_1 + 0x14), param_6 <= uVar21)) {
LAB_02696880:
    local_1d8 = 0;
    iStack_1d4 = 0;
    lVar38 = 0;
    iVar34 = 0;
    local_1d0 = 0;
    local_184 = 0;
    local_1dc = 0xffffffff;
    local_1cc = 0xffffffff;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar39 = param_4 + (long)iVar34 * 0x30;
      iVar27 = *(int *)(lVar39 + 0x28);
      if (-1 < iVar27) {
        puVar29 = (undefined8 *)(param_8 + 0x14 + lVar38 * 0xc);
        uVar11 = *(undefined2 *)puVar29;
        uVar9 = *(undefined1 *)((long)puVar29 + 2);
        uVar10 = *(undefined1 *)((long)puVar29 + 3);
        uVar8 = *(undefined4 *)((long)puVar29 + 4);
        puVar17 = (undefined *)*puVar29;
        cVar36 = *(char *)((long)puVar29 + 10);
        local_150 = uVar11;
        local_14e = uVar9;
        local_14d = uVar10;
        local_14c = uVar8;
        uVar25 = FUN_01ae0ebc(iVar27,uVar12);
        puVar4 = PTR_DAT_04bb43c0;
        if (((uVar25 & 1) != 0) || ((uVar20 - 0xf < 4 && (iVar27 - 9U < 2)))) {
          local_c8 = 0;
          lVar30 = param_8 + 0x14 + lVar38 * 0xc;
          iVar27 = (int)*(char *)(lVar30 + 9);
          iVar32 = (int)*(char *)(lVar30 + 8);
          lVar30 = *(long *)PTR_DAT_04bb43c0;
          local_d8 = puVar3;
          local_d0 = uVar11;
          local_ce = uVar9;
          local_cd = uVar10;
          local_cc = uVar8;
          uVar21 = FUN_0277d6c4(&local_d0);
          if (*(long *)puVar4 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar21 < *(uint *)(lVar30 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
              lVar30 = *(long *)PTR_DAT_04bc0428;
              uVar21 = FUN_0277d6c4(&local_150);
              uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if (uVar21 < *(uint *)(lVar30 + 0x1d8)) {
                lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8);
                if (lVar30 != 0) {
                  local_c8 = lVar30;
                }
              }
            }
          }
          local_dc = (uint)cVar36;
          lVar30 = *(long *)puVar4;
          local_98 = (uint *)0x0;
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          local_a0 = puVar17;
          uVar21 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar4 == 0) {
LAB_02696c20:
            uVar21 = 0;
          }
          else {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((*(uint *)(lVar30 + 0x1d8) <= uVar21) ||
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8) == 0))
            goto LAB_02696c20;
            lVar30 = *(long *)PTR_DAT_04bc0428;
            uVar21 = FUN_0277d6c4(&local_150);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((*(uint *)(lVar30 + 0x1d8) <= uVar21) ||
               (puVar28 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8),
               puVar28 == (uint *)0x0)) goto LAB_02696c20;
            uVar21 = *puVar28;
            local_98 = puVar28;
            if (uVar21 != 0) {
              cVar36 = *PTR_DAT_04bbfe88;
              do {
                puVar31 = (uint *)(ulong)uVar21;
                if (cVar36 == '\0') {
                  cVar36 = '\x01';
                  *PTR_DAT_04bbfe88 = 1;
                  memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                  puVar31 = (uint *)(ulong)*puVar28;
                }
                else {
                  uVar21 = *(uint *)(PTR_DAT_04bbfe90 + 0x180);
                  if (-1 < (int)uVar21) {
                    if ((char *)((ulong)uVar21 + (long)puVar28) != (char *)0x0) {
                      if (*(char *)((ulong)uVar21 + (long)puVar28) != '\0') goto LAB_02696d04;
                      goto LAB_02696c68;
                    }
                    break;
                  }
                  if (uVar21 != 0xffffffff) break;
                }
                if ((puVar31 == (uint *)0x0) || (puVar28 == puVar31)) break;
                lVar30 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar31)) != '\0') {
                  lVar30 = 0x1c;
                }
                lVar30 = (long)puVar28 + (lVar30 - (long)puVar31);
                if (lVar30 == 0) break;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar31));
                *(undefined4 *)(PTR_DAT_04bbfe90 + 0x180) = 0xfffffffe;
                if (uVar25 == 0) break;
                piVar33 = (int *)(lVar30 + 4);
                while (piVar33[-1] != 0x3cda3274) {
                  piVar33 = piVar33 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02696c64;
                }
                iVar22 = 0;
                if (*piVar33 != -1) {
                  iVar22 = *piVar33;
                }
                *(int *)(PTR_DAT_04bbfe90 + 0x180) = iVar22;
                uVar21 = *puVar28;
                if (uVar21 == 0) break;
              } while( true );
            }
LAB_02696c64:
            puVar31 = (uint *)(ulong)*puVar28;
LAB_02696c68:
            uVar21 = 0;
            if ((puVar31 != (uint *)0x0) && (puVar28 != puVar31)) {
              puVar31 = (uint *)((long)puVar28 - (long)puVar31);
              if ((*puVar31 == 0) ||
                 ((uVar40 = puVar31[1], uVar40 == 0 || ((ulong)(ushort)puVar31[2] == 0)))) {
LAB_02696cec:
                uVar21 = 0;
              }
              else {
                lVar30 = 0xc;
                if (*(char *)((long)puVar31 + 10) != '\0') {
                  lVar30 = 0x1c;
                }
                lVar30 = (long)puVar31 + lVar30 + (ulong)(ushort)puVar31[2] * 8;
                uVar21 = 0;
                if (lVar30 != 0) {
                  uVar21 = 0;
                  if ((ulong)uVar40 != 0) {
                    uVar21 = (uint)((ulong)((long)puVar28 - lVar30) / (ulong)uVar40);
                  }
                  if (*puVar31 <= uVar21) {
                    uVar21 = 0xffffffff;
                  }
                  if ((*(uint *)PTR_DAT_04bc0048 <= uVar21) ||
                     (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar21 * 2),
                     uVar21 = (uint)uVar13, 0x51 < uVar13)) goto LAB_02696cec;
                }
              }
            }
          }
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar21);
          if ((uVar21 - 1 < 9) && (uVar25 = FUN_01ae93bc(&local_a8,2), (uVar25 & 1) == 0)) {
LAB_02696d04:
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          puVar17 = PTR_DAT_04bb43c0;
          local_a0 = (undefined *)*param_7;
          local_98 = (uint *)0x0;
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          lVar30 = *(long *)PTR_DAT_04bb43c0;
          uVar21 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar17 == 0) {
LAB_02696f44:
            uVar21 = 0;
          }
          else {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((*(uint *)(lVar30 + 0x1d8) <= uVar21) ||
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8) == 0))
            goto LAB_02696f44;
            lVar30 = *(long *)PTR_DAT_04bc0428;
            uVar21 = FUN_0277d6c4(param_7);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((*(uint *)(lVar30 + 0x1d8) <= uVar21) ||
               (puVar28 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8),
               puVar28 == (uint *)0x0)) goto LAB_02696f44;
            uVar21 = *puVar28;
            local_98 = puVar28;
            if (uVar21 != 0) {
              cVar36 = *PTR_DAT_04bbfe88;
              do {
                puVar31 = (uint *)(ulong)uVar21;
                if (cVar36 == '\0') {
                  cVar36 = '\x01';
                  *PTR_DAT_04bbfe88 = 1;
                  memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                  puVar31 = (uint *)(ulong)*puVar28;
                }
                else {
                  uVar21 = *(uint *)(PTR_DAT_04bbfe90 + 0x180);
                  if (-1 < (int)uVar21) {
                    if ((char *)((ulong)uVar21 + (long)puVar28) != (char *)0x0) {
                      if (*(char *)((ulong)uVar21 + (long)puVar28) == '\0') goto LAB_02696ec0;
                      goto LAB_02696f74;
                    }
                    break;
                  }
                  if (uVar21 != 0xffffffff) break;
                }
                if ((puVar31 == (uint *)0x0) || (puVar28 == puVar31)) break;
                lVar30 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar31)) != '\0') {
                  lVar30 = 0x1c;
                }
                lVar30 = (long)puVar28 + (lVar30 - (long)puVar31);
                if (lVar30 == 0) break;
                uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar31));
                *(undefined4 *)(PTR_DAT_04bbfe90 + 0x180) = 0xfffffffe;
                if (uVar25 == 0) break;
                piVar33 = (int *)(lVar30 + 4);
                while (piVar33[-1] != 0x3cda3274) {
                  piVar33 = piVar33 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_02696ebc;
                }
                iVar22 = 0;
                if (*piVar33 != -1) {
                  iVar22 = *piVar33;
                }
                *(int *)(PTR_DAT_04bbfe90 + 0x180) = iVar22;
                uVar21 = *puVar28;
                if (uVar21 == 0) break;
              } while( true );
            }
LAB_02696ebc:
            puVar31 = (uint *)(ulong)*puVar28;
LAB_02696ec0:
            uVar21 = 0;
            if ((puVar31 != (uint *)0x0) && (puVar28 != puVar31)) {
              puVar31 = (uint *)((long)puVar28 - (long)puVar31);
              if ((*puVar31 == 0) ||
                 ((uVar40 = puVar31[1], uVar40 == 0 || ((ulong)(ushort)puVar31[2] == 0))))
              goto LAB_02696f44;
              lVar30 = 0xc;
              if (*(char *)((long)puVar31 + 10) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar31 + lVar30 + (ulong)(ushort)puVar31[2] * 8;
              uVar21 = 0;
              if (lVar30 != 0) {
                uVar21 = 0;
                if ((ulong)uVar40 != 0) {
                  uVar21 = (uint)((ulong)((long)puVar28 - lVar30) / (ulong)uVar40);
                }
                if (*puVar31 <= uVar21) {
                  uVar21 = 0xffffffff;
                }
                if ((*(uint *)PTR_DAT_04bc0048 <= uVar21) ||
                   (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar21 * 2),
                   uVar21 = (uint)uVar13, 0x51 < uVar13)) goto LAB_02696f44;
              }
            }
          }
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar21);
          if ((uVar21 - 1 < 9) && (uVar25 = FUN_01ae93bc(&local_a8,2), (uVar25 & 1) == 0)) {
LAB_02696f74:
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          iVar22 = FUN_01aee3b4(&local_d8);
          puVar17 = PTR_DAT_04bb43c0;
          bVar15 = bVar19;
          if (iVar22 != 1) {
            bVar15 = true;
          }
          if (bVar15) {
            bVar15 = false;
          }
          else {
            local_78 = (undefined4)*param_7;
            uStack_74 = *(undefined4 *)((long)param_7 + 4);
            local_70 = 0;
            puVar4 = PTR_DAT_04bc0510 + 0x10;
            lVar30 = *(long *)PTR_DAT_04bb43c0;
            local_80 = puVar4;
            uVar21 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar17 != 0) {
              lVar30 = *(long *)(lVar30 + 0x57e58);
              uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((uVar21 < *(uint *)(lVar30 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                lVar30 = *(long *)PTR_DAT_04bc0428;
                uVar21 = FUN_0277d6c4(param_7);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                if (uVar21 < *(uint *)(lVar30 + 0x1d8)) {
                  lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8);
                  if (lVar30 != 0) {
                    local_70 = lVar30;
                  }
                }
              }
            }
            local_98 = (uint *)0x0;
            lVar30 = *(long *)puVar17;
            local_a0 = (undefined *)*param_7;
            local_a8 = puVar4;
            uVar21 = FUN_0277d6c4(&local_a0);
            if (*(long *)puVar17 == 0) {
LAB_026971e0:
LAB_026971e4:
              uVar21 = 0;
            }
            else {
              lVar30 = *(long *)(lVar30 + 0x57e58);
              uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((*(uint *)(lVar30 + 0x1d8) <= uVar21) ||
                 (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8) == 0))
              goto LAB_026971e0;
              lVar30 = *(long *)PTR_DAT_04bc0428;
              uVar21 = FUN_0277d6c4(param_7);
              uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((*(uint *)(lVar30 + 0x1d8) <= uVar21) ||
                 (puVar28 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8),
                 puVar28 == (uint *)0x0)) goto LAB_026971e0;
              local_98 = puVar28;
              uVar21 = *puVar28;
              if (uVar21 != 0) {
                cVar36 = *PTR_DAT_04bbfe88;
                do {
                  puVar31 = (uint *)(ulong)uVar21;
                  if (cVar36 == '\0') {
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    puVar31 = (uint *)(ulong)*puVar28;
                    cVar36 = '\x01';
                  }
                  else {
                    uVar21 = *(uint *)(PTR_DAT_04bbfe90 + 0x180);
                    if (-1 < (int)uVar21) {
                      if ((char *)((ulong)uVar21 + (long)puVar28) != (char *)0x0) {
                        if (*(char *)((ulong)uVar21 + (long)puVar28) != '\0') goto LAB_026972b8;
                        goto LAB_02697220;
                      }
                      break;
                    }
                    if (uVar21 != 0xffffffff) break;
                  }
                  if ((puVar31 == (uint *)0x0) || (puVar28 == puVar31)) break;
                  lVar30 = 0xc;
                  if (*(char *)((long)puVar28 + (10 - (long)puVar31)) != '\0') {
                    lVar30 = 0x1c;
                  }
                  lVar30 = (long)puVar28 + (lVar30 - (long)puVar31);
                  if (lVar30 == 0) break;
                  uVar25 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar31));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x180) = 0xfffffffe;
                  if (uVar25 == 0) break;
                  piVar33 = (int *)(lVar30 + 4);
                  while (piVar33[-1] != 0x3cda3274) {
                    piVar33 = piVar33 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_0269721c;
                  }
                  iVar22 = 0;
                  if (*piVar33 != -1) {
                    iVar22 = *piVar33;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x180) = iVar22;
                  uVar21 = *puVar28;
                  if (uVar21 == 0) break;
                } while( true );
              }
LAB_0269721c:
              puVar31 = (uint *)(ulong)*puVar28;
LAB_02697220:
              uVar21 = 0;
              if ((puVar31 != (uint *)0x0) && (puVar28 != puVar31)) {
                puVar31 = (uint *)((long)puVar28 - (long)puVar31);
                if ((*puVar31 != 0) &&
                   ((uVar40 = puVar31[1], uVar40 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
                  lVar30 = 0xc;
                  if (*(char *)((long)puVar31 + 10) != '\0') {
                    lVar30 = 0x1c;
                  }
                  lVar30 = (long)puVar31 + lVar30 + (ulong)(ushort)puVar31[2] * 8;
                  uVar21 = 0;
                  if (lVar30 != 0) {
                    uVar21 = 0;
                    if ((ulong)uVar40 != 0) {
                      uVar21 = (uint)((ulong)((long)puVar28 - lVar30) / (ulong)uVar40);
                    }
                    if (*puVar31 <= uVar21) {
                      uVar21 = 0xffffffff;
                    }
                    if ((*(uint *)PTR_DAT_04bc0048 <= uVar21) ||
                       (uVar13 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar21 * 2),
                       uVar21 = (uint)uVar13, 0x51 < uVar13)) goto LAB_026971e4;
                  }
                  goto LAB_026971e8;
                }
                goto LAB_026971e4;
              }
            }
LAB_026971e8:
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar21);
            if ((uVar21 - 1 < 9) && (uVar25 = FUN_01ae93bc(&local_a8,2), (uVar25 & 1) == 0)) {
LAB_026972b8:
              puVar17 = PTR_DAT_04bb43c0;
              local_98 = (uint *)0x0;
              local_88 = 0;
              local_c0 = PTR_DAT_04bc0510 + 0x10;
              local_b0 = 0;
              lVar30 = *(long *)PTR_DAT_04bb43c0;
              local_b8 = uVar11;
              local_b6 = uVar9;
              local_b5 = uVar10;
              local_b4 = uVar8;
              local_a8 = puVar1;
              local_a0 = puVar2;
              local_90 = puVar2;
              uVar21 = FUN_0277d6c4(&local_b8);
              if (*(long *)puVar17 != 0) {
                lVar30 = *(long *)(lVar30 + 0x57e58);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                if ((uVar21 < *(uint *)(lVar30 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                  lVar30 = *(long *)PTR_DAT_04bc0428;
                  uVar21 = FUN_0277d6c4(&local_150);
                  uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                  if (uVar21 < *(uint *)(lVar30 + 0x1d8)) {
                    lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar21 * 8);
                    if (lVar30 != 0) {
                      local_b0 = lVar30;
                    }
                  }
                }
              }
              FUN_01afb480(&local_c0,&local_a8);
              local_98._0_4_ = (int)local_98 + iVar32;
              local_98._4_4_ = local_98._4_4_ + iVar27;
              local_88._0_4_ = (int)local_88 + iVar32;
              local_88._4_4_ = local_88._4_4_ + iVar27;
              switch(local_dc) {
              case 0:
              case 2:
                if (local_98._4_4_ == DAT_0556917c) {
                  local_dc = 0;
                }
                else if (local_88._4_4_ == DAT_0556918c) {
                  local_dc = 2;
                }
                else {
                  if (DAT_05594b4c == '\x01') {
                    uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                    DAT_05582b70 = DAT_05582b74;
                    DAT_05582b74 = DAT_05582b78;
                    uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
                    DAT_05582b78 = DAT_05582b7c;
                    DAT_05582b7c = uVar21;
                  }
                  else {
                    uVar21 = nn::os::GetSystemTick();
                    uVar40 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
                    uVar21 = uVar40 ^ uVar40 * 0x800;
                    uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 2;
                    uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 3;
                    uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 4;
                    uVar21 = uVar21 >> 8 ^ uVar40 >> 0x13 ^ uVar21 ^ uVar40;
                  }
                  local_dc = (uint)(0x31 < (uint)((ulong)uVar21 * 100 >> 0x20)) << 1;
                }
                break;
              case 1:
              case 3:
                if ((int)local_98 == DAT_05569178) {
                  local_dc = 1;
                }
                else if ((int)local_88 == DAT_05569188) {
                  local_dc = 3;
                }
                else {
                  if (DAT_05594b4c == '\x01') {
                    uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                    DAT_05582b70 = DAT_05582b74;
                    DAT_05582b74 = DAT_05582b78;
                    uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
                    DAT_05582b78 = DAT_05582b7c;
                    DAT_05582b7c = uVar21;
                  }
                  else {
                    uVar21 = nn::os::GetSystemTick();
                    uVar40 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
                    uVar21 = uVar40 ^ uVar40 * 0x800;
                    uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 2;
                    uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 3;
                    uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 4;
                    uVar21 = uVar21 >> 8 ^ uVar40 >> 0x13 ^ uVar21 ^ uVar40;
                  }
                  local_dc = 3;
                  if ((uint)((ulong)uVar21 * 100 >> 0x20) < 0x32) {
                    local_dc = 1;
                  }
                }
                break;
              default:
                goto switchD_026973cc_default;
              }
              bVar15 = true;
            }
            else {
switchD_026973cc_default:
              bVar15 = false;
            }
          }
          iVar32 = *(int *)(lVar39 + 0x10);
          iVar27 = *(int *)(lVar39 + 0x14);
          iVar22 = *(int *)(lVar39 + 0x20);
          iVar7 = *(int *)(lVar39 + 0x24);
          if ((((iVar32 == DAT_05569178) || (iVar27 == DAT_0556917c)) || (iVar22 == DAT_05569188))
             || ((bVar19 || (bVar16 || bVar15)) || iVar7 == DAT_0556918c)) {
            if (iVar7 + 1 != iVar27) {
              iVar23 = 0;
              iVar26 = 0;
              uVar40 = 0;
              bVar19 = false;
              uVar21 = local_dc & 0xfffffffd;
              uVar35 = 0xffffffff;
              iVar37 = iVar32;
              do {
                if (uVar21 == 0) {
                  if (*(int *)(lVar39 + 0x10) <= (int)local_138 + iVar37 &&
                      (int)local_128 + iVar37 <= iVar22) {
                    if (*(int *)(lVar39 + 0x14) <= local_138._4_4_ + iVar27) {
                      if (local_128._4_4_ + iVar27 <= *(int *)(lVar39 + 0x24)) {
                        iVar22 = 0;
                        do {
                          lVar30 = param_2 + (long)iVar22 * 0x28;
                          if ((((int)local_138 + iVar37 <= *(int *)(lVar30 + 0x20) &&
                               *(int *)(lVar30 + 0x10) <= (int)local_128 + iVar37) &&
                              local_138._4_4_ + iVar27 <= *(int *)(lVar30 + 0x24)) &&
                              *(int *)(lVar30 + 0x14) <= local_128._4_4_ + iVar27)
                          goto LAB_02697ae4;
                          iVar22 = iVar22 + 1;
                        } while (iVar22 != 0x24);
                        if (DAT_05594b4c == '\x01') {
                          uVar24 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                          DAT_05582b70 = DAT_05582b74;
                          DAT_05582b74 = DAT_05582b78;
                          uVar24 = uVar24 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar24 ^ DAT_05582b7c;
                          DAT_05582b78 = DAT_05582b7c;
                          DAT_05582b7c = uVar24;
                        }
                        else {
                          uVar24 = nn::os::GetSystemTick();
                          uVar14 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 1;
                          uVar24 = uVar14 ^ uVar14 * 0x800;
                          uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
                          uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
                          uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
                          uVar24 = uVar24 >> 8 ^ uVar14 >> 0x13 ^ uVar24 ^ uVar14;
                        }
                        local_184 = local_184 + 1;
                        if (((ulong)uVar24 * (ulong)local_184 & 0xffffffff00000000) == 0) {
                          uVar35 = 0;
                          bVar19 = true;
                          iVar23 = iVar37;
                          uVar40 = local_dc;
                          iVar26 = iVar27;
                        }
                      }
                    }
                  }
                }
LAB_02697ae4:
                if (uVar21 != 0) {
                  if (*(int *)(lVar39 + 0x10) <= (int)local_110 + iVar37) {
                    if ((int)local_100 + iVar37 <= *(int *)(lVar39 + 0x20)) {
                      if (*(int *)(lVar39 + 0x14) <= local_110._4_4_ + iVar27) {
                        if (local_100._4_4_ + iVar27 <= *(int *)(lVar39 + 0x24)) {
                          iVar22 = 0;
                          do {
                            lVar30 = param_2 + (long)iVar22 * 0x28;
                            if ((((int)local_110 + iVar37 <= *(int *)(lVar30 + 0x20) &&
                                 *(int *)(lVar30 + 0x10) <= (int)local_100 + iVar37) &&
                                local_110._4_4_ + iVar27 <= *(int *)(lVar30 + 0x24)) &&
                                *(int *)(lVar30 + 0x14) <= local_100._4_4_ + iVar27)
                            goto LAB_02697b40;
                            iVar22 = iVar22 + 1;
                          } while (iVar22 != 0x24);
                          if (DAT_05594b4c == '\x01') {
                            uVar24 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                            DAT_05582b70 = DAT_05582b74;
                            DAT_05582b74 = DAT_05582b78;
                            uVar24 = uVar24 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar24 ^ DAT_05582b7c;
                            DAT_05582b78 = DAT_05582b7c;
                            DAT_05582b7c = uVar24;
                          }
                          else {
                            uVar24 = nn::os::GetSystemTick();
                            uVar14 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 1;
                            uVar24 = uVar14 ^ uVar14 * 0x800;
                            uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
                            uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
                            uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
                            uVar24 = uVar24 >> 8 ^ uVar14 >> 0x13 ^ uVar24 ^ uVar14;
                          }
                          local_184 = local_184 + 1;
                          if (((ulong)uVar24 * (ulong)local_184 & 0xffffffff00000000) == 0) {
                            uVar35 = 1;
                            bVar19 = true;
                            iVar23 = iVar37;
                            uVar40 = local_dc;
                            iVar26 = iVar27;
                          }
                        }
                      }
                    }
                  }
                }
LAB_02697b40:
                iVar22 = *(int *)(lVar39 + 0x20);
                if (iVar37 < iVar22) {
                  iVar37 = iVar37 + 1;
                }
                else {
                  iVar37 = *(int *)(lVar39 + 0x10);
                  iVar27 = iVar27 + 1;
                }
              } while ((iVar32 != iVar37) || (iVar7 + 1 != iVar27));
              goto LAB_02697d94;
            }
          }
          else if (iVar7 + 1 != iVar27) {
            iVar23 = 0;
            iVar26 = 0;
            uVar40 = 0;
            bVar19 = false;
            uVar35 = 0xffffffff;
            iVar37 = iVar32;
            do {
              if (*(int *)(lVar39 + 0x10) <= (int)local_138 + iVar37 &&
                  (int)local_128 + iVar37 <= iVar22) {
                if (*(int *)(lVar39 + 0x14) <= local_138._4_4_ + iVar27) {
                  if (local_128._4_4_ + iVar27 <= *(int *)(lVar39 + 0x24)) {
                    iVar22 = 0;
                    do {
                      lVar30 = param_2 + (long)iVar22 * 0x28;
                      if ((((int)local_138 + iVar37 <= *(int *)(lVar30 + 0x20) &&
                           *(int *)(lVar30 + 0x10) <= (int)local_128 + iVar37) &&
                          local_138._4_4_ + iVar27 <= *(int *)(lVar30 + 0x24)) &&
                          *(int *)(lVar30 + 0x14) <= local_128._4_4_ + iVar27) goto LAB_02697680;
                      iVar22 = iVar22 + 1;
                    } while (iVar22 != 0x24);
                    if (DAT_05594b4c == '\x01') {
                      uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                      DAT_05582b70 = DAT_05582b74;
                      DAT_05582b74 = DAT_05582b78;
                      uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
                      DAT_05582b78 = DAT_05582b7c;
                      DAT_05582b7c = uVar21;
                    }
                    else {
                      uVar21 = nn::os::GetSystemTick();
                      uVar24 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
                      uVar21 = uVar24 ^ uVar24 * 0x800;
                      uVar24 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 2;
                      uVar24 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 3;
                      uVar24 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 4;
                      uVar21 = uVar21 >> 8 ^ uVar24 >> 0x13 ^ uVar21 ^ uVar24;
                    }
                    local_184 = local_184 + 1;
                    if (((ulong)uVar21 * (ulong)local_184 & 0xffffffff00000000) == 0) {
                      if (DAT_05594b4c == '\x01') {
                        uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                        DAT_05582b70 = DAT_05582b74;
                        DAT_05582b74 = DAT_05582b78;
                        uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
                        DAT_05582b78 = DAT_05582b7c;
                        DAT_05582b7c = uVar21;
                      }
                      else {
                        uVar21 = nn::os::GetSystemTick();
                        uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
                        uVar40 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 2;
                        uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 3;
                        uVar21 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 4 ^ uVar21 * 0x800 ^
                                 uVar21;
                      }
                      uVar40 = (&DAT_055692d8)[uVar21 >> 0x1f];
                      uVar35 = 0;
                      bVar19 = true;
                      iVar23 = iVar37;
                      iVar26 = iVar27;
                    }
                  }
                }
              }
LAB_02697680:
              if (*(int *)(lVar39 + 0x10) <= (int)local_110 + iVar37) {
                if ((int)local_100 + iVar37 <= *(int *)(lVar39 + 0x20)) {
                  if (*(int *)(lVar39 + 0x14) <= local_110._4_4_ + iVar27) {
                    if (local_100._4_4_ + iVar27 <= *(int *)(lVar39 + 0x24)) {
                      iVar22 = 0;
                      do {
                        lVar30 = param_2 + (long)iVar22 * 0x28;
                        if ((((int)local_110 + iVar37 <= *(int *)(lVar30 + 0x20) &&
                             *(int *)(lVar30 + 0x10) <= (int)local_100 + iVar37) &&
                            local_110._4_4_ + iVar27 <= *(int *)(lVar30 + 0x24)) &&
                            *(int *)(lVar30 + 0x14) <= local_100._4_4_ + iVar27) goto LAB_026976d0;
                        iVar22 = iVar22 + 1;
                      } while (iVar22 != 0x24);
                      if (DAT_05594b4c == '\x01') {
                        uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                        DAT_05582b70 = DAT_05582b74;
                        DAT_05582b74 = DAT_05582b78;
                        uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
                        DAT_05582b78 = DAT_05582b7c;
                        DAT_05582b7c = uVar21;
                      }
                      else {
                        uVar21 = nn::os::GetSystemTick();
                        uVar24 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
                        uVar21 = uVar24 ^ uVar24 * 0x800;
                        uVar24 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 2;
                        uVar24 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 3;
                        uVar24 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 4;
                        uVar21 = uVar21 >> 8 ^ uVar24 >> 0x13 ^ uVar21 ^ uVar24;
                      }
                      local_184 = local_184 + 1;
                      if (((ulong)uVar21 * (ulong)local_184 & 0xffffffff00000000) == 0) {
                        if (DAT_05594b4c == '\x01') {
                          uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                          DAT_05582b70 = DAT_05582b74;
                          DAT_05582b74 = DAT_05582b78;
                          uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
                          DAT_05582b78 = DAT_05582b7c;
                          DAT_05582b7c = uVar21;
                        }
                        else {
                          uVar21 = nn::os::GetSystemTick();
                          uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
                          uVar40 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 2;
                          uVar40 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 3;
                          uVar21 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 4 ^ uVar21 * 0x800 ^
                                   uVar21;
                        }
                        uVar35 = 1;
                        uVar40 = (&DAT_055692e0)[uVar21 >> 0x1f];
                        bVar19 = true;
                        iVar23 = iVar37;
                        iVar26 = iVar27;
                      }
                    }
                  }
                }
              }
LAB_026976d0:
              iVar22 = *(int *)(lVar39 + 0x20);
              if (iVar37 < iVar22) {
                iVar37 = iVar37 + 1;
              }
              else {
                iVar37 = *(int *)(lVar39 + 0x10);
                iVar27 = iVar27 + 1;
              }
            } while ((iVar32 != iVar37) || (iVar7 + 1 != iVar27));
LAB_02697d94:
            if (bVar19) {
              local_1dc = (undefined4)lVar38;
              local_1d0 = iVar26;
              local_1cc = uVar35;
              local_1d8 = uVar40;
              iStack_1d4 = iVar23;
            }
          }
        }
      }
      lVar38 = lVar38 + 1;
      iVar34 = iVar34 + 1;
    } while (lVar38 != 0x24);
    if ((int)local_1cc < 0) {
      return;
    }
    uVar25 = (ulong)local_1cc;
    bVar19 = 1 < local_1cc;
    piVar33 = (int *)(&local_138 + uVar25 * 5);
    piVar18 = (int *)((long)&local_138 + (uVar25 * 10 + 1) * 4);
    if (bVar19) {
      piVar33 = (int *)&local_138;
      piVar18 = (int *)((long)&local_138 + 4);
    }
    piVar5 = (int *)(&local_128 + uVar25 * 5);
    if (bVar19) {
      piVar5 = (int *)&local_128;
    }
    piVar6 = (int *)((long)&local_128 + (uVar25 * 10 + 1) * 4);
    if (bVar19) {
      piVar6 = (int *)((long)&local_128 + 4);
    }
    iVar27 = *piVar33 + iStack_1d4;
    iVar32 = *piVar18 + local_1d0;
    iStack_1d4 = *piVar5 + iStack_1d4;
    local_1d0 = *piVar6 + local_1d0;
    *(undefined4 *)(param_1 + 8) = local_1dc;
    *(uint *)(param_1 + 0xc) = local_1d8;
  }
  else {
    iVar34 = 0;
    lVar38 = param_5 + (ulong)uVar21 * 0x28;
    if (0x23 < uVar21) {
      lVar38 = param_5;
    }
    iVar27 = *(int *)(lVar38 + 0x10);
    iVar32 = *(int *)(lVar38 + 0x14);
    iStack_1d4 = *(int *)(lVar38 + 0x20);
    local_1d0 = *(int *)(lVar38 + 0x24);
    do {
      lVar38 = param_2 + (long)iVar34 * 0x28;
      if (((iVar27 <= *(int *)(lVar38 + 0x20) && *(int *)(lVar38 + 0x10) <= iStack_1d4) &&
          iVar32 <= *(int *)(lVar38 + 0x24)) && *(int *)(lVar38 + 0x14) <= local_1d0)
      goto LAB_02696880;
      iVar34 = iVar34 + 1;
    } while (iVar34 != 0x24);
  }
  *(uint *)(param_1 + 0x10) = *param_3;
  lVar38 = param_2 + (ulong)*param_3 * 0x28;
  if (0x23 < *param_3) {
    lVar38 = param_2;
  }
  *(int *)(lVar38 + 0x10) = iVar27;
  *(int *)(lVar38 + 0x14) = iVar32;
  *(int *)(lVar38 + 0x20) = iStack_1d4;
  *(int *)(lVar38 + 0x24) = local_1d0;
  *param_3 = *param_3 + 1;
  return;
}

