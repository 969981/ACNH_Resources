
undefined8 FUN_00263398(long *param_1)

{
  int local_20 [4];
  
  FUN_0026c5d0(local_20,*(undefined8 *)PTR_DAT_04bcd350);
  if (local_20[0] == 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
    return 6;
  }
  param_1[6] = (long)FUN_00263408;
  param_1[7] = 0;
  param_1[8] = (long)"JoinMeshJob::SetupLocalPlayerInfoFailure";
  return 6;
}

