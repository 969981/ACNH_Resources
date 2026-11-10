
int FUN_0016b118(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0016b098(param_1,param_3 + 1,param_4);
  if (iVar1 == 0) {
    *(long *)(*param_1 + 0x18) = param_3;
    puVar2 = (undefined1 *)FUN_00168980(*(undefined8 *)(*param_1 + 0x10),param_2,param_3);
    *puVar2 = 0;
  }
  return iVar1;
}

