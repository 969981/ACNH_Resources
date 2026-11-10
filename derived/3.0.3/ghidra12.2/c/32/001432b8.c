
undefined8 FUN_001432b8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04bcb718;
  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    uVar2 = 1;
    *(long *)PTR_DAT_04bcb718 = param_1;
    *(long *)(puVar1 + 8) = param_2;
    *(long *)(puVar1 + 0x20) = param_5;
    *(long *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
  }
  return uVar2;
}

