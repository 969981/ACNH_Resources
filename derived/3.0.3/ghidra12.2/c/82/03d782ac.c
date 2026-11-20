
void FUN_03d782ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03d783b0();
  puVar2 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "*ScrollMinus";
  local_50 = puVar1;
  uVar3 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  pcStack_48 = "*ScrollPlus";
  local_50 = puVar1;
  uVar3 = FUN_03c68d44(param_2,&local_50,puVar2);
  *(undefined8 *)(param_1 + 0x2a0) = uVar3;
  pcStack_48 = "*Cursor";
  pcStack_58 = "*Cursor";
  local_60 = puVar1;
  local_50 = puVar1;
  FUN_03d5d740(param_1,param_2,param_3,&local_50,&local_60);
  FUN_03d5de00(param_1,param_2,param_3);
  plVar4 = *(long **)(param_1 + 0x58);
  local_50 = (undefined *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_50);
  }
  FUN_03d6627c(param_1,param_2,param_3);
  return;
}

