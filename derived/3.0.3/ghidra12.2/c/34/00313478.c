
int FUN_00313478(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  int local_14;
  
  if (0x3ffffffffffe < param_1 - 1) {
    return 0;
  }
  uVar1 = 0;
  iVar2 = (int)param_1;
  if ((iVar2 != 0) && (DAT_04c61498 != '\0')) {
    local_14 = iVar2;
    uVar1 = (**(code **)(**(long **)PTR_DAT_04bcec80 + 0x28))
                      (*(long **)PTR_DAT_04bcec80,&local_14,4);
    uVar1 = param_1 & 0xffffffff | (uVar1 >> 0x12 & 0x3fff) << 0x20;
  }
  if (uVar1 != param_1) {
    iVar2 = 0;
  }
  return iVar2;
}

