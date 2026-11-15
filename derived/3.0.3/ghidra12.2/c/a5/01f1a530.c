
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01f1a530(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong local_1ca8;
  undefined1 *puStack_1ca0;
  undefined8 *******local_1c98;
  undefined8 *******pppppppuStack_1c90;
  undefined8 *******local_1c88 [29];
  undefined8 *******local_1ba0 [29];
  undefined8 *******local_1ab8 [29];
  undefined8 *******local_19d0 [29];
  undefined8 *******local_18e8 [29];
  undefined8 *******local_1800 [29];
  undefined8 *******local_1718 [29];
  undefined8 *******local_1630 [29];
  undefined8 *******local_1548 [29];
  undefined8 *******local_1460 [29];
  undefined8 *******local_1378 [29];
  undefined8 *******local_1290 [29];
  undefined8 *******local_11a8 [29];
  undefined8 *******local_10c0 [29];
  undefined8 *******local_fd8 [29];
  undefined8 *******local_ef0 [29];
  undefined8 *******local_e08 [29];
  undefined8 *******local_d20 [29];
  undefined8 *******local_c38 [29];
  undefined8 *******local_b50 [29];
  undefined8 *******local_a68 [29];
  undefined8 *******local_980 [29];
  undefined8 *******local_898 [29];
  undefined8 ******local_7b0 [29];
  undefined8 *****local_6c8 [29];
  undefined8 ****local_5e0 [29];
  undefined8 ***local_4f8 [29];
  undefined8 **local_410 [29];
  undefined8 *local_328 [29];
  undefined8 local_240 [29];
  undefined1 auStack_158 [240];
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined1 local_44 [4];
  
  lVar10 = DAT_0534bef8;
  lVar8 = *(long *)(param_1 + 8);
  if (DAT_0534bef8 == 0 || *(long *)(lVar8 + 0x68) == 0) {
    return 0;
  }
  local_240[0] = 0;
  local_1c88[0] = local_1ba0;
  local_1ba0[0] = local_1ab8;
  local_1ab8[0] = local_19d0;
  local_1c98 = local_1c88;
  local_18e8[0] = local_1800;
  local_19d0[0] = local_18e8;
  local_1800[0] = local_1718;
  local_1718[0] = local_1630;
  local_1630[0] = local_1548;
  local_1548[0] = local_1460;
  local_1460[0] = local_1378;
  local_1378[0] = local_1290;
  local_1290[0] = local_11a8;
  local_11a8[0] = local_10c0;
  local_10c0[0] = local_fd8;
  local_fd8[0] = local_ef0;
  local_ef0[0] = local_e08;
  local_e08[0] = local_d20;
  local_d20[0] = local_c38;
  local_c38[0] = local_b50;
  local_1ca8 = 0;
  puStack_1ca0 = (undefined1 *)0x0;
  local_b50[0] = local_a68;
  local_a68[0] = local_980;
  local_980[0] = local_898;
  local_898[0] = local_7b0;
  local_7b0[0] = local_6c8;
  local_6c8[0] = local_5e0;
  local_5e0[0] = local_4f8;
  local_4f8[0] = local_410;
  local_410[0] = local_328;
  local_328[0] = local_240;
  if (auStack_158 != (undefined1 *)0x0) {
    local_1ca8 = 0x1e00000000;
    puStack_1ca0 = auStack_158;
  }
  lVar9 = *(long *)PTR_DAT_04bb2720;
  pppppppuStack_1c90 = local_1c98;
  if (lVar9 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
      lVar8 = *(long *)(param_1 + 8);
    }
  }
  local_4d = 0;
  local_58 = 8;
  uVar2 = *(undefined4 *)(puVar14 + 7);
  local_54[0] = 0;
  puStack_60 = local_54;
  local_68 = PTR_DAT_04bb3768 + 0x10;
  uVar6 = FUN_021d62e0(&local_68,*(undefined4 *)(lVar8 + 0x50c));
  if ((uVar6 & 1) == 0) {
    local_44[2] = DAT_053e6f44._2_1_;
    local_44._0_2_ = (undefined2)DAT_053e6f44;
  }
  else {
    local_44._0_3_ = 0x80023;
    FUN_020fd3a0(local_44,&local_68);
  }
  if (((uint3)local_44._0_3_ & 0xff) < 0x23) {
    uVar6 = (ulong)(uint)(uint3)local_44._0_3_ & 0xff;
    if (((uint3)local_44._0_3_ >> 8 & 0xff) <= (uint)(byte)PTR_DAT_04bc27f0[uVar6]) {
      uVar7 = 0;
      if ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) & 1 << (ulong)((uint3)local_44._0_3_ >> 8 & 0x1f)
          ) != 0) {
        uVar7 = uVar6;
      }
      goto LAB_01f1a7f0;
    }
  }
  uVar7 = 0;
LAB_01f1a7f0:
  FUN_01c23f70(lVar10,&local_1ca8,uVar2,uVar7,1,1);
  if ((int)(uint)local_1ca8 < 1) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xaf38);
    if ((uint)local_1ca8 == 1) {
      uVar11 = 0;
      uVar12 = 0;
    }
    else {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = 1 << (ulong)(uVar11 & 0x1f);
        if (uVar3 == uVar11 || 0x1d < uVar11) {
          uVar13 = 0;
        }
        uVar1 = uVar11 + 1;
        uVar11 = uVar11 + 2;
        uVar4 = 1 << (ulong)(uVar1 & 0x1f);
        if (uVar3 == uVar1 || 0x1d < uVar1) {
          uVar4 = 0;
        }
        uVar12 = uVar4 | uVar13 | uVar12;
      } while (uVar11 != ((uint)local_1ca8 & 0xfffffffe));
    }
    uVar13 = 1 << (ulong)(uVar11 & 0x1f);
    if (uVar3 == uVar11 || 0x1d < uVar11) {
      uVar13 = 0;
    }
    if ((local_1ca8 & 1) != 0) {
      uVar12 = uVar13 | uVar12;
    }
  }
  uVar3 = uVar12 - (uVar12 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  if (uVar3 == 0) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 8);
  uVar11 = *(uint *)(lVar10 + 0x288);
  *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
  uVar11 = uVar11 ^ uVar11 << 0xb;
  *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
  uVar13 = *(uint *)(lVar10 + 0x294);
  *(uint *)(lVar10 + 0x290) = uVar13;
  uVar13 = uVar11 >> 8 ^ uVar13 >> 0x13 ^ uVar11 ^ uVar13;
  *(uint *)(lVar10 + 0x294) = uVar13;
  uVar11 = 0xffffffff;
  if ((uVar12 != 0) && (uVar13 = (uint)((ulong)uVar13 * (ulong)uVar3 >> 0x20), uVar13 < uVar3)) {
    iVar5 = uVar13 + 2;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 2) {
        uVar12 = uVar12 - 1 & (uVar12 ^ 0xffffffff);
        uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        uVar11 = uVar12 + (uVar12 >> 0x10) & 0x3f;
        break;
      }
      uVar12 = uVar12 - 1 & uVar12;
    } while (uVar12 != 0);
  }
  *(uint *)(param_1 + 0xaf38) = uVar11;
  return 1;
}

