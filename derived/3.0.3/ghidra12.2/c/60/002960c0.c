
void FUN_002960c0(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bcd350;
  if (param_2[0xb] == 0) {
    uVar2 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_0026afd0(*(undefined8 *)puVar1), (uVar2 & 1) != 0)) {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      *(undefined1 *)(param_2 + 0x13) = 0;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      lVar3 = *(long *)PTR_DAT_04bcb8b8;
      param_2[0x14] = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
      lVar4 = *(long *)(lVar3 + 0x70);
      if (lVar4 != 0) {
        local_34 = 0;
        local_44 = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
        *(undefined1 *)(lVar4 + 0xfb) = 1;
        FUN_00229780(lVar4 + 0x100,&local_44);
      }
      if ((*(long *)(lVar3 + 0x10) != 0) && (uVar2 = FUN_002212e4(), (uVar2 & 1) != 0)) {
        *(undefined1 *)(*(long *)(lVar3 + 0x10) + 0x48) = 1;
      }
      local_44 = 0;
      param_2[6] = (long)PTR_FUN_04bcdf20;
      param_2[7] = 0;
      param_2[8] = (long)"LeaveSessionJob::WaitForcedTerminatingOfJointSessionJob";
      goto LAB_002961c8;
    }
  }
  local_44 = 0x10c08;
LAB_002961c8:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

