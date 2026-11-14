
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01703b50(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  byte bVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined *local_90;
  
  puVar6 = PTR_DAT_04bb43c0;
  iVar12 = (int)param_1[0x24e];
  if (iVar12 == 0) {
    if ((param_2 & 1) == 0) {
      return;
    }
    goto LAB_01704204;
  }
  fVar25 = 0.0;
  fVar22 = 0.0;
  plVar1 = param_1 + 0x23e;
  if ((param_2 & 1) != 0) {
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(plVar1);
    lVar20 = *(long *)puVar6;
    if (lVar20 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        local_100 = (uint *)0x0;
        uStack_108 = param_1[0x23e];
        local_110 = PTR_DAT_04bc0510 + 0x10;
        uVar11 = FUN_0277d6c4(&uStack_108);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar20 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            lVar19 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(plVar1);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
               (puVar16 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar16 != (uint *)0x0)) {
              local_100 = puVar16;
            }
          }
        }
        uVar14 = FUN_01af8a5c(&local_110);
        if ((uVar14 & 1) != 0) {
          if ((long *)param_1[0x293] != (long *)0x0) {
            fVar22 = (float)(**(code **)(*(long *)param_1[0x293] + 0x1c0))();
          }
          lVar19 = param_1[0x229];
          if (param_1[0x227] != 0) {
            lVar19 = param_1[0x227] + 0xc0;
          }
          if (lVar19 == 0) {
            (**(code **)(*param_1 + 0x1c8))(param_1);
          }
          else {
            *(undefined1 *)(lVar19 + 0x17b) = 0;
            *(undefined2 *)(lVar19 + 0x179) = 0;
            (**(code **)(*param_1 + 0x1c8))(param_1);
            *(undefined2 *)(lVar19 + 0x179) = 0x101;
            *(undefined1 *)(lVar19 + 0x17b) = 1;
          }
          lVar19 = param_1[0x23e];
          local_98 = (undefined *)param_1[0x23e];
          lVar21 = *(long *)puVar6;
          uVar11 = FUN_0277d6c4(&local_98);
          lVar20 = *(long *)puVar6;
          if (lVar20 != 0) {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              local_110 = PTR_DAT_04bc0510 + 0x10;
              local_100 = (uint *)0x0;
              uStack_108 = lVar19;
              uVar11 = FUN_0277d6c4(&uStack_108);
              if (*(long *)puVar6 == 0) {
LAB_01703eac:
                uVar14 = FUN_01ad673c(&local_110);
                if (((uVar14 & 1) == 0) && (uVar14 = FUN_01ad6698(&local_110), (uVar14 & 1) == 0))
                goto LAB_01703ed4;
              }
              else {
                lVar19 = *(long *)(lVar20 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((*(uint *)(lVar19 + 0x1d8) <= uVar11) ||
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                goto LAB_01703eac;
                lVar19 = *(long *)PTR_DAT_04bc0428;
                uVar11 = FUN_0277d6c4(&local_98);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((*(uint *)(lVar19 + 0x1d8) <= uVar11) ||
                   (((puVar16 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8),
                     puVar16 == (uint *)0x0 || (uVar11 = *puVar16, local_100 = puVar16, uVar11 == 0)
                     ) || (puVar16 == (uint *)(ulong)uVar11)))) goto LAB_01703eac;
                puVar18 = (uint *)((long)puVar16 - (long)(ulong)uVar11);
                if (((*puVar18 == 0) || (uVar11 = puVar18[1], uVar11 == 0)) ||
                   ((ulong)(ushort)puVar18[2] == 0)) goto LAB_01703eac;
                lVar19 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar19 = 0x1c;
                }
                lVar19 = (long)puVar18 + lVar19 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar19 == 0) goto LAB_01703eac;
                uVar2 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar16 - lVar19) / (ulong)uVar11);
                }
                if (*puVar18 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 1))
                goto LAB_01703eac;
              }
              if (*(char *)((long)param_1 + 0x126c) != '\0') {
                fVar22 = 0.0;
              }
            }
          }
        }
      }
    }
LAB_01703ed4:
    iVar12 = (int)param_1[0x24e];
  }
  uVar7 = local_f0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  switch(iVar12) {
  case 1:
    uVar13 = *(undefined4 *)((long)param_1 + 0x128c);
    uStack_dc = (undefined4)param_1[0x245];
    local_100 = (uint *)CONCAT44(*(undefined4 *)((long)param_1 + 0x1204),uVar13);
    local_110 = (undefined *)param_1[0x23e];
    lVar19 = param_1[0x251];
    uStack_d0 = *(undefined8 *)((long)param_1 + 0x1234);
    local_d8 = *(undefined8 *)((long)param_1 + 0x122c);
    local_f8 = *(undefined8 *)((long)param_1 + 0x120c);
    uVar26 = *(undefined4 *)((long)param_1 + 0x1284);
    uStack_108 = *(undefined8 *)((long)param_1 + 0x1284);
    uStack_c0 = *(undefined8 *)((long)param_1 + 0x1244);
    local_c8 = *(undefined8 *)((long)param_1 + 0x123c);
    local_e0 = *(undefined4 *)((long)param_1 + 0x1224);
    bVar17 = *(byte *)((long)param_1 + 0x1209);
    local_a8 = (undefined4)param_1[0x24c];
    uStack_a4 = *(undefined4 *)((long)param_1 + 0x1264);
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_f0._0_5_ = CONCAT14(bVar17,*(undefined4 *)((long)param_1 + 0x1214));
    local_a0 = (undefined4)param_1[0x24d];
    local_f0._0_6_ = CONCAT15(*(undefined1 *)((long)param_1 + 0x1274),(undefined5)local_f0);
    uStack_b0 = *(undefined8 *)((long)param_1 + 0x1254);
    local_b8 = *(undefined8 *)((long)param_1 + 0x124c);
    local_f0._7_1_ = SUB81(uVar7,7);
    local_f0._0_7_ = CONCAT16(*(undefined1 *)((long)param_1 + 0x1219),(undefined6)local_f0);
    uStack_e8._0_5_ = CONCAT14((char)param_1[0x244],*(undefined4 *)((long)param_1 + 0x121c));
    local_9c = *(undefined1 *)((long)param_1 + 0x126c);
    FUN_0170de54(param_1,&local_110);
    *(undefined4 *)(param_1 + 0x24f) = uVar26;
    puVar10 = PTR_DAT_04bb37e0;
    *(int *)((long)param_1 + 0x127c) = (int)lVar19;
    uVar3 = puVar10[2];
    uVar5 = *(undefined2 *)puVar10;
    *(undefined4 *)(param_1 + 0x250) = uVar13;
    param_1[0x23f] = 0;
    *(undefined4 *)(param_1 + 0x242) = 0;
    *(undefined4 *)(param_1 + 0x24e) = 0;
    *(undefined8 *)((long)param_1 + 0x1284) = 0;
    *(undefined4 *)((long)param_1 + 0x128c) = 0;
    *(undefined1 *)((long)param_1 + 0x11f2) = uVar3;
    *(undefined2 *)(param_1 + 0x23e) = uVar5;
    *(undefined4 *)((long)param_1 + 0x121c) = 0x3f800000;
    param_1[0x240] = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + 0x1224) = 0x3f80000000000000;
    uVar9 = _UNK_04102888;
    puVar16 = _DAT_04102880;
    uVar8 = _UNK_041023d8;
    uVar7 = _DAT_041023d0;
    lVar19 = _UNK_04102208;
    puVar6 = _DAT_04102200;
    *(undefined *)((long)param_1 + 0x11f3) = puVar10[3];
    uVar13 = *(undefined4 *)(puVar10 + 4);
    *(undefined2 *)(param_1 + 0x241) = 0xff00;
    *(long *)((long)param_1 + 0x1234) = lVar19;
    *(undefined **)((long)param_1 + 0x122c) = puVar6;
    *(undefined2 *)(param_1 + 0x243) = 0;
    *(undefined8 *)((long)param_1 + 0x1244) = uVar9;
    *(uint **)((long)param_1 + 0x123c) = puVar16;
    *(undefined1 *)((long)param_1 + 0x1274) = 0;
    *(undefined4 *)((long)param_1 + 0x11f4) = uVar13;
    *(undefined8 *)((long)param_1 + 0x1254) = uVar8;
    *(undefined8 *)((long)param_1 + 0x124c) = uVar7;
    return;
  case 2:
    uVar14 = FUN_016ff8c0(param_1,8,&local_110);
    if ((uVar14 & 1) == 0) {
LAB_01704204:
      param_1[0x24f] = 0;
      *(undefined4 *)(param_1 + 0x250) = 0;
      return;
    }
    fVar27 = fVar22 + local_110._4_4_ + *(float *)((long)param_1 + 0x11fc);
    fVar25 = (float)local_110 + *(float *)(param_1 + 0x23f) + 0.0;
    fVar28 = (float)uStack_108 + *(float *)(param_1 + 0x240) + 0.0;
    cVar4 = *(char *)((long)param_1 + 0x12b5);
    goto joined_r0x01704290;
  case 3:
    uVar11 = *(uint *)(param_1 + 0x298);
    if ((0xfffeffff < uVar11) || (uVar2 = uVar11 & 0xffff, uVar2 == 0xffff)) {
      lVar19 = param_1[0x22a];
      if (lVar19 == 0) goto LAB_01704204;
      local_98 = PTR_DAT_04bb2020 + 0x10;
      local_90 = PTR_DAT_04bb2f90 + 0x31;
      if (*(int *)(lVar19 + 0x30) == 0) {
        uVar11 = 0xffffffff;
      }
      else {
        lVar21 = *(long *)(lVar19 + 0x38);
        lVar20 = 0;
        lVar19 = (long)*(int *)(lVar19 + 0x30) << 3;
        uVar11 = 0xffffffff;
        do {
          plVar15 = (long *)**(undefined8 **)(lVar21 + lVar20 * 8);
          iVar12 = (**(code **)(*plVar15 + 0x38))(plVar15,&local_98);
          if (iVar12 != -1) {
            uVar11 = (uint)lVar20 & 0xffff | iVar12 << 0x10;
            break;
          }
          lVar20 = lVar20 + 1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
      }
      uVar2 = uVar11 & 0xffff;
    }
    uStack_108 = _UNK_04102208;
    local_110 = _DAT_04102200;
    local_f8 = _UNK_04102888;
    local_100 = _DAT_04102880;
    uStack_e8 = _UNK_041023d8;
    local_f0 = _DAT_041023d0;
    if (uVar2 == 0xffff || 0xfffeffff < uVar11) goto LAB_01704204;
    plVar15 = (long *)**(undefined8 **)
                        (*(long *)(param_1[0x22a] + 0x38) +
                        (-(ulong)(uVar2 >> 0xf) & 0xfffffffffff80000 | (ulong)uVar2 << 3));
    (**(code **)(*plVar15 + 0x70))(plVar15,&local_110,(int)uVar11 >> 0x10);
    fVar22 = *(float *)(param_1 + 0x23f);
    fVar28 = *(float *)((long)param_1 + 0x11fc);
    fVar23 = *(float *)(param_1 + 0x240);
    fVar25 = local_110._4_4_ * fVar28 + fVar22 * (float)local_110 + fVar23 * (float)uStack_108 +
             uStack_108._4_4_;
    fVar27 = local_f8._4_4_ +
             fVar28 * local_100._4_4_ + fVar22 * (float)local_100 + fVar23 * (float)local_f8;
    fVar22 = fVar28 * local_f0._4_4_ + fVar22 * (float)local_f0 + fVar23 * (float)uStack_e8;
    fVar28 = uStack_e8._4_4_;
    break;
  case 4:
    uVar14 = FUN_016ff8c0(param_1,8,&local_110);
    if (((uVar14 & 1) == 0) || (uVar14 = FUN_016ff8c0(param_1,6,&local_98), (uVar14 & 1) == 0))
    goto LAB_01704204;
    fVar25 = ((float)local_110 + (float)local_98) * 0.5 + *(float *)(param_1 + 0x23f);
    fVar27 = (local_110._4_4_ + local_98._4_4_) * 0.5 + *(float *)((long)param_1 + 0x11fc);
    fVar22 = *(float *)(param_1 + 0x240);
    fVar28 = ((float)uStack_108 + local_90._0_4_) * 0.5;
    break;
  default:
    goto switchD_01703f00_default;
  }
  fVar28 = fVar28 + fVar22;
  cVar4 = *(char *)((long)param_1 + 0x12b5);
joined_r0x01704290:
  if (cVar4 == '\0') {
    *(float *)(param_1 + 0x252) = fVar25;
    *(float *)((long)param_1 + 0x1294) = fVar27;
    *(float *)(param_1 + 0x253) = fVar28;
    cVar4 = *(char *)((long)param_1 + 0x1274);
    plVar15 = (long *)PTR_DAT_04bb43c0;
  }
  else {
    uVar11 = (int)param_1[0x256] - (int)param_1[0x255];
    if (uVar11 != 0) {
      fVar22 = fVar25 - *(float *)(param_1 + 0x252);
      fVar23 = fVar27 - *(float *)((long)param_1 + 0x1294);
      fVar24 = fVar28 - *(float *)(param_1 + 0x253);
      if (((fVar22 != 0.0) || (fVar23 != 0.0)) || (fVar24 != 0.0)) {
        fVar28 = 1.0 / (float)uVar11;
        fVar25 = *(float *)(param_1 + 0x252) + fVar22 * fVar28;
        fVar27 = *(float *)((long)param_1 + 0x1294) + fVar23 * fVar28;
        fVar28 = *(float *)(param_1 + 0x253) + fVar24 * fVar28;
      }
    }
    *(float *)(param_1 + 0x252) = fVar25;
    *(float *)((long)param_1 + 0x1294) = fVar27;
    *(float *)(param_1 + 0x253) = fVar28;
    uVar13 = (**(code **)(param_1[0x254] + (ulong)*(byte *)((long)param_1 + 0x12b4) * 8))
                       (param_1 + 0x254);
    fVar28 = *(float *)(param_1 + 0x253);
    *(undefined4 *)(param_1 + 0x255) = uVar13;
    fVar27 = *(float *)((long)param_1 + 0x1294);
    fVar25 = *(float *)(param_1 + 0x252);
switchD_01703f00_default:
    cVar4 = *(char *)((long)param_1 + 0x1274);
    plVar15 = (long *)PTR_DAT_04bb43c0;
  }
  PTR_DAT_04bb43c0 = (undefined *)plVar15;
  if (cVar4 == '\0') {
    lVar20 = *plVar15;
    uVar11 = FUN_0277d6c4(plVar1);
    lVar19 = *plVar15;
    if (lVar19 == 0) goto LAB_01704334;
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar11) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_01704334;
    local_100 = (uint *)0x0;
    uStack_108 = param_1[0x23e];
    local_110 = PTR_DAT_04bc0510 + 0x10;
    uVar11 = FUN_0277d6c4(&uStack_108);
    if (*plVar15 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar11 = FUN_0277d6c4(plVar1);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
           (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8), lVar19 != 0)) {
          local_100 = (uint *)lVar19;
        }
      }
    }
    uVar14 = FUN_01af8a5c(&local_110);
    if (((param_2 & 1) != 0) && ((uVar14 & 1) != 0)) goto LAB_01704340;
  }
  else {
LAB_01704334:
    uVar14 = 0;
  }
  if ((param_2 >> 1 & 1) == 0) {
    return;
  }
  if ((uVar14 & 1) != 0) {
    return;
  }
LAB_01704340:
  uVar7 = local_f0;
  local_f8 = *(undefined8 *)((long)param_1 + 0x120c);
  uStack_108 = CONCAT44(fVar27,fVar25);
  uStack_dc = (undefined4)param_1[0x245];
  local_100 = (uint *)CONCAT44(*(undefined4 *)((long)param_1 + 0x1204),fVar28);
  bVar17 = *(byte *)((long)param_1 + 0x1209);
  uStack_d0 = *(undefined8 *)((long)param_1 + 0x1234);
  local_d8 = *(undefined8 *)((long)param_1 + 0x122c);
  local_110 = (undefined *)param_1[0x23e];
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_f0._0_5_ = CONCAT14(bVar17,*(undefined4 *)((long)param_1 + 0x1214));
  uStack_c0 = *(undefined8 *)((long)param_1 + 0x1244);
  local_c8 = *(undefined8 *)((long)param_1 + 0x123c);
  local_f0._0_6_ = CONCAT15(*(undefined1 *)((long)param_1 + 0x1274),(undefined5)local_f0);
  local_f0._7_1_ = SUB81(uVar7,7);
  local_f0._0_7_ = CONCAT16(*(undefined1 *)((long)param_1 + 0x1219),(undefined6)local_f0);
  local_e0 = *(undefined4 *)((long)param_1 + 0x1224);
  uStack_e8._0_5_ = CONCAT14((char)param_1[0x244],*(undefined4 *)((long)param_1 + 0x121c));
  local_9c = *(undefined1 *)((long)param_1 + 0x126c);
  local_a8 = (undefined4)param_1[0x24c];
  uStack_a4 = *(undefined4 *)((long)param_1 + 0x1264);
  local_a0 = (undefined4)param_1[0x24d];
  uStack_b0 = *(undefined8 *)((long)param_1 + 0x1254);
  local_b8 = *(undefined8 *)((long)param_1 + 0x124c);
  FUN_0170de54(param_1,&local_110);
  *(float *)(param_1 + 0x24f) = fVar25;
  *(float *)((long)param_1 + 0x127c) = fVar27;
  *(float *)(param_1 + 0x250) = fVar28;
  return;
}

