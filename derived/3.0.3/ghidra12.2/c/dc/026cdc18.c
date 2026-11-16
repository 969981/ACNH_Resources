
undefined8 FUN_026cdc18(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_1 + 0xf);
  *(undefined4 *)((long)param_1 + 0x74) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return 1;
}

