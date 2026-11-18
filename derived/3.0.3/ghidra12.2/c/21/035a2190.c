
void FUN_035a2190(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar7 = param_1[6];
  if (lVar7 == 0) {
    lVar6 = 1;
    plVar3 = (long *)param_1[7];
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar7;
    plVar3 = (long *)param_1[7];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    param_1[7] = 0;
  }
  param_1[6] = 0;
  if (lVar6 != 1) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar7 + 0xa8) = lVar6;
  }
  *param_1 = &PTR_LAB_04b3de80;
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[2] != 0)) {
    if (0 < *(int *)(param_1 + 1)) {
      lVar7 = 0;
      puVar4 = (undefined8 *)param_1[3];
      do {
        puVar5 = *(undefined8 **)(param_1[2] + lVar7 * 8);
        lVar7 = lVar7 + 1;
        *puVar5 = puVar4;
        param_1[3] = puVar5;
        puVar4 = puVar5;
      } while (lVar7 < *(int *)(param_1 + 1));
    }
    __ptr = (void *)param_1[4];
    *(undefined4 *)(param_1 + 1) = 0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

