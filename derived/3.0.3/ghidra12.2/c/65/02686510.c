
/* WARNING: Removing unreachable block (ram,0x0268654c) */

uint FUN_02686510(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
     (lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    if ((*(long **)(lVar3 + 0x5d3db8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x5d3db8), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_0277a1f4(*(long *)(lVar3 + 0x5d3da0) + *(long *)(lVar3 + 0x5d3d98),param_1);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x5d3db8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x5d3db8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

