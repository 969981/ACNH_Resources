
undefined8 FUN_00278dc8(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0026c420(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_002729c4(uVar1,*(undefined1 *)((long)param_1 + 0x86));
  (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((long)param_1 + 0x86));
  return 1;
}

