
undefined8 FUN_0014b4d4(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_001432f0(0x38);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_00143320(param_3);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      if (param_1 == 2) {
        uVar1 = *param_2;
        *plVar2 = lVar3;
        plVar2[1] = 0;
        plVar2[6] = 0;
        *(undefined4 *)(plVar2 + 4) = uVar1;
        plVar2[5] = (long)(plVar2 + 4);
        plVar2[2] = 0x400000002;
        plVar2[3] = (long)(plVar2 + 5);
        uVar4 = FUN_0014b3bc(plVar2,param_4);
      }
      else {
        uVar4 = 0;
      }
      FUN_00143300(lVar3);
    }
    FUN_00143300(plVar2);
  }
  return uVar4;
}

