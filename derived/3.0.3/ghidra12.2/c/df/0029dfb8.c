
undefined8 FUN_0029dfb8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  int local_90;
  ErrorResultVariant aEStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bcb8b8;
  puVar4 = auStack_a0;
  uVar2 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  switch(uVar2) {
  case 5:
    lVar5 = *(long *)(param_1 + 0x58);
    local_40 = 0xc406;
    local_90 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_90);
    FUN_002296c4(auStack_30,&local_40);
    puVar4 = auStack_30;
    break;
  case 6:
    lVar5 = *(long *)(param_1 + 0x58);
    local_40 = 0xa471;
    local_90 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_90);
    FUN_002296c4(auStack_50,&local_40);
    puVar4 = auStack_50;
    break;
  case 7:
    lVar5 = *(long *)(param_1 + 0x58);
    local_40 = 0xc420;
    local_90 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_90);
    FUN_002296c4(auStack_60,&local_40);
    puVar4 = auStack_60;
    break;
  case 8:
    lVar5 = *(long *)(param_1 + 0x58);
    local_40 = 0xc421;
    local_90 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_90);
    FUN_002296c4(auStack_70,&local_40);
    puVar4 = auStack_70;
    break;
  default:
    iVar3 = FUN_0029b330(*(undefined8 *)puVar1);
    lVar5 = *(long *)(param_1 + 0x58);
    if (iVar3 != 4) {
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x28) != '\0')) {
        FUN_00221064(lVar5);
        *(undefined8 *)(param_1 + 0x58) = 0;
        return 1;
      }
      (**(code **)(**(long **)(param_1 + 0x98) + 0x80))
                (&local_40,*(long **)(param_1 + 0x98),param_1 + 0x60,*(undefined4 *)(param_1 + 0x90)
                );
      puVar1 = PTR_FUN_04bcdfb8;
      if (local_40 == 0) {
        *(char **)(param_1 + 0x40) = "OpenParticipationJob::WaitOpenParticipation";
        *(undefined **)(param_1 + 0x30) = puVar1;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        local_14 = 0;
        local_90 = 0x4c11;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_8c,(Result *)&local_14);
        if (local_40 != local_90) {
          lVar5 = *(long *)(param_1 + 0x58);
          FUN_002296c4(auStack_a0,&local_40);
          break;
        }
      }
      return 5;
    }
    local_90 = 0;
    local_40 = 0x8c56;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_90);
    FUN_002296c4(auStack_80,&local_40);
    puVar4 = auStack_80;
  }
  FUN_00220ff8(lVar5,puVar4);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

