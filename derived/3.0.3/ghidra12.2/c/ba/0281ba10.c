
/* WARNING: Removing unreachable block (ram,0x0281be8c) */
/* WARNING: Removing unreachable block (ram,0x0281bc74) */
/* WARNING: Removing unreachable block (ram,0x0281bc6c) */
/* WARNING: Removing unreachable block (ram,0x0281be84) */

void FUN_0281ba10(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined *puVar4;
  void *__s;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  undefined **local_b0;
  undefined8 *puStack_a8;
  int *local_a0;
  int local_8c;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  
  puVar6 = PTR_DAT_04bb46b0;
  iVar5 = *param_1;
  if (iVar5 != 0) {
    iVar17 = 0;
    lVar15 = *(long *)(param_1 + 2);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bc43f8 + 0x10;
    do {
      bVar16 = false;
      local_8c = 0;
      piVar3 = (int *)(lVar15 + (long)iVar17 * 0x3c + 0x38);
      iVar7 = 0;
      do {
        lVar12 = *(long *)puVar6;
        local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar7);
        if (lVar12 != 0) {
          puVar13 = *(undefined8 **)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
            lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
            if (lVar12 != 0) {
              lVar12 = lVar12 + 0x70;
LAB_0281bb1c:
              if ((uint)local_88 < 8) {
                lVar14 = lVar12 + 0x119228 + ((ulong)local_88 & 0xffffffff) * 0xfa08;
                if (7 < (uint)local_88) {
                  lVar14 = lVar12 + 0x119228;
                }
                lVar12 = *(long *)(lVar14 + 0x28);
                if (lVar12 == 0) {
                  uVar8 = 0;
                }
                else {
                  if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
                    uVar8 = 0;
                    plVar9 = *(long **)(lVar12 + 0x20);
                  }
                  else {
                    uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
                    uVar8 = uVar8 & 0xffffffff;
                    if (*(long *)(lVar14 + 0x28) == 0) goto LAB_0281bba8;
                    plVar9 = *(long **)(*(long *)(lVar14 + 0x28) + 0x20);
                  }
                  if (plVar9 != (long *)0x0) {
                    local_88 = *(undefined **)(lVar14 + 8);
                    local_80 = *(char **)(lVar14 + 0x10);
                    local_78 = 0x28a28;
                    (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
                  }
                }
LAB_0281bba8:
                iVar18 = *piVar3;
                if ((iVar18 != -1) &&
                   ((lVar12 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8),
                    iVar18 == *(char *)(lVar12 + 0x289f8) || (iVar18 == *(char *)(lVar12 + 0x289f9))
                    ))) {
                  local_8c = iVar7;
                  FUN_02ade0d0(iVar7);
                  local_80 = (char *)((ulong)local_80 & 0xffffffff00000000);
                  local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
                  local_88 = puVar2;
                  uVar10 = FUN_02b674f0(&local_b0,iVar7);
                  if ((uVar10 & 1) != 0) {
                    local_80 = (char *)CONCAT44(local_80._4_4_,local_b0._0_4_);
                  }
                  FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_88,0x6622bd46);
                  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
                  puVar13 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar13 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  FUN_02a59b30(puVar13,&local_88);
                  if ((*(long *)(lVar14 + 0x28) != 0) &&
                     (plVar9 = *(long **)(*(long *)(lVar14 + 0x28) + 0x20), plVar9 != (long *)0x0))
                  {
                    local_88 = *(undefined **)(lVar14 + 8);
                    local_80 = *(char **)(lVar14 + 0x10);
                    local_78 = 0x28a28;
                    (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
                  }
                  __s = (void *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8));
                  memset(__s,0,0x28a28);
                  FUN_027f3760(__s);
                  bVar16 = true;
                }
                if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
                   (puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x18),
                   puVar13 != (undefined8 *)0x0)) {
                  (**(code **)*puVar13)();
                }
              }
            }
          }
          else if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
                  (lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar12 != 0))
          goto LAB_0281bb1c;
        }
        iVar18 = 8;
        if (iVar7 < 8) {
          iVar18 = iVar7 + 1;
        }
        iVar7 = iVar18;
      } while (iVar18 != 8);
      if (bVar16) {
        local_80 = "RcoMoveHouseReserved";
        local_88 = puVar1;
        iVar7 = FUN_0274ce10(piVar3,&local_88);
        if (iVar7 != 0) {
          puVar4 = PTR_DAT_04bb2020 + 0x10;
          local_80 = "RcoMoveHouseReserved";
          local_88 = puVar4;
          FUN_0274d104(piVar3,&local_88,0);
          local_80 = "RcoMoveReservedAnyone";
          local_88 = puVar4;
          FUN_0273f3c4(&local_88,0);
          local_80 = "RcoMoveReservedKind";
          local_88 = puVar4;
          FUN_0273f3c4(&local_88,0);
          lVar12 = *(long *)puVar6;
          if (lVar12 == 0) {
            return;
          }
          lVar12 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x30))();
          if (lVar12 == 0) {
            return;
          }
          plVar9 = (long *)(lVar12 + 0x27f538);
          lVar14 = *(long *)(lVar12 + 0x27f558);
          if (lVar14 == 0) {
            *(undefined4 *)(*(long *)(lVar12 + 0x27f540) + *plVar9) = 0xffffffff;
          }
          else {
            if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
              uVar8 = 0;
              plVar11 = *(long **)(lVar14 + 0x20);
joined_r0x0281bf2c:
              if (plVar11 != (long *)0x0) {
                local_88 = (undefined *)*plVar9;
                local_80 = *(char **)(lVar12 + 0x27f540);
                local_78 = 4;
                (**(code **)(*plVar11 + 0x20))(plVar11,&local_88);
              }
            }
            else {
              uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              uVar8 = uVar8 & 0xffffffff;
              if (*(long *)(lVar12 + 0x27f558) != 0) {
                plVar11 = *(long **)(*(long *)(lVar12 + 0x27f558) + 0x20);
                goto joined_r0x0281bf2c;
              }
            }
            *(undefined4 *)(*(long *)(lVar12 + 0x27f540) + *plVar9) = 0xffffffff;
            if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0x27f558) != 0)) &&
               (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x27f558) + 0x18),
               puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)();
            }
          }
        }
        local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
        puVar13 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar13 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        local_b0 = &PTR_FUN_04a91648;
        local_a0 = &local_8c;
        puStack_a8 = puVar13;
        if (puVar13[1] != 0) {
          plVar9 = (long *)(*(code *)**(undefined8 **)(puVar13[1] + 0x10))();
          iVar7 = (**(code **)(*plVar9 + 0x18))();
          if (0 < iVar7) {
            iVar18 = 0;
            do {
              FUN_01360490(&local_88,puVar13[1],iVar18);
              (*(code *)*local_b0)(&local_b0,&local_88);
              iVar18 = iVar18 + 1;
            } while (iVar7 != iVar18);
          }
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar5 != iVar17);
  }
  return;
}

