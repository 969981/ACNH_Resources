
undefined8 FUN_01e5bcc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  FUN_01e5a930(0x40000000,param_1,0x11,param_2,&local_24,&local_28,&DAT_04178e00,6);
  *(undefined1 *)(param_1 + 0x410) = param_3;
  return 1;
}

