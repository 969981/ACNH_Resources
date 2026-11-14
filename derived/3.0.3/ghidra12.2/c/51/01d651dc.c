
void FUN_01d651dc(ulong param_1,byte *param_2,ushort *param_3,uint param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  ulong *puVar10;
  byte bVar11;
  ushort uVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  long *plVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  byte bStack_15f;
  ulong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [4];
  int local_d4;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  byte local_43;
  undefined1 local_42;
  
  puVar7 = PTR_DAT_04bb27d0;
  local_158 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  local_128 = 0;
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  local_148 = 0;
  if (param_4 < 2) {
    return;
  }
  puVar10 = (ulong *)(param_3 + 1);
  uVar4 = *param_3;
  uVar12 = uVar4 >> 8;
  switch(uVar12) {
  case 0:
  case 4:
    if (param_4 != 3) {
      return;
    }
    local_158 = (ulong)(byte)*puVar10;
    break;
  case 1:
  case 5:
    if (param_4 != 6) {
      return;
    }
    local_158 = (ulong)(uint)*puVar10;
    break;
  case 2:
    if (param_4 != 0x12) {
      return;
    }
    local_158 = *puVar10;
    local_150 = *(undefined8 *)(param_3 + 5);
    break;
  case 3:
    if (param_4 != 0x82) {
      return;
    }
    local_f8 = *(undefined8 *)(param_3 + 0x31);
    local_f0 = *(undefined8 *)(param_3 + 0x35);
    local_e8 = *(undefined8 *)(param_3 + 0x39);
    local_e0 = *(undefined8 *)(param_3 + 0x3d);
    local_118 = *(undefined8 *)(param_3 + 0x21);
    local_110 = *(undefined8 *)(param_3 + 0x25);
    local_108 = *(undefined8 *)(param_3 + 0x29);
    local_100 = *(undefined8 *)(param_3 + 0x2d);
    local_138 = *(undefined8 *)(param_3 + 0x11);
    local_130 = *(undefined8 *)(param_3 + 0x15);
    local_128 = *(undefined8 *)(param_3 + 0x19);
    local_120 = *(undefined8 *)(param_3 + 0x1d);
    local_158 = *puVar10;
    local_150 = *(undefined8 *)(param_3 + 5);
    local_148 = *(undefined8 *)(param_3 + 9);
    local_140 = *(undefined8 *)(param_3 + 0xd);
    break;
  default:
    if (uVar12 != 0xff) {
      return;
    }
  }
  bVar13 = *param_2;
  cVar5 = (char)uVar4;
  iVar6 = (int)cVar5;
  if ((char)bVar13 < '\0') {
    return;
  }
  plVar16 = *(long **)PTR_DAT_04bb27d0;
  lVar20 = *plVar16;
  uVar21 = plVar16[2];
  bVar11 = *(byte *)(lVar20 + 0x473);
  pbVar19 = PTR_DAT_04bc1220;
  if ((long)(char)bVar11 != 0xffffffffffffffff) {
    puVar2 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
    if (7 < bVar11) {
      puVar2 = (uint *)(lVar20 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pbVar19 = (byte *)(lVar20 + 0x472);
    }
  }
  bStack_15f = (byte)(uVar4 >> 8);
  if (*(int *)(uVar21 + 0x3e4) == 1) {
    uVar9 = uVar21;
    if (*(int *)(param_1 + 0x20) - 2U < 0x41) {
      switch(*(int *)(param_1 + 0x20)) {
      case 2:
        iVar18 = 0x4000000;
        break;
      case 3:
        iVar18 = 0x5000000;
        break;
      default:
        goto switchD_01d65384_caseD_4;
      case 0x1a:
        iVar18 = 0x1c000000;
        break;
      case 0x1b:
        iVar18 = 0x1d000000;
        break;
      case 0x29:
        if (iVar6 != 0x1c) {
          bVar8 = iVar6 == 0x2a;
          goto LAB_01d65450;
        }
        goto LAB_01d65458;
      case 0x2c:
        iVar18 = 0x2d000000;
        break;
      case 0x41:
        iVar18 = 0x43000000;
        break;
      case 0x42:
        iVar18 = 0x44000000;
      }
      bVar8 = (uint)uVar4 * 0x1000000 == iVar18;
LAB_01d65450:
      if (bVar8) {
LAB_01d65458:
        uVar9 = (ulong)bVar13;
        if (7 < bVar13) {
          uVar9 = 0;
        }
        *(undefined4 *)(param_1 + uVar9 * 4) = 1;
        uVar9 = plVar16[2];
      }
    }
switchD_01d65384_caseD_4:
    local_d4 = iVar6;
    if (iVar6 == 9) {
      if (*param_2 == *(byte *)(param_1 + 0x54)) {
LAB_01d65568:
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
    }
    else if (iVar6 == 1) {
      bVar13 = *param_2;
      if ((*(int *)(uVar9 + 0x380) == 0x11) && (bVar13 == *(byte *)(uVar9 + 0xaa4))) {
        *(undefined1 *)(param_1 + 0x58) = 1;
LAB_01d655b8:
        *(int *)(param_1 + 0x50) = (int)cVar5;
        if (uVar12 == 3) {
          *(byte *)(param_1 + 0x54) = (byte)local_e0;
        }
        else if (uVar12 == 2) {
          *(byte *)(param_1 + 0x54) = local_150._2_1_;
        }
        else if (uVar12 == 0) {
          *(byte *)(param_1 + 0x54) = (byte)local_158;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0xff;
        }
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = (undefined8 *)0x0;
        local_b0 = 0;
        local_c8 = (undefined8 *)0x0;
        local_c0 = (undefined8 *)0x0;
        local_d0 = (ulong *)CONCAT62(local_d0._2_6_,0xff08);
        local_44 = 4;
        local_48 = 0;
        local_42 = 0;
        local_43 = bVar13;
        if (-1 < DAT_0536e668) {
          uVar9 = FUN_01db1df0(*plVar16 + 0x480,DAT_0536e668,&local_48,&local_d0,2,0);
          bVar13 = *param_2;
        }
        if (bVar13 == *(byte *)(param_1 + 0x54)) {
          if (*(int *)(param_1 + 0x50) == 0) goto LAB_01d65568;
        }
      }
    }
    else if (iVar6 == 0) {
      local_d8[0] = 0;
      if (*(char *)(param_1 + 0x58) == '\0') {
        local_c8 = &local_150;
        local_c0 = &local_110;
        local_b8 = &local_148;
        local_b0 = CONCAT71(local_b0._1_7_,local_e0._1_1_);
        local_d0 = &local_158;
        uVar9 = FUN_01d4e1b0(uVar9,&local_d0,local_d8);
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x58) = 1;
          *(ulong *)(param_1 + 0x48) = local_158;
          uVar12 = (ushort)bStack_15f;
          goto LAB_01d655b8;
        }
      }
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      local_c8 = (undefined8 *)0x0;
      local_c0 = (undefined8 *)0x0;
      local_44 = 4;
      local_d0._0_3_ = CONCAT12(local_d8[0],0x407);
      local_43 = *param_2;
      local_48 = 0;
      local_42 = 0;
      if (-1 < DAT_0536e668) {
        uVar9 = FUN_01db1df0(**(long **)puVar7 + 0x480,DAT_0536e668,&local_48,&local_d0,3,0);
      }
    }
  }
  else {
    uVar9 = (ulong)local_d0 >> 0x20;
    local_d0 = (ulong *)((ulong)local_d0 & 0xffffffff00000000);
    bVar13 = *pbVar19;
    switch(*(undefined4 *)(param_1 + 0x40)) {
    case 0:
      if (iVar6 == 7) goto switchD_01d6540c_caseD_1b;
      if (iVar6 == 6) goto switchD_01d6540c_caseD_1e;
      break;
    case 1:
      if ((uVar4 & 0xff) == 8) {
switchD_01d6540c_caseD_1e:
        uVar15 = 1;
        goto LAB_01d65650;
      }
      break;
    case 4:
      if (iVar6 == 3) goto switchD_01d6540c_caseD_1b;
      if (iVar6 == 9) goto switchD_01d6540c_caseD_1e;
      break;
    case 0x17:
    case 0x26:
      if ((iVar6 == 0x2b) || (iVar6 == 0x1e)) goto switchD_01d6540c_caseD_1e;
      break;
    case 0x18:
    case 0x27:
      if ((iVar6 == 0x2b) || (iVar6 == 0x1e)) goto switchD_01d6540c_caseD_1b;
      if (iVar6 == 0x19) goto switchD_01d6540c_caseD_1e;
      break;
    case 0x1c:
    case 0x2a:
      switch(iVar6) {
      case 0x1b:
      case 0x2c:
        goto switchD_01d6540c_caseD_1b;
      case 0x1e:
      case 0x2b:
        goto switchD_01d6540c_caseD_1e;
      }
      break;
    case 0x3d:
      if (iVar6 == 0x3f) goto switchD_01d6540c_caseD_1b;
LAB_01d6563c:
      if (iVar6 == 0x45) goto switchD_01d6540c_caseD_1e;
      break;
    case 0x3e:
      if (iVar6 == 0x45) goto switchD_01d6540c_caseD_1b;
      if (iVar6 == 0x40) goto switchD_01d6540c_caseD_1e;
      break;
    case 0x43:
      if (iVar6 != 0x42) goto LAB_01d6563c;
switchD_01d6540c_caseD_1b:
      uVar15 = 2;
LAB_01d65650:
      local_d0 = (ulong *)CONCAT44((int)uVar9,uVar15);
    }
    bVar11 = (byte)local_158;
    if ((int)local_d0 != 0) {
      *(int *)(param_1 + 0x44) = (int)local_d0;
      uVar17 = (uint)bVar11;
      if (uVar12 != 4) {
        uVar17 = 0;
      }
      *(int *)(param_1 + 0x30) = iVar6;
      *(uint *)(param_1 + 0x34) = uVar17;
      uVar15 = (undefined4)local_158;
      if (uVar12 != 1) {
        uVar15 = 0;
      }
      uVar1 = (undefined4)local_158;
      if (uVar12 != 5) {
        uVar1 = 0;
      }
      *(undefined4 *)(param_1 + 0x38) = uVar15;
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
    local_d0 = (ulong *)CONCAT44(local_d0._4_4_,iVar6);
    uVar14 = 1;
    switch(iVar6) {
    case 3:
    case 0x1b:
    case 0x2c:
    case 0x42:
      uVar14 = 0;
    case 2:
    case 0x1a:
    case 0x29:
    case 0x41:
      *(undefined1 *)(param_1 + 0x58) = uVar14;
      *(int *)(param_1 + 0x50) = iVar6;
      if (uVar12 == 3) {
        bVar11 = (byte)local_e0;
      }
      else if (uVar12 == 2) {
        bVar11 = local_150._2_1_;
      }
      else if (uVar12 == 0) {
      }
      else {
        bVar11 = 0xff;
      }
      *(byte *)(param_1 + 0x54) = bVar11;
      break;
    case 9:
    case 0x1e:
    case 0x2b:
    case 0x34:
    case 0x45:
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    uVar9 = param_1;
    if ((*param_2 == bVar13) && (iVar6 == *(int *)(param_1 + 0x60))) {
      *(undefined1 *)(param_1 + 100) = 1;
    }
  }
  switch(iVar6) {
  case 3:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x9c) = 0xff;
    uVar15 = 5;
    goto LAB_01d65a70;
  case 0x14:
    lVar20 = *(long *)(*(long *)puVar7 + 0x10);
    if (((*(int *)(lVar20 + 0x380) == 0x15) || (*(int *)(lVar20 + 0x380) == 0x13)) &&
       (*(int *)(lVar20 + 0x3d0) == 3)) {
      *(undefined4 *)(lVar20 + 0x3d0) = 0;
    }
    break;
  case 0x17:
    uVar21 = 0xffffffffffffffff;
    goto LAB_01d6593c;
  case 0x18:
  case 0x27:
    if ((*(int *)(uVar21 + 0x380) == 0x1b) || (*(int *)(uVar21 + 0x380) == 0x20)) break;
    FUN_01d66db0(param_1,param_2);
    uVar15 = 0x19;
    goto LAB_01d65a44;
  case 0x1a:
  case 0x1e:
  case 0x25:
  case 0x29:
  case 0x2b:
  case 0x33:
  case 0x34:
  case 0x41:
  case 0x45:
    *(int *)(param_1 + 0x98) = (int)cVar5;
    if (bStack_15f == 2) {
      *(byte *)(param_1 + 0x9c) = local_150._2_1_;
      break;
    }
    if (bStack_15f == 1) {
      *(undefined1 *)(param_1 + 0x9c) = 0xff;
      goto LAB_01d65834;
    }
    if (bStack_15f != 0) goto LAB_01d65870;
    goto LAB_01d65874;
  case 0x1b:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x9c) = 0xff;
    uVar15 = 0x1d;
    goto LAB_01d65a70;
  case 0x1c:
  case 0x2a:
  case 0x43:
    if (*param_2 < 8) {
      *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 1 << (ulong)(*param_2 & 0x1f);
    }
    break;
  case 0x24:
  case 0x38:
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
LAB_01d65870:
    local_158._0_1_ = 0xff;
LAB_01d65874:
    *(byte *)(param_1 + 0x9c) = (byte)local_158;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    break;
  case 0x26:
    uVar21 = local_158;
LAB_01d6593c:
    FUN_01d66cf0(param_1,param_2,uVar21);
    break;
  case 0x28:
    if ((*(int *)(param_1 + 0x98) == 0x29) || (*(int *)(param_1 + 0x98) == 0x1a)) {
      *(byte *)(param_1 + 0x72) = local_150._2_1_;
      lVar20 = *(long *)puVar7;
      *(ulong *)(param_1 + 0x68) = local_158;
      *(undefined2 *)(param_1 + 0x70) = (undefined2)local_150;
      FUN_01d50274(*(long *)(lVar20 + 0x10) + 0x958);
    }
    break;
  case 0x2c:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x9c) = 0xff;
    uVar15 = 0x2d;
    goto LAB_01d65a70;
  case 0x3a:
    if (bStack_15f != 1) break;
    *(undefined1 *)(param_1 + 0x9c) = 0xff;
    *(int *)(param_1 + 0x98) = (int)cVar5;
LAB_01d65834:
    *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_158;
    break;
  case 0x3b:
    lVar20 = *(long *)(*(long *)puVar7 + 0x10);
    if (*(int *)(lVar20 + 0x380) - 0x25U < 2) break;
    goto LAB_01d659c8;
  case 0x3c:
    lVar20 = *(long *)(*(long *)puVar7 + 0x10);
    if (*(int *)(lVar20 + 0x380) - 0x25U < 2) break;
    *(undefined8 *)(lVar20 + 1000) = 0x1e;
LAB_01d659c8:
    *(undefined4 *)(lVar20 + 0x3d0) = 2;
    break;
  case 0x3d:
    if (*param_2 < 8) {
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (ulong)(*param_2 & 0x1f);
    }
    break;
  case 0x3e:
    uVar21 = FUN_01d4e5d0(uVar21);
    if ((uVar21 & 1) == 0) break;
    if (*param_2 < 8) {
      *(uint *)(param_1 + 0xac) =
           *(uint *)(param_1 + 0xac) & (1 << (ulong)(*param_2 & 0x1f) ^ 0xffffffffU);
    }
    uVar15 = 0x40;
LAB_01d65a44:
    local_d0 = (ulong *)CONCAT44(local_d0._4_4_,uVar15);
    FUN_01d66ebc(&local_d0,param_2);
    break;
  case 0x42:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x9c) = 0xff;
    uVar15 = 0x44;
LAB_01d65a70:
    local_d0 = (ulong *)CONCAT44(local_d0._4_4_,uVar15);
    FUN_01d66c5c(uVar9,&local_d0);
  }
  piVar3 = (int *)(param_1 + 0x78) + ((long)(char)*param_2 & 0xffffffff);
  if (7 < *param_2) {
    piVar3 = (int *)(param_1 + 0x78);
  }
  *piVar3 = iVar6;
  return;
}

