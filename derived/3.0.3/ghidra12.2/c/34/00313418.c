
ulong FUN_00313418(uint param_1)

{
  ulong uVar1;
  uint local_14;
  
  uVar1 = 0;
  if ((param_1 != 0) && (DAT_04c61498 != '\0')) {
    local_14 = param_1;
    uVar1 = (**(code **)(**(long **)PTR_DAT_04bcec80 + 0x28))
                      (*(long **)PTR_DAT_04bcec80,&local_14,4);
    uVar1 = (ulong)param_1 | (uVar1 >> 0x12 & 0x3fff) << 0x20;
  }
  return uVar1;
}

