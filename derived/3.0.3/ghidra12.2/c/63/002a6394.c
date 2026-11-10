
void FUN_002a6394(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_5c8 [16];
  undefined4 local_5b8;
  ErrorResultVariant aEStack_5b4 [12];
  int local_5a8 [4];
  undefined4 local_598;
  ErrorResultVariant aEStack_594 [4];
  byte local_590;
  byte local_58f;
  char acStack_58e [32];
  undefined2 auStack_56e [32];
  undefined2 auStack_52e [33];
  undefined1 auStack_4ec [516];
  undefined4 local_2e8 [169];
  undefined4 local_44;
  
  uVar3 = FUN_002af600(param_2,param_4,*(undefined1 *)(param_2 + 0x10));
  if ((uVar3 & 1) == 0) {
    local_598 = 0;
    local_2e8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_594,(Result *)local_2e8);
    puVar4 = &local_598;
  }
  else {
    uVar1 = *(undefined2 *)((long)param_4 + 10);
    FUN_002a6530(&local_598);
    uVar2 = (**(code **)(*param_4 + 0x20))(param_4);
    FUN_002ad97c(local_2e8,param_3,uVar1,uVar2);
    FUN_002a67a0(local_5a8,&local_598,local_2e8,uVar1);
    if (local_5a8[0] == 0) {
      if ((ushort)((ushort)local_58f * 0x15 + 2) == *(short *)((long)param_4 + 10)) {
        uVar3 = (ulong)*(byte *)(param_2 + 0x10);
        if (((ushort)*(byte *)(param_2 + 0x10) < (ushort)local_58f) &&
           (acStack_58e[uVar3] == *(char *)(param_2 + 0x36))) {
          *(undefined2 *)(param_2 + (param_5 & 0xff) * 2 + 0x6b8) = auStack_52e[uVar3];
          if ((local_590 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x638) = 1;
          }
          uVar1 = auStack_56e[uVar3];
          memcpy(auStack_5c8,auStack_4ec + uVar3 * 0x10,0x10);
          FUN_002b2640(param_2,param_5 & 0xffffffff,uVar1,auStack_5c8,
                       acStack_58e[*(byte *)(param_2 + 0x10)]);
        }
        local_5b8 = 0;
      }
      else {
        local_5b8 = 0x2c03;
      }
    }
    else {
      local_5b8 = 0x10c07;
    }
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5b4,(Result *)&local_44);
    puVar4 = &local_5b8;
  }
  FUN_002296c4(param_1,puVar4);
  return;
}

