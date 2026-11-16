
void FUN_025af570(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb2268;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x30);
  }
  else {
    plVar4 = *(long **)(*(long *)PTR_DAT_04bb2268 + 0x28);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_025af618;
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x30,8);
  }
  if (pvVar6 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x600000000;
    *(void **)(param_1 + 0x38) = pvVar6;
    if ((((*(long *)puVar2 != 0) && (*(char *)(*(long *)puVar2 + 0xb1) == '\0')) &&
        (*(long *)(param_1 + 8) != 0)) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 8), lVar8 != 0)) {
      lVar8 = FUN_03f29260(lVar8,6,0x100);
      puVar3 = PTR_DAT_04bc3578;
      if (lVar8 != 0) {
        *(long *)(param_1 + 0x28) = lVar8;
        lVar5 = FUN_03f2a10c(0x100,**(undefined8 **)puVar3,1);
        if ((lVar5 != 0) &&
           (uVar7 = (ulong)*(uint *)(lVar8 + 0x38), 0 < (int)*(uint *)(lVar8 + 0x38))) {
          plVar4 = *(long **)(lVar8 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar5;
              if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar5;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x28);
        lVar8 = FUN_03f2a10c(0x100,**(undefined8 **)puVar3,1);
        if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar5 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar5 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar8;
              if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar8;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x28);
        lVar8 = FUN_03f2a10c(0x100,**(undefined8 **)puVar3,1);
        if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar5 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar5 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar8;
              if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar8;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x28);
        lVar8 = FUN_03f2a10c(0x100,**(undefined8 **)puVar3,1);
        if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar5 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar5 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar8;
              if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar8;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x28);
        lVar8 = FUN_03f2a10c(0x100,**(undefined8 **)puVar3,1);
        if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar5 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1))
        {
          plVar4 = *(long **)(lVar5 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar8;
              if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar8;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
              break;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar5 = *(long *)(param_1 + 0x28);
        lVar8 = FUN_03f2a10c(0x100,**(undefined8 **)puVar3,1);
        if (lVar8 == 0) {
          return;
        }
        uVar1 = *(uint *)(lVar5 + 0x38);
        uVar7 = (ulong)uVar1;
        if ((int)uVar1 < 1) {
          return;
        }
        plVar4 = *(long **)(lVar5 + 0x40);
        do {
          if (*plVar4 == 0) {
            *plVar4 = lVar8;
            if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
              *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar8;
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              return;
            }
            return;
          }
          plVar4 = plVar4 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        return;
      }
      *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
LAB_025af618:
  *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
  return;
}

