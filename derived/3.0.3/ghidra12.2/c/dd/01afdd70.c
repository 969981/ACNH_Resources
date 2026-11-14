
undefined8 FUN_01afdd70(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  uVar2 = FUN_01afcfa0();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_01b006b0(param_1);
    uVar2 = 0;
    if (((int)param_2 < 0x100) && (iVar1 == 2)) {
      puVar3 = (ushort *)FUN_01afd600(param_1);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 & 0xffe7 | 8;
      }
      if (param_2 >> 0x10 == 0) {
        uVar2 = FUN_01afcfa0(param_1);
        if (((int)uVar2 != 0) &&
           (puVar3 = (ushort *)FUN_01afd600(param_1), uVar2 = 0, puVar3 != (ushort *)0x0)) {
          *puVar3 = *puVar3 & 0xe01f | (ushort)((param_2 & 0xff) << 5);
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

