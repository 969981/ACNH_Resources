
void FUN_02a92638(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04a9ce40;
  FUN_02a928d4(param_1 + 0x37c);
  FUN_02a92bac(param_1 + 0x33c);
  FUN_02a92e84(param_1 + 0x2fc);
  FUN_02a9315c(param_1 + 700);
  FUN_02a93434(param_1 + 0x27c);
  FUN_02a9371c(param_1 + 0x23c);
  FUN_02a939ec(param_1 + 0x1fc);
  param_1[0x1bc] = &PTR_FUN_04a9d998;
  FUN_02aab5d0(param_1 + 0x1bc);
  FUN_02aabd18(param_1 + 0x1bc);
  __ptr = (void *)param_1[0x1b8];
  param_1[0x17c] = &PTR_FUN_04a9d7a0;
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
    param_1[0x1b8] = 0;
    *(undefined4 *)(param_1 + 0x1b7) = 0;
  }
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  *(undefined1 *)((long)param_1 + 0xddc) = 0;
  FUN_02aa8558(param_1 + 0x17c);
  param_1[0x17c] = &PTR_LAB_04a9d7f8;
  FUN_02aa8558(param_1 + 0x17c);
  puVar5 = (undefined8 *)param_1[0x17e];
  puVar1 = PTR_DAT_04bcb440 + 0x10;
  param_1[0x17c] = puVar1;
  if (puVar5 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x17f) < 1) {
      iVar2 = *(int *)(param_1 + 0x17f) + -1;
    }
    memset(puVar5,0,(long)iVar2);
    *(undefined1 *)((long)puVar5 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x17d] + 0x18))(param_1 + 0x17d);
  uVar3 = FUN_006bd550(param_1[0x17e],0);
  *(undefined4 *)(param_1 + 400) = uVar3;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x13c] = &PTR_FUN_04a9d608;
  FUN_02aa4e90(param_1 + 0x13c);
  FUN_02aa55d8(param_1 + 0x13c);
  param_1[0xfc] = &PTR_FUN_04a9d4f0;
  FUN_02aa1e60(param_1 + 0xfc);
  FUN_02aa25a8(param_1 + 0xfc);
  param_1[0xbc] = &PTR_FUN_04a9d2d0;
  FUN_02a9f020(param_1 + 0xbc);
  FUN_02a9f768(param_1 + 0xbc);
  param_1[0x7c] = &PTR_FUN_04a9d1b8;
  FUN_02a9c220(param_1 + 0x7c);
  FUN_02a9c978(param_1 + 0x7c);
  FUN_02a93ec4(param_1 + 0x3c);
  plVar4 = param_1 + 1;
  *plVar4 = (long)&PTR_LAB_04a9ce60;
  FUN_02a953f0(plVar4);
  *plVar4 = (long)puVar1;
  puVar5 = (undefined8 *)param_1[3];
  if (puVar5 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 4) < 1) {
      iVar2 = *(int *)(param_1 + 4) + -1;
    }
    memset(puVar5,0,(long)iVar2);
    *(undefined1 *)((long)puVar5 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[2] + 0x18))(param_1 + 2);
  uVar3 = FUN_006bd550(param_1[3],0);
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}

