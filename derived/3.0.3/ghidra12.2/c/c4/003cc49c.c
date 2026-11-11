
void FUN_003cc49c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar4 = *(undefined8 *)(param_2 + 0x130);
    lVar1 = FUN_003c0344(uVar4);
    if (lVar1 != 0) {
      FUN_003bd958(lVar3,lVar1);
    }
    FUN_003bd958(*(undefined8 *)(param_1 + 0x30),uVar4);
  }
  if (param_2 + 0x3d8 == param_1 + 0x18) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    plVar2 = *(long **)(param_2 + 0x3e0);
    lVar3 = *plVar2;
    *(long **)(*(long *)(param_2 + 0x3d8) + 8) = plVar2;
    *plVar2 = *(long *)(param_2 + 0x3d8);
    *(long *)(lVar3 + 8) = param_2 + 0x3d8;
    *(long *)(param_2 + 0x3d8) = lVar3;
  }
  FUN_003bee70(param_2);
  FUN_003bd958(param_1,param_2);
  return;
}

