
void FUN_001ee800(long *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [24];
  undefined4 local_24;
  
  plVar1 = param_1 + 0x37;
  *param_1 = (long)(PTR_DAT_04bcc848 + 0x10);
  (**(code **)(param_1[0x37] + 0x10))(plVar1);
  *(undefined1 *)((long)param_1 + 0x201) = 1;
  if (param_1[0x33] == 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  else {
    cVar2 = *(char *)(param_1[0x33] + 0x50);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    if (cVar2 != '\0') {
      FUN_00189140(param_1[0x33],0xffffffff);
    }
  }
  local_24 = 0x10001;
  FUN_0018aa70(auStack_48,&local_24);
  if ((long *)param_1[0x33] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 8))();
    param_1[0x33] = 0;
  }
  if (param_1[0x32] != 0) {
    FUN_00142be4();
    param_1[0x32] = 0;
  }
  if (param_1[0x30] != 0) {
    FUN_0014e11c();
    param_1[0x30] = 0;
  }
  FUN_0018c448(param_1 + 10);
  lVar3 = param_1[0x43];
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 8) != 0) {
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 8);
      FUN_00187e4c();
    }
    FUN_00185ac4(lVar3);
    param_1[0x43] = 0;
  }
  if (param_1[0x2f] != 0) {
    FUN_00189128();
    param_1[0x2f] = 0;
  }
  if (param_1[0x55] != 0) {
    param_1[0x56] = param_1[0x55];
    FUN_00187e4c();
  }
  param_1[0x4b] = (long)&PTR_LAB_0483d5d8;
  if (param_1[0x4d] != 0) {
    param_1[0x4e] = param_1[0x4d];
    FUN_00187e4c();
  }
  puVar4 = (undefined8 *)param_1[0x47];
  if (puVar4 != (undefined8 *)param_1[0x48]) {
    do {
      puVar5 = puVar4 + 1;
      FUN_00187e4c(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)param_1[0x48]);
    puVar4 = (undefined8 *)param_1[0x47];
  }
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0x48] = (long)puVar4;
    FUN_00187e4c(puVar4);
  }
  FUN_0018ac30(plVar1);
  FUN_0018c3d4(param_1 + 10);
  return;
}

