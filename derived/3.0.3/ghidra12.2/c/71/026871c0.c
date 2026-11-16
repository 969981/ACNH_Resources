
/* WARNING: Removing unreachable block (ram,0x026871fc) */

uint FUN_026871c0(undefined8 param_1)

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
    if ((*(long **)(&DAT_005d3e28 + lVar3) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(&DAT_005d3e28 + lVar3), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_0277a1f4(*(long *)(lVar3 + 0x5d3e10) + *(long *)(lVar3 + 0x5d3e08),param_1);
    if ((((uVar1 & 1) == 0) && (*(long *)(&DAT_005d3e28 + lVar3) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(&DAT_005d3e28 + lVar3) + 8), puVar4 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

