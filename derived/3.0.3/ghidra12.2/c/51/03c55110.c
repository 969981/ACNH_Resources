
uint FUN_03c55110(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  plVar2 = (long *)param_1[7];
  if (plVar2 != param_1 + 6) {
    plVar3 = param_1 + -0x26;
    param_1 = plVar2 + -0x2c;
    do {
      if (*(byte *)(param_1 + 0x23) == param_2) {
        uVar4 = 1;
        uVar1 = (**(code **)(*param_1 + 0x18))(param_1,1,0);
        goto LAB_03c55170;
      }
      plVar2 = (long *)plVar2[1];
      param_1 = plVar2 + -0x2c;
    } while (param_1 != plVar3);
  }
  uVar1 = (uint)param_1;
  uVar4 = 0;
LAB_03c55170:
  return uVar4 & uVar1;
}

