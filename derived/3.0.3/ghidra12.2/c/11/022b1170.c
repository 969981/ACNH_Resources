
/* WARNING: Removing unreachable block (ram,0x022b1a10) */
/* WARNING: Removing unreachable block (ram,0x022b1a38) */
/* WARNING: Removing unreachable block (ram,0x022b1680) */
/* WARNING: Removing unreachable block (ram,0x022b16a8) */
/* WARNING: Removing unreachable block (ram,0x022b1428) */
/* WARNING: Removing unreachable block (ram,0x022b1438) */
/* WARNING: Removing unreachable block (ram,0x022b16b8) */
/* WARNING: Removing unreachable block (ram,0x022b1690) */
/* WARNING: Removing unreachable block (ram,0x022b1a48) */
/* WARNING: Removing unreachable block (ram,0x022b1a20) */

undefined8 FUN_022b1170(long param_1,long param_2,uint param_3)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  undefined **local_d0;
  undefined8 local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  int local_88 [2];
  
  local_a0 = 0;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar12 + 7);
  local_98 = FUN_017baf44();
  puVar4 = PTR_DAT_04bb2010;
  local_98 = local_98 & 1;
  local_a8 = PTR_DAT_04bb6268 + 0x10;
  iVar2 = *(int *)(param_2 + 8);
  iVar17 = *(int *)(param_2 + 0xc);
  iVar6 = iVar17 + 2;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  iVar13 = iVar2;
  do {
    local_c8 = (undefined *)CONCAT44(iVar17,iVar13);
    local_d0 = ppuVar1;
    FUN_01a5033c(local_88,&local_a8,0,&local_d0,0);
    if ((short)local_88[0] != -2) goto LAB_022b1c40;
    if (iVar13 < iVar2 + 1) {
      iVar13 = iVar13 + 1;
    }
    else {
      iVar17 = iVar17 + 1;
      iVar13 = iVar2;
    }
  } while ((iVar2 != iVar13) || (iVar6 != iVar17));
  local_d0 = &PTR_FUN_048f9730;
  fVar15 = (float)*(int *)(param_2 + 0xc) * 5.0 + 5.0;
  fVar14 = (float)*(int *)(param_2 + 8) * 5.0 + 5.0;
  local_c8 = (undefined *)
             CONCAT44((int)((float)(int)fVar15 / 10.0) - (uint)(fVar15 < 0.0),
                      (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0));
  uVar7 = FUN_01318310(&local_d0);
  if ((uVar7 & 1) == 0) {
    local_c0 = *(int *)(param_2 + 8);
    iStack_bc = *(int *)(param_2 + 0xc);
    local_c8 = puVar4 + 0x10;
    local_b0 = local_c0 + 1;
    local_d0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    iStack_ac = iStack_bc + 1;
    local_b8 = local_c8;
    uVar7 = FUN_00978be0(&local_d0);
    if ((uVar7 & 1) != 0) {
      if (((DAT_0547a500 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0547a500), iVar6 != 0)) {
        DAT_0547a4f0 = 0x200000000;
        DAT_0547a4f8 = 0x400000006;
        __cxa_guard_release(&DAT_0547a500);
      }
      puVar4 = PTR_DAT_04bb27a8;
      fVar14 = (float)*(int *)(param_2 + 0xc) * 0.5;
      fVar15 = (float)*(int *)(param_2 + 8) * 0.5;
      uVar10 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar10 = (uint)(fVar15 < 0.0);
      }
      uVar11 = 0;
      if (fVar14 != (float)(int)fVar14) {
        uVar11 = (uint)(fVar14 < 0.0);
      }
      iVar17 = (int)fVar15 - uVar10;
      iVar6 = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
        iVar6 = 0;
        if (lVar9 != 0) {
          uVar10 = iVar17 - *(int *)(lVar9 + 0x28);
          if ((uVar10 < *(uint *)(lVar9 + 0x18)) &&
             (uVar3 = ((int)fVar14 - uVar11) - *(int *)(lVar9 + 0x2c),
             uVar3 < *(uint *)(lVar9 + 0x1c))) {
            uVar10 = uVar10 + *(uint *)(lVar9 + 0x18) * uVar3;
LAB_022b14d4:
            if (*(uint *)(lVar9 + 0x30) <= uVar10) {
              uVar10 = 0;
            }
            puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar10 * 0x68);
          }
          else if (*(char *)(lVar9 + 0x88) == '\0') {
            puVar12 = &DAT_051a50f0;
          }
          else {
            uVar10 = iVar17 - *(int *)(lVar9 + 0x98);
            puVar12 = &DAT_051a50f0;
            if ((uVar10 < *(uint *)(lVar9 + 0xa0)) &&
               (uVar11 = ((int)fVar14 - uVar11) - *(int *)(lVar9 + 0x9c),
               uVar11 < *(uint *)(lVar9 + 0xa4))) {
              uVar10 = uVar10 + *(uint *)(lVar9 + 0xa0) * uVar11 + *(int *)(lVar9 + 0x8c);
              goto LAB_022b14d4;
            }
          }
          iVar6 = (int)*(char *)(puVar12 + 2);
        }
      }
      iVar6 = iVar6 + 1;
      fVar15 = (float)(*(int *)(param_2 + 0xc) + -2);
      local_d0 = &PTR_FUN_048f9730;
      fVar14 = (float)*(int *)(param_2 + 8) * 5.0 + 5.0;
      fVar16 = fVar15 * 5.0 + 5.0;
      local_c8 = (undefined *)
                 CONCAT44((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0),
                          (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0));
      uVar7 = FUN_01318310(&local_d0);
      if ((uVar7 & 1) == 0) {
        fVar15 = fVar15 * 0.5;
        local_d0 = &PTR_FUN_048f9730;
        uVar10 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar10 = (uint)(fVar15 < 0.0);
        }
        iVar2 = (int)fVar15 - uVar10;
        local_c8 = (undefined *)CONCAT44(iVar2,iVar17);
        uVar7 = FUN_00977640(&local_d0);
        if ((uVar7 & 1) != 0) goto LAB_022b15a0;
        local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
        local_88[0] = 0;
        if (*(long *)(*(long *)puVar4 + 0x1f8) != 0) {
          lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0x1f8) + 0xb0);
          local_88[0] = 0;
          if (lVar9 != 0) {
            uVar10 = iVar17 - *(int *)(lVar9 + 0x28);
            if ((uVar10 < *(uint *)(lVar9 + 0x18)) &&
               (uVar11 = iVar2 - *(int *)(lVar9 + 0x2c), uVar11 < *(uint *)(lVar9 + 0x1c))) {
              uVar10 = uVar10 + *(uint *)(lVar9 + 0x18) * uVar11;
LAB_022b178c:
              if (*(uint *)(lVar9 + 0x30) <= uVar10) {
                uVar10 = 0;
              }
              puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar10 * 0x68);
            }
            else if (*(char *)(lVar9 + 0x88) == '\0') {
              puVar12 = &DAT_051a50f0;
            }
            else {
              uVar10 = iVar17 - *(int *)(lVar9 + 0x98);
              puVar12 = &DAT_051a50f0;
              if ((uVar10 < *(uint *)(lVar9 + 0xa0)) &&
                 (uVar11 = iVar2 - *(int *)(lVar9 + 0x9c), uVar11 < *(uint *)(lVar9 + 0xa4))) {
                uVar10 = uVar10 + *(uint *)(lVar9 + 0xa0) * uVar11 + *(int *)(lVar9 + 0x8c);
                goto LAB_022b178c;
              }
            }
            local_88[0] = (int)*(char *)(puVar12 + 2);
          }
        }
        if ((local_88[0] == 4) || (local_88[0] != iVar6)) goto LAB_022b15a0;
        lVar9 = 0;
LAB_022b1bec:
        uVar10 = *(uint *)((long)&DAT_0547a4f0 + lVar9 * 4);
        iVar6 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
        if ((iVar6 == 0x21) ||
           (iVar6 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), iVar6 == 0x22)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xe3 | (byte)((uVar10 & 7) << 2);
        }
        goto LAB_022b1c38;
      }
LAB_022b15a0:
      local_d0 = &PTR_FUN_048f9730;
      iVar17 = *(int *)(param_2 + 0xc);
      fVar15 = (float)(*(int *)(param_2 + 8) + -2);
      fVar14 = fVar15 * 5.0 + 5.0;
      fVar16 = (float)iVar17 * 5.0 + 5.0;
      local_c8 = (undefined *)
                 CONCAT44((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0),
                          (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0));
      uVar7 = FUN_01318310(&local_d0);
      if ((uVar7 & 1) == 0) {
        fVar15 = fVar15 * 0.5;
        local_d0 = &PTR_FUN_048f9730;
        fVar14 = (float)iVar17 * 0.5;
        uVar10 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar10 = (uint)(fVar15 < 0.0);
        }
        iVar17 = (int)fVar15 - uVar10;
        uVar10 = 0;
        if (fVar14 != (float)(int)fVar14) {
          uVar10 = (uint)(fVar14 < 0.0);
        }
        iVar2 = (int)fVar14 - uVar10;
        local_c8 = (undefined *)CONCAT44(iVar2,iVar17);
        uVar7 = FUN_00977640(&local_d0);
        if ((uVar7 & 1) == 0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          local_88[0] = 0;
          if (*(long *)(*(long *)puVar4 + 0x1f8) != 0) {
            lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0x1f8) + 0xb0);
            local_88[0] = 0;
            if (lVar9 != 0) {
              uVar10 = iVar17 - *(int *)(lVar9 + 0x28);
              if ((uVar10 < *(uint *)(lVar9 + 0x18)) &&
                 (uVar11 = iVar2 - *(int *)(lVar9 + 0x2c), uVar11 < *(uint *)(lVar9 + 0x1c))) {
                uVar10 = uVar10 + *(uint *)(lVar9 + 0x18) * uVar11;
LAB_022b17ec:
                if (*(uint *)(lVar9 + 0x30) <= uVar10) {
                  uVar10 = 0;
                }
                puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar10 * 0x68);
              }
              else if (*(char *)(lVar9 + 0x88) == '\0') {
                puVar12 = &DAT_051a50f0;
              }
              else {
                uVar10 = iVar17 - *(int *)(lVar9 + 0x98);
                puVar12 = &DAT_051a50f0;
                if ((uVar10 < *(uint *)(lVar9 + 0xa0)) &&
                   (uVar11 = iVar2 - *(int *)(lVar9 + 0x9c), uVar11 < *(uint *)(lVar9 + 0xa4))) {
                  uVar10 = uVar10 + *(uint *)(lVar9 + 0xa0) * uVar11 + *(int *)(lVar9 + 0x8c);
                  goto LAB_022b17ec;
                }
              }
              local_88[0] = (int)*(char *)(puVar12 + 2);
            }
          }
          if ((local_88[0] != 4) && (local_88[0] == iVar6)) {
            lVar9 = 1;
            goto LAB_022b1bec;
          }
        }
      }
      iVar17 = *(int *)(param_2 + 0xc);
      local_d0 = &PTR_FUN_048f9730;
      fVar15 = (float)(*(int *)(param_2 + 8) + 2);
      fVar14 = fVar15 * 5.0 + 5.0;
      fVar16 = (float)iVar17 * 5.0 + 5.0;
      local_c8 = (undefined *)
                 CONCAT44((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0),
                          (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0));
      uVar7 = FUN_01318310(&local_d0);
      if ((uVar7 & 1) == 0) {
        fVar15 = fVar15 * 0.5;
        local_d0 = &PTR_FUN_048f9730;
        fVar14 = (float)iVar17 * 0.5;
        uVar10 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar10 = (uint)(fVar15 < 0.0);
        }
        iVar17 = (int)fVar15 - uVar10;
        uVar10 = 0;
        if (fVar14 != (float)(int)fVar14) {
          uVar10 = (uint)(fVar14 < 0.0);
        }
        iVar2 = (int)fVar14 - uVar10;
        local_c8 = (undefined *)CONCAT44(iVar2,iVar17);
        uVar7 = FUN_00977640(&local_d0);
        if ((uVar7 & 1) == 0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          local_88[0] = 0;
          if (*(long *)(*(long *)puVar4 + 0x1f8) != 0) {
            lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0x1f8) + 0xb0);
            local_88[0] = 0;
            if (lVar9 != 0) {
              uVar10 = iVar17 - *(int *)(lVar9 + 0x28);
              if ((uVar10 < *(uint *)(lVar9 + 0x18)) &&
                 (uVar11 = iVar2 - *(int *)(lVar9 + 0x2c), uVar11 < *(uint *)(lVar9 + 0x1c))) {
                uVar10 = uVar10 + *(uint *)(lVar9 + 0x18) * uVar11;
LAB_022b1b1c:
                if (*(uint *)(lVar9 + 0x30) <= uVar10) {
                  uVar10 = 0;
                }
                puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar10 * 0x68);
              }
              else if (*(char *)(lVar9 + 0x88) == '\0') {
                puVar12 = &DAT_051a50f0;
              }
              else {
                uVar10 = iVar17 - *(int *)(lVar9 + 0x98);
                puVar12 = &DAT_051a50f0;
                if ((uVar10 < *(uint *)(lVar9 + 0xa0)) &&
                   (uVar11 = iVar2 - *(int *)(lVar9 + 0x9c), uVar11 < *(uint *)(lVar9 + 0xa4))) {
                  uVar10 = uVar10 + *(uint *)(lVar9 + 0xa0) * uVar11 + *(int *)(lVar9 + 0x8c);
                  goto LAB_022b1b1c;
                }
              }
              local_88[0] = (int)*(char *)(puVar12 + 2);
            }
          }
          if ((local_88[0] != 4) && (local_88[0] == iVar6)) {
            lVar9 = 2;
            goto LAB_022b1bec;
          }
        }
      }
      iVar17 = *(int *)(param_2 + 8);
      local_d0 = &PTR_FUN_048f9730;
      fVar15 = (float)(*(int *)(param_2 + 0xc) + 2);
      fVar14 = (float)iVar17 * 5.0 + 5.0;
      fVar16 = fVar15 * 5.0 + 5.0;
      local_c8 = (undefined *)
                 CONCAT44((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0),
                          (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0));
      uVar7 = FUN_01318310(&local_d0);
      if ((uVar7 & 1) == 0) {
        fVar14 = (float)iVar17 * 0.5;
        local_d0 = &PTR_FUN_048f9730;
        fVar15 = fVar15 * 0.5;
        uVar10 = 0;
        if (fVar14 != (float)(int)fVar14) {
          uVar10 = (uint)(fVar14 < 0.0);
        }
        iVar17 = (int)fVar14 - uVar10;
        uVar10 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar10 = (uint)(fVar15 < 0.0);
        }
        iVar2 = (int)fVar15 - uVar10;
        local_c8 = (undefined *)CONCAT44(iVar2,iVar17);
        uVar7 = FUN_00977640(&local_d0);
        if ((uVar7 & 1) == 0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          local_88[0] = 0;
          if (*(long *)(*(long *)puVar4 + 0x1f8) != 0) {
            lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0x1f8) + 0xb0);
            local_88[0] = 0;
            if (lVar9 != 0) {
              uVar10 = iVar17 - *(int *)(lVar9 + 0x28);
              if ((uVar10 < *(uint *)(lVar9 + 0x18)) &&
                 (uVar11 = iVar2 - *(int *)(lVar9 + 0x2c), uVar11 < *(uint *)(lVar9 + 0x1c))) {
                uVar10 = uVar10 + *(uint *)(lVar9 + 0x18) * uVar11;
LAB_022b1b7c:
                if (*(uint *)(lVar9 + 0x30) <= uVar10) {
                  uVar10 = 0;
                }
                puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar10 * 0x68);
              }
              else if (*(char *)(lVar9 + 0x88) == '\0') {
                puVar12 = &DAT_051a50f0;
              }
              else {
                uVar10 = iVar17 - *(int *)(lVar9 + 0x98);
                puVar12 = &DAT_051a50f0;
                if ((uVar10 < *(uint *)(lVar9 + 0xa0)) &&
                   (uVar11 = iVar2 - *(int *)(lVar9 + 0x9c), uVar11 < *(uint *)(lVar9 + 0xa4))) {
                  uVar10 = uVar10 + *(uint *)(lVar9 + 0xa0) * uVar11 + *(int *)(lVar9 + 0x8c);
                  goto LAB_022b1b7c;
                }
              }
              local_88[0] = (int)*(char *)(puVar12 + 2);
            }
          }
          if ((local_88[0] != 4) && (local_88[0] == iVar6)) {
            lVar9 = 3;
            goto LAB_022b1bec;
          }
        }
      }
    }
LAB_022b1c40:
    uVar8 = 0;
  }
  else {
    cVar5 = FUN_022af654(param_2,param_3 & 1);
    iVar6 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
    if ((iVar6 == 0x21) ||
       (iVar6 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), iVar6 == 0x22)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xe3 | cVar5 << 2;
      return 1;
    }
LAB_022b1c38:
    uVar8 = 1;
  }
  return uVar8;
}

