
uint FUN_036de07c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x2c);
    if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
      uVar3 = 0xffffffff;
    }
  }
  else {
    lVar4 = *(long *)(DAT_05ab7608 + 0x10);
    if ((*(long **)(lVar4 + 0x11b0) == (long *)0x0) ||
       (puVar1 = (undefined8 *)**(long **)(lVar4 + 0x11b0), puVar1 == (undefined8 *)0x0)) {
      uVar3 = (uint)*(ushort *)(*(long *)(lVar4 + 0x1198) + *(long *)(lVar4 + 0x1190) + 2);
    }
    else {
      uVar2 = (**(code **)*puVar1)();
      uVar3 = (uint)*(ushort *)(*(long *)(lVar4 + 0x1198) + *(long *)(lVar4 + 0x1190) + 2);
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x11b0) != 0)) &&
         (puVar1 = *(undefined8 **)(*(long *)(lVar4 + 0x11b0) + 8), puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)();
      }
    }
  }
  return uVar3;
}

