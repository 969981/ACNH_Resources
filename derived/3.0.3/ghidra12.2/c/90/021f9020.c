
/* WARNING: Type propagation algorithm not settling */

byte FUN_021f9020(int *param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  byte local_38 [4];
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bb46b0;
  local_34 = 0;
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 == 0) {
switchD_021f90b8_default:
    local_34 = 1;
    lVar10 = *(long *)puVar4;
    if (lVar10 != 0) {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
        if (lVar10 != 0) {
          lVar10 = lVar10 + 0x70;
LAB_021f9230:
          switch(local_34) {
          case 0:
            lVar9 = lVar10 + 0xe6c48;
            plVar12 = *(long **)(lVar10 + 0xe6c70);
            break;
          case 1:
            lVar9 = lVar10 + 0xe6cf0;
            plVar12 = *(long **)(lVar10 + 0xe6d18);
            break;
          case 2:
            lVar9 = lVar10 + 0xe6d60;
            plVar12 = *(long **)(lVar10 + 0xe6d88);
            break;
          case 3:
            lVar9 = lVar10 + 0xe6dd0;
            plVar12 = *(long **)(lVar10 + 0xe6df8);
            break;
          case 4:
            lVar9 = lVar10 + 0xe6e40;
            plVar12 = *(long **)(lVar10 + 0xe6e68);
            break;
          case 5:
            lVar9 = lVar10 + 0xe6eb0;
            plVar12 = *(long **)(lVar10 + 0xe6ed8);
            break;
          case 6:
            lVar9 = lVar10 + 0xe6f20;
            plVar12 = *(long **)(lVar10 + 0xe6f48);
            break;
          default:
            goto switchD_021f9250_default;
          }
          if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (*(code *)**(undefined8 **)*plVar12)();
            uVar8 = uVar8 & 0xffffffff;
          }
          piVar18 = (int *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
          if ((*(char *)((long)piVar18 + 0x2f) == '\x02') && (*param_1 == (int)(char)piVar18[0xb]))
          {
            bVar5 = *param_2;
            bVar13 = *PTR_DAT_04bb32e0;
            if (7 < bVar5) {
              bVar5 = 0xff;
            }
            if (7 < bVar13) {
              bVar13 = 0xff;
            }
            if (bVar5 == bVar13) {
LAB_021f934c:
              bVar5 = 1;
              goto joined_r0x021f9c4c;
            }
            local_34 = CONCAT31(local_34._1_3_,bVar5);
            lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_34,1);
            if (*(long **)(lVar10 + 0x17f68) == (long *)0x0) {
              uVar7 = 0;
            }
            else {
              puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17f68);
              uVar7 = 0;
              if (puVar11 != (undefined8 *)0x0) {
                uVar7 = (**(code **)*puVar11)();
              }
            }
            piVar1 = (int *)(*(long *)(lVar10 + 0x17f50) + *(long *)(lVar10 + 0x17f48));
            if (*piVar18 == *piVar1) {
              lVar14 = *(long *)(piVar1 + 1);
              lVar15 = *(long *)(piVar18 + 1);
              lVar16 = *(long *)(piVar1 + 3);
              lVar17 = *(long *)(piVar18 + 3);
              iVar2 = piVar1[5];
              iVar3 = piVar18[5];
              if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
                 (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
                 puVar11 != (undefined8 *)0x0)) {
                (**(code **)*puVar11)();
              }
              if ((lVar14 == lVar15 && lVar16 == lVar17) && iVar2 == iVar3) goto LAB_021f934c;
            }
            else if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
                    (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
                    puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            lVar10 = *(long *)puVar4;
            if (lVar10 != 0) {
              puVar11 = *(undefined8 **)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
                lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
                if (lVar10 != 0) {
                  lVar10 = lVar10 + 0x70;
LAB_021f94c0:
                  if ((*(long **)(lVar10 + 0xe6bc8) == (long *)0x0) ||
                     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0xe6bc8),
                     puVar11 == (undefined8 *)0x0)) {
                    uVar6 = 1;
                  }
                  else {
                    uVar6 = (**(code **)*puVar11)();
                    uVar6 = uVar6 ^ 1;
                  }
                  local_38[0] = *param_2;
                  if (7 < local_38[0]) {
                    local_38[0] = 0xff;
                  }
                  bVar5 = FUN_0284e6e0(*(long *)(lVar10 + 0xe6bb0) + *(long *)(lVar10 + 0xe6ba8),
                                       *param_1,local_38);
                  if (((uVar6 & 1) == 0) && (lVar10 = *(long *)(lVar10 + 0xe6bc8), lVar10 != 0))
                  goto LAB_021f9b9c;
                  goto joined_r0x021f9c4c;
                }
              }
              else if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
                      (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 != 0))
              goto LAB_021f94c0;
            }
          }
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar11 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar11)();
          }
        }
      }
      else if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
              (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 != 0))
      goto LAB_021f9230;
    }
switchD_021f9250_default:
    lVar10 = *(long *)puVar4;
    if (lVar10 == 0) goto switchD_021f9680_default;
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) goto LAB_021f960c;
      lVar10 = lVar10 + 0x70;
LAB_021f9558:
      if ((*(long **)(lVar10 + 0xe6d50) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar10 + 0xe6d50), puVar11 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)*puVar11)();
        uVar8 = uVar8 & 0xffffffff;
      }
      piVar18 = (int *)(*(long *)(lVar10 + 0xe6d38) + *(long *)(lVar10 + 0xe6d30));
      if ((*(char *)((long)piVar18 + 0x2f) != '\x02') ||
         ((*param_1 != (int)(char)piVar18[0xb] && (*param_1 != (int)(char)piVar18[0xf])))) {
        if (((uVar8 & 1) != 0) &&
           ((*(long *)(lVar10 + 0xe6d50) != 0 &&
            (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xe6d50) + 8),
            puVar11 != (undefined8 *)0x0)))) {
          (**(code **)*puVar11)();
        }
        goto LAB_021f960c;
      }
      bVar5 = *param_2;
      bVar13 = *PTR_DAT_04bb32e0;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (bVar5 == bVar13) {
        bVar5 = true;
      }
      else {
        local_34 = CONCAT31(local_34._1_3_,bVar5);
        uVar6 = 1;
        lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_34,1);
        if (*(long **)(lVar9 + 0x17f68) != (long *)0x0) {
          puVar11 = (undefined8 *)**(long **)(lVar9 + 0x17f68);
          if (puVar11 == (undefined8 *)0x0) {
            uVar6 = 1;
          }
          else {
            uVar6 = (**(code **)*puVar11)();
            uVar6 = uVar6 ^ 1;
          }
        }
        piVar1 = (int *)(*(long *)(lVar9 + 0x17f50) + *(long *)(lVar9 + 0x17f48));
        if (*piVar18 == *piVar1) {
          bVar5 = (*(long *)(piVar1 + 1) == *(long *)(piVar18 + 1) &&
                  *(long *)(piVar1 + 3) == *(long *)(piVar18 + 3)) && piVar1[5] == piVar18[5];
        }
        else {
          bVar5 = false;
        }
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x17f68) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x17f68) + 8), puVar11 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar11)();
        }
      }
      if ((uVar8 & 1) == 0) goto LAB_021f991c;
      lVar10 = *(long *)(lVar10 + 0xe6d50);
      goto joined_r0x021f9b3c;
    }
    if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
       (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 != 0)) goto LAB_021f9558;
LAB_021f960c:
    lVar10 = *(long *)puVar4;
    local_34 = 4;
    if (lVar10 != 0) {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar11 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_021f9660:
          switch(local_34) {
          case 0:
            lVar9 = lVar9 + 0xe6c48;
            break;
          case 1:
            lVar9 = lVar9 + 0xe6cf0;
            break;
          case 2:
            lVar9 = lVar9 + 0xe6d60;
            break;
          case 3:
            lVar9 = lVar9 + 0xe6dd0;
            break;
          case 4:
            lVar9 = lVar9 + 0xe6e40;
            break;
          case 5:
            lVar9 = lVar9 + 0xe6eb0;
            break;
          case 6:
            lVar9 = lVar9 + 0xe6f20;
            break;
          default:
            goto switchD_021f9680_default;
          }
          if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar11 == (undefined8 *)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)*puVar11)();
            uVar8 = uVar8 & 0xffffffff;
          }
          lVar10 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
          if ((*(char *)(lVar10 + 0x2f) == '\x02') && (*param_1 == (int)*(char *)(lVar10 + 0x2c))) {
            lVar10 = *(long *)puVar4;
            if (lVar10 != 0) {
              plVar12 = *(long **)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
                plVar12 = (long *)*plVar12;
              }
              else if ((plVar12 == (long *)0x0) ||
                      (plVar12 = (long *)plVar12[0x26], plVar12 == (long *)0x0)) goto LAB_021f9a10;
              (**(code **)(*plVar12 + 0x38))();
            }
LAB_021f9a10:
            piVar18 = (int *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
            bVar5 = *param_2;
            bVar13 = *PTR_DAT_04bb32e0;
            if (7 < bVar5) {
              bVar5 = 0xff;
            }
            if (7 < bVar13) {
              bVar13 = 0xff;
            }
            if (bVar5 == bVar13) {
LAB_021f9a44:
              bVar5 = *(char *)((long)piVar18 + 0x2e) == '\x02';
            }
            else {
              local_34 = CONCAT31(local_34._1_3_,bVar5);
              lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_34,1);
              if (*(long **)(lVar10 + 0x17f68) == (long *)0x0) {
                uVar7 = 0;
              }
              else {
                puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17f68);
                uVar7 = 0;
                if (puVar11 != (undefined8 *)0x0) {
                  uVar7 = (**(code **)*puVar11)();
                }
              }
              piVar1 = (int *)(*(long *)(lVar10 + 0x17f50) + *(long *)(lVar10 + 0x17f48));
              if (*piVar18 == *piVar1) {
                lVar14 = *(long *)(piVar1 + 1);
                lVar15 = *(long *)(piVar18 + 1);
                lVar16 = *(long *)(piVar1 + 3);
                lVar17 = *(long *)(piVar18 + 3);
                iVar2 = piVar1[5];
                iVar3 = piVar18[5];
                if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
                   (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
                   puVar11 != (undefined8 *)0x0)) {
                  (**(code **)*puVar11)();
                }
                if ((lVar14 == lVar15 && lVar16 == lVar17) && iVar2 == iVar3) {
                  piVar18 = (int *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
                  goto LAB_021f9a44;
                }
              }
              else if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
                      (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
                      puVar11 != (undefined8 *)0x0)) {
                (**(code **)*puVar11)();
              }
              bVar5 = 0;
            }
            goto joined_r0x021f9c4c;
          }
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar11 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar11)();
          }
        }
      }
      else if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_021f9660;
    }
switchD_021f9680_default:
    local_34 = 5;
    lVar10 = *(long *)puVar4;
    if (lVar10 != 0) {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
        if (lVar10 != 0) {
          lVar10 = lVar10 + 0x70;
LAB_021f97fc:
          switch(local_34) {
          case 0:
            lVar10 = lVar10 + 0xe6c48;
            break;
          case 1:
            lVar10 = lVar10 + 0xe6cf0;
            break;
          case 2:
            lVar10 = lVar10 + 0xe6d60;
            break;
          case 3:
            lVar10 = lVar10 + 0xe6dd0;
            break;
          case 4:
            lVar10 = lVar10 + 0xe6e40;
            break;
          case 5:
            lVar10 = lVar10 + 0xe6eb0;
            break;
          case 6:
            lVar10 = lVar10 + 0xe6f20;
            break;
          default:
            goto switchD_021f981c_default;
          }
          if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)*puVar11)();
            uVar8 = uVar8 & 0xffffffff;
          }
          piVar18 = (int *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
          if ((*(char *)((long)piVar18 + 0x2f) == '\x02') && (*param_1 == (int)(char)piVar18[0xb]))
          {
            bVar5 = *param_2;
            bVar13 = *PTR_DAT_04bb32e0;
            if (7 < bVar5) {
              bVar5 = 0xff;
            }
            if (7 < bVar13) {
              bVar13 = 0xff;
            }
            if (bVar5 == bVar13) {
LAB_021f98e8:
              bVar5 = *(char *)((long)piVar18 + 0x2e) == '\x02';
            }
            else {
              local_34 = CONCAT31(local_34._1_3_,bVar5);
              lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_34,1);
              if (*(long **)(lVar9 + 0x17f68) == (long *)0x0) {
                uVar7 = 0;
              }
              else {
                puVar11 = (undefined8 *)**(long **)(lVar9 + 0x17f68);
                uVar7 = 0;
                if (puVar11 != (undefined8 *)0x0) {
                  uVar7 = (**(code **)*puVar11)();
                }
              }
              piVar1 = (int *)(*(long *)(lVar9 + 0x17f50) + *(long *)(lVar9 + 0x17f48));
              if (*piVar18 == *piVar1) {
                lVar14 = *(long *)(piVar1 + 1);
                lVar15 = *(long *)(piVar18 + 1);
                lVar16 = *(long *)(piVar1 + 3);
                lVar17 = *(long *)(piVar18 + 3);
                iVar2 = piVar1[5];
                iVar3 = piVar18[5];
                if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x17f68) != 0)) &&
                   (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x17f68) + 8),
                   puVar11 != (undefined8 *)0x0)) {
                  (**(code **)*puVar11)();
                }
                if ((lVar14 == lVar15 && lVar16 == lVar17) && iVar2 == iVar3) {
                  piVar18 = (int *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
                  goto LAB_021f98e8;
                }
              }
              else if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x17f68) != 0)) &&
                      (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x17f68) + 8),
                      puVar11 != (undefined8 *)0x0)) {
                (**(code **)*puVar11)();
              }
              bVar5 = false;
            }
            if ((uVar8 & 1) == 0) goto LAB_021f991c;
            lVar10 = *(long *)(lVar10 + 0x28);
            goto joined_r0x021f9b3c;
          }
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar11)();
          }
        }
      }
      else if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
              (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 != 0))
      goto LAB_021f97fc;
    }
switchD_021f981c_default:
    bVar5 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) != 0) {
      if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
         (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 != 0)) goto LAB_021f9098;
      goto switchD_021f90b8_default;
    }
    lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar10 == 0) goto switchD_021f90b8_default;
    lVar10 = lVar10 + 0x70;
LAB_021f9098:
    switch(local_34) {
    case 0:
      lVar9 = lVar10 + 0xe6c48;
      plVar12 = *(long **)(lVar10 + 0xe6c70);
      break;
    case 1:
      lVar9 = lVar10 + 0xe6cf0;
      plVar12 = *(long **)(lVar10 + 0xe6d18);
      break;
    case 2:
      lVar9 = lVar10 + 0xe6d60;
      plVar12 = *(long **)(lVar10 + 0xe6d88);
      break;
    case 3:
      lVar9 = lVar10 + 0xe6dd0;
      plVar12 = *(long **)(lVar10 + 0xe6df8);
      break;
    case 4:
      lVar9 = lVar10 + 0xe6e40;
      plVar12 = *(long **)(lVar10 + 0xe6e68);
      break;
    case 5:
      lVar9 = lVar10 + 0xe6eb0;
      plVar12 = *(long **)(lVar10 + 0xe6ed8);
      break;
    case 6:
      lVar9 = lVar10 + 0xe6f20;
      plVar12 = *(long **)(lVar10 + 0xe6f48);
      break;
    default:
      goto switchD_021f90b8_default;
    }
    if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*(code *)**(undefined8 **)*plVar12)();
      uVar8 = uVar8 & 0xffffffff;
    }
    piVar18 = (int *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
    if ((*(char *)((long)piVar18 + 0x2f) != '\x02') || (*param_1 != (int)(char)piVar18[0xb])) {
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      goto switchD_021f90b8_default;
    }
    bVar5 = *param_2;
    bVar13 = *PTR_DAT_04bb32e0;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar5 == bVar13) {
      bVar5 = 1;
    }
    else {
      local_34 = CONCAT31(local_34._1_3_,bVar5);
      uVar6 = 1;
      lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_34,1);
      if (*(long **)(lVar10 + 0x17f68) != (long *)0x0) {
        puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17f68);
        if (puVar11 == (undefined8 *)0x0) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar11)();
          uVar6 = uVar6 ^ 1;
        }
      }
      piVar1 = (int *)(*(long *)(lVar10 + 0x17f50) + *(long *)(lVar10 + 0x17f48));
      if (*piVar18 == *piVar1) {
        bVar5 = (*(long *)(piVar1 + 1) == *(long *)(piVar18 + 1) &&
                *(long *)(piVar1 + 3) == *(long *)(piVar18 + 3)) && piVar1[5] == piVar18[5];
      }
      else {
        bVar5 = false;
      }
      if (((uVar6 & 1) != 0) || (lVar10 = *(long *)(lVar10 + 0x17f68), lVar10 == 0))
      goto joined_r0x021f9c4c;
LAB_021f9b9c:
      if (*(undefined8 **)(lVar10 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar10 + 8))();
      }
    }
joined_r0x021f9c4c:
    if ((uVar8 & 1) == 0) goto LAB_021f991c;
    lVar10 = *(long *)(lVar9 + 0x28);
joined_r0x021f9b3c:
    if ((lVar10 != 0) && (*(undefined8 **)(lVar10 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar10 + 8))();
    }
  }
LAB_021f991c:
  return bVar5 & 1;
}

