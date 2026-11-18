
/* WARNING: Removing unreachable block (ram,0x03768fec) */

undefined8 FUN_03768fb0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
    if ((*(long **)(lVar4 + 0x36620) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36620), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    cVar1 = *(char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (cVar1 == '\x02') {
      if ((*(long **)(lVar4 + 0x37ca8) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x37ca8), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      *param_1 = (uint)*(ushort *)(*(long *)(lVar4 + 0x37c90) + *(long *)(lVar4 + 0x37c88) + 0x408c)
      ;
      param_1[2] = *(uint *)(*(long *)(lVar4 + 0x37c90) + *(long *)(lVar4 + 0x37c88) + 0x4090);
      if ((*(long **)(lVar4 + 0x39058) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x39058), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      *(ushort *)(param_1 + 1) =
           *(ushort *)(*(long *)(lVar4 + 0x39040) + *(long *)(lVar4 + 0x39038) + 100) & 0xf;
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x39058) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x39058) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x37ca8) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x37ca8) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      return 1;
    }
  }
  return 0;
}

