
void thunk_FUN_0021d3a0(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iStack_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 uStack_24;
  
  if (param_4 == 0) {
    uStack_24 = 0;
    iStack_40 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&uStack_24);
  }
  else {
    FUN_0021d450(&iStack_40,param_2,param_4);
    if (iStack_40 == 0) {
      FUN_0021d60c(param_1,param_2,0,param_3,param_4,0,*(undefined2 *)(param_2 + 0x78));
      return;
    }
  }
  FUN_002296c4(param_1,&iStack_40);
  return;
}

