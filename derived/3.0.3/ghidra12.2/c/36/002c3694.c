
void FUN_002c3694(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined8 local_2c;
  undefined4 local_24;
  
  iVar1 = FUN_002b43fc(param_2);
  if (iVar1 == 0) {
    local_24 = 0;
    local_2c = 1;
    (**(code **)(*param_2 + 0x20))(param_2,&local_2c);
    return;
  }
  FUN_002c714c(*(undefined8 *)(param_1 + 0x18),param_2,param_3 & 1);
  return;
}

