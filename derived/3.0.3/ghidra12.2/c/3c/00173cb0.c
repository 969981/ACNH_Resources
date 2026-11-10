
undefined8 FUN_00173cb0(long param_1)

{
  ushort uVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    sVar2 = *(short *)(param_1 + 0xe0);
    if ((ushort)(sVar2 - 100U) < 100) {
      uVar3 = 0;
      *(ushort *)(param_1 + 0xe2) = uVar1 & 0x780 | 0x4000;
      *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
      *(undefined2 *)(param_1 + 0xe0) = 0xffff;
    }
    else {
      *(ushort *)(param_1 + 0xe2) = uVar1 & 0xbfff;
      if (((((uVar1 >> 8 & 1) == 0) && (99 < (int)sVar2 - 100U)) && (sVar2 != 0x130)) &&
         (sVar2 != 0xcc)) {
        if ((uVar1 & 0x480) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
        }
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return uVar3;
}

