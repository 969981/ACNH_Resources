
undefined4 FUN_0065adc0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  long *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [144];
  
  FUN_004225d0(auStack_c0);
  puVar3 = (undefined8 *)FUN_00424080(auStack_c0);
  pcVar5 = (char *)*puVar3;
  if (pcVar5 == (char *)0x0) {
    plVar4 = (long *)FUN_00662c50(0);
  }
  else {
    pcVar1 = pcVar5 + 1;
    if (*pcVar5 != '.') {
      pcVar1 = pcVar5;
    }
    plVar4 = (long *)FUN_00662c50(pcVar1);
  }
  if (plVar4 == (long *)0x0) {
    uVar2 = 0x80040200;
  }
  else {
    local_d8 = (long *)FUN_0049e430(param_2);
    uStack_d0 = 0;
    local_c8 = 0;
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4,&local_d8,param_1);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 8))();
    }
  }
  FUN_00422550(auStack_c0);
  return uVar2;
}

