
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03685bc0(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined *local_4d8;
  undefined1 *local_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4 [7];
  undefined1 local_4bd;
  undefined *local_4b8;
  undefined1 *local_4b0;
  int local_4a8;
  undefined1 local_4a4 [15];
  undefined1 local_495;
  undefined4 local_490;
  uint uStack_48c;
  undefined4 local_488;
  undefined8 local_480;
  long *local_478;
  undefined8 ****local_470;
  undefined8 ****local_468;
  undefined8 ****local_460 [17];
  undefined8 ****local_3d8 [17];
  undefined8 ****local_350 [17];
  undefined8 ***local_2c8 [17];
  undefined8 **local_240 [17];
  undefined8 *local_1b8 [17];
  undefined8 local_130 [17];
  long local_a8 [7];
  int local_6c;
  
  local_470 = local_460;
  local_460[0] = local_3d8;
  local_130[0] = 0;
  local_350[0] = local_2c8;
  local_3d8[0] = local_350;
  local_240[0] = local_1b8;
  local_2c8[0] = local_240;
  local_1b8[0] = local_130;
  local_480 = 0;
  local_478 = (long *)0x0;
  if (local_a8 != (long *)0x0) {
    local_480 = 0x700000000;
    local_478 = local_a8;
  }
  local_468 = local_470;
  local_6c = param_2;
  FUN_03686660(&local_480,param_2);
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar9 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar9 = *(int *)(puVar13 + 7);
  if (local_6c == 0) {
    if (((iVar9 == -0x7975b8e8) || (iVar9 == -0x17df00c3)) || (iVar9 == -0x3e092032)) {
      if ((int)local_480 != 0) {
        plVar4 = local_478 + (int)local_480;
        puVar1 = PTR_DAT_04bb35a0 + 0x10;
        puVar2 = PTR_DAT_04bb2ab0 + 0x10;
        puVar3 = PTR_DAT_04bb3768 + 0x10;
        plVar17 = local_478;
        do {
          lVar11 = *plVar17;
          local_495 = 0;
          local_4a8 = 0x10;
          local_4a4[0] = 0;
          local_490 = 0;
          local_488 = 0;
          plVar16 = (long *)(lVar11 + 8);
          local_4b8 = puVar2;
          local_4b0 = local_4a4;
          (**(code **)(*plVar16 + 0x18))(plVar16);
          puVar15 = *(undefined1 **)(lVar11 + 0x10);
          if (local_4a4 != puVar15) {
            (**(code **)(*(long *)(lVar11 + 8) + 0x18))(plVar16);
            lVar12 = 0;
            do {
              if (*(char *)(*(long *)(lVar11 + 0x10) + lVar12) == '\0') goto LAB_03686050;
              lVar5 = *(long *)(lVar11 + 0x10) + lVar12;
              if (*(char *)(lVar5 + 1) == '\0') {
                lVar12 = lVar12 + 1;
                goto LAB_03686050;
              }
              if (*(char *)(lVar5 + 2) == '\0') {
                lVar12 = lVar12 + 2;
                goto LAB_03686050;
              }
              lVar12 = lVar12 + 3;
            } while (lVar12 != 0x80001);
            lVar12 = 0;
LAB_03686050:
            iVar9 = (int)lVar12;
            if (local_4a8 <= (int)lVar12) {
              iVar9 = local_4a8 + -1;
            }
            memcpy(local_4a4,puVar15,(long)iVar9);
            local_4a4[iVar9] = 0;
          }
          bVar6 = *(byte *)(lVar11 + 0x48) >> 4;
          uStack_48c = CONCAT31(uStack_48c._1_3_,bVar6) & 0xffffff01;
          if (*(int *)(lVar11 + 0x44) == 2) {
            local_490 = 0;
          }
          else if ((bVar6 & 1) == 0) {
            if (*(long *)PTR_DAT_04bb27f8 != 0) {
              local_4bd = 0;
              local_4c4[0] = 0;
              local_4c8 = 8;
              local_4d8 = puVar3;
              local_4d0 = local_4c4;
              if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
                  ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
                 ((*(long *)PTR_DAT_04bc1530 == 0 ||
                  (lVar11 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar11 == 0)))) {
                uVar14 = *(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
              }
              else if ((*(long **)(lVar11 + 0x60) == (long *)0x0) ||
                      (puVar13 = (undefined8 *)**(long **)(lVar11 + 0x60),
                      puVar13 == (undefined8 *)0x0)) {
                uVar14 = *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
              }
              else {
                uVar10 = (**(code **)*puVar13)();
                uVar14 = *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
                if ((uVar10 & 1) != 0) {
                  if (*(long *)(lVar11 + 0x60) != 0) {
                    puVar13 = *(undefined8 **)(*(long *)(lVar11 + 0x60) + 8);
                    if (puVar13 != (undefined8 *)0x0) {
                      (**(code **)*puVar13)();
                    }
                  }
                }
              }
              FUN_0376b510(&local_4d8,uVar14);
              (**(code **)(local_4b8 + 0x18))(&local_4b8);
              (**(code **)(local_4b8 + 0x18))(&local_4b8);
              puVar15 = local_4b0;
              (**(code **)(local_4d8 + 0x18))(&local_4d8);
              if (puVar15 == local_4d0) {
LAB_03686224:
                local_490 = 1;
                goto LAB_03686230;
              }
              uVar10 = 0;
              bVar8 = true;
              do {
                if (local_4b0[uVar10] != local_4d0[uVar10]) break;
                if (local_4b0[uVar10] == '\0') {
                  if (bVar8) goto LAB_03686224;
                  break;
                }
                if (local_4b0[uVar10 + 1] != local_4d0[uVar10 + 1]) break;
                if (local_4b0[uVar10 + 1] == '\0') goto LAB_03686224;
                if (local_4b0[uVar10 + 2] != local_4d0[uVar10 + 2]) break;
                if (local_4b0[uVar10 + 2] == '\0') goto LAB_03686224;
                bVar8 = uVar10 < 0x7fffe;
                uVar10 = uVar10 + 3;
              } while (uVar10 != 0x80001);
            }
            local_490 = 2;
          }
          else {
            local_490 = 3;
          }
LAB_03686230:
          local_488 = 0;
          if (*param_1 < param_1[1]) {
            plVar16 = *(long **)(param_1 + 4);
            if (plVar16 != (long *)0x0) {
              *(long *)(param_1 + 4) = *plVar16;
            }
            puVar15 = (undefined1 *)((long)plVar16 + 0x14);
            *(undefined1 *)((long)plVar16 + 0x23) = 0;
            *(undefined4 *)(plVar16 + 2) = 0x10;
            *plVar16 = (long)puVar1;
            plVar16[1] = (long)puVar15;
            (**(code **)(local_4b8 + 0x18))(&local_4b8);
            puVar7 = local_4b0;
            if (puVar15 != local_4b0) {
              (**(code **)(local_4b8 + 0x18))(&local_4b8);
              lVar11 = 0;
              do {
                if (local_4b0[lVar11] == '\0') goto LAB_036862dc;
                if (local_4b0[lVar11 + 1] == '\0') {
                  lVar11 = lVar11 + 1;
                  goto LAB_036862dc;
                }
                if (local_4b0[lVar11 + 2] == '\0') {
                  lVar11 = lVar11 + 2;
                  goto LAB_036862dc;
                }
                lVar11 = lVar11 + 3;
              } while (lVar11 != 0x80001);
              lVar11 = 0;
LAB_036862dc:
              iVar9 = (int)lVar11;
              if ((int)plVar16[2] <= (int)lVar11) {
                iVar9 = (int)plVar16[2] + -1;
              }
              memcpy(puVar15,puVar7,(long)iVar9);
              puVar15[iVar9] = 0;
            }
            *plVar16 = (long)(PTR_DAT_04bb2ab0 + 0x10);
            *(undefined4 *)(plVar16 + 6) = local_488;
            plVar16[5] = CONCAT44(uStack_48c,local_490);
            if (*param_1 < param_1[1]) {
              *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar16;
              *param_1 = *param_1 + 1;
            }
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar4);
      }
    }
    else if ((((((((DAT_05ac0a90 == iVar9) || (DAT_05ac0aa0 == iVar9)) || (DAT_05ac0ab0 == iVar9))
                || ((DAT_05ac0ac0 == iVar9 || (DAT_05ac0ad0 == iVar9)))) ||
               ((DAT_05ac0ae0 == iVar9 || ((DAT_05ac0af0 == iVar9 || (DAT_05ac0b00 == iVar9)))))) ||
              (DAT_05ac0b10 == iVar9)) || (DAT_05ac0b20 == iVar9)) && ((int)local_480 != 0)) {
      plVar4 = local_478 + (int)local_480;
      puVar1 = PTR_DAT_04bb2ab0 + 0x10;
      puVar2 = PTR_DAT_04bb35a0 + 0x10;
      plVar17 = local_478;
      do {
        lVar11 = *plVar17;
        local_495 = 0;
        local_4a8 = 0x10;
        local_4a4[0] = 0;
        local_490 = 0;
        local_488 = 0;
        plVar16 = (long *)(lVar11 + 8);
        local_4b8 = puVar1;
        local_4b0 = local_4a4;
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puVar15 = *(undefined1 **)(lVar11 + 0x10);
        if (local_4a4 != puVar15) {
          (**(code **)(*(long *)(lVar11 + 8) + 0x18))(plVar16);
          lVar12 = 0;
          do {
            if (*(char *)(*(long *)(lVar11 + 0x10) + lVar12) == '\0') goto LAB_036864d0;
            lVar5 = *(long *)(lVar11 + 0x10) + lVar12;
            if (*(char *)(lVar5 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_036864d0;
            }
            if (*(char *)(lVar5 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_036864d0;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_036864d0:
          iVar9 = (int)lVar12;
          if (local_4a8 <= (int)lVar12) {
            iVar9 = local_4a8 + -1;
          }
          memcpy(local_4a4,puVar15,(long)iVar9);
          local_4a4[iVar9] = 0;
        }
        uStack_48c = CONCAT31(uStack_48c._1_3_,*(byte *)(lVar11 + 0x48) >> 4) & 0xffffff01;
        local_488 = *(undefined4 *)(lVar11 + 0x30);
        local_490 = 0;
        if (*(int *)(lVar11 + 0x44) != 2) {
          local_490 = 3;
        }
        if (*param_1 < param_1[1]) {
          plVar16 = *(long **)(param_1 + 4);
          if (plVar16 != (long *)0x0) {
            *(long *)(param_1 + 4) = *plVar16;
          }
          puVar15 = (undefined1 *)((long)plVar16 + 0x14);
          *(undefined1 *)((long)plVar16 + 0x23) = 0;
          *(undefined4 *)(plVar16 + 2) = 0x10;
          *plVar16 = (long)puVar2;
          plVar16[1] = (long)puVar15;
          (**(code **)(local_4b8 + 0x18))(&local_4b8);
          puVar7 = local_4b0;
          if (puVar15 != local_4b0) {
            (**(code **)(local_4b8 + 0x18))(&local_4b8);
            lVar11 = 0;
            do {
              if (local_4b0[lVar11] == '\0') goto LAB_036865cc;
              if (local_4b0[lVar11 + 1] == '\0') {
                lVar11 = lVar11 + 1;
                goto LAB_036865cc;
              }
              if (local_4b0[lVar11 + 2] == '\0') {
                lVar11 = lVar11 + 2;
                goto LAB_036865cc;
              }
              lVar11 = lVar11 + 3;
            } while (lVar11 != 0x80001);
            lVar11 = 0;
LAB_036865cc:
            iVar9 = (int)lVar11;
            if ((int)plVar16[2] <= (int)lVar11) {
              iVar9 = (int)plVar16[2] + -1;
            }
            memcpy(puVar15,puVar7,(long)iVar9);
            puVar15[iVar9] = 0;
          }
          *plVar16 = (long)(PTR_DAT_04bb2ab0 + 0x10);
          *(undefined4 *)(plVar16 + 6) = local_488;
          plVar16[5] = CONCAT44(uStack_48c,local_490);
          if (*param_1 < param_1[1]) {
            *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar16;
            *param_1 = *param_1 + 1;
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar4);
    }
  }
  else if ((int)local_480 != 0) {
    plVar4 = local_478 + (int)local_480;
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    puVar2 = PTR_DAT_04bb35a0 + 0x10;
    plVar17 = local_478;
    do {
      lVar11 = *plVar17;
      local_495 = 0;
      local_4a8 = 0x10;
      local_4a4[0] = 0;
      local_490 = 0;
      local_488 = 0;
      plVar16 = (long *)(lVar11 + 8);
      local_4b8 = puVar1;
      local_4b0 = local_4a4;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puVar15 = *(undefined1 **)(lVar11 + 0x10);
      if (local_4a4 != puVar15) {
        (**(code **)(*(long *)(lVar11 + 8) + 0x18))(plVar16);
        lVar12 = 0;
        do {
          if (*(char *)(*(long *)(lVar11 + 0x10) + lVar12) == '\0') goto LAB_03685db0;
          lVar5 = *(long *)(lVar11 + 0x10) + lVar12;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_03685db0;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_03685db0;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_03685db0:
        iVar9 = (int)lVar12;
        if (local_4a8 <= (int)lVar12) {
          iVar9 = local_4a8 + -1;
        }
        memcpy(local_4a4,puVar15,(long)iVar9);
        local_4a4[iVar9] = 0;
      }
      uStack_48c = CONCAT31(uStack_48c._1_3_,*(byte *)(lVar11 + 0x48) >> 4) & 0xffffff01;
      local_488 = *(undefined4 *)(lVar11 + 0x30);
      local_490 = 0;
      if (*(int *)(lVar11 + 0x44) != 2) {
        local_490 = 3;
      }
      if (*param_1 < param_1[1]) {
        plVar16 = *(long **)(param_1 + 4);
        if (plVar16 != (long *)0x0) {
          *(long *)(param_1 + 4) = *plVar16;
        }
        puVar15 = (undefined1 *)((long)plVar16 + 0x14);
        *(undefined1 *)((long)plVar16 + 0x23) = 0;
        *(undefined4 *)(plVar16 + 2) = 0x10;
        *plVar16 = (long)puVar2;
        plVar16[1] = (long)puVar15;
        (**(code **)(local_4b8 + 0x18))(&local_4b8);
        puVar7 = local_4b0;
        if (puVar15 != local_4b0) {
          (**(code **)(local_4b8 + 0x18))(&local_4b8);
          lVar11 = 0;
          do {
            if (local_4b0[lVar11] == '\0') goto LAB_03685eac;
            if (local_4b0[lVar11 + 1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_03685eac;
            }
            if (local_4b0[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_03685eac;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_03685eac:
          iVar9 = (int)lVar11;
          if ((int)plVar16[2] <= (int)lVar11) {
            iVar9 = (int)plVar16[2] + -1;
          }
          memcpy(puVar15,puVar7,(long)iVar9);
          puVar15[iVar9] = 0;
        }
        *plVar16 = (long)(PTR_DAT_04bb2ab0 + 0x10);
        *(undefined4 *)(plVar16 + 6) = local_488;
        plVar16[5] = CONCAT44(uStack_48c,local_490);
        if (*param_1 < param_1[1]) {
          *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar16;
          *param_1 = *param_1 + 1;
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar4);
  }
  return;
}

