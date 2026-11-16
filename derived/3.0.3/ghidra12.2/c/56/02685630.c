
/* WARNING: Removing unreachable block (ram,0x02685678) */

void FUN_02685630(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  lVar1 = DAT_05574040;
  if (((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
     (lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
     lVar2 == 0)) {
    return;
  }
  FUN_026f61ec(lVar1);
  iVar7 = 0;
  do {
    lVar6 = lVar2 + 0x4cc10 + (long)iVar7 * 0x2d48;
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar4 = uVar4 & 0xffffffff;
    }
    uVar5 = FUN_028f41ac(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
    if ((uVar5 & 1) != 0) {
      (**(code **)*param_1)(param_1,lVar6);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 500);
  FUN_026f62d4(lVar1);
  return;
}

