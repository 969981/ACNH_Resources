
void FUN_02610e7c(undefined8 *param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_04a86f00;
  plVar9 = param_1 + 2;
  *plVar9 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar4 = DAT_05554928;
  puVar2 = PTR_DAT_04bc3578;
  if (param_3 == (long *)0x0) {
    param_3 = (long *)*DAT_05b05628;
  }
  if (*(char *)(DAT_05554928 + 0xb1) != '\0') {
    return;
  }
  uVar3 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                    ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
  lVar6 = DAT_05ae7600;
  if (uVar3 >> 0xc < 5) {
    *(undefined1 *)(lVar4 + 0xb1) = 1;
    return;
  }
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0x50);
joined_r0x02610fa4:
    if (pvVar5 != (void *)0x0) {
      param_1[3] = 0xa00000000;
      param_1[4] = pvVar5;
      lVar4 = DAT_05554928;
      if ((*(long *)(param_2 + 8) != 0) && (*(char *)(DAT_05554928 + 0xb1) == '\0')) {
        lVar6 = FUN_03f29260(*(long *)(param_2 + 8),10,0x18);
        lVar4 = DAT_05554928;
        if (lVar6 != 0) {
          puVar7 = *(undefined8 **)puVar2;
          *plVar9 = lVar6;
          lVar4 = FUN_03f2a10c(0x18,*puVar7,1);
          if (lVar4 != 0) {
            uVar3 = (ulong)*(uint *)(lVar6 + 0x38);
            if (0 < (int)*(uint *)(lVar6 + 0x38)) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_0261103c;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_0261103c:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_026110ac;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_026110ac:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_0261111c;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_0261111c:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_0261118c;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_0261118c:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_026111fc;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_026111fc:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_0261126c;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_0261126c:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_026112dc;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_026112dc:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_0261134c;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_0261134c:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar8 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar8 == 0) {
                  *plVar8 = lVar4;
                  goto LAB_026113bc;
                }
                plVar8 = plVar8 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_026113bc:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          }
          lVar6 = *plVar9;
          lVar4 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x38);
            uVar3 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar9 = *(long **)(lVar6 + 0x40);
              do {
                if (*plVar9 == 0) {
                  *plVar9 = lVar4;
                  goto LAB_0261142c;
                }
                plVar9 = plVar9 + 1;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            lVar4 = 0;
          }
LAB_0261142c:
          if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
            *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar4;
            *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
            return;
          }
          return;
        }
        *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
      }
      *plVar9 = 0;
      goto LAB_02610fac;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_02610f50:
      pvVar5 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x50,8);
      goto joined_r0x02610fa4;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar7 = (undefined8 *)(lVar6 + 8);
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_3 = (long *)*puVar7;
    if (param_3 != (long *)0x0) goto LAB_02610f50;
  }
  lVar4 = DAT_05554928;
LAB_02610fac:
  *(undefined1 *)(lVar4 + 0xb1) = 1;
  return;
}

