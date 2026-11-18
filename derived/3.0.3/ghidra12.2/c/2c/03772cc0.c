
void FUN_03772cc0(long *param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined2 uVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04bb7648 + 0x10);
  lVar4 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar6 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar6 == 0)) {
    puVar1 = (undefined2 *)(lVar4 + 0x2c);
    if ((*(ushort *)(lVar4 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar4 + 0x2a);
    }
    uVar5 = *puVar1;
  }
  else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar2 == (undefined8 *)0x0)) {
    uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  *(undefined2 *)(param_1 + 1) = uVar5;
  return;
}

