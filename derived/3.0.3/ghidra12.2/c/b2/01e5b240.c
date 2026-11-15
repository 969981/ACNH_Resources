
undefined8 FUN_01e5b240(float param_1,long param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  FUN_01e5a930(0x40000000,param_2,0xc,&DAT_0419b56c,&local_24,&local_28,&DAT_04178e00,(int)param_1);
  *(undefined4 *)(param_2 + 0x3ac) = *param_3;
  return 1;
}

