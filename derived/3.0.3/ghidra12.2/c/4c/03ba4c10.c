
uint FUN_03ba4c10(long param_1,long *param_2,long *param_3,long param_4,int param_5,
                 undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined **local_60;
  char *pcStack_58;
  
  if (*param_2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    piVar10 = (int *)(param_2[1] + 0xc);
    piVar7 = (int *)(param_2[1] + 0x10);
    goto LAB_03ba4cf8;
  }
  iVar11 = *(int *)(param_4 + 8);
  if (param_5 < iVar11) {
    piVar10 = (int *)(param_4 + 0xc);
    if ((param_5 == 0) || (iVar11 < 1)) {
      if (0 < iVar11) {
        piVar7 = (int *)(param_4 + 0x10);
        goto LAB_03ba4cf8;
      }
    }
    else {
      uVar2 = iVar11 - 1U;
      if (param_5 - 1U <= iVar11 - 1U) {
        uVar2 = param_5 - 1U;
      }
      uVar1 = uVar2 + 1 & 3;
      if (2 < uVar2) {
        uVar9 = uVar2 + 1 & 0xfffffffc;
        do {
          uVar9 = uVar9 - 4;
          piVar10 = (int *)((long)piVar10 + (long)*piVar10 +
                           (long)*(int *)((long)piVar10 + (long)*piVar10));
          piVar10 = (int *)((long)piVar10 + (long)*piVar10);
          piVar10 = (int *)((long)piVar10 + (long)*piVar10);
        } while (uVar9 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        piVar10 = (int *)((long)piVar10 + (long)*piVar10);
      }
      if ((int)(uVar2 + 1) < iVar11) {
        piVar7 = piVar10 + 1;
LAB_03ba4cf8:
        if ((*piVar7 < *(int *)(param_2[2] + 8)) &&
           (piVar7 = (int *)((long)*(int *)(param_2[2] + (long)*piVar7 * 4 + 0xc) + *param_2),
           piVar7 != (int *)0x0)) {
          if (param_4 == 0) {
            if ((*(char *)(param_1 + 9) == '\0') && (*(long *)(param_1 + 0x10) == 0)) {
              if ((*PTR_DAT_04c4be08 == '\0') ||
                 (plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                                             (*(long **)(param_1 + 0x38),&PTR_PTR_04c4be00,param_6),
                 plVar3 == (long *)0x0)) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                plVar3 = (long *)0x0;
                goto LAB_03ba4f58;
              }
              (**(code **)(*plVar3 + 0xa8))(plVar3,&PTR_PTR_04c4be00,param_6);
              plVar4 = (long *)(param_1 + 0x20);
              lVar5 = *plVar4;
              *(long **)(param_1 + 0x10) = plVar3;
              plVar3 = (long *)((long)*(int *)(param_1 + 0x34) + (long)plVar3);
              *plVar4 = (long)plVar3;
              *plVar3 = lVar5;
              plVar3[1] = (long)plVar4;
              if (lVar5 != 0) {
                *(long **)(lVar5 + 8) = plVar3;
              }
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            }
            plVar3 = *(long **)(param_1 + 0x10);
          }
          else {
            if (piVar7[1] == 0) {
              pcStack_58 = (char *)0x0;
              if (param_2[3] != 0) {
                pcStack_58 = (char *)(param_2[3] + (long)*piVar7 + 8);
              }
              local_60 = &PTR_LAB_048f9770;
              if (*pcStack_58 == '\0') {
                plVar3 = (long *)0x0;
                goto LAB_03ba4f58;
              }
              plVar4 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                                         (*(long **)(param_1 + 0x38),&local_60,param_6);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0xa8))(plVar4,&local_60,param_6);
              }
              plVar3 = (long *)0x0;
            }
            else {
              pcStack_58 = (char *)0x0;
              if (param_2[3] != 0) {
                pcStack_58 = (char *)(param_2[3] + (long)*piVar7 + 8);
              }
              local_60 = &PTR_LAB_048f9770;
              if (*pcStack_58 == '\0') {
                plVar3 = (long *)0x0;
                plVar4 = plVar3;
              }
              else {
                plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                                           (*(long **)(param_1 + 0x38),&local_60,param_6);
                plVar4 = plVar3;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0xa8))(plVar3,&local_60,param_6);
                }
              }
            }
            if (((plVar4 != (long *)0x0) && (*(char *)(param_1 + 8) != '\0')) &&
               (lVar5 = FUN_03ba4630(param_1,plVar4 + 1), lVar5 == 0)) {
              plVar8 = *(long **)(param_1 + 0x10);
              if (param_3 != (long *)0x0) {
                plVar8 = param_3;
              }
              uVar6 = (**(code **)(*plVar8 + 0xc0))(plVar8,plVar4);
              if ((uVar6 & 1) != 0) {
                plVar8 = (long *)(param_1 + 0x20);
                lVar5 = *plVar8;
                plVar4 = (long *)((long)*(int *)(param_1 + 0x34) + (long)plVar4);
                *plVar8 = (long)plVar4;
                *plVar4 = lVar5;
                plVar4[1] = (long)plVar8;
                if (lVar5 != 0) {
                  *(long **)(lVar5 + 8) = plVar4;
                }
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                FUN_03ba44e0(param_1);
              }
            }
          }
LAB_03ba4f58:
          if ((plVar3 == (long *)0x0) || (piVar10[2] < 1)) {
            uVar2 = 1;
          }
          else {
            iVar11 = 0;
            do {
              uVar2 = FUN_03ba4c10(param_1,param_2,plVar3,piVar10,iVar11,param_6);
              if ((uVar2 & 1) == 0) break;
              iVar11 = iVar11 + 1;
            } while (iVar11 < piVar10[2]);
          }
          goto LAB_03ba4d98;
        }
      }
    }
  }
  uVar2 = 0;
LAB_03ba4d98:
  return uVar2 & 1;
}

