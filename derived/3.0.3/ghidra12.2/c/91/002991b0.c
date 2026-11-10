
int FUN_002991b0(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    param_1 = param_1 + 0x10;
    puVar2 = (undefined8 *)FUN_002aad70(param_1,0x188);
    FUN_002a106c();
    iVar1 = FUN_002aadf0(param_1,puVar2,param_2 & 0xffff | 0x94000000);
    if (iVar1 == *(int *)PTR_DAT_04bcb8c8) {
      (**(code **)*puVar2)(puVar2);
      FUN_002aad48(param_1,puVar2);
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

