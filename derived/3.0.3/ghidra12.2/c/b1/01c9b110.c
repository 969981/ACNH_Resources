
void FUN_01c9b110(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  long *plVar15;
  int iVar16;
  byte local_1e4;
  undefined1 local_1e0;
  undefined1 uStack_1df;
  undefined2 uStack_1de;
  undefined4 uStack_1dc;
  uint local_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined7 local_c0;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  undefined1 uStack_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  uint *puStack_90;
  undefined4 local_88;
  int local_7c;
  int iStack_78;
  undefined1 uStack_71;
  int local_70;
  uint local_6c [3];
  
  puVar3 = PTR_DAT_04bb21d0;
  local_6c[0] = 0;
  local_70 = 0;
  FUN_01c9ad64(&local_70,&uStack_71,*(undefined4 *)(*(long *)PTR_DAT_04bb21d0 + 0x78));
  lVar8 = *(long *)puVar3;
  if (**(char **)(lVar8 + 0x2070) == '\0') {
    if (*(char *)(lVar8 + 0xf78) != '\0') {
      local_70 = 2;
    }
  }
  else {
    local_70 = 3;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    iVar11 = 0;
    do {
      uVar7 = *(char *)(*(long *)(param_1 + 0x28) + (long)iVar11 * 0x38 + 0x2c) == '\0' | uVar7;
      iVar11 = iVar11 + 1;
    } while (*(int *)(param_1 + 0x20) != iVar11);
  }
  uVar4 = uVar7 | (uint)(local_70 == 0) << 1 | (uint)(0 < local_70) << 2 |
          (uint)*(byte *)(lVar8 + 0xf78) << 3;
  local_6c[0] = uVar4;
  if ((0 < local_70) && (local_6c[0] = uVar4 | 0x10, *(int *)(lVar8 + 0xc4) != 0)) {
    local_6c[0] = uVar4;
  }
  if ((local_70 < 1) || (*(int *)(lVar8 + 0xc4) != 1)) {
    local_6c[0] = local_6c[0] & 0xffffffdf;
  }
  else {
    local_6c[0] = local_6c[0] | 0x20;
  }
  FUN_01c80710(*(undefined8 *)PTR_DAT_04bc1038,local_6c);
  lVar8 = *(long *)puVar3;
  uVar4 = *(uint *)(lVar8 + 0x38);
  if (uVar4 == 1) {
    *(undefined1 *)(lVar8 + 0x51) = 0;
    lVar9 = *(long *)(*(long *)(lVar8 + 0x60) + (ulong)(1 < *(uint *)(lVar8 + 0x58)) * 0x40);
    if ((lVar9 == 0) || ((**(code **)(lVar9 + 8))(), *(char *)(lVar8 + 0x51) == '\0')) {
      *(int *)(lVar8 + 0x3c) = *(int *)(lVar8 + 0x3c) + 1;
    }
    lVar8 = *(long *)puVar3;
    uVar4 = *(uint *)(lVar8 + 0x38);
  }
  if (1 < uVar4) {
    return;
  }
  if (*(char *)(lVar8 + 0x2079) != '\0') {
    return;
  }
  iVar11 = *(int *)(param_1 + 0x20);
  local_7c = 0;
  iStack_78 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (iVar11 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    iVar16 = 0;
    do {
      local_1e0 = 0;
      uStack_1df = 0;
      uStack_1de = 0;
      puVar13 = (undefined4 *)(lVar8 + (long)iVar16 * 0x38);
      FUN_01c9aadc(&local_1e0,&local_e0,*puVar13,puVar13[10]);
      pcVar14 = (char *)(puVar13 + 0xb);
      iVar2 = local_70;
      if (*pcVar14 == '\0') {
        if (*(char *)(lVar8 + (long)iVar16 * 0x38 + 0x2f) != '\0') {
          *pcVar14 = '\x01';
          *(undefined1 *)(lVar8 + (long)iVar16 * 0x38 + 0x2d) = 0;
          goto LAB_01c9b344;
        }
        if (*(int *)(param_1 + 0x30) != -1) goto LAB_01c9b344;
        local_7c = CONCAT22(uStack_1de,CONCAT11(uStack_1df,local_1e0));
        *(int *)(param_1 + 0x30) = iVar16;
        local_1e4 = (local_e0 & 0xff) != 0;
        if ((local_e0 & 0xff) == 0) goto LAB_01c9b384;
joined_r0x01c9b3a4:
        if (iStack_78 < iVar2) {
          iStack_78 = iVar2;
        }
      }
      else {
LAB_01c9b344:
        if ((char)local_e0 != '\0') goto joined_r0x01c9b3a4;
LAB_01c9b384:
        if ((*pcVar14 != '\0') && (*(char *)(lVar8 + (long)iVar16 * 0x38 + 0x2d) != '\0')) {
          iVar2 = CONCAT22(uStack_1de,CONCAT11(uStack_1df,local_1e0));
          goto joined_r0x01c9b3a4;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar11 != iVar16);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  plVar15 = (long *)PTR_DAT_04bb21d0;
  if (uVar7 == 0) {
    plVar15 = &DAT_05358908;
    uStack_1df = *(int *)(DAT_05358908 + 0xc4) - 1U < 2;
    if (*(char *)(DAT_05358908 + 0xf78) == '\0') {
      if (local_70 == 1) {
        local_1e0 = 1;
      }
      else {
        local_1e0 = 0;
      }
    }
    else {
      local_1e0 = 2;
    }
    if (*(char *)(DAT_05352aa0 + 0x50) != '\0' || *(char *)(DAT_05352aa0 + 0x51) != '\0') {
      lVar8 = DAT_05352aa0 + 0x20;
      if (*(long *)(DAT_05352aa0 + 0x28) != lVar8) {
        lVar9 = (long)*(int *)(DAT_05352aa0 + 0x34);
        uVar7 = 0;
        puVar12 = (undefined8 *)(*(long *)(DAT_05352aa0 + 0x28) - lVar9);
        do {
          uVar4 = (**(code **)*puVar12)(puVar12,&local_1e0);
          if (uVar7 <= (uVar4 & 0xff)) {
            uVar7 = uVar4 & 0xff;
          }
          puVar12 = (undefined8 *)(*(long *)((long)puVar12 + lVar9 + 8) - lVar9);
        } while (puVar12 != (undefined8 *)(lVar8 - lVar9));
        if ((uVar7 == 1) || (uVar7 == 2)) {
          *(uint *)(param_1 + 0x18) = uVar7;
        }
      }
    }
    if (iStack_78 < *(int *)(param_1 + 0x18)) {
      iStack_78 = *(int *)(param_1 + 0x18);
    }
  }
  else if (((*(char *)(param_1 + 0x14) != '\0') &&
           (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != *(int *)(param_1 + 0x10))) &&
          (local_70 != 0)) {
    iStack_78 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  uVar5 = (**(code **)(**(long **)(DAT_05aec400 + 0x3d8) + 0x68))();
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar7 == 0xffffffff) {
    switch(local_70) {
    case 0:
      if (iStack_78 <= local_70) {
        return;
      }
LAB_01c9b5c4:
      lVar8 = *plVar15;
      uVar6 = 1;
      *(undefined4 *)(lVar8 + 0xc4) = *(undefined4 *)(param_1 + 0x10);
      *(undefined1 *)(lVar8 + 0xc0) = 1;
      *(undefined1 *)(param_1 + 0x14) = 0;
      break;
    case 1:
      if (local_70 <= iStack_78) {
        iVar16 = iStack_78;
        iVar11 = local_70;
        goto LAB_01c9b668;
      }
      lVar8 = *plVar15;
      uVar6 = 0;
      break;
    case 2:
      if (local_70 <= iStack_78) {
        return;
      }
      lVar8 = *plVar15;
      uVar6 = 1;
      break;
    case 3:
      iVar16 = local_70;
      iVar11 = iStack_78;
LAB_01c9b668:
      if (iVar16 <= iVar11) {
        return;
      }
LAB_01c9b670:
      lVar8 = *plVar15;
      uVar6 = 2;
      break;
    default:
      goto switchD_01c9b5b0_default;
    }
  }
  else {
    if (local_70 < local_7c) {
      if (local_70 == 1) goto LAB_01c9b670;
      if (local_70 == 0) goto LAB_01c9b5c4;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x20) <= uVar7) {
      uVar7 = 0;
    }
    if ((local_1e4 & 1) == 0) {
      if (local_7c != 3) {
        *(undefined2 *)(lVar9 + (long)(int)uVar7 * 0x38 + 0x2c) = 0x101;
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
        return;
      }
      lVar8 = *plVar15;
      uVar6 = *(undefined4 *)(lVar9 + (long)(int)uVar7 * 0x38);
    }
    else {
      puVar13 = (undefined4 *)(lVar9 + (long)(int)uVar7 * 0x38);
      switch(*puVar13) {
      case 8:
        *(byte *)(*plVar15 + 0x207d) = *(byte *)(lVar9 + (long)(int)uVar7 * 0x38 + 0x30) ^ 1;
        break;
      case 9:
        *(undefined1 *)(*plVar15 + 0x207d) = 0;
        break;
      case 10:
        if (**(int **)(param_1 + 0x58) == 0) {
LAB_01c9b988:
          *(undefined2 *)(lVar9 + (long)(int)uVar7 * 0x38 + 0x2c) = 1;
        }
        else {
          FUN_01c115fc(&local_1e0);
          local_e0 = 10;
          local_d8 = *(long *)(param_1 + 0x58) + 4;
          FUN_02906efc(&local_1e0,&local_e0);
          uStack_b8 = 0;
          local_98 = PTR_DAT_04bb2030 + 0x10;
          local_88 = 0x29;
          puStack_90 = &local_e0;
          uStack_a0 = (**(code **)(CONCAT44(uStack_1dc,
                                            CONCAT22(uStack_1de,CONCAT11(uStack_1df,local_1e0))) +
                                  0x18))(&local_1e0);
          local_a8 = PTR_DAT_04bb8610 + 0x10;
          FUN_01c9b9d0(&local_98,&local_a8);
          pbVar10 = *(byte **)(param_1 + 0x60);
          bStack_b7 = *pbVar10;
          if ((0xb < bStack_b7 - 1) ||
             ((byte)(&DAT_0417b531)[bStack_b7 - 1] <= (byte)(pbVar10[1] - 1))) {
            bStack_b7 = 1;
          }
          if ((0xb < *pbVar10 - 1) ||
             (bStack_b6 = pbVar10[1], (byte)(&DAT_0417b531)[*pbVar10 - 1] <= (byte)(bStack_b6 - 1)))
          {
            bStack_b6 = 1;
          }
          puVar12 = *(undefined8 **)(*plVar15 + 0x2090);
          *puVar12 = 0x2b;
          puVar12[0x1f] = 0;
          puVar12[0x20] = 0;
          puVar12[0x1d] = 0;
          puVar12[0x1e] = 0;
          puVar12[0x1b] = 0;
          puVar12[0x1c] = 0;
          puVar12[0x19] = 0;
          puVar12[0x1a] = 0;
          puVar12[0x17] = 0;
          puVar12[0x18] = 0;
          puVar12[0x15] = 0;
          puVar12[0x16] = 0;
          puVar12[0x13] = 0;
          puVar12[0x14] = 0;
          puVar12[0x11] = 0;
          puVar12[0x12] = 0;
          puVar12[0xf] = 0;
          puVar12[0x10] = 0;
          puVar12[0xd] = 0;
          puVar12[0xe] = 0;
          puVar12[5] = CONCAT17(uStack_b9,local_c0);
          puVar12[6] = 0;
          *(uint *)((long)puVar12 + 0x2f) =
               CONCAT13(bStack_b6,CONCAT12(bStack_b7,CONCAT11(uStack_b8,uStack_b9)));
          puVar12[0xb] = 0;
          puVar12[0xc] = 0;
          puVar12[9] = 0;
          puVar12[10] = 0;
          puVar12[7] = 0;
          puVar12[8] = 0;
          puVar12[3] = local_d0;
          puVar12[4] = local_c8;
          puVar12[1] = CONCAT44(uStack_dc,local_e0);
          puVar12[2] = local_d8;
          puVar12 = *(undefined8 **)(param_1 + 0x58);
          *(undefined4 *)(puVar12 + 3) = 0;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
        }
        break;
      case 0xb:
        if (**(int **)(param_1 + 0x68) == 0) goto LAB_01c9b988;
        FUN_01c1380c(&local_1e0);
        local_e0 = 10;
        local_d8 = *(long *)(param_1 + 0x68) + 4;
        FUN_02906efc(&local_1e0,&local_e0);
        uStack_b8 = 0;
        local_98 = PTR_DAT_04bb2030 + 0x10;
        local_88 = 0x29;
        puStack_90 = &local_e0;
        uStack_a0 = (**(code **)(CONCAT44(uStack_1dc,
                                          CONCAT22(uStack_1de,CONCAT11(uStack_1df,local_1e0))) +
                                0x18))(&local_1e0);
        local_a8 = PTR_DAT_04bb8610 + 0x10;
        FUN_01c9b9d0(&local_98,&local_a8);
        bVar1 = *(byte *)(*(undefined4 **)(param_1 + 0x68) + 6);
        uVar7 = 2;
        if (bVar1 < 4) {
          uVar7 = (uint)bVar1;
        }
        local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar7);
        bStack_b7 = (byte)uVar7;
        local_b4 = **(undefined4 **)(param_1 + 0x68);
        local_b0._0_2_ =
             CONCAT11((char)*(undefined4 *)(param_1 + 0x74),(char)*(undefined4 *)(param_1 + 0x70));
        puVar12 = *(undefined8 **)(*plVar15 + 0x2090);
        *puVar12 = 0x34;
        puVar12[7] = 0;
        puVar12[8] = 0;
        *(undefined4 *)(puVar12 + 7) = local_b0;
        puVar12[5] = CONCAT17(uStack_b9,local_c0);
        puVar12[6] = CONCAT44(local_b4,CONCAT13(uStack_b5,
                                                CONCAT12(bStack_b6,CONCAT11(bStack_b7,uStack_b8))));
        puVar12[0x1f] = 0;
        puVar12[0x20] = 0;
        puVar12[0x1d] = 0;
        puVar12[0x1e] = 0;
        puVar12[0x1b] = 0;
        puVar12[0x1c] = 0;
        puVar12[0x19] = 0;
        puVar12[0x1a] = 0;
        puVar12[0x17] = 0;
        puVar12[0x18] = 0;
        puVar12[0x15] = 0;
        puVar12[0x16] = 0;
        puVar12[0x13] = 0;
        puVar12[0x14] = 0;
        puVar12[0x11] = 0;
        puVar12[0x12] = 0;
        puVar12[0xf] = 0;
        puVar12[0x10] = 0;
        puVar12[0xd] = 0;
        puVar12[0xe] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[3] = local_d0;
        puVar12[4] = local_c8;
        puVar12[1] = CONCAT44(uStack_dc,local_e0);
        puVar12[2] = local_d8;
        puVar12 = *(undefined8 **)(param_1 + 0x68);
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        *(undefined4 *)((long)puVar12 + 0x14) = 0;
        *(undefined4 *)(puVar12 + 3) = 0;
        *(undefined1 *)(puVar12 + 3) = 2;
        *(undefined8 *)((long)puVar12 + 0xc) = 0;
        *(undefined8 *)((long)puVar12 + 4) = 0;
        break;
      case 0x11:
        *(byte *)(*(long *)PTR_DAT_04bb2710 + 0x2d4) =
             *(byte *)(lVar9 + (long)(int)uVar7 * 0x38 + 0x30) ^ 1;
        break;
      case 0x18:
        FUN_01ca4874(*plVar15,*(undefined8 *)(lVar9 + (long)(int)uVar7 * 0x38 + 0x18));
        return;
      case 0x19:
        FUN_01ca48d4(*plVar15,*(undefined8 *)(lVar9 + (long)(int)uVar7 * 0x38 + 0x20));
        return;
      }
      lVar8 = *plVar15;
      uVar6 = *puVar13;
    }
  }
  FUN_01ca457c(lVar8,uVar6);
switchD_01c9b5b0_default:
  return;
}

