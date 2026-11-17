
void FUN_02a556cc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_40 = 0;
  local_38 = 0;
  lVar1 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
  local_30 = *(undefined8 *)(lVar1 + 0x130);
  local_28 = (undefined4)*(undefined8 *)(lVar1 + 0x138);
  FUN_02a1e144(lVar1,&local_40,param_2,&local_30,param_3);
  FUN_02a1e4c0(local_40,local_38,lVar1,param_1);
  return;
}

