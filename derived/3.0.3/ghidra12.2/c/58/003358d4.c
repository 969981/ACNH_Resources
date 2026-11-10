
void FUN_003358d4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  param_1 = param_1 + (param_3 & 0xffffffff);
  cVar1 = *(char *)(param_1 + 0x44);
  cVar2 = *(char *)(param_1 + 0x81);
  if (cVar1 != -1) {
    FUN_00348cdc(param_2,(long)cVar1,0,param_4,param_5);
  }
  iVar3 = (int)cVar2;
  if (iVar3 == -1) {
    return;
  }
  FUN_00348cdc(param_2,iVar3,4,param_4,param_5);
  return;
}

