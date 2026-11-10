
undefined8 FUN_0029e7d8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  puVar4 = auStack_80;
  uVar2 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  switch(uVar2) {
  case 5:
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xc406;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    puVar4 = auStack_30;
    break;
  case 6:
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xa471;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_50,&local_40);
    puVar4 = auStack_50;
    break;
  case 7:
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xc420;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_60,&local_40);
    puVar4 = auStack_60;
    break;
  case 8:
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xc421;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_70,&local_40);
    puVar4 = auStack_70;
    break;
  default:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x98))();
    puVar1 = PTR_FUN_04bcde40;
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) == 2) {
      *(char **)(param_1 + 0x40) = "CloseParticipationJob::WaitP2pStable";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_002282f0(param_1 + 0xa0);
      return 0;
    }
    if (*(int *)(param_1 + 0x60) != 3) goto LAB_0029e8f0;
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    FUN_002296c4(auStack_80,param_1 + 100);
  }
  FUN_00220ff8(uVar5,puVar4);
LAB_0029e8f0:
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

