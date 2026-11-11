
long FUN_0043ad80(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auStack_2758 [10024];
  
  FUN_0043a1a0(auStack_2758,0x2728,0x2728,&DAT_040d231a,param_2);
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = FUN_0043a2d0(auStack_2758);
  (**(code **)(*plVar2 + 0x28))(plVar2,auStack_2758,uVar1);
  return param_1;
}

