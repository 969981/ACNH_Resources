
void FUN_0135d130(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *__s;
  undefined *puVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  uint *puVar23;
  char cVar24;
  long lVar25;
  bool bVar26;
  undefined8 *puVar27;
  uint *puVar28;
  uint local_13c;
  undefined8 local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  uint *local_100;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined4 local_e0;
  undefined *local_dc;
  undefined4 local_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined8 local_b4;
  uint local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
  puVar1 = PTR_DAT_04bb2640;
  local_88 = 0;
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a0 = PTR_DAT_04bb2010 + 0x10;
  local_98 = 0;
  lVar20 = *(long *)PTR_DAT_04bb2720;
  puStack_90 = puStack_a0;
  if (lVar20 == 0) {
    puVar27 = &DAT_055c04a0;
  }
  else {
    puVar27 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar27 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar13 = FUN_006bd550(*puVar27,0);
      puVar27 = puVar17;
      if (iVar13 != 0x758f7eaf) {
        puVar27 = &DAT_055c04a0;
      }
    }
  }
  uVar16 = FUN_017ba710(*(undefined4 *)(puVar27 + 7),&local_a8);
  iVar13 = local_98._4_4_;
  iVar19 = (int)local_98;
  if ((uVar16 & 1) == 0) {
    iVar19 = 0x1a;
    iVar13 = 0x1a;
  }
  lVar20 = FUN_0265c2a0(param_1);
  if (lVar20 == 0) {
    local_ac = 0;
  }
  else {
    if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
       (puVar27 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar27 == (undefined8 *)0x0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = (**(code **)*puVar27)();
      uVar14 = uVar14 ^ 1;
    }
    local_ac = FUN_020fd7d8(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
    if ((((uVar14 & 1) == 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
       (puVar27 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar27 != (undefined8 *)0x0)) {
      (**(code **)*puVar27)();
    }
  }
  local_ac = local_ac & 0xff;
  local_b4 = 0xfffe;
  FUN_0277d4ac(&local_b4);
  lVar20 = FUN_0265c2a0(param_1);
  if (lVar20 != 0) {
    if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
       (puVar27 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar27 == (undefined8 *)0x0)) {
      local_13c = 0;
    }
    else {
      local_13c = (**(code **)*puVar27)();
    }
    lVar5 = *(long *)(lVar20 + 8);
    lVar6 = *(long *)(lVar20 + 0x10);
    local_c8 = 0;
    lVar21 = *(long *)PTR_DAT_04bb2720;
    puVar27 = &DAT_055c04a0;
    if ((lVar21 != 0) && (*(long *)(lVar21 + 0x330) != 0)) {
      puVar27 = (undefined8 *)
                (**(code **)(**(long **)puVar1 + 0x18))
                          (*(long **)puVar1,*(undefined4 *)(lVar21 + 0x338));
      iVar15 = FUN_006bd550(*puVar27,0);
      if (iVar15 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
      puVar27 = puVar17;
    }
    local_c4 = *(undefined4 *)(puVar27 + 7);
    local_c0 = FUN_017baf44();
    puVar10 = PTR_PTR_04bc2818;
    puVar9 = PTR_DAT_04bb43c0;
    local_c0 = local_c0 & 1;
    uVar16 = 0;
    local_d0 = PTR_DAT_04bb3140 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    do {
      local_dc = (undefined *)0xfffe;
      FUN_0277d4ac(&local_dc);
      local_d4 = 0xffff;
      FUN_02096820(&local_110,&local_b4,uVar16 & 0xffffffff,&local_ac,lVar6 + lVar5 + 0x10d6c);
      lVar21 = *(long *)(puVar10 + (long)(int)local_ac * 8) + uVar16 * 0x18;
      local_dc = local_110;
      lVar25 = *(long *)puVar9;
      local_e4 = (undefined2)local_110;
      local_e2 = local_110._2_1_;
      local_e1 = local_110._3_1_;
      local_e0 = local_110._4_4_;
      local_d4 = CONCAT13((char)*(undefined4 *)(lVar21 + 0x14),
                          CONCAT12((char)*(undefined4 *)(lVar21 + 0x10),
                                   CONCAT11((char)*(undefined4 *)(lVar21 + 0xc),
                                            (char)*(undefined4 *)(lVar21 + 8))));
      uVar14 = FUN_0277d6c4(&local_e4);
      if (*(long *)puVar9 != 0) {
        lVar21 = *(long *)(lVar25 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar14 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
          local_f0 = (int)(char)local_d4;
          iStack_ec = (int)local_d4._1_1_;
          cVar11 = local_d4._3_1_;
          lVar25 = (long)local_d4._3_1_;
          local_80 = (undefined *)CONCAT44(local_80._4_4_,(int)local_d4._2_1_);
          local_f8 = puVar1;
          FUN_01afbaa4(&local_110,&local_e4,&local_80);
          local_100 = (uint *)0x0;
          local_e4 = (undefined2)local_110;
          local_e2 = local_110._2_1_;
          local_e1 = local_110._3_1_;
          local_e0 = local_110._4_4_;
          lVar21 = *(long *)puVar9;
          local_108 = (undefined2)local_110;
          local_106 = local_110._2_1_;
          local_105 = local_110._3_1_;
          local_104 = local_110._4_4_;
          local_110 = puVar2;
          uVar14 = FUN_0277d6c4(&local_108);
          if (*(long *)puVar9 == 0) {
LAB_0135d630:
            puVar28 = (uint *)0x0;
LAB_0135d634:
            bVar12 = false;
            bVar26 = true;
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar14) ||
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar14 * 8) == 0))
            goto LAB_0135d630;
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(&local_e4);
            __s = PTR_DAT_04bbfe90;
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if (*(uint *)(lVar21 + 0x1d8) <= uVar14) goto LAB_0135d630;
            puVar28 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar14 * 8);
            if (puVar28 == (uint *)0x0) goto LAB_0135d634;
            uVar14 = *puVar28;
            local_100 = puVar28;
            if (uVar14 != 0) {
              cVar24 = *PTR_DAT_04bbfe88;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *PTR_DAT_04bbfe88 = 1;
                  memset(__s,0xff,0x1ac);
                  uVar14 = *puVar28;
                }
                else {
                  uVar7 = *(uint *)(__s + 400);
                  if (-1 < (int)uVar7) {
                    if ((char *)((ulong)uVar7 + (long)puVar28) != (char *)0x0) {
                      bVar26 = false;
                      bVar12 = *(char *)((ulong)uVar7 + (long)puVar28) != '\0';
                      goto LAB_0135d63c;
                    }
                    break;
                  }
                  if (uVar7 != 0xffffffff) break;
                }
                puVar23 = (uint *)(ulong)uVar14;
                if ((puVar23 == (uint *)0x0) || (puVar28 == puVar23)) break;
                lVar21 = 0xc;
                if (*(char *)((long)puVar28 + (10 - (long)puVar23)) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar28 + (lVar21 - (long)puVar23);
                if (lVar21 == 0) break;
                uVar18 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar23));
                *(undefined4 *)(__s + 400) = 0xfffffffe;
                if (uVar18 == 0) break;
                piVar22 = (int *)(lVar21 + 4);
                while (piVar22[-1] != -0x214c0724) {
                  piVar22 = piVar22 + 2;
                  uVar18 = uVar18 - 1;
                  if (uVar18 == 0) goto LAB_0135d8d0;
                }
                iVar15 = 0;
                if (*piVar22 != -1) {
                  iVar15 = *piVar22;
                }
                *(int *)(__s + 400) = iVar15;
                uVar14 = *puVar28;
                if (uVar14 == 0) break;
              } while( true );
            }
LAB_0135d8d0:
            bVar26 = false;
            bVar12 = false;
          }
LAB_0135d63c:
          if ((int)cVar11 - 2U < 4) {
            local_80 = PTR_DAT_04bb2010 + 0x10;
            local_78 = 0;
            lVar21 = *(long *)PTR_DAT_04bb2720;
            if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
              puVar17 = &DAT_055c04a0;
            }
            else {
              puVar17 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
              iVar15 = FUN_006bd550(*puVar17,0);
              puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar15 != 0x758f7eaf) {
                puVar17 = &DAT_055c04a0;
              }
            }
            uVar18 = FUN_0153eb30(&local_80,&local_f8,lVar25,*(undefined4 *)(puVar17 + 7));
            if ((uVar18 & 1) != 0) {
              FUN_01a50970(&local_d0,lVar25,&local_e4,&local_80);
            }
          }
          else {
            local_f0 = local_f0 + iVar19;
            iStack_ec = iStack_ec + iVar13;
            FUN_01a50970(&local_d0,lVar25,&local_e4,&local_f8);
            if (uVar16 == 0) {
              bVar12 = true;
            }
          }
          uVar14 = 0;
          if (((!bVar26) && (uVar7 = *puVar28, uVar7 != 0)) && (puVar28 != (uint *)(ulong)uVar7)) {
            puVar23 = (uint *)((long)puVar28 - (long)(ulong)uVar7);
            uVar14 = 0;
            if (*puVar23 != 0) {
              uVar14 = puVar23[1];
              if ((uVar14 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar23 + lVar21 + (ulong)(ushort)puVar23[2] * 8;
                if (lVar21 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar14 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar28 - lVar21) / (ulong)uVar14);
                  }
                  if (*puVar23 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < *(uint *)PTR_DAT_04bc0188) &&
                     (uVar14 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0188 + 8) + (long)(int)uVar7 * 2),
                     uVar14 < 7)) goto LAB_0135d7c4;
                }
              }
              uVar14 = 0;
            }
          }
LAB_0135d7c4:
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
          lVar21 = **(long **)PTR_DAT_04bb27d0;
          bVar8 = *(byte *)(lVar21 + 0x473);
          if ((long)(char)bVar8 != 0xffffffffffffffff) {
            pbVar3 = (byte *)(lVar21 + 0x48);
            uVar18 = (long)(char)bVar8 & 0xffffffff;
            pbVar4 = pbVar3 + uVar18 * 0x80;
            if (7 < bVar8) {
              pbVar4 = pbVar3;
            }
            if ((*pbVar4 >> 3 & 1) != 0) {
              lVar21 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
              lVar25 = lVar21 + uVar18 * 0xc;
              if (0xb < bVar8) {
                lVar25 = lVar21;
              }
              if (*(char *)(lVar25 + 10) == '\0') goto LAB_0135d3a0;
            }
          }
          if (uVar14 != 0) {
            bVar12 = true;
          }
          local_78 = CONCAT71(local_78._1_7_,bVar12);
          local_80 = (undefined *)((ulong)CONCAT22((short)iStack_ec,(short)local_f0) << 0x20);
          local_80._0_3_ = CONCAT12(cVar11,*(undefined2 *)PTR_DAT_04bb6298);
          local_70 = (int)cVar11;
          FUN_0150cbf0(&local_80);
          local_70 = 0;
          local_6a = 0;
          local_6c = 0xff00;
          if (-1 < *(int *)(PTR_DAT_04bbd3f8 + 8)) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bbd3f8 + 8),
                         &local_70,&local_80,10,0);
          }
        }
      }
LAB_0135d3a0:
      uVar16 = uVar16 + 1;
    } while (uVar16 != 7);
    FUN_020986a0(&local_d0);
    if ((((local_13c & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
      (**(code **)*puVar17)();
    }
  }
  return;
}

