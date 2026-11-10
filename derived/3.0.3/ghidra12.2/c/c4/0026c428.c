
void FUN_0026c428(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 local_2c;
  undefined4 local_24;
  
  plVar1 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  if (lVar2 == 0) {
    local_24 = 0;
    local_2c = 0x200000000000;
    (**(code **)(*param_2 + 0x28))(param_2,&local_2c);
    return;
  }
  local_24 = 0;
  local_2c = 0x200000000000;
  (**(code **)(*param_2 + 0x28))(param_2,&local_2c);
  *(undefined4 *)(lVar2 + 0x4c) = 7;
  return;
}

