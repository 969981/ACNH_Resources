
void FUN_021ebc40(uint *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = PTR_DAT_04bb46b0;
  uVar11 = 0;
  do {
    if ((uVar11 == 6) && ((param_2 & 1) != 0)) {
      return;
    }
    if ((uVar11 != 1) || ((param_3 & 1) == 0)) goto LAB_021ebd54;
    lVar8 = *(long *)puVar4;
    if (lVar8 != 0) {
      puVar9 = *(undefined8 **)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar8 != 0) {
          lVar8 = lVar8 + 0x70;
LAB_021ebd00:
          if (*(long **)(lVar8 + 0xe6ce0) == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            puVar9 = (undefined8 *)**(long **)(lVar8 + 0xe6ce0);
            uVar5 = 0;
            if (puVar9 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar9)();
            }
          }
          iVar2 = *(int *)(*(long *)(lVar8 + 0xe6cc8) + *(long *)(lVar8 + 0xe6cc0));
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0xe6ce0) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0xe6ce0) + 8), puVar9 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar9)();
          }
          if (iVar2 == 0) goto switchD_021ebdc4_default;
        }
      }
      else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
              (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 != 0))
      goto LAB_021ebd00;
LAB_021ebd54:
      lVar8 = *(long *)puVar4;
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar8 != 0) {
            lVar8 = lVar8 + 0x70;
LAB_021ebdac:
            switch(uVar11 & 0xffffffff) {
            case 0:
              uVar7 = 0x6c48;
              break;
            case 1:
              uVar7 = 0x6cf0;
              break;
            case 2:
              uVar7 = 28000;
              break;
            case 3:
              uVar7 = 0x6dd0;
              break;
            case 4:
              uVar7 = 0x6e40;
              break;
            case 5:
              uVar7 = 0x6eb0;
              break;
            case 6:
              uVar7 = 0x6f20;
              break;
            default:
              goto switchD_021ebdc4_default;
            }
            lVar8 = lVar8 + (ulong)(uVar7 | 0xe0000);
            if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
               (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)*puVar9)();
              uVar5 = uVar5 & 0xffffffff;
            }
            piVar1 = (int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
            if (*(char *)((long)piVar1 + 0x2f) == '\x03') {
              if ((uVar11 == 6) && (*(byte *)(piVar1 + 0xb) < 10)) {
                *param_1 = *param_1 & (1 << (ulong)(*(byte *)(piVar1 + 0xb) & 0x1f) ^ 0xffffffffU);
              }
            }
            else if (((*(char *)((long)piVar1 + 0x2f) == '\x02') &&
                     (bVar3 = *(byte *)(piVar1 + 0xb), bVar3 != 0xff)) &&
                    (((param_4 == (int *)0x0 || (uVar11 == 6)) ||
                     ((*piVar1 == *param_4 &&
                      ((*(long *)(param_4 + 1) == *(long *)(piVar1 + 1) &&
                       *(long *)(param_4 + 3) == *(long *)(piVar1 + 3)) && param_4[5] == piVar1[5]))
                     )))) {
              if (bVar3 < 10) {
                *param_1 = *param_1 & (1 << (ulong)(bVar3 & 0x1f) ^ 0xffffffffU);
              }
              if ((uVar11 == 2) && (lVar10 = *(long *)puVar4, lVar10 != 0)) {
                puVar9 = *(undefined8 **)(lVar10 + 0x10);
                if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
                  lVar10 = (**(code **)(*(long *)*puVar9 + 0x38))();
                  if (lVar10 != 0) {
                    lVar10 = lVar10 + 0x70;
LAB_021ebf54:
                    if (*(long **)(lVar10 + 0xe6d50) == (long *)0x0) {
                      uVar6 = 0;
                    }
                    else {
                      puVar9 = (undefined8 *)**(long **)(lVar10 + 0xe6d50);
                      uVar6 = 0;
                      if (puVar9 != (undefined8 *)0x0) {
                        uVar6 = (**(code **)*puVar9)();
                      }
                    }
                    bVar3 = *(byte *)(*(long *)(lVar10 + 0xe6d38) + *(long *)(lVar10 + 0xe6d30) +
                                     0x3c);
                    if (bVar3 < 10) {
                      *param_1 = *param_1 & (1 << (ulong)(bVar3 & 0x1f) ^ 0xffffffffU);
                    }
                    if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0xe6d50) != 0)) &&
                       (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0xe6d50) + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      (**(code **)*puVar9)();
                    }
                  }
                }
                else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
                        (lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar10 != 0))
                goto LAB_021ebf54;
              }
            }
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar9)();
            }
          }
        }
        else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
                (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 != 0))
        goto LAB_021ebdac;
      }
    }
switchD_021ebdc4_default:
    uVar11 = uVar11 + 1;
    if (uVar11 == 7) {
      return;
    }
  } while( true );
}

