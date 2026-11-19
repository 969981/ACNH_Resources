
int * FUN_03b81aa8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  int local_28;
  char local_24;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    piVar2 = malloc(0x18);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    piVar2 = (int *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
  }
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03b36b40(param_3,&local_28,"DelayTime");
  if (((uVar3 & 1) != 0) && (local_24 == -0x2e)) {
    *piVar2 = local_28;
  }
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03b36b40(param_3,&local_28,"Depth");
  if (((uVar3 & 1) != 0) && (local_24 == -0x2e)) {
    piVar2[1] = local_28;
  }
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03b36b40(param_3,&local_28,&DAT_0407bfe5);
  if (((uVar3 & 1) != 0) && (local_24 == -0x2e)) {
    piVar2[2] = local_28;
  }
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03b36b40(param_3,&local_28,"FeedbackGain");
  if (((uVar3 & 1) != 0) && (local_24 == -0x2e)) {
    piVar2[3] = local_28;
  }
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03b36b40(param_3,&local_28,"CrossFeedbackGain");
  if (((uVar3 & 1) != 0) && (local_24 == -0x2e)) {
    piVar2[4] = local_28;
  }
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03b36b40(param_3,&local_28,"FlipLfoPhaseEnabled");
  if (((uVar3 & 1) != 0) && (local_24 == -0x30)) {
    *(bool *)(piVar2 + 5) = local_28 != 0;
  }
  return piVar2;
}

