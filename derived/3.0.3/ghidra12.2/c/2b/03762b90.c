
/* WARNING: Removing unreachable block (ram,0x03762bdc) */
/* WARNING: Removing unreachable block (ram,0x03762cac) */

long FUN_03762b90(long param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(ushort *)(param_1 + 8);
  if (((((ulong)uVar2 < 500) && (DAT_05574040 != 0)) &&
      (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar4 != 0)) {
    lVar4 = lVar4 + (ulong)uVar2 * 0x2d48;
    lVar7 = lVar4 + 0x4cc10;
    if ((*(long **)(lVar4 + 0x4cc70) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4cc70), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    puVar1 = (ushort *)(*(long *)(lVar4 + 0x4cc58) + *(long *)(lVar4 + 0x4cc50));
    uVar2 = puVar1[2];
    if (((uVar2 != 0xffff && (*puVar1 & 1) == 0) && (DAT_05574040 != 0)) &&
       ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0 &&
        (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
        uVar2 < 500 && lVar6 != 0)))) {
      lVar7 = lVar6 + (ulong)uVar2 * 0x2d48 + 0x4cc10;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x4cc70) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4cc70) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}

