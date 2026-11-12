
undefined8 FUN_00975b00(uint *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04bb46c8;
  uVar2 = FUN_00980630(*(undefined8 *)PTR_DAT_04bb46c8,*param_1);
  if (((uVar2 & 1) == 0) &&
     (0x2e < *param_1 || (1L << ((ulong)*param_1 & 0x3f) & 0x480000000080U) == 0)) {
    uVar3 = FUN_00981090(*(undefined8 *)puVar1);
    return uVar3;
  }
  return 0;
}

