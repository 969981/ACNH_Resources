
undefined8 FUN_002f87fc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  puVar7 = PTR_DAT_04bcb8b8;
  uVar1 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  switch(uVar1) {
  case 5:
    local_44 = 0xc406;
    break;
  case 6:
    local_44 = 0xa471;
    break;
  case 7:
    local_44 = 0xc420;
    break;
  case 8:
    local_44 = 0xc421;
    break;
  default:
    FUN_0026bc0c(&local_44,*(undefined8 *)PTR_DAT_04bcd350);
    if ((local_44 != 0) || (iVar2 = FUN_0029b330(*(undefined8 *)puVar7), iVar2 == 4)) {
      local_54 = 0;
      local_44 = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
      FUN_00229780(param_1 + 0x220,&local_44);
      uVar5 = 4;
LAB_002f88a8:
      *(undefined1 *)(param_1 + 0x130) = uVar5;
      puVar7 = PTR_LAB_04bce5e0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      *(undefined **)(param_1 + 0x30) = puVar7;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_00229780(param_1 + 0x220,param_1 + 0x100);
      uVar5 = 6;
      goto LAB_002f88a8;
    }
    lVar9 = *(long *)puVar7;
    uVar8 = *(undefined8 *)(lVar9 + 200);
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    uVar3 = FUN_0029bf00(lVar9);
    FUN_002a2970(&local_44,uVar8,uVar1,uVar3,1);
    local_34 = 0;
    local_54 = 0x4c0d;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    uVar3 = 5;
    if (local_44 == local_54) {
      return 5;
    }
    if (local_44 == 0) {
      uVar4 = (**(code **)(**(long **)(lVar9 + (ulong)*(byte *)(lVar9 + 0x162) * 8 + 0x168) + 0xe0))
                        ();
      if ((uVar4 & 1) == 0) {
        uVar3 = 5;
        pcVar6 = "NexMatchJointSessionJob::WaitForInvitationAsCompanion";
        uVar8 = *(undefined8 *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
        *(undefined4 *)(param_1 + 0x98) = 6;
        *(undefined8 *)(param_1 + 0x1d0) = uVar8;
        puVar7 = PTR_LAB_04bce678;
      }
      else {
        FUN_002f8690(param_1);
        uVar3 = 0;
        pcVar6 = "NexMatchJointSessionJob::CloseMatchmakeSession";
        puVar7 = PTR_LAB_04bce5f8;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 5;
      local_54 = 0x6c57;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
      FUN_00229780(param_1 + 0x220,&local_54);
      FUN_002d6480(*(undefined8 *)
                    (*(long *)puVar7 + (ulong)(*(char *)(*(long *)puVar7 + 0x162) == '\0') * 8 +
                    0x168));
      pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
      puVar7 = PTR_LAB_04bce5e0;
    }
    *(undefined **)(param_1 + 0x30) = puVar7;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_002f895c;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
  FUN_00229780(param_1 + 0x220,&local_44);
  (**(code **)(**(long **)(*(long *)puVar7 + 8) + 0x28))();
  uVar3 = 0;
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04bce5e8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_002f895c:
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar3;
}

