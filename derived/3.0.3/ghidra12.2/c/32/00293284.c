
void FUN_00293284(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bcb8b8;
  piVar4 = &local_50;
  if (param_3 == 0) {
    local_40 = 0x10c07;
LAB_002932d8:
    local_50 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  }
  else {
    if (param_2[0xb] != 0) {
LAB_002932c0:
      local_40 = 0x10c08;
      goto LAB_002932d8;
    }
    uVar3 = FUN_0029b7b0(*(undefined8 *)PTR_DAT_04bcb8b8);
    if ((uVar3 & 1) != 0) goto LAB_002932c0;
    (**(code **)(*param_2 + 0x38))(&local_40,param_2);
    puVar2 = PTR_FUN_04bcde98;
    if (local_40 == 0) {
      param_2[8] = (long)"DestroySessionJob::WaitForcedTerminatingOfJointSessionJob";
      param_2[0xb] = param_3;
      param_2[6] = (long)puVar2;
      param_2[7] = 0;
      FUN_00220f78(param_3);
      *(undefined1 *)(param_2 + 0x13) = 0;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[0x12] = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
      lVar5 = *(long *)puVar1;
      lVar6 = *(long *)(lVar5 + 0x70);
      if (lVar6 != 0) {
        local_24 = 0;
        local_50 = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
        *(undefined1 *)(lVar6 + 0xfb) = 1;
        FUN_00229780(lVar6 + 0x100,&local_50);
      }
      if ((*(long *)(lVar5 + 0x10) != 0) && (uVar3 = FUN_002212e4(), (uVar3 & 1) != 0)) {
        *(undefined1 *)(*(long *)(lVar5 + 0x10) + 0x48) = 1;
      }
      local_50 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      goto LAB_002932f4;
    }
  }
  piVar4 = &local_40;
LAB_002932f4:
  FUN_002296c4(param_1,piVar4);
  return;
}

