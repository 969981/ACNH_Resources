
undefined8 FUN_0027abe8(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0026c420(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_00273a04(uVar2,param_1);
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 0xfd;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)((long)param_1 + 0xbd) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,1);
  puVar1 = PTR_LAB_04bcdba0;
  param_1[8] = (long)"ProcessJoinRequestJob::InitialStep";
  param_1[6] = (long)puVar1;
  param_1[7] = 0;
  return 1;
}

