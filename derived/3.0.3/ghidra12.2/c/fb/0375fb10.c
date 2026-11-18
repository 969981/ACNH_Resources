
/* WARNING: Removing unreachable block (ram,0x0375fb64) */
/* WARNING: Removing unreachable block (ram,0x0375fc1c) */

void FUN_0375fb10(long *param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  uVar2 = *(ushort *)(param_2 + 8);
  if (((((ulong)uVar2 < 500) && (DAT_05574040 != 0)) &&
      (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
     lVar4 != 0)) {
    lVar4 = lVar4 + (ulong)uVar2 * 0x2d48;
    lVar9 = lVar4 + 0x4cc10;
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
        (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
        uVar2 < 500 && lVar6 != 0)))) {
      lVar9 = lVar6 + (ulong)uVar2 * 0x2d48 + 0x4cc10;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x4cc70) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4cc70) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    lVar4 = lVar9 + 0x1ae8 + (ulong)param_3 * 0x658;
    if (1 < param_3) {
      lVar4 = lVar9 + 0x1ae8;
    }
    if ((*(long **)(lVar4 + 0x60) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar9 = *(long *)(lVar4 + 0x40);
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar7 = (**(code **)(*param_1 + 8))(param_1);
    if ((uVar7 & 1) != 0) {
      iVar8 = 0;
      do {
        if (*(short *)(lVar6 + lVar9 + (long)iVar8 * 0xc) == -2) break;
        (**(code **)*param_1)(param_1);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 300);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x60) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0375fd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
  return;
}

