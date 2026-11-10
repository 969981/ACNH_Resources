
void FUN_002a8864(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [16];
  undefined4 local_14;
  
  if (param_3 == 0) {
    FUN_0021f210(&local_34);
    FUN_0021f220(param_2 + 0xc,&local_34);
    uVar1 = *(uint *)(param_2 + 0xc);
  }
  else {
    FUN_0021f220(param_2 + 0xc);
    uVar1 = *(uint *)(param_2 + 0xc);
  }
  if (uVar1 < 2) {
    uVar2 = FUN_00222ffc(DAT_04c5fb98);
    local_34 = 0;
    *(undefined4 *)(param_2 + 8) = uVar2;
  }
  else {
    local_34 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_14);
  FUN_002296c4(param_1,&local_34);
  return;
}

