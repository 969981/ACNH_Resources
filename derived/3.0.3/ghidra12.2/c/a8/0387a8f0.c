
void FUN_0387a8f0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_34;
  
  puVar3 = &local_70;
  nn::os::GetSystemTick();
  local_70 = 0;
  local_60 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_60);
  lVar1 = DAT_04c60f48;
  if (DAT_04c60f48 != 0) {
    FUN_00223668(&local_60,DAT_04c5fbb0);
    FUN_00229780(&local_70,&local_60);
    if (((local_70 == 0) || ((local_70 & 0x3c000) == 0x8000)) &&
       (uVar2 = (**(code **)(**(long **)(DAT_05ae6a60 + 0x30) + 0x18))(), (uVar2 & 1) == 0)) {
      FUN_0029aa20(&local_60,lVar1);
      FUN_00229780(&local_70,&local_60);
      if (local_70 == 0) {
        lVar4 = *(long *)PTR_DAT_04bb29d0;
        do {
          uVar2 = FUN_0029c9d8(lVar1);
          if ((uVar2 & 1) != 0) {
            FUN_0029c9ec(&local_60,lVar1);
            FUN_00229780(&local_70,&local_60);
          }
          lVar5 = *(long *)(DAT_05ae6a60 + 0x18);
          FUN_0389df38(&local_60);
          nn::os::ConvertToTimeSpan((long)(lVar4 * (ulong)*(uint *)(lVar5 + 0x70)) / 1000);
          nn::os::SleepThread();
        } while ((uVar2 & 1) == 0);
      }
      goto LAB_0387a9bc;
    }
  }
  local_60 = 0;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
  puVar3 = &local_60;
LAB_0387a9bc:
  FUN_002296c4(param_1,puVar3);
  return;
}

