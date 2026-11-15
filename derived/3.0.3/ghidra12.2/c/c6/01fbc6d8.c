
undefined8 FUN_01fbc6d8(long param_1,long *param_2,long param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint *puVar10;
  ushort uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  uint local_74;
  undefined **local_70;
  long local_68;
  uint *local_60;
  int local_58;
  int local_54;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
LAB_01fbc9a0:
    local_a0 = 0;
    if (DAT_05aed670 == 0) {
      puVar15 = &DAT_055c04a0;
    }
    else {
      puVar15 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar15 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar15,0);
        puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar15 = &DAT_055c04a0;
        }
      }
    }
    local_9c = *(undefined4 *)(puVar15 + 7);
    local_98 = FUN_017baf44();
    puVar3 = PTR_DAT_04bb3140;
    local_98 = local_98 & 1;
    local_a8 = PTR_DAT_04bb3140 + 0x10;
    if (*param_4 == 0) {
      lVar14 = *(long *)puVar4;
      uVar5 = FUN_0277d6c4(param_2);
      lVar13 = *(long *)puVar4;
      if (lVar13 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
            ((*(byte *)(param_1 + 0xafb3) & 1) == 0)) &&
           (uVar5 = FUN_0277d6c4(param_2), *(long *)puVar4 != 0)) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            local_88 = 0;
            if (DAT_05aed670 == 0) {
              puVar15 = &DAT_055c04a0;
            }
            else {
              puVar15 = &DAT_055c04a0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                puVar15 = (undefined8 *)
                          (**(code **)(*DAT_05aed668 + 0x18))
                                    (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
                iVar6 = FUN_006bd550(*puVar15,0);
                puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar6 != 0x758f7eaf) {
                  puVar15 = &DAT_055c04a0;
                }
              }
            }
            local_84 = *(undefined4 *)(puVar15 + 7);
            local_80 = FUN_017baf44();
            local_80 = local_80 & 1;
            local_90 = puVar3 + 0x10;
            uVar7 = FUN_01a4fafc(&local_90,1,param_3);
            if ((uVar7 & 1) == 0) goto LAB_01fbcec8;
            iVar2 = *(int *)(param_3 + 0x10);
            local_54 = *(int *)(param_3 + 0x14);
            local_70 = (undefined **)(param_3 + 8);
            local_68 = param_3 + 0x18;
            local_60 = (uint *)(PTR_DAT_04bb2010 + 0x10);
            iVar6 = *(int *)(param_3 + 0x24) + 1;
            if (iVar6 != local_54) {
              local_58 = iVar2;
              do {
                uVar7 = FUN_01a4fd6c(&local_90,1,&local_60,1);
                if ((uVar7 & 1) == 0) goto LAB_01fbcec8;
                if (local_58 < *(int *)(local_68 + 8)) {
                  local_58 = local_58 + 1;
                }
                else {
                  local_54 = local_54 + 1;
                  local_58 = *(int *)(local_70 + 1);
                }
              } while (iVar2 != local_58 || iVar6 != local_54);
            }
          }
        }
      }
    }
    else if (*param_4 == 1) {
      plVar8 = (long *)FUN_01a5190c(&local_a8,0,param_3 + 8,0);
      lVar14 = *(long *)puVar4;
      uVar5 = FUN_0277d6c4();
      lVar13 = *(long *)puVar4;
      if (lVar13 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_70 = &PTR_FUN_04a36b50;
          local_68 = *plVar8;
          local_60 = (uint *)0x0;
          uVar5 = FUN_0277d6c4(&local_68);
          if (*(long *)puVar4 == 0) {
LAB_01fbcd80:
            local_74 = 0xbc;
            local_90 = (undefined *)CONCAT44(local_90._4_4_,0x17);
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_01fbcd80;
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(plVar8);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
               (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar10 == (uint *)0x0)) goto LAB_01fbcd80;
            uVar11 = 0;
            uVar5 = *puVar10;
            if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
              uVar11 = 0;
              if (*puVar12 != 0) {
                uVar5 = puVar12[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar13 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar5);
                    }
                    if (*puVar12 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326ec0) &&
                       (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar11 < 0xbd))
                    goto LAB_01fbcbe4;
                  }
                }
                uVar11 = 0;
              }
            }
LAB_01fbcbe4:
            if (uVar11 == 0x15) goto LAB_01fbcec8;
            local_74 = 0;
            local_90 = (undefined *)CONCAT44(local_90._4_4_,0x17);
            uVar5 = *puVar10;
            local_60 = puVar10;
            if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
              local_74 = 0;
              if (*puVar12 != 0) {
                uVar5 = puVar12[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar13 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar5);
                    }
                    if (*puVar12 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326ec0) &&
                       (local_74 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                       local_74 < 0xbd)) goto LAB_01fbcdac;
                  }
                }
                local_74 = 0;
              }
            }
          }
LAB_01fbcdac:
          if ((local_74 == (uint)local_90) ||
             ((uVar7 = FUN_01ae6020(&local_70), (uVar7 & 1) == 0 &&
              (iVar6 = FUN_01ae7550(&local_70), iVar6 - 1U < 6)))) goto LAB_01fbcec8;
        }
      }
    }
    uVar9 = 1;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01fbc9a0;
    local_60 = (uint *)0x0;
    local_68 = *param_2;
    local_70 = &PTR_FUN_04a36b50;
    uVar5 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar4 == 0) {
LAB_01fbc7f8:
      if (local_60 != (uint *)0x0) goto LAB_01fbc808;
      uVar5 = 0xbc;
      local_90 = (undefined *)CONCAT44(local_90._4_4_,0x17);
LAB_01fbc964:
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar5);
      if (uVar5 != (uint)local_90) {
        uVar7 = FUN_01ae6020(&local_70);
        if ((uVar7 & 1) == 0) {
          iVar6 = FUN_01ae7550(&local_70);
          local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar6);
          if (iVar6 - 1U < 6) goto LAB_01fbcec8;
        }
        goto LAB_01fbc9a0;
      }
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01fbc7f8;
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
         (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 == (uint *)0x0)) goto LAB_01fbc7f8;
      local_60 = puVar10;
LAB_01fbc808:
      uVar5 = *local_60;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_60 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_60 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar13 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)local_60 - lVar13) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar11 < 0xbd))
              goto LAB_01fbc894;
            }
          }
          uVar11 = 0;
        }
      }
LAB_01fbc894:
      if (uVar11 != 0x15) {
        uVar5 = 0;
        local_90 = (undefined *)CONCAT44(local_90._4_4_,0x17);
        uVar1 = *local_60;
        if ((uVar1 != 0) && (local_60 != (uint *)(ulong)uVar1)) {
          puVar10 = (uint *)((long)local_60 - (long)(ulong)uVar1);
          uVar5 = 0;
          if (*puVar10 != 0) {
            uVar5 = puVar10[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar13 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)local_60 - lVar13) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_01fbc964;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_01fbc964;
      }
    }
LAB_01fbcec8:
    uVar9 = 0;
  }
  return uVar9;
}

