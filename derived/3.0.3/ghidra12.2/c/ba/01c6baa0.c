
void FUN_01c6baa0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (param_1[0x115] != 0) {
    param_1[0x116] = param_1[0x115];
    FUN_00187e4c();
  }
  puVar2 = PTR_DAT_04bc0fa8;
  puVar1 = PTR_DAT_04bc0ec8;
  if ((char)param_1[0x114] != '\0') {
    param_1[0xde] = (long)(PTR_DAT_04bc0fa8 + 0x10);
    if (param_1[0xe9] != 0) {
      param_1[0xea] = param_1[0xe9];
      FUN_00187e4c();
    }
    puVar6 = (undefined8 *)param_1[0xe5];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xe6];
      puVar3 = puVar6;
      if (puVar5 != puVar6) {
        do {
          puVar5 = puVar5 + -0xc;
          (**(code **)*puVar5)(puVar5);
        } while (puVar5 != puVar6);
        puVar3 = (undefined8 *)param_1[0xe5];
      }
      param_1[0xe6] = (long)puVar6;
      FUN_00187e4c(puVar3);
    }
    param_1[0xe0] = (long)(puVar1 + 0x10);
    FUN_0018b1a0(param_1 + 0xe0);
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  if ((char)param_1[0xdc] != '\0') {
    param_1[0xa6] = (long)(puVar2 + 0x10);
    if (param_1[0xb1] != 0) {
      param_1[0xb2] = param_1[0xb1];
      FUN_00187e4c();
    }
    puVar6 = (undefined8 *)param_1[0xad];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xae];
      puVar3 = puVar6;
      if (puVar5 != puVar6) {
        do {
          puVar5 = puVar5 + -0xc;
          (**(code **)*puVar5)(puVar5);
        } while (puVar5 != puVar6);
        puVar3 = (undefined8 *)param_1[0xad];
      }
      param_1[0xae] = (long)puVar6;
      FUN_00187e4c(puVar3);
    }
    param_1[0xa8] = (long)(puVar1 + 0x10);
    FUN_0018b1a0(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  if ((char)param_1[0xa4] != '\0') {
    param_1[0x6e] = (long)(puVar2 + 0x10);
    if (param_1[0x79] != 0) {
      param_1[0x7a] = param_1[0x79];
      FUN_00187e4c();
    }
    puVar6 = (undefined8 *)param_1[0x75];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0x76];
      puVar3 = puVar6;
      if (puVar5 != puVar6) {
        do {
          puVar5 = puVar5 + -0xc;
          (**(code **)*puVar5)(puVar5);
        } while (puVar5 != puVar6);
        puVar3 = (undefined8 *)param_1[0x75];
      }
      param_1[0x76] = (long)puVar6;
      FUN_00187e4c(puVar3);
    }
    param_1[0x70] = (long)(puVar1 + 0x10);
    FUN_0018b1a0(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  if ((char)param_1[0x6c] != '\0') {
    if (param_1[99] != 0) {
      param_1[100] = param_1[99];
      FUN_00187e4c();
    }
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if ((char)param_1[0x62] != '\0') {
    puVar6 = (undefined8 *)param_1[0x55];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0x56];
      puVar3 = puVar6;
      if (puVar5 != puVar6) {
        do {
          puVar5 = puVar5 + -0xf;
          (**(code **)*puVar5)(puVar5);
        } while (puVar5 != puVar6);
        puVar3 = (undefined8 *)param_1[0x55];
      }
      param_1[0x56] = (long)puVar6;
      FUN_00187e4c(puVar3);
    }
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  puVar6 = (undefined8 *)param_1[0x52];
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x53];
    puVar3 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -0xf;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar3 = (undefined8 *)param_1[0x52];
    }
    param_1[0x53] = (long)puVar6;
    FUN_00187e4c(puVar3);
  }
  if ((char)param_1[0x51] != '\0') {
    if (param_1[0x48] != 0) {
      param_1[0x49] = param_1[0x48];
      FUN_00187e4c();
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  puVar6 = (undefined8 *)param_1[0x45];
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x46];
    puVar3 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -0xf;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar3 = (undefined8 *)param_1[0x45];
    }
    param_1[0x46] = (long)puVar6;
    FUN_00187e4c(puVar3);
  }
  FUN_01c6e800(param_1 + 0x23);
  puVar6 = (undefined8 *)param_1[0x1f];
  param_1[0x1d] = (long)&PTR_LAB_04a42dc0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x20];
    puVar3 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -0x28;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar3 = (undefined8 *)param_1[0x1f];
    }
    param_1[0x20] = (long)puVar6;
    FUN_00187e4c(puVar3);
  }
  __ptr = (void *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  *param_1 = (long)(PTR_DAT_04bc0ec0 + 0x10);
  FUN_038e1c80(param_1 + 0xd);
  puVar6 = (undefined8 *)param_1[9];
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[10];
    puVar3 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar5 = puVar5 + -5;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar6);
      puVar3 = (undefined8 *)param_1[9];
    }
    param_1[10] = (long)puVar6;
    FUN_00187e4c(puVar3);
  }
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return;
}

