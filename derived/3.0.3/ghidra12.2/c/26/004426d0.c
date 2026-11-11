
void FUN_004426d0(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_0043ac00(param_1,0);
  *param_1 = &PTR_FUN_048610a8;
  lVar2 = param_2 + param_3 + -0x40;
  FUN_00470bd0(lVar2,param_2,param_3 + -0x40,1);
  lVar1 = param_1[1];
  if ((lVar1 == lVar2) || (param_1[1] = lVar2, lVar1 == 0)) {
    return;
  }
  FUN_004435c0();
  return;
}

