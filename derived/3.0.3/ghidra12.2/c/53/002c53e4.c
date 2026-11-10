
undefined8 FUN_002c53e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0')) {
    if (*(char *)(param_1 + 0x90) == '\0') {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x68) + 0x38))();
      if ((uVar1 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        local_40 = 0x6434;
        local_14 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
        FUN_002296c4(auStack_60,&local_40);
        puVar3 = auStack_60;
      }
      else {
        lVar2 = FUN_002bd3f0();
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        if (*(char *)(lVar2 + 2) == '\0') {
          local_40 = 0;
          local_14 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
          FUN_002296c4(auStack_80,&local_40);
          FUN_00220f8c(uVar4,auStack_80);
          goto LAB_002c5500;
        }
        local_14 = 0;
        local_40 = 0x6434;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
        FUN_002296c4(auStack_70,&local_40);
        puVar3 = auStack_70;
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      local_40 = 0x6434;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_50,&local_40);
      puVar3 = auStack_50;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0x6c05;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    puVar3 = auStack_30;
  }
  FUN_00220ff8(uVar4,puVar3);
LAB_002c5500:
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar2 = FUN_0022033c();
  if (lVar2 != 0) {
    uVar4 = FUN_0022033c();
    FUN_00220b40(uVar4,0);
  }
  return 1;
}

