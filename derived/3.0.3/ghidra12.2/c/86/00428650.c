
undefined2 * FUN_00428650(void *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = (param_3 + param_2) * 8;
  puVar2 = (undefined2 *)(**(code **)(*param_4 + 0x10))(param_4,(long)(iVar1 + 8),0);
  *puVar2 = (short)param_2;
  puVar2[1] = (short)param_3;
  puVar2[2] = (short)(param_3 + param_2);
  if (param_1 == (void *)0x0) {
    FUN_0043a810(puVar2 + 4,0,(long)iVar1);
  }
  else {
    memcpy(puVar2 + 4,param_1,(long)iVar1);
  }
  return puVar2;
}

