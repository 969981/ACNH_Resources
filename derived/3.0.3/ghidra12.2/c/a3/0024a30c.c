
undefined8 FUN_0024a30c(long param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined *local_30 [3];
  undefined2 local_18;
  
  local_30[0] = PTR_DAT_04bccf70 + 0x10;
  FUN_0021f5a0(local_30,*(undefined4 *)(param_1 + (long)param_2 * 0x40 + 0xa8));
  local_18 = 0x3039;
  FUN_0024e354(auStack_40,param_3,local_30);
  FUN_0024e314(auStack_40,param_3,0);
  FUN_0021f584(local_30);
  return 1;
}

