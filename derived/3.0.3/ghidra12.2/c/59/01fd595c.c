
/* WARNING: Removing unreachable block (ram,0x01fd5e58) */
/* WARNING: Removing unreachable block (ram,0x01fd5cc8) */
/* WARNING: Removing unreachable block (ram,0x01fd5d90) */
/* WARNING: Removing unreachable block (ram,0x01fd5f20) */

undefined8 FUN_01fd595c(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  byte local_100;
  byte local_f4 [4];
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint *local_b8;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined4 local_6c;
  undefined4 local_68 [6];
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb2010;
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  iStack_a4 = (int)(float)(iVar1 + 2);
  iVar3 = *(int *)(param_1 + 0x14);
  local_98 = (int)(float)(iVar2 + 2);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar8 = iVar2 + iVar4;
  if (iVar8 < 0 != SCARRY4(iVar2,iVar4)) {
    iVar8 = iVar8 + 1;
  }
  iVar2 = iVar1 + iVar3;
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  if (iVar2 < 0 != SCARRY4(iVar1,iVar3)) {
    iVar2 = iVar2 + 1;
  }
  local_a8 = (iVar8 >> 1) + 1;
  iStack_94 = (iVar2 >> 1) + 1;
  iStack_84 = (int)(float)(iVar3 + -1);
  local_78 = (int)(float)(iVar4 + -1);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  local_a0 = local_b0;
  local_90 = local_b0;
  local_88 = local_a8;
  local_80 = local_b0;
  iStack_74 = iStack_94;
  uVar7 = FUN_0277d6c4(param_2);
  lVar15 = *(long *)puVar6;
  if (lVar15 == 0) {
    return 0;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar7) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 0;
  }
  local_b8 = (uint *)0x0;
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  local_c8 = PTR_DAT_04bc0510 + 0x10;
  uVar7 = FUN_0277d6c4(&local_c0);
  if (*(long *)puVar6 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
        puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
        if (puVar12 != (uint *)0x0) {
          uVar7 = *puVar12;
          uVar11 = 0;
          local_b8 = puVar12;
          if ((uVar7 == 0) || (puVar12 == (uint *)(ulong)uVar7)) goto LAB_01fd5b84;
          puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
          uVar11 = 0;
          if (*puVar13 == 0) goto LAB_01fd5b84;
          uVar7 = puVar13[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar15 != 0) {
              uVar11 = 0;
              if ((ulong)uVar7 != 0) {
                uVar11 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
              }
              if (*puVar13 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar11 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2),
                 uVar11 < 0x52)) goto LAB_01fd5b84;
            }
          }
        }
      }
    }
  }
  uVar11 = 0;
LAB_01fd5b84:
  if (uVar11 - 1 < 9) {
    puStack_e8 = puVar5 + 0x10;
    local_e0 = 0;
    local_f4[0] = 0;
    uStack_d0 = 0;
    local_f0 = PTR_DAT_04bbc1a0 + 0x10;
    local_d8 = puStack_e8;
    uVar9 = FUN_01517328(&local_f0,local_f4,param_1 + 8,param_2);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    local_108 = 0;
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar8 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_104 = *(undefined4 *)(puVar14 + 7);
    local_100 = FUN_017baf44();
    local_100 = local_100 & 1;
    local_6c = 0;
    local_110 = PTR_DAT_04bb3140 + 0x10;
    local_68[0] = 0;
    if ((local_f4[0] & 1) != 0) {
      uVar10 = FUN_01a5190c(&local_110,1,&local_b0,0);
      uVar9 = FUN_0277d9a8();
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(local_68,uVar10);
        uVar9 = FUN_01ad65f4(local_68);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
      uVar10 = FUN_01a5190c(&local_110,0,&local_b0,0);
      uVar9 = FUN_0277d9a8();
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(local_68,uVar10);
        uVar9 = FUN_01ad65f4(local_68);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
    }
    local_6c = 1;
    local_68[0] = 1;
    if ((local_f4[0] >> 1 & 1) != 0) {
      uVar10 = FUN_01a5190c(&local_110,1,&local_a0,0);
      uVar9 = FUN_0277d9a8();
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(local_68,uVar10);
        uVar9 = FUN_01ad65f4(local_68);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
      uVar10 = FUN_01a5190c(&local_110,0,&local_a0,0);
      uVar9 = FUN_0277d9a8();
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(local_68,uVar10);
        uVar9 = FUN_01ad65f4(local_68);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
    }
    local_6c = 2;
    local_68[0] = 2;
    if ((local_f4[0] >> 2 & 1) != 0) {
      uVar10 = FUN_01a5190c(&local_110,1,&local_90,0);
      uVar9 = FUN_0277d9a8();
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(local_68,uVar10);
        uVar9 = FUN_01ad65f4(local_68);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
      uVar10 = FUN_01a5190c(&local_110,0,&local_90,0);
      uVar9 = FUN_0277d9a8();
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(local_68,uVar10);
        uVar9 = FUN_01ad65f4(local_68);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
    }
    local_6c = 3;
    local_68[0] = 3;
    if ((local_f4[0] >> 3 & 1) == 0) {
      return 0;
    }
    uVar10 = FUN_01a5190c(&local_110,1,&local_80,0);
    uVar9 = FUN_0277d9a8();
    if ((uVar9 & 1) != 0) {
      FUN_01ad5d04(local_68,uVar10);
      uVar9 = FUN_01ad65f4(local_68);
      if ((uVar9 & 1) != 0) {
        return 1;
      }
    }
    uVar10 = FUN_01a5190c(&local_110,0,&local_80,0);
    uVar9 = FUN_0277d9a8();
    if ((uVar9 & 1) != 0) {
      FUN_01ad5d04(local_68,uVar10);
      uVar9 = FUN_01ad65f4(local_68);
      if ((uVar9 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

