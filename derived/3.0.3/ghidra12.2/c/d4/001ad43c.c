
void FUN_001ad43c(long param_1,int param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  undefined1 auStack_68 [16];
  long local_58;
  undefined2 local_48 [12];
  
  FUN_00197218(auStack_68);
  local_48[0] = CONCAT11(local_48[0]._1_1_,(char)param_2);
  FUN_00197478(auStack_68,local_48,1);
  FUN_00197478(auStack_68,param_1 + 0x28,4);
  FUN_00197540(auStack_68,param_4);
  if (param_2 == 1) {
    if (*(char *)(param_3 + 0x68) == '\0') {
      FUN_001b8590(param_3);
    }
    local_48[0] = FUN_001e14f8(*(undefined8 *)(param_3 + 8));
    FUN_00197478(auStack_68,local_48,2);
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x20);
    if (*(char *)(param_3 + 0x68) == '\0') {
      FUN_001b8590(param_3);
    }
    (**(code **)(*plVar1 + 0x30))
              (local_48,plVar1,*(undefined8 *)(param_3 + 8),(int)plVar1[1],(char)plVar1[3],local_58,
               param_5,0);
  }
  else {
    (**(code **)(*plVar1 + 0x18))
              (plVar1,param_3,*(long *)(local_58 + 0x10) + *(long *)(local_58 + 0x28),
               *(undefined8 *)(local_58 + 0x18),param_5);
  }
  FUN_00197350(auStack_68);
  return;
}

