
void FUN_001bbb50(long *param_1)

{
  long *plVar1;
  undefined2 *puVar2;
  
  *param_1 = (long)(PTR_DAT_04bcc5b8 + 0x10);
  if ((char)param_1[1] != '\0') goto LAB_001bbbd8;
  (**(code **)(param_1[0x5b] + 0x10))(param_1 + 0x5b);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_0018ada0(param_1 + 0x59);
  (**(code **)(param_1[0x5b] + 0x20))(param_1 + 0x5b);
  plVar1 = (long *)param_1[100];
  if (plVar1 == (long *)0x0) goto LAB_001bbbd8;
  if ((char)plVar1[10] == '\0') {
LAB_001bbbc8:
    (**(code **)(*plVar1 + 8))();
  }
  else {
    FUN_00189140(plVar1,0xffffffff);
    plVar1 = (long *)param_1[100];
    if (plVar1 != (long *)0x0) goto LAB_001bbbc8;
  }
  param_1[100] = 0;
LAB_001bbbd8:
  FUN_0018ac30(param_1 + 0x5b);
  FUN_0018ea90(param_1 + 0x59);
  puVar2 = (undefined2 *)param_1[0x3d];
  if (puVar2 != (undefined2 *)param_1[0x3e]) {
    do {
      FUN_001bc410(param_1 + 0x3c,*puVar2);
      puVar2 = (undefined2 *)param_1[0x3d];
    } while (puVar2 != (undefined2 *)param_1[0x3e]);
  }
  FUN_0018ac30(param_1 + 0x4c);
  FUN_0018ac30(param_1 + 0x43);
  if (param_1[0x40] != 0) {
    param_1[0x41] = param_1[0x40];
    FUN_00187e4c();
  }
  if (param_1[0x3d] != 0) {
    param_1[0x3e] = param_1[0x3d];
    FUN_00187e4c();
  }
  puVar2 = (undefined2 *)param_1[0x20];
  if (puVar2 != (undefined2 *)param_1[0x21]) {
    do {
      FUN_001bc410(param_1 + 0x1f,*puVar2);
      puVar2 = (undefined2 *)param_1[0x20];
    } while (puVar2 != (undefined2 *)param_1[0x21]);
  }
  FUN_0018ac30(param_1 + 0x2f);
  FUN_0018ac30(param_1 + 0x26);
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    FUN_00187e4c();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    FUN_00187e4c();
  }
  puVar2 = (undefined2 *)param_1[3];
  if (puVar2 != (undefined2 *)param_1[4]) {
    do {
      FUN_001bc410(param_1 + 2,*puVar2);
      puVar2 = (undefined2 *)param_1[3];
    } while (puVar2 != (undefined2 *)param_1[4]);
  }
  FUN_0018ac30(param_1 + 0x12);
  FUN_0018ac30(param_1 + 9);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    FUN_00187e4c();
  }
  if (param_1[3] == 0) {
    return;
  }
  param_1[4] = param_1[3];
  FUN_00187e4c();
  return;
}

