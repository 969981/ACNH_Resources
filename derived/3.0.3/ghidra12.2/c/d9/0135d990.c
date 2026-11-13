
void FUN_0135d990(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  char cVar19;
  char cVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  int *piVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined8 local_118;
  int local_110;
  int iStack_10c;
  uint *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  byte local_f0;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined2 local_7c;
  undefined1 local_7a;
  short local_78;
  short local_76;
  undefined1 local_74;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  puVar8 = PTR_DAT_04bb2720;
  puVar7 = PTR_DAT_04bb2010;
  local_98 = 0;
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a0 = PTR_DAT_04bb2010 + 0x10;
  uStack_88 = 0;
  lVar21 = *(long *)PTR_DAT_04bb2720;
  local_90 = puStack_a0;
  if (lVar21 == 0) {
    puVar26 = &DAT_055c04a0;
  }
  else {
    puVar26 = &DAT_055c04a0;
    if (*(long *)(lVar21 + 0x330) != 0) {
      puVar26 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
      iVar15 = FUN_006bd550(*puVar26,0);
      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar15 != 0x758f7eaf) {
        puVar26 = &DAT_055c04a0;
      }
    }
  }
  uVar17 = FUN_017ba710(*(undefined4 *)(puVar26 + 7),&local_a8);
  cVar19 = (char)local_98;
  cVar20 = (char)((ulong)local_98 >> 0x20);
  if ((uVar17 & 1) == 0) {
    cVar19 = '\x1c';
    cVar20 = '\x1c';
  }
  local_cc = 0xfffe;
  FUN_0277d4ac(&local_cc);
  lVar21 = (long)&local_c4 + 4;
  local_bc = 0;
  local_c4 = 0xfffe0000ffff;
  FUN_0277d4ac(lVar21);
  lVar4 = (long)&local_b8 + 4;
  local_b8 = 0xfffe0000ffff;
  local_b0 = 0;
  FUN_0277d4ac(lVar4);
  local_ac = 0xffff;
  FUN_0268b680(&local_d4,param_1);
  local_dc = 0x598;
  FUN_0277d4ac(&local_dc);
  local_e4 = 0xe71;
  FUN_0277d4ac(&local_e4);
  puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar5 = puVar18[3];
  uVar16 = *puVar18 ^ *puVar18 << 0xb;
  *puVar18 = puVar18[1];
  puVar18[1] = puVar18[2];
  puVar18[2] = uVar5;
  puVar18[3] = uVar16 >> 8 ^ uVar5 >> 0x13 ^ uVar16 ^ uVar5;
  FUN_01a4c66c(&local_100,&local_dc);
  FUN_01a4c66c(&local_100,&local_e4);
  cVar14 = FUN_020fd7d8(param_1);
  if (cVar14 == '\a') {
    uVar17 = (ulong)local_118 >> 0x20;
    local_cc = CONCAT44(uStack_d0,local_d4);
    local_c4._0_4_ = (uint)CONCAT12(3,CONCAT11(cVar20,cVar19 + '\x04'));
    local_c4._0_6_ = CONCAT24((undefined2)local_dc,(uint)local_c4);
    local_c4._0_7_ = CONCAT16(local_dc._2_1_,(undefined6)local_c4);
    local_c4 = CONCAT17(local_dc._3_1_,(undefined7)local_c4);
    local_bc = local_dc._4_4_;
    local_b8._0_4_ = (uint)CONCAT11(cVar20,cVar19 + '\x06');
    local_b8._0_6_ = CONCAT24((undefined2)local_e4,(uint)local_b8);
    local_b8._0_7_ = CONCAT16(local_e4._2_1_,(undefined6)local_b8);
    local_b8 = CONCAT17(local_e4._3_1_,(undefined7)local_b8);
    local_b0 = local_e4._4_4_;
  }
  else {
    cVar14 = FUN_020fd7d8(param_1);
    if (cVar14 != '\x01') {
      return;
    }
    uVar17 = (ulong)local_118._4_4_;
    local_cc = CONCAT44(uStack_d0,local_d4);
    local_c4._0_4_ = (uint)CONCAT11(cVar20 + '\x02',cVar19);
    local_c4._0_6_ = CONCAT24((undefined2)local_dc,(uint)local_c4);
    local_c4._0_7_ = CONCAT16(local_dc._2_1_,(undefined6)local_c4);
    local_c4 = CONCAT17(local_dc._3_1_,(undefined7)local_c4);
    local_bc = local_dc._4_4_;
    local_b8._0_4_ = (uint)CONCAT11(cVar20,cVar19);
    local_b8._0_6_ = CONCAT24((undefined2)local_e4,(uint)local_b8);
    local_b8._0_7_ = CONCAT16(local_e4._2_1_,(undefined6)local_b8);
    local_b8 = CONCAT17(local_e4._3_1_,(undefined7)local_b8);
    local_b0 = local_e4._4_4_;
    cVar19 = cVar19 + '\x06';
  }
  local_100 = (undefined *)((ulong)local_100._4_4_ << 0x20);
  local_118 = (undefined *)(uVar17 << 0x20);
  local_f8 = 0;
  local_ac = (uint)CONCAT11(cVar20,cVar19);
  lVar22 = *(long *)puVar8;
  if (lVar22 == 0) {
    puVar26 = &DAT_055c04a0;
  }
  else {
    puVar26 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar26 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar15 = FUN_006bd550(*puVar26,0);
      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar15 != 0x758f7eaf) {
        puVar26 = &DAT_055c04a0;
      }
    }
  }
  local_f4 = *(undefined4 *)(puVar26 + 7);
  local_f0 = FUN_017baf44();
  local_f0 = local_f0 & 1;
  local_100 = PTR_DAT_04bb3140 + 0x10;
  local_70 = (int)local_c4._2_1_;
  FUN_01afbaa4(&local_7c,&local_cc,&local_70);
  local_110 = (int)(char)local_c4;
  iStack_10c = (int)local_c4._1_1_;
  local_118 = puVar7 + 0x10;
  FUN_01a50970(&local_100,0,&local_7c,&local_118);
  puVar12 = PTR_DAT_04bc0510;
  puVar8 = PTR_DAT_04bb43c0;
  local_108 = (uint *)0x0;
  local_118 = PTR_DAT_04bc0510 + 0x10;
  local_110 = (int)local_cc;
  iStack_10c = local_cc._4_4_;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar16 = FUN_0277d6c4(&local_110);
  bVar13 = false;
  if (*(long *)puVar8 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if (uVar16 < *(uint *)(lVar22 + 0x1d8)) {
      bVar13 = false;
      if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8) == 0) goto LAB_0135df14;
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(&local_cc);
      puVar9 = PTR_DAT_04bbfe90;
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar16 < *(uint *)(lVar22 + 0x1d8)) {
        puVar18 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8);
        if (puVar18 != (uint *)0x0) {
          uVar16 = *puVar18;
          local_108 = puVar18;
          if (uVar16 != 0) {
            cVar20 = *PTR_DAT_04bbfe88;
            do {
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(puVar9,0xff,0x1ac);
                uVar16 = *puVar18;
              }
              else {
                uVar5 = *(uint *)(puVar9 + 400);
                if (-1 < (int)uVar5) {
                  bVar13 = false;
                  if ((char *)((ulong)uVar5 + (long)puVar18) != (char *)0x0) {
                    bVar13 = *(char *)((ulong)uVar5 + (long)puVar18) != '\0';
                  }
                  goto LAB_0135df14;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar16;
              bVar13 = false;
              if ((puVar23 == (uint *)0x0) || (puVar18 == puVar23)) goto LAB_0135df14;
              lVar22 = 0xc;
              if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar18 + (lVar22 - (long)puVar23);
              if (lVar22 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
              *(undefined4 *)(puVar9 + 400) = 0xfffffffe;
              if (uVar17 == 0) break;
              piVar24 = (int *)(lVar22 + 4);
              while (piVar24[-1] != -0x214c0724) {
                bVar13 = false;
                piVar24 = piVar24 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0135df14;
              }
              bVar13 = false;
              iVar15 = 0;
              if (*piVar24 != -1) {
                iVar15 = *piVar24;
              }
              *(int *)(puVar9 + 400) = iVar15;
              uVar16 = *puVar18;
              if (uVar16 == 0) goto LAB_0135df14;
            } while( true );
          }
        }
      }
    }
    bVar13 = false;
  }
LAB_0135df14:
  puVar11 = PTR_DAT_04bbd3f8;
  puVar10 = PTR_DAT_04bb6298;
  puVar9 = PTR_DAT_04bb27d0;
  lVar22 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar22 + 0x473);
  if ((long)(char)bVar6 == 0xffffffffffffffff) {
LAB_0135df84:
    local_7c = *(undefined2 *)PTR_DAT_04bb6298;
    local_78 = (short)(char)local_c4;
    local_76 = (short)local_c4._1_1_;
    local_70 = 0;
    local_7a = 0;
    local_74 = bVar13;
    FUN_0150cbf0(&local_7c);
    local_70 = 0;
    local_6a = 0;
    local_6c = 0xff00;
    if (-1 < *(int *)(puVar11 + 8)) {
      FUN_01db1df0(**(long **)puVar9 + 0x480,*(int *)(puVar11 + 8),&local_70,&local_7c,10,0);
    }
  }
  else {
    pbVar1 = (byte *)(lVar22 + 0x48);
    uVar17 = (long)(char)bVar6 & 0xffffffff;
    pbVar3 = pbVar1 + uVar17 * 0x80;
    if (7 < bVar6) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 >> 3 & 1) == 0) goto LAB_0135df84;
    lVar22 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
    lVar2 = lVar22 + uVar17 * 0xc;
    if (0xb < bVar6) {
      lVar2 = lVar22;
    }
    if (*(char *)(lVar2 + 10) != '\0') goto LAB_0135df84;
  }
  local_70 = (int)local_b8._2_1_;
  FUN_01afbaa4(&local_7c,lVar21,&local_70);
  local_110 = (int)(char)local_b8;
  iStack_10c = (int)local_b8._1_1_;
  local_118 = puVar7 + 0x10;
  FUN_01a50970(&local_100,0,&local_7c,&local_118);
  local_118 = puVar12 + 0x10;
  lVar22 = *(long *)puVar8;
  local_108 = (uint *)0x0;
  local_110 = local_c4._4_4_;
  iStack_10c = local_bc;
  uVar16 = FUN_0277d6c4(&local_110);
  bVar13 = false;
  if (*(long *)puVar8 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if (uVar16 < *(uint *)(lVar22 + 0x1d8)) {
      bVar13 = false;
      if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8) == 0) goto LAB_0135e1c8;
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(lVar21);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar16 < *(uint *)(lVar22 + 0x1d8)) {
        puVar18 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8);
        if (puVar18 != (uint *)0x0) {
          uVar16 = *puVar18;
          local_108 = puVar18;
          if (uVar16 != 0) {
            cVar20 = *PTR_DAT_04bbfe88;
            puVar25 = PTR_DAT_04bbfe90;
            do {
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                uVar16 = *puVar18;
                puVar25 = PTR_DAT_04bbfe90;
              }
              else {
                uVar5 = *(uint *)(puVar25 + 400);
                if (-1 < (int)uVar5) {
                  bVar13 = false;
                  if ((char *)((ulong)uVar5 + (long)puVar18) != (char *)0x0) {
                    bVar13 = *(char *)((ulong)uVar5 + (long)puVar18) != '\0';
                  }
                  goto LAB_0135e1c8;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar16;
              bVar13 = false;
              if ((puVar23 == (uint *)0x0) || (puVar18 == puVar23)) goto LAB_0135e1c8;
              lVar21 = 0xc;
              if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
                lVar21 = 0x1c;
              }
              lVar21 = (long)puVar18 + (lVar21 - (long)puVar23);
              if (lVar21 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
              *(undefined4 *)(puVar25 + 400) = 0xfffffffe;
              if (uVar17 == 0) break;
              piVar24 = (int *)(lVar21 + 4);
              while (piVar24[-1] != -0x214c0724) {
                bVar13 = false;
                piVar24 = piVar24 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0135e1c8;
              }
              bVar13 = false;
              iVar15 = 0;
              if (*piVar24 != -1) {
                iVar15 = *piVar24;
              }
              *(int *)(puVar25 + 400) = iVar15;
              uVar16 = *puVar18;
              if (uVar16 == 0) goto LAB_0135e1c8;
            } while( true );
          }
        }
      }
    }
    bVar13 = false;
  }
LAB_0135e1c8:
  lVar21 = **(long **)puVar9;
  bVar6 = *(byte *)(lVar21 + 0x473);
  if ((long)(char)bVar6 == 0xffffffffffffffff) {
LAB_0135e220:
    local_7c = *(undefined2 *)puVar10;
    local_78 = (short)(char)local_b8;
    local_76 = (short)local_b8._1_1_;
    local_70 = 0;
    local_7a = 0;
    local_74 = bVar13;
    FUN_0150cbf0(&local_7c);
    local_70 = 0;
    local_6a = 0;
    local_6c = 0xff00;
    if (-1 < *(int *)(puVar11 + 8)) {
      FUN_01db1df0(**(long **)puVar9 + 0x480,*(int *)(puVar11 + 8),&local_70,&local_7c,10,0);
    }
  }
  else {
    pbVar1 = (byte *)(lVar21 + 0x48);
    uVar17 = (long)(char)bVar6 & 0xffffffff;
    pbVar3 = pbVar1 + uVar17 * 0x80;
    if (7 < bVar6) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 >> 3 & 1) == 0) goto LAB_0135e220;
    lVar21 = (*(long **)puVar9)[2] + 0x108;
    lVar22 = lVar21 + uVar17 * 0xc;
    if (0xb < bVar6) {
      lVar22 = lVar21;
    }
    if (*(char *)(lVar22 + 10) != '\0') goto LAB_0135e220;
  }
  local_70 = (int)local_ac._2_1_;
  FUN_01afbaa4(&local_7c,lVar4,&local_70);
  local_110 = (int)(char)local_ac;
  iStack_10c = (int)local_ac._1_1_;
  local_118 = puVar7 + 0x10;
  FUN_01a50970(&local_100,0,&local_7c,&local_118);
  local_118 = puVar12 + 0x10;
  lVar21 = *(long *)puVar8;
  local_108 = (uint *)0x0;
  local_110 = local_b8._4_4_;
  iStack_10c = local_b0;
  uVar16 = FUN_0277d6c4(&local_110);
  bVar13 = false;
  if (*(long *)puVar8 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (uVar16 < *(uint *)(lVar21 + 0x1d8)) {
      bVar13 = false;
      if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) == 0) goto LAB_0135e438;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(lVar4);
      puVar7 = PTR_DAT_04bbfe90;
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
          (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8),
          puVar18 != (uint *)0x0)) && (uVar16 = *puVar18, uVar16 != 0)) {
        cVar20 = *PTR_DAT_04bbfe88;
        do {
          if (cVar20 == '\0') {
            cVar20 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(puVar7,0xff,0x1ac);
            uVar16 = *puVar18;
          }
          else {
            uVar5 = *(uint *)(puVar7 + 400);
            if (-1 < (int)uVar5) {
              bVar13 = false;
              if ((char *)((ulong)uVar5 + (long)puVar18) != (char *)0x0) {
                bVar13 = *(char *)((ulong)uVar5 + (long)puVar18) != '\0';
              }
              goto LAB_0135e438;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar23 = (uint *)(ulong)uVar16;
          bVar13 = false;
          if ((puVar23 == (uint *)0x0) || (puVar18 == puVar23)) goto LAB_0135e438;
          lVar21 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar18 + (lVar21 - (long)puVar23);
          if (lVar21 == 0) break;
          uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
          *(undefined4 *)(puVar7 + 400) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar24 = (int *)(lVar21 + 4);
          while (piVar24[-1] != -0x214c0724) {
            piVar24 = piVar24 + 2;
            uVar17 = uVar17 - 1;
            bVar13 = false;
            if (uVar17 == 0) goto LAB_0135e438;
          }
          iVar15 = 0;
          if (*piVar24 != -1) {
            iVar15 = *piVar24;
          }
          *(int *)(puVar7 + 400) = iVar15;
          uVar16 = *puVar18;
          bVar13 = false;
          if (uVar16 == 0) goto LAB_0135e438;
        } while( true );
      }
    }
    bVar13 = false;
  }
LAB_0135e438:
  local_74 = bVar13;
  lVar21 = **(long **)puVar9;
  bVar6 = *(byte *)(lVar21 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar21 + 0x48);
    uVar17 = (long)(char)bVar6 & 0xffffffff;
    pbVar3 = pbVar1 + uVar17 * 0x80;
    if (7 < bVar6) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 >> 3 & 1) != 0) {
      lVar21 = (*(long **)puVar9)[2] + 0x108;
      lVar4 = lVar21 + uVar17 * 0xc;
      if (0xb < bVar6) {
        lVar4 = lVar21;
      }
      if (*(char *)(lVar4 + 10) == '\0') {
        return;
      }
    }
  }
  local_7c = *(undefined2 *)puVar10;
  local_78 = (short)(char)local_ac;
  local_76 = (short)local_ac._1_1_;
  local_70 = 0;
  local_7a = 0;
  FUN_0150cbf0(&local_7c);
  local_70 = 0;
  local_6a = 0;
  local_6c = 0xff00;
  if (-1 < *(int *)(puVar11 + 8)) {
    FUN_01db1df0(**(long **)puVar9 + 0x480,*(int *)(puVar11 + 8),&local_70,&local_7c,10,0);
  }
  return;
}

