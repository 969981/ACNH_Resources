
/* WARNING: Removing unreachable block (ram,0x01811930) */

ulong FUN_018118e0(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_05292338 != 0) {
    uVar2 = FUN_017bb564();
    return uVar2;
  }
  if (((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
     (lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
     lVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    if ((*(long **)(lVar3 + 0x5d3cd8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x5d3cd8), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = (ulong)*(uint *)(*(long *)(lVar3 + 0x5d3cc0) + *(long *)(lVar3 + 0x5d3cb8) + 0x62a0);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x5d3cd8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x5d3cd8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2;
}

