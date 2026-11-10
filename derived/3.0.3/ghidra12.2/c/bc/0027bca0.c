
int FUN_0027bca0(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  
  iVar2 = FUN_0027bda0();
  if (iVar2 == 4) {
    FUN_0027c0c0(param_1,param_4 & 1);
    if ((param_4 & 1) == 0) {
      param_1[0x1f] = 0;
    }
    else {
      *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
    }
    *(byte *)((long)param_1 + 0x105) = param_4 & 1;
    memset(param_1 + 0x10,0xff,0x20);
    *(undefined1 *)((long)param_1 + 0x104) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    bVar1 = FUN_0027c1d0(param_1);
    *(byte *)((long)param_1 + 0x10c) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      param_1[6] = (long)&LAB_0027dab8;
      pcVar4 = "ProcessUpdateMeshJob::UpdateFailed";
    }
    else {
      uVar3 = FUN_0026c870(DAT_04c603c8);
      if ((uVar3 & 1) == 0) {
        param_1[6] = (long)&LAB_0027d360;
        pcVar4 = "ProcessUpdateMeshJob::CheckConnectionAll";
      }
      else {
        param_1[6] = (long)&LAB_0027ccb0;
        pcVar4 = "ProcessUpdateMeshJob::WaitDirectConnection";
      }
    }
    param_1[7] = 0;
    param_1[8] = (long)pcVar4;
  }
  return iVar2;
}

