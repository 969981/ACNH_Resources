
long FUN_0043aec0(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  pcVar2 = (char *)(*param_2 & 0xfffffffffffffffe);
  if (pcVar2 == (char *)0x0) {
    pcVar3 = *(code **)(*plVar4 + 0x28);
    pcVar2 = "(null)";
    uVar1 = 6;
  }
  else {
    uVar1 = FUN_0043c110(param_2);
    pcVar3 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar3)(plVar4,pcVar2,uVar1);
  return param_1;
}

