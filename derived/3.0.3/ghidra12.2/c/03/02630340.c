
void FUN_02630340(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      if ((((uVar2 < 0x53) &&
           ((*(byte *)(param_2 + (ulong)(uVar2 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0)) &&
          (uVar1 = FUN_0262fcf0(param_1,uVar2,param_3,param_4), (uVar1 & 1) != 0)) && (uVar2 < 0x53)
         ) {
        *(byte *)(param_2 + (ulong)(uVar2 >> 3)) =
             *(byte *)(param_2 + (ulong)(uVar2 >> 3)) & ((byte)(1 << (ulong)(uVar2 & 7)) ^ 0xff);
      }
      uVar3 = 0x53;
      if ((int)uVar2 < 0x53) {
        uVar3 = uVar2 + 1;
      }
      uVar2 = uVar3;
    } while (uVar3 != 0x53);
  }
  return;
}

