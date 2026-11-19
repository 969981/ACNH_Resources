
void FUN_0387b1d0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_60 [4];
  
  nn::os::GetSystemTick();
  local_60[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_60);
  puVar2 = PTR_DAT_04bcb8b8;
  uVar3 = FUN_0029bc64(*(undefined8 *)PTR_DAT_04bcb8b8);
  if ((uVar3 & 1) == 0) {
    FUN_0029bb30(local_60,*(undefined8 *)puVar2);
    FUN_00229780(param_1,local_60);
    if ((*param_1 != 0) && (FUN_00223064(param_1), *param_1 != 0)) {
      return;
    }
  }
  puVar1 = PTR_DAT_04bcb7d8;
  lVar4 = *(long *)PTR_DAT_04bb29d0;
  do {
    uVar3 = FUN_0029bc64(*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      FUN_0029bc80(local_60,*(undefined8 *)puVar2);
      FUN_00229780(param_1,local_60);
    }
    lVar5 = *(long *)(*(long *)puVar1 + 0x18);
    FUN_0389df38(local_60);
    nn::os::ConvertToTimeSpan((long)(lVar4 * (ulong)*(uint *)(lVar5 + 0x70)) / 1000);
    nn::os::SleepThread();
  } while ((uVar3 & 1) == 0);
  return;
}

