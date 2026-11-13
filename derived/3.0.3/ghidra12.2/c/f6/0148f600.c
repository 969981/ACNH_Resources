
undefined8 FUN_0148f600(undefined8 param_1,undefined8 *param_2,float *param_3,int *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  byte *pbVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  int iStack_e4;
  uint local_e0;
  undefined1 local_dc;
  byte local_db;
  undefined1 local_da;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint *local_80;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_80 = (uint *)0x0;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((long)param_2 + 4);
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar1 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar8 < *(uint *)(lVar22 + 0x1d8)) {
        puVar12 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8);
        if (puVar12 != (uint *)0x0) {
          local_80 = puVar12;
        }
      }
    }
  }
  puVar6 = PTR_DAT_04bb2010;
  iVar10 = *param_4;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  uVar8 = iVar10 + 0xa0000000U >> 0x1e;
  local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar8);
  local_98 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  iStack_94 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  iVar16 = uVar8 + 2;
  if (2 < uVar8 - 1) {
    iVar16 = 2;
  }
  local_a0 = puVar1;
  if (DAT_05aed670 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar9 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  uVar3 = *(undefined4 *)(puVar21 + 7);
  FUN_017baf44(uVar3);
  puVar7 = PTR_DAT_04bbc1a0;
  local_f0 = (undefined *)0x0;
  local_100 = 0;
  local_110 = PTR_DAT_04bbc1a0 + 0x10;
  local_108 = puVar1;
  local_f8 = puVar1;
  uVar11 = FUN_017ba710(uVar3,&local_110);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  iVar9 = local_100._4_4_;
  iVar17 = local_100._4_4_;
  iVar20 = (int)local_100;
  switch(iVar16) {
  case 2:
    iVar9 = local_100._4_4_ + 3;
    goto LAB_0148f85c;
  case 3:
    iVar18 = (int)local_100 + 3;
    if (local_f0._4_4_ <= local_100._4_4_) {
      iVar17 = local_f0._4_4_;
    }
    if (local_100._4_4_ <= local_f0._4_4_) {
      iVar9 = local_f0._4_4_;
    }
    break;
  case 4:
    iVar17 = local_f0._4_4_ + -3;
    iVar9 = local_f0._4_4_;
LAB_0148f85c:
    if ((int)local_f0 <= (int)local_100) {
      iVar20 = (int)local_f0;
    }
    iVar18 = (int)local_100;
    if ((int)local_100 <= (int)local_f0) {
      iVar18 = (int)local_f0;
    }
    break;
  case 5:
    if (local_f0._4_4_ <= local_100._4_4_) {
      iVar17 = local_f0._4_4_;
    }
    if (local_100._4_4_ <= local_f0._4_4_) {
      iVar9 = local_f0._4_4_;
    }
    iVar18 = (int)local_f0;
    iVar20 = (int)local_f0 + -3;
    break;
  default:
    goto switchD_0148f830_default;
  }
  if (*param_3 < (float)iVar20 * 5.0) {
    return 1;
  }
  if ((float)iVar18 * 5.0 + 5.0 <= *param_3) {
    return 1;
  }
  if (param_3[2] < (float)iVar17 * 5.0) {
    return 1;
  }
  if ((float)iVar9 * 5.0 + 5.0 <= param_3[2]) {
    return 1;
  }
  puVar1 = puVar6 + 0x10;
  local_a8 = 0;
  local_b0 = puVar1;
  uVar11 = FUN_01500c60(&local_b0,&local_a0);
  if ((uVar11 & 1) == 0) {
switchD_0148f830_default:
    return 0;
  }
  local_d8 = puVar7 + 0x10;
  local_c8 = 0;
  uStack_b8 = 0;
  puStack_d0 = puVar1;
  local_c0 = puVar1;
  FUN_01afb480(&local_90,&local_d8);
  puVar1 = PTR_DAT_04bb32e0;
  if (local_80 == (uint *)0x0) {
    uVar15 = 2;
  }
  else {
    uVar4 = *local_80;
    uVar15 = 0;
    if ((uVar4 != 0) && (local_80 != (uint *)(ulong)uVar4)) {
      puVar12 = (uint *)((long)local_80 - (long)(ulong)uVar4);
      uVar15 = 0;
      if (*puVar12 != 0) {
        uVar4 = puVar12[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar22 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar12 + lVar22 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar22 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)local_80 - lVar22) / (ulong)uVar4);
            }
            if (*puVar12 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326fe0) &&
               (uVar15 = *(ushort *)(DAT_05326fe8 + (long)(int)uVar2 * 2), uVar15 < 4))
            goto LAB_0148f9d4;
          }
        }
        uVar15 = 0;
      }
    }
  }
LAB_0148f9d4:
  switch(uVar15) {
  case 0:
  case 2:
    iVar20 = uStack_b8._4_4_ - local_c8._4_4_;
    iVar9 = iVar20 + 2;
    if (-1 < iVar20 + 1) {
      iVar9 = iVar20 + 1;
    }
    iVar9 = (local_a8._4_4_ - (iVar9 >> 1)) + -3;
    break;
  case 1:
    iVar9 = local_a8._4_4_ + -6;
    break;
  case 3:
    iVar9 = (local_c8._4_4_ - uStack_b8._4_4_) + local_a8._4_4_;
    break;
  default:
    goto switchD_0148f9fc_default;
  }
  local_a8 = CONCAT44(iVar9,(int)local_a8);
switchD_0148f9fc_default:
  lVar22 = 0;
  uVar4 = iVar10 + 0x20000000U >> 0x1e;
  do {
    iVar10 = *(int *)((long)&DAT_0417564c + lVar22);
    local_da = 0;
    local_110 = (undefined *)*param_2;
    local_100 = CONCAT44(local_a8._4_4_ + iVar10,(int)local_a8);
    local_f8 = (undefined *)CONCAT44(iVar16,uVar8);
    local_e8 = local_98;
    iStack_e4 = iStack_94;
    local_dc = 0;
    pbVar19 = puVar1;
    if (DAT_04cd19d8 == 0) {
      if (7 < (byte)*puVar1) goto LAB_0148fb30;
LAB_0148fba8:
      local_db = *pbVar19;
      if (7 < local_db) {
        local_db = 0xff;
      }
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar19 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar19 < 8)))) goto LAB_0148fba8;
LAB_0148fb30:
      if (DAT_0537d558 == (long *)0x0) {
        pbVar19 = &DAT_0548e168;
        goto LAB_0148fba8;
      }
      lVar13 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        pbVar19 = &DAT_0548e168;
        pbVar14 = &DAT_0548e168;
      }
      else {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        pbVar14 = PTR_DAT_04bb5038;
        if ((*puVar12 & 8) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x471);
        }
        pbVar19 = PTR_DAT_04bb5038;
      }
      local_db = *pbVar14;
      if (7 < local_db) goto LAB_0148fba8;
    }
    if (7 < local_db) {
      local_db = 0xff;
    }
    local_108 = puVar6 + 0x10;
    local_f0 = puVar6 + 0x10;
    local_e0 = uVar4;
    iVar9 = FUN_0148e51c(param_1,&local_110);
    if (iVar9 == 9) {
      return 9;
    }
    local_108 = puVar6 + 0x10;
    local_da = 0;
    local_110 = (undefined *)*param_2;
    local_100 = CONCAT44(local_a8._4_4_ + iVar10,(int)local_a8 + 1);
    local_f8 = (undefined *)CONCAT44(iVar16,uVar8);
    local_e8 = local_98;
    iStack_e4 = iStack_94;
    local_dc = 0;
    pbVar19 = puVar1;
    if (DAT_04cd19d8 == 0) {
      if (7 < (byte)*puVar1) goto LAB_0148fc8c;
LAB_0148fd04:
      local_db = *pbVar19;
      if (7 < local_db) {
        local_db = 0xff;
      }
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar19 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar19 < 8)))) goto LAB_0148fd04;
LAB_0148fc8c:
      if (DAT_0537d558 == (long *)0x0) {
        pbVar19 = &DAT_0548e168;
        goto LAB_0148fd04;
      }
      lVar13 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        pbVar19 = &DAT_0548e168;
        pbVar14 = &DAT_0548e168;
      }
      else {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        pbVar14 = PTR_DAT_04bb5038;
        if ((*puVar12 & 8) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x471);
        }
        pbVar19 = PTR_DAT_04bb5038;
      }
      local_db = *pbVar14;
      if (7 < local_db) goto LAB_0148fd04;
    }
    if (7 < local_db) {
      local_db = 0xff;
    }
    local_f0 = local_108;
    local_e0 = uVar4;
    iVar9 = FUN_0148e51c(param_1,&local_110);
    if (iVar9 == 9) {
      return 9;
    }
    local_108 = puVar6 + 0x10;
    local_da = 0;
    local_110 = (undefined *)*param_2;
    local_100 = CONCAT44(local_a8._4_4_ + iVar10,(int)local_a8 + -1);
    local_f8 = (undefined *)CONCAT44(iVar16,uVar8);
    local_e8 = local_98;
    iStack_e4 = iStack_94;
    local_dc = 0;
    pbVar19 = puVar1;
    if (DAT_04cd19d8 == 0) {
      if (7 < (byte)*puVar1) goto LAB_0148fde8;
LAB_0148fe60:
      local_db = *pbVar19;
      if (7 < local_db) {
        local_db = 0xff;
      }
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar19 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar19 < 8)))) goto LAB_0148fe60;
LAB_0148fde8:
      if (DAT_0537d558 == (long *)0x0) {
        pbVar19 = &DAT_0548e168;
        goto LAB_0148fe60;
      }
      lVar13 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        pbVar19 = &DAT_0548e168;
        pbVar14 = &DAT_0548e168;
      }
      else {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        pbVar14 = PTR_DAT_04bb5038;
        if ((*puVar12 & 8) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x471);
        }
        pbVar19 = PTR_DAT_04bb5038;
      }
      local_db = *pbVar14;
      if (7 < local_db) goto LAB_0148fe60;
    }
    if (7 < local_db) {
      local_db = 0xff;
    }
    local_f0 = local_108;
    local_e0 = uVar4;
    iVar9 = FUN_0148e51c(param_1,&local_110);
    if (iVar9 == 9) {
      return 9;
    }
    local_108 = puVar6 + 0x10;
    local_da = 0;
    local_110 = (undefined *)*param_2;
    local_100 = CONCAT44(local_a8._4_4_ + iVar10,(int)local_a8 + 2);
    local_f8 = (undefined *)CONCAT44(iVar16,uVar8);
    local_e8 = local_98;
    iStack_e4 = iStack_94;
    local_dc = 0;
    pbVar19 = puVar1;
    if (DAT_04cd19d8 == 0) {
      if (7 < (byte)*puVar1) goto LAB_0148ff44;
LAB_0148ffbc:
      local_db = *pbVar19;
      if (7 < local_db) {
        local_db = 0xff;
      }
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar19 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar19 < 8)))) goto LAB_0148ffbc;
LAB_0148ff44:
      if (DAT_0537d558 == (long *)0x0) {
        pbVar19 = &DAT_0548e168;
        goto LAB_0148ffbc;
      }
      lVar13 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        pbVar19 = &DAT_0548e168;
        pbVar14 = &DAT_0548e168;
      }
      else {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        pbVar14 = PTR_DAT_04bb5038;
        if ((*puVar12 & 8) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x471);
        }
        pbVar19 = PTR_DAT_04bb5038;
      }
      local_db = *pbVar14;
      if (7 < local_db) goto LAB_0148ffbc;
    }
    if (7 < local_db) {
      local_db = 0xff;
    }
    local_f0 = local_108;
    local_e0 = uVar4;
    iVar9 = FUN_0148e51c(param_1,&local_110);
    if (iVar9 == 9) {
      return 9;
    }
    local_108 = puVar6 + 0x10;
    local_da = 0;
    local_110 = (undefined *)*param_2;
    local_100 = CONCAT44(local_a8._4_4_ + iVar10,(int)local_a8 + -2);
    local_f8 = (undefined *)CONCAT44(iVar16,uVar8);
    local_e8 = local_98;
    iStack_e4 = iStack_94;
    local_dc = 0;
    pbVar19 = puVar1;
    if (DAT_04cd19d8 == 0) {
      if (7 < (byte)*puVar1) goto LAB_014900a0;
LAB_01490118:
      local_db = *pbVar19;
      if (7 < local_db) {
        local_db = 0xff;
      }
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar19 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar19 < 8)))) goto LAB_01490118;
LAB_014900a0:
      if (DAT_0537d558 == (long *)0x0) {
        pbVar19 = &DAT_0548e168;
        goto LAB_01490118;
      }
      lVar13 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        pbVar19 = &DAT_0548e168;
        pbVar14 = &DAT_0548e168;
      }
      else {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        pbVar14 = PTR_DAT_04bb5038;
        if ((*puVar12 & 8) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x471);
        }
        pbVar19 = PTR_DAT_04bb5038;
      }
      local_db = *pbVar14;
      if (7 < local_db) goto LAB_01490118;
    }
    if (7 < local_db) {
      local_db = 0xff;
    }
    local_f0 = local_108;
    local_e0 = uVar4;
    iVar10 = FUN_0148e51c(param_1,&local_110);
    if (iVar10 == 9) {
      return 9;
    }
    lVar22 = lVar22 + 4;
    if (lVar22 == 0x34) {
      return 1;
    }
  } while( true );
}

