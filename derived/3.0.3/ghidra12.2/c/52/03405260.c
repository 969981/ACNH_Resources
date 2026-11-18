
void FUN_03405260(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 10) != 0) {
    if (0 < param_1[8]) {
      lVar3 = 0;
      puVar6 = *(undefined8 **)(param_1 + 0xc);
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 10) + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *puVar4 = puVar6;
        *(undefined8 **)(param_1 + 0xc) = puVar4;
        puVar6 = puVar4;
      } while (lVar3 < param_1[8]);
    }
    pvVar5 = *(void **)(param_1 + 0xe);
    param_1[8] = 0;
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    param_1[0xf] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 2) != 0) {
    if (0 < *param_1) {
      lVar3 = 0;
      do {
        puVar6 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar3 * 8);
        pvVar5 = (void *)puVar6[1];
        if (pvVar5 != (void *)0x0) {
          if (*(long *)puVar1 == 0) {
            free(pvVar5);
          }
          else {
            plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
            }
          }
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        lVar3 = lVar3 + 1;
        *puVar6 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar6;
      } while (lVar3 < *param_1);
    }
    pvVar5 = *(void **)(param_1 + 6);
    *param_1 = 0;
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    param_1[7] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

