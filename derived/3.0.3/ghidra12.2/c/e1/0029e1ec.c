
undefined8 FUN_0029e1ec(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bcb8b8;
  uVar2 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  switch(uVar2) {
  case 5:
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xc406;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    puVar5 = auStack_30;
    break;
  case 6:
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xa471;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_50,&local_40);
    puVar5 = auStack_50;
    break;
  case 7:
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xc420;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_60,&local_40);
    puVar5 = auStack_60;
    break;
  case 8:
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0xc421;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_70,&local_40);
    puVar5 = auStack_70;
    break;
  default:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x88))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) == 2) {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 4 + 0x180) == *(int *)(param_1 + 0x90))
      {
        FUN_0029db50(lVar4,1);
      }
      else if (*(int *)(lVar4 + (ulong)(*(byte *)(lVar4 + 0x162) == 0) * 4 + 0x180) ==
               *(int *)(param_1 + 0x90)) {
        FUN_0029db60(lVar4,1);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      local_40 = 0;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_90,&local_40);
      FUN_00220f8c(uVar6,auStack_90);
    }
    else if (*(int *)(param_1 + 0x60) == 3) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      FUN_002296c4(auStack_80,param_1 + 100);
      FUN_00220ff8(uVar6,auStack_80);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  FUN_00220ff8(uVar6,puVar5);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

