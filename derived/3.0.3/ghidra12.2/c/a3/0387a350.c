
void FUN_0387a350(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_60 [4];
  
  nn::os::GetSystemTick();
  *param_1 = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_60);
  uVar3 = *(undefined8 *)PTR_DAT_04bcb8b8;
  FUN_0029a5c8(local_60,uVar3,param_2);
  FUN_00229780(param_1,local_60);
  if ((*param_1 == 0) || (FUN_00223064(param_1), *param_1 == 0)) {
    puVar1 = PTR_DAT_04bcb7d8;
    lVar4 = *(long *)PTR_DAT_04bb29d0;
    do {
      uVar2 = FUN_0029c9d8(uVar3);
      if ((uVar2 & 1) != 0) {
        FUN_0029c9ec(local_60,uVar3);
        FUN_00229780(param_1,local_60);
      }
      lVar5 = *(long *)(*(long *)puVar1 + 0x18);
      FUN_0389df38(local_60);
      nn::os::ConvertToTimeSpan((long)(lVar4 * (ulong)*(uint *)(lVar5 + 0x70)) / 1000);
      nn::os::SleepThread();
    } while ((uVar2 & 1) == 0);
  }
  return;
}

