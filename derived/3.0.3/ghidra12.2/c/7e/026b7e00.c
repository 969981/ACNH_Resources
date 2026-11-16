
void FUN_026b7e00(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined2 uVar12;
  byte bVar13;
  byte bVar14;
  undefined4 uVar15;
  char cVar16;
  ushort uVar17;
  uint *puVar18;
  int *piVar19;
  undefined8 uVar20;
  byte *pbVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  byte local_96;
  byte local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  uint local_64;
  
  local_6d = 0;
  local_78 = 8;
  local_74[0] = 0;
  local_80 = local_74;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_88,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  uVar20 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar8 = FUN_006bd550(local_80,0);
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar8);
  puVar10 = (uint *)FUN_0079e770(uVar20,&local_c8);
  puVar7 = PTR_DAT_04bb43c0;
  if (puVar10 == (uint *)0x0) {
    return;
  }
  local_90 = *(undefined4 *)(param_1 + 0x125ec);
  uStack_8c = *(undefined4 *)(param_1 + 0x125f0);
  local_98 = *(undefined2 *)(param_1 + 0x12644);
  local_96 = param_1[0x12646];
  local_95 = param_1[0x12647];
  uVar4 = *(undefined4 *)(param_1 + 0x12644);
  local_a0 = *(undefined4 *)(param_1 + 0x13214);
  uStack_9c = *(undefined4 *)(param_1 + 0x13218);
  uVar8 = *(undefined4 *)(param_1 + 0x12648);
  local_a8 = *(undefined4 *)(param_1 + 0x1321c);
  uStack_a4 = *(undefined4 *)(param_1 + 0x13220);
  local_b0 = *(undefined4 *)(param_1 + 0x13224);
  uStack_ac = *(undefined4 *)(param_1 + 0x13228);
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  local_94 = uVar8;
  uVar9 = FUN_0277d6c4(&local_90);
  lVar22 = *(long *)puVar7;
  if (lVar22 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_b8 = (uint *)0x0;
      local_c8 = PTR_DAT_04bc0510 + 0x10;
      local_c0 = local_90;
      local_bc = uStack_8c;
      uVar9 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar7 == 0) {
LAB_026b800c:
        puVar23 = (uint *)0x0;
      }
      else {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b800c;
        lVar22 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_90);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if (*(uint *)(lVar22 + 0x1d8) <= uVar9) goto LAB_026b800c;
        puVar23 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8);
        if (puVar23 != (uint *)0x0) {
          local_b8 = puVar23;
        }
      }
      puVar6 = PTR_DAT_04bb40b8;
      puVar5 = PTR_DAT_04bb40b0;
      if (*puVar10 != 0) {
        cVar16 = *PTR_DAT_04bb40b0;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar9 = *(uint *)(puVar6 + 0x50);
            if (-1 < (int)uVar9) {
              if ((ushort *)((ulong)uVar9 + (long)puVar10) != (ushort *)0x0) {
                uVar17 = *(ushort *)((ulong)uVar9 + (long)puVar10);
                goto LAB_026b811c;
              }
              break;
            }
            if (uVar9 != 0xffffffff) break;
          }
          puVar18 = (uint *)(ulong)*puVar10;
          uVar17 = 0xfffe;
          if ((*puVar10 == 0) || (puVar10 == puVar18)) goto LAB_026b811c;
          lVar22 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar10 + (lVar22 - (long)puVar18);
          if (lVar22 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
          *(undefined4 *)(puVar6 + 0x50) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar19 = (int *)(lVar22 + 4);
          while (piVar19[-1] != -0x78f0e1d7) {
            piVar19 = piVar19 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_026b8118;
          }
          iVar2 = 0;
          if (*piVar19 != -1) {
            iVar2 = *piVar19;
          }
          *(int *)(puVar6 + 0x50) = iVar2;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_026b8118:
      uVar17 = 0xfffe;
LAB_026b811c:
      local_d0 = (uint)uVar17;
      local_cc = 0;
      FUN_0277d4ac(&local_d0);
      uVar11 = FUN_0277d7b4(&local_d0,&local_90);
      if ((uVar11 & 1) == 0) {
        FUN_0268e6d0(param_1,&local_d0,0,7,0,0,1,1);
        uVar12 = (undefined2)local_d0;
        bVar13 = local_d0._2_1_;
        bVar14 = local_d0._3_1_;
        uVar15 = local_cc;
      }
      else {
        local_d8 = 0x15fa;
        FUN_0277d4ac(&local_d8);
        FUN_0268e6d0(param_1,&local_d8,0,7,0,0,1,1);
        uVar12 = (undefined2)local_d8;
        bVar13 = local_d8._2_1_;
        bVar14 = local_d8._3_1_;
        uVar15 = local_d8._4_4_;
      }
      *(undefined2 *)(param_1 + 0x13214) = uVar12;
      param_1[0x13216] = bVar13;
      param_1[0x13217] = bVar14;
      *(undefined4 *)(param_1 + 0x13218) = uVar15;
      local_d8 = CONCAT44(local_d8._4_4_,0xac);
      if (puVar23 == (uint *)0x0) {
        local_64 = 0xbc;
      }
      else {
        uVar9 = *puVar23;
        local_64 = 0;
        if ((uVar9 != 0) && (puVar23 != (uint *)(ulong)uVar9)) {
          puVar10 = (uint *)((long)puVar23 - (long)(ulong)uVar9);
          local_64 = 0;
          if (*puVar10 != 0) {
            uVar9 = puVar10[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar22 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar10 + lVar22 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar22 != 0) {
                uVar3 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar23 - lVar22) / (ulong)uVar9);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_64 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   local_64 < 0xbd)) goto LAB_026b826c;
              }
            }
            local_64 = 0;
          }
        }
      }
LAB_026b826c:
      if (local_64 == 0xac) {
        FUN_027c1eb0(param_1 + 0x128a8);
      }
    }
  }
  puVar5 = PTR_DAT_04bb37e0;
  FUN_026934e8(param_1,PTR_DAT_04bb37e0,0,0,0,0,1,1);
  lVar24 = *(long *)puVar7;
  uVar9 = FUN_0277d6c4(&local_a8);
  lVar22 = *(long *)puVar7;
  if (lVar22 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      *(undefined2 *)(param_1 + 0x1321c) = *(undefined2 *)puVar5;
      param_1[0x1321e] = puVar5[2];
      param_1[0x1321f] = puVar5[3];
      *(undefined4 *)(param_1 + 0x13220) = *(undefined4 *)(puVar5 + 4);
    }
  }
  uVar9 = FUN_0277d6c4(&local_98);
  lVar24 = *(long *)puVar7;
  if (lVar24 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_c8 = PTR_DAT_04bc0510 + 0x10;
      local_b8 = (uint *)0x0;
      local_c0 = uVar4;
      local_bc = uVar8;
      uVar9 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar7 == 0) {
LAB_026b8498:
        uVar9 = 0xbc;
      }
      else {
        lVar22 = *(long *)(lVar24 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8498;
        lVar22 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_98);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
           (puVar10 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar10 == (uint *)0x0)) goto LAB_026b8498;
        uVar9 = 0;
        uVar3 = *puVar10;
        local_b8 = puVar10;
        if ((uVar3 != 0) && (puVar10 != (uint *)(ulong)uVar3)) {
          puVar23 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
          uVar9 = 0;
          if (*puVar23 != 0) {
            uVar9 = puVar23[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
              lVar22 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar23 + lVar22 + (ulong)(ushort)puVar23[2] * 8;
              if (lVar22 != 0) {
                uVar3 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar10 - lVar22) / (ulong)uVar9);
                }
                if (*puVar23 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar9 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   uVar9 < 0xbd)) goto LAB_026b84a4;
              }
            }
            uVar9 = 0;
          }
        }
      }
LAB_026b84a4:
      local_d0 = 0xac;
      local_d8 = CONCAT44(local_d8._4_4_,uVar9);
      if (uVar9 == 0xac) {
        FUN_027c1eb0(param_1 + 0x128a8);
      }
    }
  }
  puVar5 = PTR_DAT_04bb37e0;
  FUN_0269296c(param_1,PTR_DAT_04bb37e0,0,0,0,0,1,1);
  lVar22 = *(long *)puVar7;
  uVar9 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar7 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      *(undefined2 *)(param_1 + 0x13224) = *(undefined2 *)puVar5;
      param_1[0x13226] = puVar5[2];
      param_1[0x13227] = puVar5[3];
      *(undefined4 *)(param_1 + 0x13228) = *(undefined4 *)(puVar5 + 4);
    }
  }
  lVar22 = 0;
  do {
    pbVar1 = param_1 + lVar22 + 0x1096c;
    lVar24 = *(long *)puVar7;
    pbVar21 = pbVar1 + -0x20;
    local_c8 = *(undefined **)pbVar21;
    uVar9 = FUN_0277d6c4(&local_c8);
    if (*(long *)puVar7 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if (((uVar9 < *(uint *)(lVar24 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
         ((uVar11 = FUN_0277d7b4(&local_c8,&local_a0), (uVar11 & 1) != 0 ||
          ((uVar11 = FUN_0277d7b4(&local_c8,&local_a8), (uVar11 & 1) != 0 ||
           (uVar11 = FUN_0277d7b4(&local_c8,&local_b0), (uVar11 & 1) != 0)))))) {
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[-8] = 0;
        pbVar1[-7] = 0;
        pbVar1[-6] = 0;
        pbVar1[-5] = 0;
        pbVar1[-4] = 0;
        pbVar1[-3] = 0;
        pbVar1[-2] = 0;
        pbVar1[-1] = 0;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar21[0] = 0xfe;
        pbVar21[1] = 0xff;
        pbVar1[-0x1e] = 0;
        pbVar1[-0x1d] = 0;
        pbVar1[-0x1c] = 0;
        pbVar1[-0x1b] = 0;
        pbVar1[-0x1a] = 0;
        pbVar1[-0x19] = 0;
        pbVar1[-0x18] = 0;
        pbVar1[-0x17] = 0;
        pbVar1[-0x16] = 0;
        pbVar1[-0x15] = 0;
        pbVar1[-0x14] = 0;
        pbVar1[-0x13] = 0;
        pbVar1[-0x12] = 0;
        pbVar1[-0x11] = 0;
        pbVar1[-0x10] = 0;
        pbVar1[-0xf] = 0;
        pbVar1[-0xe] = 0;
        pbVar1[-0xd] = 0;
        pbVar1[-0xc] = 0;
        pbVar1[-0xb] = 0;
        pbVar1[-10] = 0;
        pbVar1[-9] = 0;
        FUN_0277d4ac(pbVar21);
        pbVar1[-0x10] = 0;
        pbVar1[-0xf] = 0;
        pbVar1[-0xe] = 0;
        pbVar1[-0xd] = 0;
        pbVar1[-0xc] = 0;
        pbVar1[-0xb] = 0;
        pbVar1[-10] = 0;
        pbVar1[-9] = 0;
        pbVar1[-8] = 0;
        pbVar1[-7] = 0;
        pbVar1[-6] = 0;
        pbVar1[-5] = 0;
        pbVar1[-4] = 0;
        pbVar1[-3] = 0;
        pbVar1[-2] = 0;
        pbVar1[-1] = 0;
        pbVar1[-0x18] = 0;
        pbVar1[-0x17] = 0;
        pbVar1[-0x16] = 0;
        pbVar1[-0x15] = 0;
        pbVar1[-0x14] = 0;
        pbVar1[-0x13] = 0;
        pbVar1[-0x12] = 0;
        pbVar1[-0x11] = 0;
        pbVar21 = param_1 + lVar22 + 0x1096c;
        pbVar21[0] = 0;
        pbVar21[1] = 0;
        pbVar21[2] = 0;
        pbVar21[3] = 0;
        pbVar1[-4] = 0;
        pbVar1[-3] = 0;
        pbVar1[-2] = 0;
        pbVar1[-1] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[-0x14] = 0;
        pbVar1[-0x13] = 0;
        pbVar1[-0x12] = 0;
        pbVar1[-0x11] = 0;
        pbVar1[-0x10] = 0;
        pbVar1[-0xf] = 0;
        pbVar1[-0xe] = 0;
        pbVar1[-0xd] = 0;
        pbVar1[-0xc] = 0;
        pbVar1[-0xb] = 0;
        pbVar1[-10] = 0;
        pbVar1[-9] = 0;
        pbVar1[-8] = 0;
        pbVar1[-7] = 0;
        pbVar1[-6] = 0;
        pbVar1[-5] = 0;
      }
    }
    lVar22 = lVar22 + 0x2c;
  } while (lVar22 != 0x420);
  lVar24 = *(long *)puVar7;
  uVar9 = FUN_0277d6c4(param_1 + 0x1094c);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b869c:
    FUN_02691c50(param_1,0,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b869c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10978);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b86f4:
    FUN_02691c50(param_1,1,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b86f4;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x109a4);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b874c:
    FUN_02691c50(param_1,2,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b874c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x109d0);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b87a4:
    FUN_02691c50(param_1,3,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b87a4;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x109fc);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b87fc:
    FUN_02691c50(param_1,4,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b87fc;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10a28);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8854:
    FUN_02691c50(param_1,5,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8854;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10a54);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b88ac:
    FUN_02691c50(param_1,6,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b88ac;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10a80);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8904:
    FUN_02691c50(param_1,7,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8904;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10aac);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b895c:
    FUN_02691c50(param_1,8,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b895c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10ad8);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b89b4:
    FUN_02691c50(param_1,9,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b89b4;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10b04);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b8a0c:
    FUN_02691c50(param_1,10,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8a0c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10b30);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8a64:
    FUN_02691c50(param_1,0xb,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8a64;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10b5c);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b8abc:
    FUN_02691c50(param_1,0xc,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8abc;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10b88);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8b14:
    FUN_02691c50(param_1,0xd,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8b14;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10bb4);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b8b6c:
    FUN_02691c50(param_1,0xe,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8b6c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10be0);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8bc4:
    FUN_02691c50(param_1,0xf,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8bc4;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10c0c);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b8c1c:
    FUN_02691c50(param_1,0x10,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8c1c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10c38);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8c74:
    FUN_02691c50(param_1,0x11,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8c74;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10c64);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b8ccc:
    FUN_02691c50(param_1,0x12,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8ccc;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10c90);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8d24:
    FUN_02691c50(param_1,0x13,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8d24;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10cbc);
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
LAB_026b8d7c:
    FUN_02691c50(param_1,0x14,1);
    lVar22 = *(long *)puVar7;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8d7c;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10ce8);
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_026b8dd4:
    FUN_02691c50(param_1,0x15,1);
    lVar24 = *(long *)puVar7;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_026b8dd4;
  }
  uVar9 = FUN_0277d6c4(param_1 + 0x10d14);
  lVar22 = *(long *)puVar7;
  if (lVar22 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) goto LAB_026b8e40;
  }
  FUN_02691c50(param_1,0x16,1);
  lVar22 = *(long *)puVar7;
LAB_026b8e40:
  uVar9 = FUN_0277d6c4(param_1 + 0x10d40);
  if (*(long *)puVar7 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      return;
    }
  }
  FUN_02691c50(param_1,0x17,1);
  return;
}

