
void FUN_002a57b0(undefined8 param_1,long param_2,uint param_3,undefined2 param_4,ushort param_5,
                 undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  lVar1 = FUN_002ba7a0(DAT_04c61168);
  plVar4 = *(long **)(lVar1 + 0x10);
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  if (param_5 < 0x21) {
    *(ushort *)(param_2 + 0x6ae) = param_5;
    *(undefined4 *)(param_2 + 0x648) = param_6;
    local_54 = 0;
    local_64 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    FUN_002a5950(&local_64,param_2 + 0x18,(uint)*(ushort *)(param_2 + 0x6ae) * (param_3 & 0xffff));
    FUN_00229780(&local_54,&local_64);
    if (local_54 == 0) {
      if (*(short *)(param_2 + 0x6ae) != 0) {
        uVar2 = 0;
        lVar1 = param_2 + 0x38;
        do {
          FUN_002a5a80(&local_64,lVar1,param_4);
          FUN_00229780(&local_54,&local_64);
          if (local_54 != 0) {
            lVar1 = *(long *)(param_2 + 0x20);
            if (lVar1 != 0) {
              FUN_00285e00(lVar1);
              FUN_00285dc0(lVar1);
              *(undefined8 *)(param_2 + 0x20) = 0;
            }
            *(undefined4 *)(param_2 + 0x28) = 0;
            goto LAB_002a5894;
          }
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x28;
        } while (uVar2 < *(ushort *)(param_2 + 0x6ae));
      }
      local_64 = 0;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
      piVar3 = &local_64;
    }
    else {
LAB_002a5894:
      piVar3 = &local_54;
    }
  }
  else {
    local_64 = 0;
    local_54 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    piVar3 = &local_54;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}

