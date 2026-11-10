
undefined8 FUN_002983a8(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  local_40 = 0;
  local_50 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  local_24 = 0;
  local_50 = 0x6c05;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
  puVar2 = PTR_DAT_04bcd350;
  uVar5 = 2;
  if (*(int *)((long)param_1 + 0x6c) != local_50) {
    uVar5 = 3;
  }
  uVar3 = FUN_0026c070(2,*(undefined8 *)PTR_DAT_04bcd350);
  plVar1 = param_1 + 0x22;
  if ((uVar3 & 1) == 0) {
    FUN_0026b890(&local_50,*(undefined8 *)puVar2,plVar1,uVar5);
    FUN_00229780(&local_40,&local_50);
    puVar2 = PTR_LAB_04bce000;
  }
  else {
    uVar3 = FUN_0026afd0(*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_0026a910(&local_50,*(undefined8 *)puVar2,plVar1,uVar5);
      FUN_00229780(&local_40,&local_50);
      puVar2 = PTR_LAB_04bce000;
    }
    else {
      FUN_0026aea4(&local_50,*(undefined8 *)puVar2,plVar1,uVar5);
      FUN_00229780(&local_40,&local_50);
      puVar2 = PTR_LAB_04bce000;
    }
  }
  PTR_LAB_04bce000 = puVar2;
  if (local_40 == 0) {
    param_1[8] = (long)"RandomMatchmakeJob::WaitLeaveMesh";
    param_1[6] = (long)puVar2;
    param_1[7] = 0;
    return 5;
  }
  (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb8b8 + 8) + 0x28))();
  uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
  return uVar4;
}

