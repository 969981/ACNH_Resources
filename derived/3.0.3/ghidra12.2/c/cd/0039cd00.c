
uint FUN_0039cd00(long param_1,code *param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      if ((*(long *)(*(long *)(param_1 + 0x30) + lVar3) == 0) ||
         (*(long *)(*(long *)(param_1 + 0x50) + lVar3) == -1)) {
        auVar4 = (*param_2)(*(long *)(*(long *)(param_1 + 0x38) + lVar3) + 2,param_3);
        *(long *)(*(long *)(param_1 + 0x30) + lVar3) = auVar4._0_8_;
        *(long *)(*(long *)(param_1 + 0x50) + lVar3) = auVar4._8_8_;
        if (auVar4._0_8_ == 0 || auVar4._8_8_ == -1) {
          uVar2 = uVar2 | 0x10000;
        }
        else {
          uVar2 = uVar2 | 1;
        }
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 != lVar3);
  }
  return uVar2;
}

