
void FUN_0169e8d0(long param_1,uint *param_2,long param_3,long param_4,uint *param_5,int param_6)

{
  int *piVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  int *piVar15;
  char cVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined *local_b0;
  undefined4 local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar18 = *(long *)puVar3;
  if (lVar18 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if (*(uint *)(lVar19 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  local_a0 = (uint *)0x0;
  local_a8 = *param_2;
  local_a4 = param_2[1];
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar3 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar18 + 0x1d8)) &&
         (puVar12 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar12 != (uint *)0x0)) {
        local_a0 = puVar12;
      }
    }
  }
  uVar8 = FUN_01ae59b0(&local_b0);
  uVar2 = (undefined1)param_6;
  if ((uVar8 & 1) != 0) {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,0x74);
    if (local_a0 == (uint *)0x0) {
      local_98 = 0xbc;
    }
    else {
      uVar5 = *local_a0;
      local_98 = 0;
      if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
        puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
        local_98 = 0;
        if (*puVar12 != 0) {
          uVar5 = puVar12[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar18 != 0) {
              uVar11 = 0;
              if ((ulong)uVar5 != 0) {
                uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
              }
              if (*puVar12 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_98 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
                 local_98 < 0xbd)) goto LAB_0169eaa0;
            }
          }
          local_98 = 0;
        }
      }
    }
LAB_0169eaa0:
    if (local_98 == 0x74) {
      *(uint *)(*(long *)(param_1 + 0xb18) + 0x140) =
           *(uint *)(*(long *)(param_1 + 0xb18) + 0x140) | 0x400;
    }
    *(int *)(*(long *)(param_1 + 0xb20) + 0x1610) =
         *(int *)(*(long *)(param_1 + 0xb20) + 0x1610) + 1;
    iVar6 = FUN_01afb8e8(&local_b0);
    if (iVar6 == 1) {
      lVar18 = *(long *)(param_1 + 0xb20);
      cVar16 = *(char *)(lVar18 + 0x1618);
      if (cVar16 < '\x03') {
        *(char *)(lVar18 + 0x1618) = cVar16 + '\x01';
        lVar18 = *(long *)(param_1 + 0xb20);
      }
      if (*(short *)(lVar18 + 0x15f8) != -2) {
        uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar5;
        if (0x31 < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_0169eb74;
      }
      *(undefined2 *)(lVar18 + 0x15f8) = (undefined2)local_a8;
      *(undefined2 *)(lVar18 + 0x15fa) = local_a8._2_2_;
      *(uint *)(lVar18 + 0x15fc) = local_a4;
    }
LAB_0169eb74:
    if (*param_5 < 8) {
      iVar6 = FUN_01b15eb0(&local_b0);
      if ((param_6 != -1) && (499 < iVar6)) {
        lVar18 = *(long *)(param_1 + 0xb18);
        if (*(short *)(lVar18 + 0x138) != -2) {
          uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar5;
          if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_0169ebfc;
        }
        *(uint *)(lVar18 + 0x138) = local_a8;
        *(uint *)(lVar18 + 0x13c) = local_a4;
        *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x125) = uVar2;
      }
LAB_0169ebfc:
      *(int *)(*(long *)(param_1 + 0xb18) + 0x24) =
           *(int *)(*(long *)(param_1 + 0xb18) + 0x24) + iVar6;
    }
    FUN_016a1134(param_1,&local_b0);
    local_90._0_4_ = local_a8;
    local_90._4_4_ = local_a4;
    lVar18 = (**(code **)(*(long *)(*(long *)(param_1 + 0xb20) + 8) + 0x20))();
    uVar5 = FUN_0277d6c4(&local_90);
    if ((0x752 < (uVar5 >> 3 & 0x1fff)) ||
       ((*(uint *)(lVar18 + (ulong)((uVar5 & 0xffff) >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) == 0))
    {
      if (local_a0 == (uint *)0x0) {
LAB_0169ecec:
        uVar11 = 0;
      }
      else {
        uVar5 = *local_a0;
        uVar11 = 0;
        if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
          puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
          uVar11 = 0;
          if (*puVar12 != 0) {
            uVar5 = puVar12[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar18 != 0) {
                uVar11 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
                }
                if (*puVar12 <= uVar11) {
                  uVar11 = 0xffffffff;
                }
                if ((uVar11 < *(uint *)PTR_DAT_04bc00a0) &&
                   (uVar11 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00a0 + 8) + (long)(int)uVar11 * 2),
                   uVar11 < 0x1f)) goto LAB_0169ecf0;
              }
            }
            goto LAB_0169ecec;
          }
        }
      }
LAB_0169ecf0:
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(param_1 + 0xb20) + 0x1088);
        piVar1 = piVar15 + uVar11;
        if (0x1e < uVar11) {
          piVar1 = piVar15;
        }
        *piVar1 = *piVar1 + 1;
      }
    }
    if (local_a0 == (uint *)0x0) {
LAB_0169edb0:
      uVar11 = 0;
    }
    else {
      uVar5 = *local_a0;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
        puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar12 != 0) {
          uVar5 = puVar12[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar18 != 0) {
              uVar11 = 0;
              if ((ulong)uVar5 != 0) {
                uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
              }
              if (*puVar12 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *(uint *)PTR_DAT_04bc0090) &&
                 (uVar11 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0090 + 8) + (long)(int)uVar11 * 2),
                 uVar11 < 5)) goto LAB_0169edb4;
            }
          }
          goto LAB_0169edb0;
        }
      }
    }
LAB_0169edb4:
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar11);
    if (uVar11 != 0) {
      lVar18 = *(long *)(param_1 + 0xb18);
      if (*(short *)(lVar18 + 0x6c) == -2) {
LAB_0169ee10:
        *(uint *)(lVar18 + 0x6c) = local_a8;
        *(uint *)(lVar18 + 0x70) = local_a4;
        *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xcf) = uVar2;
      }
      else {
        uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar5;
        if ((uint)((ulong)uVar5 * 100 >> 0x20) < 0x1e) goto LAB_0169ee10;
      }
      *(byte *)(*(long *)(param_1 + 0xb20) + 0x1620) =
           *(byte *)(*(long *)(param_1 + 0xb20) + 0x1620) | (byte)(1 << (ulong)(uVar11 & 0x1f));
    }
    iVar6 = FUN_01afcfa0(&local_b0);
    if (((iVar6 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_b0), puVar9 == (ushort *)0x0)) ||
       ((*puVar9 & 0x18) != 0x10)) {
      iVar6 = FUN_01ae3210(&local_b0);
      iVar7 = FUN_01ae3bc0(&local_b0);
      lVar18 = *(long *)(param_1 + 0xb20);
      bVar14 = *(byte *)(lVar18 + 0x1621);
      if ((((bVar14 & 1) == 0) && ((iVar6 == 1 || (iVar7 == 1)))) && (uVar5 = *param_5, uVar5 < 8))
      {
        if ((1 << (ulong)(uVar5 & 0x1f) & 0xc3U) == 0) {
          if (uVar5 == 5) goto LAB_0169ef30;
        }
        else {
          local_70 = 0;
          local_90 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_88 = PTR_DAT_04bb2010 + 0x10;
          local_80 = 0;
          local_98 = local_a8;
          uStack_94 = local_a4;
          puStack_78 = puStack_88;
          uVar8 = FUN_0277f02c(&local_98,&local_90);
          if (((uVar8 & 1) != 0) &&
             (*(int *)(param_4 + 0x20) <= *(int *)(param_3 + 8) + (int)local_70 + 3)) {
            lVar18 = *(long *)(param_1 + 0xb20);
            bVar14 = *(byte *)(lVar18 + 0x1621);
LAB_0169ef30:
            *(byte *)(lVar18 + 0x1621) = bVar14 | 1;
            *(int *)(*(long *)(param_1 + 0xb18) + 0x34) =
                 *(int *)(*(long *)(param_1 + 0xb18) + 0x34) + 500;
            lVar18 = *(long *)(param_1 + 0xb18);
            if (*(short *)(lVar18 + 0xb4) != -2) {
              uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar5;
              if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_0169efbc;
            }
            *(uint *)(lVar18 + 0x140) = *(uint *)(lVar18 + 0x140) | 0x80;
            lVar18 = *(long *)(param_1 + 0xb18);
            *(uint *)(lVar18 + 0xb4) = local_a8;
            *(uint *)(lVar18 + 0xb8) = local_a4;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x11b) = uVar2;
          }
        }
      }
LAB_0169efbc:
      lVar18 = *(long *)(param_1 + 0xb20);
      bVar14 = *(byte *)(lVar18 + 0x1621);
      if (((bVar14 >> 1 & 1) == 0) &&
         (((iVar6 == 7 || (iVar7 == 7)) && (uVar5 = *param_5, uVar5 < 8)))) {
        if ((1 << (ulong)(uVar5 & 0x1f) & 0xc3U) == 0) {
          if (uVar5 == 3) goto LAB_0169f06c;
        }
        else {
          local_70 = 0;
          local_90 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_88 = PTR_DAT_04bb2010 + 0x10;
          local_80 = 0;
          local_98 = local_a8;
          uStack_94 = local_a4;
          puStack_78 = puStack_88;
          uVar8 = FUN_0277f02c(&local_98,&local_90);
          if (((uVar8 & 1) != 0) &&
             (*(int *)(param_3 + 8) + (int)local_80 + -3 <= *(int *)(param_4 + 0x10))) {
            lVar18 = *(long *)(param_1 + 0xb20);
            bVar14 = *(byte *)(lVar18 + 0x1621);
LAB_0169f06c:
            *(byte *)(lVar18 + 0x1621) = bVar14 | 2;
            *(int *)(*(long *)(param_1 + 0xb18) + 0x34) =
                 *(int *)(*(long *)(param_1 + 0xb18) + 0x34) + 500;
            lVar18 = *(long *)(param_1 + 0xb18);
            if (*(short *)(lVar18 + 0xbc) != -2) {
              uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar5;
              if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_0169f0f8;
            }
            *(uint *)(lVar18 + 0x140) = *(uint *)(lVar18 + 0x140) | 0x100;
            lVar18 = *(long *)(param_1 + 0xb18);
            *(uint *)(lVar18 + 0xbc) = local_a8;
            *(uint *)(lVar18 + 0xc0) = local_a4;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x11c) = uVar2;
          }
        }
      }
LAB_0169f0f8:
      lVar18 = *(long *)(param_1 + 0xb20);
      bVar14 = *(byte *)(lVar18 + 0x1621);
      if ((((bVar14 >> 2 & 1) == 0) && ((iVar6 == 6 || (iVar7 == 6)))) &&
         (uVar5 = *param_5, uVar5 < 8)) {
        if ((1 << (ulong)(uVar5 & 0x1f) & 0xc3U) == 0) {
          if (uVar5 == 4) goto LAB_0169f1a8;
        }
        else {
          local_70 = 0;
          local_90 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_88 = PTR_DAT_04bb2010 + 0x10;
          local_80 = 0;
          local_98 = local_a8;
          uStack_94 = local_a4;
          puStack_78 = puStack_88;
          uVar8 = FUN_0277f02c(&local_98,&local_90);
          if (((uVar8 & 1) != 0) &&
             (*(int *)(param_4 + 0x24) <= *(int *)(param_3 + 0xc) + local_70._4_4_ + 3)) {
            lVar18 = *(long *)(param_1 + 0xb20);
            bVar14 = *(byte *)(lVar18 + 0x1621);
LAB_0169f1a8:
            *(byte *)(lVar18 + 0x1621) = bVar14 | 4;
            *(int *)(*(long *)(param_1 + 0xb18) + 0x34) =
                 *(int *)(*(long *)(param_1 + 0xb18) + 0x34) + 500;
            lVar18 = *(long *)(param_1 + 0xb18);
            if (*(short *)(lVar18 + 0xc4) != -2) {
              uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar5;
              if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_0169f234;
            }
            *(uint *)(lVar18 + 0x140) = *(uint *)(lVar18 + 0x140) | 0x200;
            lVar18 = *(long *)(param_1 + 0xb18);
            *(uint *)(lVar18 + 0xc4) = local_a8;
            *(uint *)(lVar18 + 200) = local_a4;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x11d) = uVar2;
          }
        }
      }
LAB_0169f234:
      FUN_016a1590(param_1,&local_b0);
    }
    FUN_016a12ec(param_1,&local_b0);
    if (((local_a0 != (uint *)0x0) && (uVar5 = *local_a0, uVar5 != 0)) &&
       (local_a0 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      if (((*puVar12 != 0) && (uVar5 = puVar12[1], uVar5 != 0)) && ((ulong)(ushort)puVar12[2] != 0))
      {
        lVar18 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar18 != 0) {
          uVar11 = 0;
          if ((ulong)uVar5 != 0) {
            uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
          }
          if (*puVar12 <= uVar11) {
            uVar11 = 0xffffffff;
          }
          if (((uVar11 < *(uint *)PTR_DAT_04bc0088) &&
              (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0088 + 8) + (long)(int)uVar11 * 2),
              uVar5 = (uint)uVar10, uVar10 < 0x10)) && (uVar5 != 0)) {
            *(uint *)(*(long *)(param_1 + 0xb20) + 0x161c) =
                 *(uint *)(*(long *)(param_1 + 0xb20) + 0x161c) | 1 << (ulong)(uVar5 & 0x1f);
            puVar12 = (uint *)(*(long *)(param_1 + 0xb20) + 0x1400);
            puVar13 = puVar12 + (ulong)uVar5 * 2;
            if (0xf < uVar5) {
              puVar13 = puVar12;
            }
            if ((short)*puVar13 != -2) {
              uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar11 = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar11 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar11;
              if (0x1d < (uint)((ulong)uVar11 * 100 >> 0x20)) goto LAB_0169f378;
            }
            puVar13 = puVar12 + (ulong)uVar5 * 2;
            if (0xf < uVar5) {
              puVar13 = puVar12;
            }
            *puVar13 = local_a8;
            puVar13[1] = local_a4;
          }
        }
      }
    }
LAB_0169f378:
    local_90 = (undefined *)CONCAT44(local_a4,local_a8);
    lVar18 = (**(code **)(*(long *)(*(long *)(param_1 + 0xb20) + 0x778) + 0x20))
                       (*(long *)(param_1 + 0xb20) + 0x778);
    uVar5 = FUN_0277d6c4(&local_90);
    if ((((0x752 < (uVar5 >> 3 & 0x1fff)) ||
         ((*(uint *)(lVar18 + (ulong)((uVar5 & 0xffff) >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) == 0
         )) && (local_a0 != (uint *)0x0)) &&
       ((uVar5 = *local_a0, uVar5 != 0 && (local_a0 != (uint *)(ulong)uVar5)))) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      if ((*puVar12 != 0) && ((uVar5 = puVar12[1], uVar5 != 0 && ((ulong)(ushort)puVar12[2] != 0))))
      {
        lVar18 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar18 != 0) {
          uVar11 = 0;
          if ((ulong)uVar5 != 0) {
            uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
          }
          if (*puVar12 <= uVar11) {
            uVar11 = 0xffffffff;
          }
          if (((uVar11 < *(uint *)PTR_DAT_04bc0098) &&
              (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0098 + 8) + (long)(int)uVar11 * 2),
              uVar5 = (uint)uVar10, uVar10 < 6)) && (uVar5 != 0)) {
            if (uVar5 == 1) {
              *(int *)(*(long *)(param_1 + 0xb18) + 0x40) =
                   *(int *)(*(long *)(param_1 + 0xb18) + 0x40) + 0x309;
              lVar18 = *(long *)(param_1 + 0xb18);
              if (*(short *)(lVar18 + 0x8c) != -2) {
                uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b74 = DAT_05582b78;
                uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
                DAT_05582b78 = DAT_05582b7c;
                DAT_05582b7c = uVar5;
                if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_0169f4f4;
              }
              *(uint *)(lVar18 + 0x8c) = local_a8;
              *(uint *)(lVar18 + 0x90) = local_a4;
              *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xd3) = uVar2;
            }
            else if ((*(ushort *)(param_1 + 0xb10) >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
              *(int *)(*(long *)(param_1 + 0xb18) + 0x44) =
                   *(int *)(*(long *)(param_1 + 0xb18) + 0x44) + 0x309;
            }
          }
        }
      }
    }
LAB_0169f4f4:
    lVar18 = *(long *)(param_1 + 0xb20);
    local_90 = (undefined *)CONCAT44(local_a4,local_a8);
    FUN_0277dedc(&local_90);
    plVar17 = (long *)(lVar18 + 8);
    lVar18 = (**(code **)(*plVar17 + 0x18))(plVar17);
    uVar5 = FUN_0277d6c4(&local_90);
    if ((uVar5 >> 3 & 0x1fff) < 0x753) {
      lVar19 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
      *(uint *)(lVar18 + lVar19) = *(uint *)(lVar18 + lVar19) | 1 << (ulong)(uVar5 & 0x1f);
    }
    lVar18 = *(long *)(param_1 + 0xb20);
    local_90 = (undefined *)CONCAT44(local_a4,local_a8);
    FUN_0277dedc(&local_90);
    lVar18 = (**(code **)(*(long *)(lVar18 + 0x778) + 0x18))(lVar18 + 0x778);
    uVar5 = FUN_0277d6c4(&local_90);
    if ((uVar5 >> 3 & 0x1fff) < 0x753) {
      lVar19 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
      *(uint *)(lVar18 + lVar19) = *(uint *)(lVar18 + lVar19) | 1 << (ulong)(uVar5 & 0x1f);
    }
  }
  if ((*param_5 != 1) && (*param_5 != 0)) {
    return;
  }
  uVar8 = FUN_01ae59b0(&local_b0);
  puVar12 = local_a0;
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  if ((uVar8 & 1) == 0) {
switchD_0169f754_default:
    if (local_a0 != (uint *)0x0) goto LAB_0169f840;
LAB_0169fb70:
    uVar10 = 0xbc;
  }
  else {
    if (local_a0 == (uint *)0x0) goto LAB_0169fb70;
    uVar5 = *local_a0;
    if (uVar5 != 0) {
      cVar16 = *PTR_DAT_04bbfe88;
LAB_0169f608:
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *puVar3 = 1;
        memset(__s,0xff,0x1ac);
        uVar5 = *puVar12;
LAB_0169f648:
        puVar13 = (uint *)(ulong)uVar5;
        if ((puVar13 != (uint *)0x0) && (puVar12 != puVar13)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar13)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar12 + (lVar18 - (long)puVar13);
          if (lVar18 != 0) {
            uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar13));
            *(undefined4 *)(__s + 0x180) = 0xfffffffe;
            if (uVar8 != 0) goto code_r0x0169f678;
          }
        }
        goto switchD_0169f754_default;
      }
      uVar11 = *(uint *)(__s + 0x180);
      if ((int)uVar11 < 0) {
        if (uVar11 == 0xffffffff) goto LAB_0169f648;
        goto switchD_0169f754_default;
      }
      if (((char *)((ulong)uVar11 + (long)puVar12) == (char *)0x0) ||
         (*(char *)((ulong)uVar11 + (long)puVar12) == '\0')) goto switchD_0169f754_default;
      local_64 = FUN_01ae98d0(&local_b0);
      local_70 = 0;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      local_80 = 0;
      local_98 = local_a8;
      uStack_94 = local_a4;
      puStack_78 = puStack_88;
      uVar8 = FUN_0277f02c(&local_98,&local_90);
      if ((uVar8 & 1) == 0) goto switchD_0169f754_default;
      switch(local_64) {
      case 0:
        local_70._0_4_ = local_70._4_4_ + *(int *)(param_3 + 0xc);
        iVar6 = *(int *)(param_4 + 0x24);
        break;
      case 1:
        iVar6 = *(int *)(param_4 + 0x20);
        local_70._0_4_ = (int)local_70 + *(int *)(param_3 + 8);
        break;
      case 2:
        local_80._0_4_ = local_80._4_4_ + *(int *)(param_3 + 0xc);
        iVar6 = *(int *)(param_4 + 0x14);
        goto LAB_0169f78c;
      case 3:
        iVar6 = *(int *)(param_4 + 0x10);
        local_80._0_4_ = (int)local_80 + *(int *)(param_3 + 8);
LAB_0169f78c:
        if ((int)local_80 <= iVar6) goto LAB_0169f794;
      default:
        goto switchD_0169f754_default;
      }
      if ((int)local_70 < iVar6) goto switchD_0169f754_default;
LAB_0169f794:
      *(int *)(*(long *)(param_1 + 0xb18) + 0x50) =
           *(int *)(*(long *)(param_1 + 0xb18) + 0x50) + -300;
      lVar18 = *(long *)(param_1 + 0xb18);
      if ((((*(uint *)(lVar18 + 0x140) >> 0xd & 1) == 0) && (*(char *)(lVar18 + 0x121) != -1)) &&
         (*(char *)(lVar18 + 0x121) != param_6)) {
        *(uint *)(lVar18 + 0x140) = *(uint *)(lVar18 + 0x140) | 0x2000;
        lVar18 = *(long *)(param_1 + 0xb18);
      }
      if (*(short *)(lVar18 + 0x100) != -2) {
        uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar5;
        if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto switchD_0169f754_default;
      }
      *(uint *)(lVar18 + 0x100) = local_a8;
      *(uint *)(lVar18 + 0x104) = local_a4;
      *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x121) = uVar2;
      goto switchD_0169f754_default;
    }
LAB_0169f840:
    uVar5 = *local_a0;
    uVar10 = 0;
    if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar18 != 0) {
            uVar11 = 0;
            if ((ulong)uVar5 != 0) {
              uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
               uVar10 < 0xbd)) goto LAB_0169f8cc;
          }
        }
        uVar10 = 0;
      }
    }
LAB_0169f8cc:
    if (uVar10 == 0x5a) goto LAB_0169fbfc;
    uVar10 = 0;
    uVar5 = *local_a0;
    if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar18 != 0) {
            uVar11 = 0;
            if ((ulong)uVar5 != 0) {
              uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
               uVar10 < 0xbd)) goto LAB_0169f974;
          }
        }
        uVar10 = 0;
      }
    }
LAB_0169f974:
    if (uVar10 == 99) goto LAB_0169fbfc;
    uVar10 = 0;
    uVar5 = *local_a0;
    if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar18 != 0) {
            uVar11 = 0;
            if ((ulong)uVar5 != 0) {
              uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
               uVar10 < 0xbd)) goto LAB_0169fa1c;
          }
        }
        uVar10 = 0;
      }
    }
LAB_0169fa1c:
    if (uVar10 == 0x90) goto LAB_0169fbfc;
    uVar10 = 0;
    uVar5 = *local_a0;
    if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar18 != 0) {
            uVar11 = 0;
            if ((ulong)uVar5 != 0) {
              uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
               uVar10 < 0xbd)) goto LAB_0169fac4;
          }
        }
        uVar10 = 0;
      }
    }
LAB_0169fac4:
    if (uVar10 == 0x93) goto LAB_0169fbfc;
    uVar10 = 0;
    uVar5 = *local_a0;
    if ((uVar5 != 0) && (local_a0 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)local_a0 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar12 + lVar18 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar18 != 0) {
            uVar11 = 0;
            if ((ulong)uVar5 != 0) {
              uVar11 = (uint)((ulong)((long)local_a0 - lVar18) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
               uVar10 < 0xbd)) goto LAB_0169fbe8;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0169fbe8:
  if (uVar10 != 0x8b) {
    return;
  }
LAB_0169fbfc:
  *(int *)(*(long *)(param_1 + 0xb18) + 0x50) = *(int *)(*(long *)(param_1 + 0xb18) + 0x50) + -500;
  lVar18 = *(long *)(param_1 + 0xb18);
  if ((((*(uint *)(lVar18 + 0x140) >> 0xc & 1) == 0) && (*(char *)(lVar18 + 0x120) != -1)) &&
     (*(char *)(lVar18 + 0x120) != param_6)) {
    *(uint *)(lVar18 + 0x140) = *(uint *)(lVar18 + 0x140) | 0x1000;
    lVar18 = *(long *)(param_1 + 0xb18);
  }
  uVar4 = DAT_05582b78;
  uVar11 = DAT_05582b74;
  uVar5 = DAT_05582b7c;
  if (*(short *)(lVar18 + 0xf8) != -2) {
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) {
      DAT_05582b70 = uVar11;
      DAT_05582b74 = uVar4;
      DAT_05582b7c = uVar5;
      return;
    }
  }
  DAT_05582b7c = uVar5;
  *(uint *)(lVar18 + 0xf8) = local_a8;
  *(uint *)(lVar18 + 0xfc) = local_a4;
  *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x120) = uVar2;
  return;
code_r0x0169f678:
  piVar15 = (int *)(lVar18 + 4);
  while (piVar15[-1] != 0x3cda3274) {
    piVar15 = piVar15 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto switchD_0169f754_default;
  }
  iVar6 = 0;
  if (*piVar15 != -1) {
    iVar6 = *piVar15;
  }
  *(int *)(__s + 0x180) = iVar6;
  uVar5 = *puVar12;
  if (uVar5 == 0) goto switchD_0169f754_default;
  goto LAB_0169f608;
}

