
void FUN_0387ab40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 != 0) {
    nn::os::GetSystemTick();
    lVar3 = DAT_05ae7888;
    uVar4 = FUN_0029db78(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_04bcb7d8;
    while ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(*(long *)puVar1 + 0x18);
      FUN_0389df38(&local_54);
      nn::os::ConvertToTimeSpan((long)(lVar3 * (ulong)*(uint *)(lVar5 + 0x70)) / 1000);
      nn::os::SleepThread();
      uVar4 = FUN_0029db78(*(undefined8 *)puVar2);
    }
  }
  local_54 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

