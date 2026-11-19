
void FUN_0387b4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_34;
  
  piVar4 = &local_70;
  local_70 = 0;
  local_60 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_60);
  puVar2 = PTR_DAT_04bcb8b8;
  uVar3 = FUN_0029b264(*(undefined8 *)PTR_DAT_04bcb8b8);
  if ((uVar3 & 1) == 0) {
    local_60 = 0;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
    piVar4 = &local_60;
  }
  else {
    FUN_0029ae44(&local_60,*(undefined8 *)puVar2,param_2);
    FUN_00229780(&local_70,&local_60);
    if ((local_70 == 0) || (FUN_00223064(&local_70), local_70 == 0)) {
      puVar1 = PTR_DAT_04bcb7d8;
      lVar5 = *(long *)PTR_DAT_04bb29d0;
      do {
        uVar3 = FUN_0029c9d8(*(undefined8 *)puVar2);
        if ((uVar3 & 1) != 0) {
          FUN_0029c9ec(&local_60,*(undefined8 *)puVar2);
          FUN_00229780(&local_70,&local_60);
        }
        lVar6 = *(long *)(*(long *)puVar1 + 0x18);
        FUN_0389df38(&local_60);
        nn::os::ConvertToTimeSpan((long)(lVar5 * (ulong)*(uint *)(lVar6 + 0x70)) / 1000);
        nn::os::SleepThread();
      } while ((uVar3 & 1) == 0);
    }
  }
  FUN_002296c4(param_1,piVar4);
  return;
}

