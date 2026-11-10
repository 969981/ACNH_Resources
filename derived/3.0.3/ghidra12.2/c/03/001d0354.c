
long * FUN_001d0354(long param_1,undefined8 param_2,long param_3,undefined4 param_4,
                   undefined1 param_5,undefined4 param_6)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  char local_60;
  undefined1 local_5f;
  undefined1 auStack_58 [24];
  
  FUN_001b8014(auStack_c8);
  if (local_60 == '\0') {
    FUN_001b8590(auStack_c8);
  }
  FUN_001e15a8(local_c0,param_2);
  local_5f = 0;
  FUN_001b8e80(auStack_58,auStack_c8,&DAT_0410a683,param_5);
  FUN_001b8e80(auStack_58,auStack_c8,&DAT_0410a6c4,param_6);
  plVar1 = (long *)FUN_001ce1c0(param_1,auStack_c8,param_4,0);
  uVar2 = (**(code **)(*plVar1 + 0x58))();
  if ((((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1), (uVar2 & 1) == 0)) &&
     (plVar3 = *(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) {
    if (*(long *)(param_3 + 0x18) == 0) {
      uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1,plVar1 + 2,0,plVar1);
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x30))();
    }
    if ((uVar2 & 1) == 0) {
      FUN_001ca708(param_1,plVar1);
      plVar1 = (long *)0x0;
    }
  }
  FUN_001b8504(auStack_c8);
  return plVar1;
}

