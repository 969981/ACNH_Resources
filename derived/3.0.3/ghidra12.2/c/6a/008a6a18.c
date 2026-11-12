
void FUN_008a6a18(byte *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((*param_1 >> 2 & 0xf) != 0) {
    puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
    if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + 0x70;
      }
    }
    else if (puVar5 == (undefined8 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
    }
    if ((*(long **)(lVar3 + 0x1bf260) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x1bf260), puVar5 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar5)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = FUN_028d53e4(*(long *)(lVar3 + 0x1bf248) + *(long *)(lVar3 + 0x1bf240));
    if ((uVar4 & 1) == 0) {
      FUN_008a6110(param_1,0);
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1bf260) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1bf260) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x008a6b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
  return;
}

