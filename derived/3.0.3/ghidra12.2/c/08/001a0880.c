
void FUN_001a0880(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_04bcc228 + 0x10);
  plVar3 = param_1 + 6;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if (param_1[0x11] != 0) {
    do {
      FUN_001a38f0(param_1 + 0xf,param_1[0xf]);
    } while (param_1[0x11] != 0);
  }
  (**(code **)(param_1[6] + 0x20))(plVar3);
  FUN_001a39e0(param_1 + 0xf,param_1[0x10]);
  FUN_0018ac30(plVar3);
  if (param_1[5] != 0) {
    lVar1 = param_1[3];
    plVar3 = (long *)param_1[4];
    param_1[5] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 3) {
      plVar4 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      FUN_00187e4c(plVar3);
      plVar3 = plVar4;
    }
  }
  FUN_0018d380(param_1);
  return;
}

