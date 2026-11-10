
void FUN_00260d98(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (*(int *)(param_2 + 0x28) == 0) {
    local_44 = 0xc10;
  }
  else {
    lVar2 = FUN_002237a8(param_2 + 0x18);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 - *(int *)(param_2 + 0x2c);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_002236bc(param_2,param_2,lVar1);
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    *(undefined1 *)(lVar1 + 0x18) = param_4;
    *(undefined1 *)(lVar1 + 0x19) = 0;
    local_44 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

