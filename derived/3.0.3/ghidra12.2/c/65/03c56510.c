
void FUN_03c56510(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0xd8);
  if (((lVar3 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (uVar1 = *(uint *)(lVar3 + 8), 0 < (int)uVar1)) {
    if ((*(byte *)(**(long **)(lVar3 + 0x10) + 0x20) & 1) != 0) {
      uVar4 = 0;
      do {
        if ((ulong)uVar1 - 1 == uVar4) goto LAB_03c56550;
        lVar2 = uVar4 + 1;
        uVar4 = uVar4 + 1;
      } while ((*(byte *)((*(long **)(lVar3 + 0x10))[lVar2] + 0x20) & 1) != 0);
      if (uVar1 <= uVar4) goto LAB_03c56550;
    }
    FUN_03bf3850();
  }
LAB_03c56550:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_03bf3600();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03bf3600();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_03c590d0();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_03c56f30();
    if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}

