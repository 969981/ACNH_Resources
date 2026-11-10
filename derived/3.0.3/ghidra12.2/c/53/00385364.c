
long * FUN_00385364(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long local_18;
  
  local_18 = 0;
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_18,0x666f6e74,param_3);
  plVar3 = (long *)0x0;
  if ((lVar1 != 0 && local_18 != 0) && (plVar3 = (long *)FUN_00367b30(0x108), plVar3 != (long *)0x0)
     ) {
    FUN_0035b6f8(plVar3);
    uVar2 = FUN_0035b790(plVar3,param_2,lVar1,0,0,0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      FUN_00367b50(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}

