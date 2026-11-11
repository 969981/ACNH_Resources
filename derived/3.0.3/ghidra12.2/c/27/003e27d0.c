
uint FUN_003e27d0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_54 [8];
  int local_4c;
  
  uVar2 = FUN_003b8780(param_2,auStack_54);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != param_1 + 0x28) {
      uVar1 = 0;
      if ((long)local_4c != 0) {
        uVar1 = param_4 / (ulong)(long)local_4c;
      }
      do {
        *(long *)(lVar3 + 0xb0) = param_3;
        *(ulong *)(lVar3 + 0xb8) = uVar1;
        lVar3 = *(long *)(lVar3 + 8);
        param_3 = param_3 + uVar1;
      } while (lVar3 != param_1 + 0x28);
    }
  }
  return uVar2 & 1;
}

