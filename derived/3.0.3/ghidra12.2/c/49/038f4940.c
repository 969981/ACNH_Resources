
void FUN_038f4940(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b659e8;
  plVar2 = param_1 + 1;
  if (*plVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    if ((long *)param_1[4] == (long *)0x0) {
      lVar6 = param_1[3];
      if (*(int *)(lVar6 + 0x100) < 0) {
        (**(code **)PTR_DAT_04bcf348)(lVar6);
        *(undefined4 *)(lVar6 + 0x104) = 0;
        *(uint *)(lVar6 + 0x100) = *(uint *)(lVar6 + 0x100) & 0x7fffffff;
      }
      if (((*(byte *)(param_1 + 5) & 3) == 0) && (pvVar5 = (void *)*plVar2, pvVar5 != (void *)0x0))
      {
        if (DAT_05ae7600 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
      }
    }
    else {
      lVar6 = *(long *)param_1[4];
      uVar4 = *(undefined8 *)PTR_DAT_04bd0fa8;
      FUN_038f80e0(lVar6,param_1);
      FUN_038f8ea0(uVar4,*(undefined8 *)(lVar6 + 8));
    }
    bVar1 = *(byte *)(param_1 + 5);
    param_1[6] = 0;
    *(undefined2 *)((long)param_1 + 0x2a) = 0;
    *plVar2 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(byte *)(param_1 + 5) = bVar1 & 0xfe;
  }
  if ((bVar1 >> 1 & 1) == 0) {
    return;
  }
  pvVar5 = (void *)param_1[3];
  if (*(int *)((long)pvVar5 + 0x100) < 0) {
    (**(code **)PTR_DAT_04bcf348)(pvVar5);
    *(undefined4 *)((long)pvVar5 + 0x104) = 0;
    *(uint *)((long)pvVar5 + 0x100) = *(uint *)((long)pvVar5 + 0x100) & 0x7fffffff;
    pvVar5 = (void *)param_1[3];
    if (pvVar5 == (void *)0x0) goto LAB_038f4a78;
  }
  if (DAT_05ae7600 == 0) {
    free(pvVar5);
  }
  else {
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
    }
  }
LAB_038f4a78:
  param_1[3] = 0;
  return;
}

