
void FUN_002e721c(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_44 = 0x10c07;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x214);
    lVar1 = param_2 + 0x200;
    if (iVar3 == 1) {
      FUN_00197980(lVar1);
      iVar3 = *(int *)(param_2 + 0x214);
    }
    if (iVar3 != 0) {
      FUN_001984a0(lVar1);
    }
    uVar2 = FUN_00319b64(*(undefined8 *)(param_2 + 0x58),lVar1,param_3,1);
    if ((uVar2 & 1) == 0) {
      local_44 = 0x10c08;
    }
    else {
      *(undefined1 *)(param_2 + 0x2c8) = 1;
      local_44 = 0;
    }
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

