
uint FUN_003bbc10(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_003b82fc();
  uVar3 = 1;
  for (plVar4 = (long *)param_1[3]; plVar4 != param_1 + 2; plVar4 = (long *)plVar4[1]) {
    uVar2 = FUN_003b82fc(plVar4[3]);
    uVar3 = uVar2 & uVar3;
  }
  return uVar1 & uVar3;
}

