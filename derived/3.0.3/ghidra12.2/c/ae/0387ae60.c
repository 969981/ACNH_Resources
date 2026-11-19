
void FUN_0387ae60(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_60 [4];
  
  nn::os::GetSystemTick();
  local_60[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_60);
  puVar2 = PTR_DAT_04bcb8b8;
  iVar3 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  if (iVar3 == 1) {
    FUN_0029b574(local_60,*(undefined8 *)puVar2,param_2);
    FUN_00229780(param_1,local_60);
    if ((*param_1 == 0) || (FUN_00223064(param_1), *param_1 == 0)) {
      puVar1 = PTR_DAT_04bcb7d8;
      lVar5 = *(long *)PTR_DAT_04bb29d0;
      do {
        uVar4 = FUN_0029b68c(*(undefined8 *)puVar2);
        if ((uVar4 & 1) != 0) {
          FUN_0029b6a8(local_60,*(undefined8 *)puVar2);
          FUN_00229780(param_1,local_60);
        }
        lVar6 = *(long *)(*(long *)puVar1 + 0x18);
        FUN_0389df38(local_60);
        nn::os::ConvertToTimeSpan((long)(lVar5 * (ulong)*(uint *)(lVar6 + 0x70)) / 1000);
        nn::os::SleepThread();
      } while ((uVar4 & 1) == 0);
    }
  }
  return;
}

