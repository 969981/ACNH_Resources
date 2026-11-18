
void FUN_0331fe48(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  (**(code **)(*param_1 + 0x140))();
  FUN_0331d608(param_1);
  if (param_1[0xb8] != 0) {
    FUN_0328607c();
    plVar1 = (long *)param_1[0xb8];
    param_1[0xb8] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (param_1[100] != 0) {
    FUN_03282bac();
    plVar1 = (long *)param_1[100];
    param_1[100] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (*(long *)(param_1[0x5e] + 0xf8) != 0) {
    FUN_032d15b0(*(undefined8 *)(param_1[99] + 0x390));
  }
  lVar2 = param_1[0x5f];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0xf8) != 0) {
      FUN_032d15b0(*(undefined8 *)(param_1[99] + 0x390));
      lVar2 = param_1[0x5f];
    }
    FUN_032d1384(lVar2);
    param_1[0x5f] = 0;
  }
  if (param_1[0x5e] != 0) {
    FUN_032d1384();
    param_1[0x5e] = 0;
  }
  *(undefined2 *)((long)param_1 + 0x17de) = 0;
  plVar3 = (long *)param_1[0x5c];
  plVar1 = (long *)param_1[0x5d];
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0331ff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

