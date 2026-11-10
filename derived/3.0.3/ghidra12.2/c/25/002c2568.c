
void FUN_002c2568(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (DAT_04c61168 == 0) {
    local_44 = 0x10c08;
  }
  else {
    lVar1 = DAT_04c61168 + 0x10;
    if (*(char *)(DAT_04c61168 + 0x38) == '\0') {
      puVar3 = (undefined8 *)FUN_002aad70(lVar1,0x1870);
      FUN_002c6240();
      iVar2 = FUN_002aadf0(lVar1,puVar3,0x34000000);
      if (iVar2 == *(int *)PTR_DAT_04bcb8c8) {
        (**(code **)*puVar3)(puVar3);
        FUN_002aad48(lVar1,puVar3);
      }
    }
    else {
      iVar2 = 0;
    }
    *(int *)(param_2 + 0x10) = iVar2;
    uVar4 = FUN_002ab090(lVar1,iVar2,0x34);
    local_44 = 0;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

