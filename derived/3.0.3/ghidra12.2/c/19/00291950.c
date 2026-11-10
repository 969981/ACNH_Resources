
void FUN_00291950(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6)

{
  long lVar1;
  long lVar2;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    local_54 = 0xc10;
  }
  else {
    lVar2 = FUN_002237a8(param_2 + 0x20);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 - *(int *)(param_2 + 0x34);
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_002236bc(param_2 + 8,param_2 + 8,lVar1);
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    *(byte *)(lVar1 + 0x19) = param_6 & 1;
    *(undefined1 *)(lVar1 + 0x18) = 1;
    *(undefined4 *)(lVar1 + 0x10) = param_5;
    *(undefined4 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x28) = param_4;
    *(undefined1 *)(lVar1 + 0x2c) = 0;
    *(undefined2 *)(lVar1 + 0x2e) = 0;
    local_54 = 0;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

