
ushort FUN_028f41ac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ushort uVar4;
  undefined *local_30;
  undefined2 local_28;
  
  if (*(short *)(param_1 + 0xc) != -1 && (*(ushort *)(param_1 + 8) & 1) == 0) {
    local_30 = PTR_DAT_04bb7648 + 0x10;
    local_28 = *(undefined2 *)(param_1 + 10);
    lVar1 = FUN_0375f980(&local_30);
    if (lVar1 != 0) {
      if ((*(long **)(lVar1 + 0x1790) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x1790), puVar2 == (undefined8 *)0x0)) {
        uVar4 = *(ushort *)(*(long *)(lVar1 + 0x1778) + *(long *)(lVar1 + 6000));
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        uVar4 = *(ushort *)(*(long *)(lVar1 + 0x1778) + *(long *)(lVar1 + 6000));
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x1790) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x1790) + 8), puVar2 != (undefined8 *)0x0))
        {
          (**(code **)*puVar2)();
        }
      }
      goto LAB_028f4260;
    }
  }
  uVar4 = *(ushort *)(param_1 + 0x11d0);
LAB_028f4260:
  return uVar4 & 1;
}

