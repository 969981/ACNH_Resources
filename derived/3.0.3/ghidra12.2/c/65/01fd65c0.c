
uint FUN_01fd65c0(long param_1,float *param_2,short *param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  uint *puVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  char *pcStack_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  uint local_48;
  uint local_44;
  
  lVar11 = *(long *)PTR_DAT_04bb4e28;
  if (lVar11 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(lVar11 + 0xe0);
  local_48 = 0;
  if (uVar6 != 0) {
    lVar8 = 0;
    lVar12 = (long)(int)uVar6 << 3;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + 0x230) ==
          *(int *)(*(long *)(*(long *)(lVar11 + 0xe8) + lVar8 * 8) + 8)) {
        if ((uint)lVar8 < uVar6) {
          lVar11 = *(long *)(*(long *)(lVar11 + 0xe8) + lVar8 * 8);
        }
        else {
          lVar11 = 0;
        }
        local_48 = DAT_05abbc50;
        if (DAT_05abbc50 == *(uint *)(lVar11 + 0xe4)) goto LAB_01fd669c;
        local_a0 = PTR_DAT_04bb2020 + 0x10;
        pcStack_98 = "GetCookingRecipeToday";
        iVar5 = FUN_02758850(&local_a0);
        if (iVar5 == 0) {
          if (*(int *)(lVar11 + 0xd8) == 0xd) {
            local_48 = 0x20;
            goto LAB_01fd669c;
          }
          if (*(int *)(lVar11 + 0xd8) == 0xe) {
            local_48 = 0x21;
            goto LAB_01fd669c;
          }
        }
        local_48 = *(uint *)(lVar11 + 0xe4);
        goto LAB_01fd669c;
      }
      lVar8 = lVar8 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
    local_48 = 0;
  }
LAB_01fd669c:
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb4960;
  if (lVar11 != 0) {
    if ((int)*(uint *)(lVar11 + 0x5c0) < 1) {
      if ((((*(long *)(lVar11 + 0x4b0) != 0) &&
           (puVar16 = *(uint **)(*(long *)(lVar11 + 0x4b0) + 8), puVar16 != (uint *)0x0)) &&
          ((*(uint *)(lVar11 + 0x4c8) <= local_48 ||
           (*(char *)(*(long *)(lVar11 + 0x4d0) + (long)(int)local_48) != '\0')))) &&
         (((local_48 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
        iVar5 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        puVar16 = (uint *)((ulong)(puVar16[1] * local_48 + (uint)(ushort)puVar16[2] * 8 + iVar5) +
                          (long)puVar16);
        goto joined_r0x01fd689c;
      }
    }
    else if (local_48 < *(uint *)(lVar11 + 0x5c0)) {
      uVar6 = local_48;
      if (*(uint *)(lVar11 + 0x5b0) <= local_48) {
        uVar6 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar11 + 0x5b8) + (ulong)uVar6 * 8);
joined_r0x01fd689c:
      if (puVar16 != (uint *)0x0) {
        uVar6 = *puVar16;
        if (uVar6 == 0 || puVar16 == (uint *)(ulong)uVar6) {
LAB_01fd68a4:
          local_68 = 0;
          local_78 = PTR_DAT_04bc0510 + 0x10;
          local_70 = *(undefined4 *)param_3;
          uStack_6c = *(undefined4 *)(param_3 + 2);
          lVar11 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              FUN_0277d6c4(param_3);
            }
          }
        }
        else {
          puVar9 = (uint *)((long)puVar16 - (long)(ulong)uVar6);
          if (((*puVar9 == 0) || (uVar6 = puVar9[1], uVar6 == 0)) || ((ulong)(ushort)puVar9[2] == 0)
             ) goto LAB_01fd68a4;
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 == 0) goto LAB_01fd68a4;
          uVar1 = 0;
          if ((ulong)uVar6 != 0) {
            uVar1 = (uint)((ulong)((long)puVar16 - lVar11) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (*(uint *)PTR_DAT_04bc23d0 <= uVar1) goto LAB_01fd68a4;
          local_68 = 0;
          uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar1 * 2);
          local_78 = PTR_DAT_04bc0510 + 0x10;
          local_70 = *(undefined4 *)param_3;
          uStack_6c = *(undefined4 *)(param_3 + 2);
          lVar11 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(param_3);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8), lVar11 != 0)
                 ) {
                local_68 = lVar11;
              }
            }
          }
          if (0xc < uVar2) goto LAB_01fd6918;
          if (uVar2 == 8) {
            local_a0 = PTR_DAT_04bbc1a0 + 0x10;
            pcStack_98 = PTR_DAT_04bb2010 + 0x10;
            lVar11 = *(long *)PTR_DAT_04bb5ce0;
            if (lVar11 == 0) {
              local_80 = 0;
              iStack_7c = 0;
              iVar10 = 0x10;
              iVar5 = 0x10;
            }
            else {
              local_80 = *(int *)(lVar11 + 0xd88);
              iStack_7c = *(int *)(lVar11 + 0xd8c);
              iVar5 = *(int *)(lVar11 + 0xd98);
              iVar10 = *(int *)(lVar11 + 0xd9c);
            }
            local_90 = local_80;
            if (iVar5 <= local_80) {
              local_90 = iVar5;
            }
            if (local_80 <= iVar5) {
              local_80 = iVar5;
            }
            iStack_8c = iStack_7c;
            if (iVar10 <= iStack_7c) {
              iStack_8c = iVar10;
            }
            if (iStack_7c <= iVar10) {
              iStack_7c = iVar10;
            }
            local_a8 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
            local_88 = pcStack_98;
            uVar6 = FUN_021fead0(&local_44,&local_a4,&local_a8,&local_a0);
            if ((param_2 != (float *)0x0) && ((uVar6 & 1) != 0)) {
              *param_2 = (float)(int)local_44 * 5.0;
              param_2[2] = (float)(int)local_a4 * 5.0;
            }
            goto LAB_01fd6ccc;
          }
          if (uVar2 == 10) {
            uVar7 = FUN_01ae9e0c(&local_78);
            if ((uVar7 & 1) != 0) goto LAB_01fd6918;
            goto LAB_01fd6cc8;
          }
          if ((uVar2 == 9) && (uVar7 = FUN_01ae91b0(&local_78), (uVar7 & 1) == 0))
          goto LAB_01fd6cc8;
        }
LAB_01fd6918:
        FUN_01fd6d50(&local_a0,&local_48);
        if ((char)local_a0 == '\0') {
LAB_01fd6bac:
          if (local_48 == 0x10) {
LAB_01fd6bc8:
            uVar7 = FUN_01fd595c(param_5,param_3);
joined_r0x01fd6cc4:
            if ((uVar7 & 1) == 0) goto LAB_01fd6cc8;
          }
          else {
            if (local_48 == 0x2b) {
              uVar7 = FUN_01fd6240(param_3);
              goto joined_r0x01fd6cc4;
            }
            if (local_48 == 0x16) goto LAB_01fd6bc8;
          }
          puVar9 = (uint *)((long)puVar16 - (ulong)*puVar16);
          if ((((*puVar16 == 0) || (puVar9 == (uint *)0x0)) || (*puVar9 == 0)) ||
             ((uVar6 = puVar9[1], uVar6 == 0 || ((ulong)(ushort)puVar9[2] == 0)))) {
LAB_01fd6c84:
            local_44 = 0;
            puVar16 = &local_44;
            if (*param_4 != 0) {
              puVar16 = param_4;
            }
            param_4 = puVar16;
          }
          else {
            lVar11 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar11 == 0) goto LAB_01fd6c84;
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar16 - lVar11) / (ulong)uVar6);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (*(uint *)PTR_DAT_04bc23d8 <= uVar1) goto LAB_01fd6c84;
            uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc23d8 + 8) + (long)(int)uVar1 * 2);
            local_44 = (uint)uVar2;
            if (8 < local_44) goto LAB_01fd6c84;
            if (*param_4 == 0) {
LAB_01fd6c7c:
              param_4 = &local_44;
            }
            else {
              if (uVar2 == 0) goto LAB_01fd6c98;
              uVar6 = *param_4;
              if (uVar6 == local_44) goto LAB_01fd6c7c;
              if (uVar6 == 1) {
                if (local_44 - 5 < 2) goto LAB_01fd6c7c;
              }
              else if (((local_44 != 1) || (1 < uVar6 - 5)) && ((uVar6 == 7 && (local_44 != 2))))
              goto LAB_01fd6c7c;
            }
          }
LAB_01fd6c98:
          local_a4 = *param_4;
          uVar6 = FUN_01fa84e8(param_1,param_2,param_3,&local_a4,param_5);
          goto LAB_01fd6ccc;
        }
        lVar11 = *(long *)PTR_DAT_04bb4970;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) {
          uVar6 = 0;
          if ((*(long *)(*(long *)(lVar11 + 0xb0) + 8) == 0) || (*param_3 == -2)) goto LAB_01fd6ccc;
          uVar6 = FUN_0277d6c4(param_3);
          puVar4 = PTR_DAT_04bb7ea0;
          puVar3 = PTR_DAT_04bb7e98;
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
             (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar9 != (uint *)0x0)) {
            local_44 = local_a0._4_4_;
            if (*puVar9 != 0) {
              cVar13 = *PTR_DAT_04bb7e98;
              do {
                if (cVar13 == '\0') {
                  cVar13 = '\x01';
                  *(undefined8 *)puVar4 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                  *puVar3 = 1;
                  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0xa8) = 0xffffffffffffffff;
                }
                else {
                  uVar6 = *(uint *)(puVar4 + 0xa8);
                  if (-1 < (int)uVar6) {
                    if ((ulong)uVar6 + (long)puVar9 != 0) {
                      uVar1 = local_a0._4_4_ + 7;
                      if (-1 < (long)local_a0) {
                        uVar1 = local_a0._4_4_;
                      }
                      if ((*(byte *)((ulong)uVar6 + (long)puVar9 + (ulong)(uint)((int)uVar1 >> 3))
                           >> (ulong)(local_a0._4_4_ & 7) & 1) != 0) goto LAB_01fd6bac;
                    }
                    break;
                  }
                  if (uVar6 != 0xffffffff) break;
                }
                puVar14 = (uint *)(ulong)*puVar9;
                if ((*puVar9 == 0) || (puVar9 == puVar14)) break;
                lVar11 = 0xc;
                if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar9 + (lVar11 - (long)puVar14);
                if (lVar11 == 0) break;
                uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
                *(undefined4 *)(puVar4 + 0xa8) = 0xfffffffe;
                if (uVar7 == 0) break;
                piVar15 = (int *)(lVar11 + 4);
                while (piVar15[-1] != 0x3b8583f3) {
                  piVar15 = piVar15 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) goto LAB_01fd6cc8;
                }
                iVar5 = 0;
                if (*piVar15 != -1) {
                  iVar5 = *piVar15;
                }
                *(int *)(puVar4 + 0xa8) = iVar5;
                if (*puVar9 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_01fd6cc8:
  uVar6 = 0;
LAB_01fd6ccc:
  return uVar6 & 1;
}

