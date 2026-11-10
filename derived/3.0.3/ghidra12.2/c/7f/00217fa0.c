
void FUN_00217fa0(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (DAT_04be2208 != 0) {
      uVar3 = 0;
      uVar4 = 1;
      do {
        (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x10) + uVar3 * 0x20))();
        bVar1 = uVar4 < DAT_04be2208;
        uVar3 = uVar4;
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (bVar1);
      lVar2 = *(long *)(param_1 + 0x10);
    }
    FUN_00187e4c(lVar2);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

