
long * FUN_038f3be0(long param_1,long *param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  void *__src;
  
  lVar7 = DAT_05ae7600;
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(param_1 + 200);
  }
  if (DAT_05ae7600 == 0) {
    plVar5 = malloc(0xd0);
  }
  else {
    plVar5 = param_4;
    if (param_4 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_038f3c78;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xd0,8);
  }
LAB_038f3c78:
  puVar3 = PTR_DAT_04bd0f48;
  puVar1 = (undefined8 *)((long)plVar5 + 0x3c);
  plVar6 = plVar5 + 1;
  *(undefined1 *)((long)plVar5 + 0x7b) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[6] = (long)puVar1;
  *(undefined4 *)(plVar5 + 7) = 0x40;
  *plVar5 = (long)(puVar3 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar8 = plVar5 + 4;
  *plVar8 = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  plVar5[0x10] = 0;
  *(undefined4 *)(plVar5 + 0x11) = 0;
  *(undefined1 *)((long)plVar5 + 0x8c) = 0;
  *(undefined4 *)(plVar5 + 0x12) = 0;
  *(undefined4 *)(plVar5 + 0x15) = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  *(undefined4 *)(plVar5 + 0x18) = 0;
  plVar5[0x19] = 0;
  plVar5[1] = 0;
  plVar5[5] = (long)(puVar3 + 0x10);
  plVar5[0x13] = (long)(plVar5 + 0x13);
  plVar5[0x14] = (long)(plVar5 + 0x13);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(long **)(param_1 + 0x10) = plVar6;
    *plVar6 = param_1 + 8;
  }
  else {
    plVar9 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    plVar9[2] = (long)plVar6;
    *plVar8 = (long)plVar9;
    *plVar6 = *plVar9;
    plVar8 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  *plVar8 = (long)plVar6;
  pvVar10 = (void *)plVar5[6];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar10 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_038f3db0;
      lVar4 = param_2[1] + lVar7;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038f3db0;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038f3db0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038f3db0:
    iVar2 = (int)lVar7;
    if ((int)plVar5[7] <= (int)lVar7) {
      iVar2 = (int)plVar5[7] + -1;
    }
    memcpy(pvVar10,__src,(long)iVar2);
    *(undefined1 *)((long)pvVar10 + (long)iVar2) = 0;
  }
  if (**(char **)(param_3 + 8) == '\0') {
    pvVar10 = (void *)plVar5[0x10];
    if (pvVar10 != (void *)0x0) {
      if (*(char *)((long)plVar5 + 0x8c) != '\0') {
        if (DAT_05ae7600 == 0) {
          free(pvVar10);
        }
        else {
          plVar6 = (long *)FUN_038cb610(DAT_05ae7600,pvVar10);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
          }
        }
      }
      *(undefined1 *)((long)plVar5 + 0x8c) = 0;
      plVar5[0x10] = 0;
      *(undefined4 *)(plVar5 + 0x11) = 0;
    }
  }
  else {
    FUN_038f37b0(plVar5,param_3,param_4);
  }
  return plVar5;
}

