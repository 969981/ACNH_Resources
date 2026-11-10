
void FUN_002cbc90(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if ((param_4 < 3) && (param_3 != 0)) {
    if (param_4 != 0) {
      iVar1 = FUN_002a38a4(param_3);
      if ((iVar1 != 0) || ((param_4 != 1 && (iVar1 = FUN_002a38a4(param_3 + 0xd38), iVar1 != 0))))
      goto LAB_002cbcd0;
      if (param_4 != 0) {
        uVar3 = (ulong)param_4;
        lVar2 = param_2 + 0x648;
        do {
          FUN_0030afa0(lVar2,param_3);
          param_3 = param_3 + 0xd38;
          lVar2 = lVar2 + 0xd38;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    *(uint *)(param_2 + 0x20b8) = param_4;
    local_50 = 0;
  }
  else {
LAB_002cbcd0:
    local_50 = 0x10c07;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

