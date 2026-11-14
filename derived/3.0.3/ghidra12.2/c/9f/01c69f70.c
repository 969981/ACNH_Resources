
void FUN_01c69f70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  __ptr = (void *)param_1[0x60];
  param_1[0x60] = 0;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  puVar2 = PTR_DAT_04bc0fa8;
  puVar1 = PTR_DAT_04bc0ec8;
  if ((char)param_1[0x5f] != '\0') {
    param_1[0x4a] = (long)(PTR_DAT_04bc0fa8 + 0x10);
    if (param_1[0x55] != 0) {
      param_1[0x56] = param_1[0x55];
      FUN_00187e4c();
    }
    puVar6 = (undefined8 *)param_1[0x51];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0x52];
      puVar4 = puVar6;
      if (puVar5 != puVar6) {
        do {
          puVar5 = puVar5 + -0xc;
          (**(code **)*puVar5)(puVar5);
        } while (puVar5 != puVar6);
        puVar4 = (undefined8 *)param_1[0x51];
      }
      param_1[0x52] = (long)puVar6;
      FUN_00187e4c(puVar4);
    }
    param_1[0x4c] = (long)(puVar1 + 0x10);
    FUN_0018b1a0(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  if ((char)param_1[0x49] != '\0') {
    if (param_1[0x40] != 0) {
      param_1[0x41] = param_1[0x40];
      FUN_00187e4c();
    }
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  puVar6 = (undefined8 *)param_1[0x3d];
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x3e];
    puVar4 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -0xf;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar4 = (undefined8 *)param_1[0x3d];
    }
    param_1[0x3e] = (long)puVar6;
    FUN_00187e4c(puVar4);
  }
  param_1[0x2e] = (long)(puVar2 + 0x10);
  if (param_1[0x39] != 0) {
    param_1[0x3a] = param_1[0x39];
    FUN_00187e4c();
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x36];
    puVar4 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -0xc;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar4 = (undefined8 *)param_1[0x35];
    }
    param_1[0x36] = (long)puVar6;
    FUN_00187e4c(puVar4);
  }
  param_1[0x30] = (long)(puVar1 + 0x10);
  FUN_0018b1a0(param_1 + 0x30);
  if ((char)param_1[0x2d] != '\0') {
    param_1[0x1b] = (long)(puVar2 + 0x10);
    if (param_1[0x26] != 0) {
      param_1[0x27] = param_1[0x26];
      FUN_00187e4c();
    }
    puVar6 = (undefined8 *)param_1[0x22];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0x23];
      puVar4 = puVar6;
      if (puVar5 != puVar6) {
        do {
          puVar5 = puVar5 + -0xc;
          (**(code **)*puVar5)(puVar5);
        } while (puVar5 != puVar6);
        puVar4 = (undefined8 *)param_1[0x22];
      }
      param_1[0x23] = (long)puVar6;
      FUN_00187e4c(puVar4);
    }
    param_1[0x1d] = (long)(puVar1 + 0x10);
    FUN_0018b1a0(param_1 + 0x1d);
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc0ec0 + 0x10);
  FUN_038e1c80(param_1 + 0xd);
  puVar6 = (undefined8 *)param_1[9];
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[10];
    puVar4 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -5;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar4 = (undefined8 *)param_1[9];
    }
    param_1[10] = (long)puVar6;
    FUN_00187e4c(puVar4);
  }
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return;
}

