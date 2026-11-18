
void FUN_036e9fa4(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((*(long **)(param_2 + 0x60) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(param_2 + 0x60), puVar2 == (undefined8 *)0x0)) {
    uVar4 = (uint)*(ushort *)(*(long *)(param_2 + 0x48) + *(long *)(param_2 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    uVar4 = (uint)*(ushort *)(*(long *)(param_2 + 0x48) + *(long *)(param_2 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(param_2 + 0x60) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(param_2 + 0x60) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  if (uVar4 < 500) {
    lVar1 = (ulong)(uVar4 >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 8) + lVar1) =
         *(uint *)(*(long *)(param_1 + 8) + lVar1) | 1 << (ulong)(uVar4 & 0x1f);
  }
  return;
}

