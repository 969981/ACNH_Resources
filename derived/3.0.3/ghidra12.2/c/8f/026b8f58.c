
void FUN_026b8f58(undefined8 param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 local_38;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_28 = 0;
  local_2e = 0x1ff;
  local_38 = *param_2;
  local_22 = 0;
  local_24 = 0xff00;
  local_30 = param_3;
  if (-1 < DAT_053d08f0) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d08f0,&local_28,&local_38,0xc,0);
  }
  FUN_026934e8(param_1,param_2,0,0,0,0,1,1);
  return;
}

