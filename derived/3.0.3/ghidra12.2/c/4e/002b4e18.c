
long FUN_002b4e18(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_00223704((long *)(param_1 + 0x58),plVar1 + -2);
    FUN_002236e0(param_1 + 0x70,param_1 + 0x70,(long)(plVar1 + -2) + (long)*(int *)(param_1 + 0x84))
    ;
    lVar3 = FUN_002237a8(param_1 + 0x30);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 - *(int *)(param_1 + 0x44);
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    FUN_002236bc(param_1 + 0x18,param_1 + 0x18,lVar2);
    *(long *)(lVar2 + 0x10) = lVar4;
    FUN_002b3dac(lVar4,param_2);
    FUN_002b3db4(lVar4,param_3);
  }
  return lVar4;
}

