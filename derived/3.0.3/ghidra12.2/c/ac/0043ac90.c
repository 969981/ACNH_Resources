
long FUN_0043ac90(long param_1,char *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (param_2 == (char *)0x0) {
    pcVar2 = *(code **)(*plVar3 + 0x28);
    param_2 = "(null)";
    uVar1 = 6;
  }
  else {
    uVar1 = FUN_0043a2d0(param_2);
    pcVar2 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar2)(plVar3,param_2,uVar1);
  return param_1;
}

