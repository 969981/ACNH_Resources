
void FUN_025d6bd4(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "shop_buy_item";
  FUN_025ffac8(param_1,&local_50,param_2);
  *param_1 = &PTR_FUN_04a863d8;
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  puVar2 = PTR_DAT_04bb2268;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar6 = DAT_05ae7600;
  lVar9 = *(long *)puVar2;
  if (*(char *)(lVar9 + 0xb1) != '\0') {
    return;
  }
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0x80);
  }
  else {
    plVar4 = *(long **)(lVar9 + 0x28);
    if (plVar4 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        lVar9 = *(long *)puVar2;
        goto LAB_025d6d40;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x80,8);
    lVar9 = *(long *)puVar2;
  }
  if (pvVar5 != (void *)0x0) {
    param_1[6] = 0x1000000000;
    param_1[7] = pvVar5;
    if ((((lVar9 != 0) && (*(char *)(lVar9 + 0xb1) == '\0')) && (param_1[1] != 0)) &&
       (lVar9 = *(long *)(param_1[1] + 8), lVar9 != 0)) {
      lVar9 = FUN_03f29260(lVar9,0x10,0x20);
      puVar3 = PTR_DAT_04bc3578;
      if (lVar9 != 0) {
        *plVar8 = lVar9;
        lVar6 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar6 != 0) &&
           (uVar7 = (ulong)*(uint *)(lVar9 + 0x38), 0 < (int)*(uint *)(lVar9 + 0x38))) {
          plVar4 = *(long **)(lVar9 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar6;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar6;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar6 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar6 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar9;
              if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
                *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar6 = *plVar8;
        lVar9 = FUN_03f2a10c(0x20,**(undefined8 **)puVar3,1);
        if (lVar9 == 0) {
          return;
        }
        uVar1 = *(uint *)(lVar6 + 0x38);
        uVar7 = (ulong)uVar1;
        if ((int)uVar1 < 1) {
          return;
        }
        plVar8 = *(long **)(lVar6 + 0x40);
        do {
          if (*plVar8 == 0) {
            *plVar8 = lVar9;
            if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
              *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar9;
              *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
              return;
            }
            return;
          }
          plVar8 = plVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        return;
      }
      *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
    }
    *plVar8 = 0;
    return;
  }
LAB_025d6d40:
  *(undefined1 *)(lVar9 + 0xb1) = 1;
  return;
}

