
void FUN_0387ad20(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_60 [4];
  
  nn::os::GetSystemTick();
  *param_1 = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_60);
  puVar2 = PTR_DAT_04bcb8b8;
  FUN_0029a6bc(local_60,*(undefined8 *)PTR_DAT_04bcb8b8,param_2);
  FUN_00229780(param_1,local_60);
  if ((*param_1 == 0) || (FUN_00223064(param_1), *param_1 == 0)) {
    lVar3 = DAT_05ae7888;
    uVar4 = FUN_0029c9d8(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_04bcb7d8;
    while ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(*(long *)puVar1 + 0x18);
      FUN_0389df38(local_60);
      nn::os::ConvertToTimeSpan((long)(lVar3 * (ulong)*(uint *)(lVar6 + 0x70)) / 1000);
      nn::os::SleepThread();
      uVar4 = FUN_0029c9d8(*(undefined8 *)puVar2);
    }
    FUN_0029c9ec(local_60,*(undefined8 *)puVar2);
    FUN_00229780(param_1,local_60);
    if (*param_1 == 0) {
      uVar5 = FUN_0029a81c(*(undefined8 *)puVar2);
      (**(code **)*param_3)(param_3,uVar5);
    }
  }
  return;
}

