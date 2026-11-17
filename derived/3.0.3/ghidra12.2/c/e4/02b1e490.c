
/* WARNING: Removing unreachable block (ram,0x02b1e5bc) */
/* WARNING: Removing unreachable block (ram,0x02b1e570) */
/* WARNING: Removing unreachable block (ram,0x02b1e8c8) */

undefined4 FUN_02b1e490(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long lVar14;
  bool bVar15;
  undefined4 local_b0;
  uint uStack_ac;
  uint *local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  int local_88;
  int local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  uint local_68;
  undefined4 local_64;
  
  local_78 = 0;
  local_80 = PTR_DAT_04bbfe68 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar4 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar13 + 7);
  local_70 = FUN_017baf44();
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = local_70 & 1;
  if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
    if (((*(long *)(param_2 + 0xc0) == 0) ||
        (lVar10 = *(long *)(*(long *)(param_2 + 0xc0) + 200), lVar10 == 0)) ||
       (*(char *)(lVar10 + 0x48) == '\0')) {
      lVar10 = param_2 + 0x18;
      goto LAB_02b1e5cc;
    }
    lVar10 = param_2 + 0x5c8;
  }
  else {
    lVar10 = param_2 + 0x328;
  }
  lVar10 = lVar10 + 0x28;
LAB_02b1e5cc:
  local_a0 = lVar10 + 8;
  local_98 = lVar10 + 0x18;
  local_88 = *(int *)(lVar10 + 0x10);
  local_84 = *(int *)(lVar10 + 0x14);
  iVar2 = *(int *)(lVar10 + 0x10);
  local_90 = PTR_DAT_04bb2010 + 0x10;
  iVar4 = *(int *)(lVar10 + 0x24) + 1;
  if ((iVar2 == local_88) && (iVar4 == local_84)) {
    uVar9 = 0;
  }
  else {
    bVar15 = false;
    do {
      uVar7 = FUN_02a7c074(param_2,&local_90);
      if ((uVar7 & 1) != 0) {
        puVar8 = (undefined4 *)FUN_01a5190c(&local_80,0,&local_90,0);
        lVar10 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4();
        lVar14 = *(long *)puVar3;
        if (lVar14 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            local_a8 = (uint *)0x0;
            local_b0 = *puVar8;
            uVar5 = puVar8[1];
            uStack_ac = uVar5;
            uVar6 = FUN_0277d6c4(&local_b0);
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(lVar14 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(puVar8);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                   (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
                   puVar11 != (uint *)0x0)) {
                  local_68 = 0;
                  local_64 = 0x76;
                  uVar6 = *puVar11;
                  if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
                    puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
                    local_68 = 0;
                    if (*puVar12 != 0) {
                      uVar6 = puVar12[1];
                      if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                        lVar10 = 0xc;
                        if (*(char *)((long)puVar12 + 10) != '\0') {
                          lVar10 = 0x1c;
                        }
                        lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
                        if (lVar10 != 0) {
                          uVar1 = 0;
                          if ((ulong)uVar6 != 0) {
                            uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
                          }
                          if (*puVar12 <= uVar1) {
                            uVar1 = 0xffffffff;
                          }
                          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_68 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar1 * 2), local_68 < 0xbd))
                          goto LAB_02b1e800;
                        }
                      }
                      local_68 = 0;
                    }
                  }
LAB_02b1e800:
                  local_a8 = puVar11;
                  if (local_68 != 0x76) goto LAB_02b1e900;
                  local_68 = 0;
                  uVar6 = *puVar11;
                  if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
                    puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
                    local_68 = 0;
                    if (*puVar12 != 0) {
                      uVar6 = puVar12[1];
                      if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                        lVar10 = 0xc;
                        if (*(char *)((long)puVar12 + 10) != '\0') {
                          lVar10 = 0x1c;
                        }
                        lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
                        if (lVar10 != 0) {
                          uVar1 = 0;
                          if ((ulong)uVar6 != 0) {
                            uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
                          }
                          if (*puVar12 <= uVar1) {
                            uVar1 = 0xffffffff;
                          }
                          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_68 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar1 * 2), local_68 < 0xbd))
                          goto LAB_02b1e8d4;
                        }
                      }
                      local_68 = 0;
                    }
                  }
LAB_02b1e8d4:
                  local_64 = 0x76;
                  uVar5 = uVar5 & 0xf;
                  if (local_68 != 0x76) {
                    uVar5 = 0;
                  }
                  uVar7 = FUN_0266cce0(uVar5,param_3);
                  if ((uVar7 & 1) == 0) {
                    return 1;
                  }
                  bVar15 = true;
                  goto LAB_02b1e900;
                }
              }
            }
            local_68 = 0xbc;
            local_64 = 0x76;
          }
        }
      }
LAB_02b1e900:
      if (local_88 < *(int *)(local_98 + 8)) {
        local_88 = local_88 + 1;
      }
      else {
        local_84 = local_84 + 1;
        local_88 = *(int *)(local_a0 + 8);
      }
    } while (iVar2 != local_88 || iVar4 != local_84);
    uVar9 = 2;
    if (!bVar15) {
      uVar9 = 0;
    }
  }
  return uVar9;
}

