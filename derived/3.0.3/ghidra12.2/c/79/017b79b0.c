
void FUN_017b79b0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined *local_e0;
  char *pcStack_d8;
  undefined4 local_d0;
  char local_cc [63];
  undefined1 local_8d;
  undefined1 local_4d;
  undefined *local_48;
  char *local_40;
  undefined1 local_38;
  byte local_37;
  undefined1 auStack_36 [6];
  
  if ((param_2 & 1) != 0) {
    FUN_00944ce0(*(long *)PTR_DAT_04bb27c8 + 0x28);
  }
  puVar1 = PTR_DAT_04bb2720;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  iVar7 = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar4 = FUN_006bd550(*puVar8,0);
      iVar7 = 0;
      if (iVar4 == 0x758f7eaf) {
        iVar7 = 0;
        if (*(long *)puVar1 != 0) {
          lVar10 = *(long *)(*(long *)puVar1 + 0x330);
          iVar7 = 0;
          if (lVar10 != 0) {
            iVar7 = *(int *)(lVar10 + 0x244);
          }
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xc) == iVar7) {
    pcStack_d8 = "IdrTourCounterDemo";
  }
  else {
    lVar10 = *(long *)puVar1;
    iVar7 = 0;
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x330) == 0) {
        iVar7 = 0;
      }
      else {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar4 = FUN_006bd550(*puVar8,0);
        iVar7 = 0;
        if (iVar4 == 0x758f7eaf) {
          iVar7 = 0;
          if (*(long *)puVar1 != 0) {
            lVar10 = *(long *)(*(long *)puVar1 + 0x330);
            iVar7 = 0;
            if (lVar10 != 0) {
              iVar7 = *(int *)(lVar10 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar3 + 0x10) != iVar7) {
      lVar10 = *(long *)puVar1;
      iVar7 = 0;
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x330) == 0) {
          iVar7 = 0;
        }
        else {
          puVar8 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          iVar7 = 0;
          if (iVar4 == 0x758f7eaf) {
            iVar7 = 0;
            if (*(long *)puVar1 != 0) {
              lVar10 = *(long *)(*(long *)puVar1 + 0x330);
              iVar7 = 0;
              if (lVar10 != 0) {
                iVar7 = *(int *)(lVar10 + 0x244);
              }
            }
          }
        }
      }
      puVar2 = PTR_DAT_04bb46b0;
      if (*(int *)(puVar3 + 0x14) == iVar7) {
        lVar10 = *(long *)PTR_DAT_04bb46b0;
        if (lVar10 == 0) {
LAB_017b7c78:
          uVar11 = 1;
        }
        else {
          puVar8 = *(undefined8 **)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x453) & 1) != 0) {
            if ((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) {
              lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
              if (lVar10 != 0) goto LAB_017b7c50;
            }
            goto LAB_017b7c78;
          }
          lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
          if (lVar10 == 0) goto LAB_017b7c78;
          lVar10 = lVar10 + 0x70;
LAB_017b7c50:
          if (*(long **)(lVar10 + 0x1a0b70) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar8 = (undefined8 *)**(long **)(lVar10 + 0x1a0b70);
            uVar9 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar8)();
            }
          }
          uVar11 = *(uint *)(*(long *)(lVar10 + 0x1a0b58) + *(long *)(lVar10 + 0x1a0b50));
          if (3 < uVar11) {
            uVar11 = 0;
          }
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x1a0b70) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x1a0b70) + 8),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
        }
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar11);
        if (uVar11 != 2) {
          lVar10 = *(long *)puVar2;
          if (lVar10 == 0) {
LAB_017b7ddc:
            uVar11 = 1;
          }
          else {
            puVar8 = *(undefined8 **)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
              lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
              if (lVar10 == 0) goto LAB_017b7ddc;
              lVar10 = lVar10 + 0x70;
            }
            else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
                    (lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar10 == 0))
            goto LAB_017b7ddc;
            if ((*(long **)(lVar10 + 0x1a0b70) == (long *)0x0) ||
               (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x1a0b70), puVar8 == (undefined8 *)0x0))
            {
              uVar5 = 1;
            }
            else {
              uVar5 = (**(code **)*puVar8)();
              uVar5 = uVar5 ^ 1;
            }
            uVar11 = *(uint *)(*(long *)(lVar10 + 0x1a0b58) + *(long *)(lVar10 + 0x1a0b50));
            if (3 < uVar11) {
              uVar11 = 0;
            }
            if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x1a0b70) != 0)) &&
               (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x1a0b70) + 8),
               puVar8 != (undefined8 *)0x0)) {
              (**(code **)*puVar8)();
            }
          }
          if (uVar11 != 3) {
            return;
          }
        }
        local_cc[0] = '\0';
        local_d0 = 0x40;
        lVar10 = 0;
        local_8d = 0;
        local_e0 = PTR_DAT_04bb2bc0 + 0x10;
        do {
          if (local_cc[lVar10] == '\0') goto LAB_017b7e60;
          if (local_cc[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_017b7e60;
          }
          if (local_cc[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_017b7e60;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_017b7e60:
        uVar11 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
        uVar5 = 10;
        if (0x35 < uVar11) {
          uVar5 = 0x3f - uVar11;
        }
        pcStack_d8 = local_cc;
        if (0 < (int)uVar5) {
          memcpy(local_cc + uVar11,"IdrMarket0",(ulong)uVar5);
          local_cc[(ulong)uVar5 + (ulong)uVar11] = '\0';
        }
        lVar10 = *(long *)puVar2;
        if (lVar10 == 0) {
LAB_017b7f14:
          uVar11 = 1;
        }
        else {
          puVar8 = *(undefined8 **)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
            lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
            if (lVar10 == 0) goto LAB_017b7f14;
            lVar10 = lVar10 + 0x70;
          }
          else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
                  (lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar10 == 0))
          goto LAB_017b7f14;
          if ((*(long **)(lVar10 + 0x1a0b70) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x1a0b70), puVar8 == (undefined8 *)0x0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)*puVar8)();
            uVar5 = uVar5 ^ 1;
          }
          uVar11 = *(uint *)(*(long *)(lVar10 + 0x1a0b58) + *(long *)(lVar10 + 0x1a0b50));
          if (3 < uVar11) {
            uVar11 = 0;
          }
          if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x1a0b70) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x1a0b70) + 8),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
        }
        local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar11);
LAB_017b7f1c:
        iVar7 = (int)local_48 + -1;
LAB_017b83c0:
        FUN_038d13f0(&local_e0,&DAT_040c7be9,iVar7);
      }
      else {
        lVar10 = *(long *)puVar1;
        iVar7 = 0;
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x330) == 0) {
            iVar7 = 0;
          }
          else {
            puVar8 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar4 = FUN_006bd550(*puVar8,0);
            iVar7 = 0;
            if (iVar4 == 0x758f7eaf) {
              iVar7 = 0;
              if (*(long *)puVar1 != 0) {
                lVar10 = *(long *)(*(long *)puVar1 + 0x330);
                iVar7 = 0;
                if (lVar10 != 0) {
                  iVar7 = *(int *)(lVar10 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar3 + 0x8c) == iVar7) {
          local_cc[0] = '\0';
          local_d0 = 0x80;
          lVar10 = 0;
          local_4d = 0;
          local_e0 = PTR_DAT_04bb2d88 + 0x10;
          do {
            if (local_cc[lVar10] == '\0') goto LAB_017b7f6c;
            if (local_cc[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_017b7f6c;
            }
            if (local_cc[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_017b7f6c;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_017b7f6c:
          uVar11 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
          uVar5 = 0xd;
          if (0x72 < uVar11) {
            uVar5 = 0x7f - uVar11;
          }
          pcStack_d8 = local_cc;
          if (0 < (int)uVar5) {
            memcpy(local_cc + uVar11,"IdrMuseumArt_",(ulong)uVar5);
            local_cc[(ulong)uVar5 + (ulong)uVar11] = '\0';
          }
          lVar10 = *(long *)puVar1;
          if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
LAB_017b800c:
            iVar7 = 0;
          }
          else {
            puVar8 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar4 = FUN_006bd550(*puVar8,0);
            iVar7 = 0;
            if (iVar4 == 0x758f7eaf) {
              if ((*(long *)puVar1 == 0) ||
                 (lVar10 = *(long *)(*(long *)puVar1 + 0x330), lVar10 == 0)) goto LAB_017b800c;
              iVar7 = *(int *)(lVar10 + 0x248);
            }
          }
          goto LAB_017b83c0;
        }
        lVar10 = *(long *)puVar1;
        iVar7 = 0;
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x330) == 0) {
            iVar7 = 0;
          }
          else {
            puVar8 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar4 = FUN_006bd550(*puVar8,0);
            iVar7 = 0;
            if (iVar4 == 0x758f7eaf) {
              iVar7 = 0;
              if (*(long *)puVar1 != 0) {
                lVar10 = *(long *)(*(long *)puVar1 + 0x330);
                iVar7 = 0;
                if (lVar10 != 0) {
                  iVar7 = *(int *)(lVar10 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar3 + 0x18) == iVar7) {
          local_cc[0] = '\0';
          local_d0 = 0x40;
          lVar10 = 0;
          local_8d = 0;
          local_e0 = PTR_DAT_04bb2bc0 + 0x10;
          do {
            if (local_cc[lVar10] == '\0') goto LAB_017b8170;
            if (local_cc[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_017b8170;
            }
            if (local_cc[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_017b8170;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_017b8170:
          uVar11 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
          uVar5 = 0xd;
          if (0x32 < uVar11) {
            uVar5 = 0x3f - uVar11;
          }
          pcStack_d8 = local_cc;
          if (0 < (int)uVar5) {
            memcpy(local_cc + uVar11,"IdrMuseumEnt0",(ulong)uVar5);
            local_cc[(ulong)uVar5 + (ulong)uVar11] = '\0';
          }
          lVar10 = *(long *)PTR_DAT_04bb46b0;
          if (lVar10 == 0) {
LAB_017b823c:
            uVar11 = 2;
          }
          else {
            puVar8 = *(undefined8 **)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
              lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
              if (lVar10 == 0) goto LAB_017b823c;
              lVar10 = lVar10 + 0x70;
            }
            else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
                    (lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar10 == 0))
            goto LAB_017b823c;
            local_40 = (char *)(lVar10 + 0x1bf190);
            local_38 = 1;
            if (*(long **)(lVar10 + 0x1bf1b8) == (long *)0x0) {
              local_37 = 0;
            }
            else {
              puVar8 = (undefined8 *)**(long **)(lVar10 + 0x1bf1b8);
              local_37 = 0;
              if (puVar8 != (undefined8 *)0x0) {
                local_37 = (**(code **)*puVar8)();
              }
            }
            local_37 = local_37 & 1;
            local_48 = PTR_DAT_04bb64a8 + 0x10;
            uVar11 = *(uint *)(*(long *)(lVar10 + 0x1bf1a0) + *(long *)(lVar10 + 0x1bf198));
            if (5 < uVar11) {
              uVar11 = 0;
            }
            FUN_02640184(&local_48);
          }
          local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar11);
          if (4 < (int)uVar11) {
            uVar11 = 5;
          }
          iVar7 = uVar11 - 2;
          goto LAB_017b83c0;
        }
        lVar10 = *(long *)puVar1;
        iVar7 = 0;
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x330) == 0) {
            iVar7 = 0;
          }
          else {
            puVar8 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar4 = FUN_006bd550(*puVar8,0);
            iVar7 = 0;
            if (iVar4 == 0x758f7eaf) {
              iVar7 = 0;
              if (*(long *)puVar1 != 0) {
                lVar10 = *(long *)(*(long *)puVar1 + 0x330);
                iVar7 = 0;
                if (lVar10 != 0) {
                  iVar7 = *(int *)(lVar10 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar3 + 0x1c) != iVar7) {
          iVar7 = FUN_02917290();
          if (*(int *)(puVar3 + 0x20) == iVar7) {
            local_e0 = PTR_DAT_04bb2d88 + 0x10;
            local_40 = "IdrMuseumFossil_";
LAB_017b8324:
            pcStack_d8 = local_cc;
            local_4d = 0;
            local_cc[0] = '\0';
            local_d0 = 0x80;
            local_48 = PTR_DAT_04bb2020 + 0x10;
            FUN_00958800(&local_e0,&local_48,0xffffffff);
            iVar7 = FUN_02917204();
            goto LAB_017b83c0;
          }
          iVar7 = FUN_02917290();
          if (*(int *)(puVar3 + 0x24) == iVar7) {
            local_e0 = PTR_DAT_04bb2d88 + 0x10;
            local_40 = "IdrMuseumInsect_";
            goto LAB_017b8324;
          }
          iVar7 = FUN_02917290();
          if (*(int *)(puVar3 + 0xc0) == iVar7) {
            pcStack_d8 = "IdrMuseumCafe00";
            goto LAB_017b7b10;
          }
          iVar7 = FUN_02917290();
          if (*(int *)(puVar3 + 0x28) == iVar7) {
            local_40 = "IdrOffice0";
          }
          else {
            iVar7 = FUN_02917290();
            if (*(int *)(puVar3 + 0x2c) != iVar7) {
              iVar7 = FUN_02917290();
              puVar1 = PTR_DAT_04bb27c8;
              if (*(int *)(puVar3 + 0x30) == iVar7) {
                FUN_009471c0(*(long *)PTR_DAT_04bb27c8 + 0x28,auStack_36 + 6,0);
                uVar9 = FUN_0273f0a0(auStack_36 + 6);
                if ((uVar9 & 1) != 0) {
                  FUN_009471c0(*(long *)puVar1 + 0x28,auStack_36 + 6,0);
                }
                return;
              }
              iVar7 = FUN_02917290();
              if (*(int *)(puVar3 + 0x90) == iVar7) {
                pcStack_d8 = "IdrTsunekichi00";
              }
              else {
                iVar7 = FUN_02917290();
                if (*(int *)(puVar3 + 0x34) != iVar7) {
                  iVar7 = FUN_02917290();
                  if ((*(int *)(puVar3 + 0x84) == iVar7) ||
                     (iVar7 = FUN_02917290(), *(int *)(puVar3 + 0xbc) == iVar7)) {
                    local_e0 = PTR_DAT_04bb2018 + 0x10;
                    pcStack_d8 = (char *)0x1000000010;
                    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x19);
                    uVar9 = FUN_0290cbcc(&local_48);
                    puVar1 = PTR_DAT_04bb27c8;
                    puVar8 = &DAT_05292300;
                    if ((uVar9 & 1) == 0) {
                      puVar8 = &DAT_05292310;
                    }
                    FUN_00947730(0,*(long *)PTR_DAT_04bb27c8 + 0x28,puVar8,&local_e0,0,0);
                    FUN_009476e0(*(long *)puVar1 + 0x28);
                    return;
                  }
                  iVar7 = FUN_02917290();
                  if (*(int *)(puVar3 + 0x94) == iVar7) {
                    uVar9 = FUN_035a3380();
                    lVar10 = *(long *)PTR_DAT_04bb27c8 + 0x28;
                    if ((uVar9 & 1) == 0) {
                      pcStack_d8 = "IdrDream00";
                    }
                    else {
                      pcStack_d8 = "IdrDream01";
                    }
                    local_e0 = PTR_DAT_04bb2020 + 0x10;
                    goto LAB_017b83e0;
                  }
                  iVar7 = FUN_02917290();
                  if (*(int *)(puVar3 + 0xa0) != iVar7) {
                    uVar9 = FUN_0180c020();
                    if ((uVar9 & 1) == 0) {
                      local_e0._0_4_ = 6;
                      uVar9 = FUN_0290cbcc(&local_e0);
                      if ((uVar9 & 1) == 0) {
                        local_e0._0_4_ = 7;
                        uVar9 = FUN_0290cbcc(&local_e0);
                        if ((uVar9 & 1) == 0) {
                          local_e0._0_4_ = 0x15;
                          uVar9 = FUN_0290cbcc(&local_e0);
                          if ((((uVar9 & 1) == 0) && (uVar9 = FUN_0180c6f0(), (uVar9 & 1) == 0)) &&
                             ((uVar9 = FUN_0180b340(), (uVar9 & 1) == 0 &&
                              (((uVar9 = FUN_0180b3e0(), (uVar9 & 1) == 0 &&
                                (uVar9 = FUN_0180b660(), (uVar9 & 1) == 0)) &&
                               (uVar9 = FUN_0180b700(), (uVar9 & 1) == 0)))))) {
                            FUN_00961ef0(0,*(undefined8 *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),0);
                            return;
                          }
                        }
                      }
                      FUN_017eacdc(param_1 + 0xda0,param_2 & 1);
                      return;
                    }
                    local_48 = PTR_DAT_04bb2020 + 0x10;
                    local_40 = "IdrHotelEnt00";
                    FUN_017b8800(&local_e0,&local_48);
                    goto LAB_017b83d0;
                  }
                  local_e0 = PTR_DAT_04bb2d88 + 0x10;
                  local_40 = "IdrWherearenOffice00_";
                  goto LAB_017b8324;
                }
                pcStack_d8 = "IdrTailor00";
              }
              goto LAB_017b7b10;
            }
            local_40 = "IdrOfficeDemo0";
          }
          local_e0 = PTR_DAT_04bb2bc0 + 0x10;
          local_8d = 0;
          local_cc[0] = '\0';
          local_d0 = 0x40;
          pcStack_d8 = local_cc;
          local_48 = PTR_DAT_04bb2020 + 0x10;
          FUN_008aa0a0(&local_e0,&local_48,0xffffffff);
          local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
          goto LAB_017b7f1c;
        }
        local_4d = 0;
        local_d0 = 0x80;
        pcStack_d8 = local_cc;
        local_cc[0] = '\0';
        local_e0 = PTR_DAT_04bb2d88 + 0x10;
        uVar6 = FUN_02917204();
        FUN_01810570(&local_e0,uVar6);
      }
LAB_017b83d0:
      lVar10 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      goto LAB_017b83e0;
    }
    pcStack_d8 = "IdrAirPort00";
  }
LAB_017b7b10:
  lVar10 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_e0 = PTR_DAT_04bb2020 + 0x10;
LAB_017b83e0:
  FUN_009471c0(lVar10,&local_e0,0);
  return;
}

