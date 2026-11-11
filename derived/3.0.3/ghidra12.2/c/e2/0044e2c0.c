
undefined8 FUN_0044e2c0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)FUN_00426e90(param_2,0x400000);
  if ((plVar2 == (long *)0x0) || (pcVar4 = (code *)*plVar2, pcVar4 == (code *)0x0)) {
    plVar2 = (long *)FUN_00426e90(param_2,0x40);
    if (plVar2 == (long *)0x0) {
      return 0x80040200;
    }
    pcVar4 = (code *)*plVar2;
    if (pcVar4 == (code *)0x0) {
      return 0x80040200;
    }
  }
  uVar3 = FUN_00427110(param_2,&DAT_04c14570);
  if ((uVar3 & 1) == 0) {
    (*pcVar4)(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_00426fc0(param_2);
    if (0 < param_3) {
      do {
        uVar5 = *(undefined8 *)(param_1 + 8);
        (*pcVar4)(param_1,param_2,1);
        *(undefined8 *)(param_1 + 8) = uVar5;
        param_1 = param_1 + iVar1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 0;
}

