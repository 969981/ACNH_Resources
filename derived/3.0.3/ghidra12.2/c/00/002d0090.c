
undefined8 FUN_002d0090(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  (**(code **)(*param_1 + 0x10))(param_1,1);
  param_1[6] = (long)FUN_00263398;
  param_1[7] = 0;
  param_1[8] = (long)"NexJoinMeshJob::SetupLocalPlayerInfo";
  uVar2 = (**(code **)(*DAT_04c611a0 + 0x58))();
  puVar1 = PTR_DAT_04bccf00;
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(PTR_DAT_04bccf00 + 0xd8) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
    *(undefined8 *)(puVar1 + 100) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x6c) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x74) = 0xffffffffffffffff;
  }
  return 1;
}

