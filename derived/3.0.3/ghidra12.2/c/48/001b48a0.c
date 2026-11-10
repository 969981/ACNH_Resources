
void FUN_001b48a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_04bcc490 + 0x10);
  FUN_001b8504(param_1 + 0x2b);
  if (param_1[0x2a] != 0) {
    lVar1 = param_1[0x28];
    plVar2 = (long *)param_1[0x29];
    param_1[0x2a] = 0;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    while (plVar2 != param_1 + 0x28) {
      plVar4 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar4;
    }
  }
  FUN_001976b0(param_1 + 0x15);
  FUN_0019a368(param_1);
  return;
}

