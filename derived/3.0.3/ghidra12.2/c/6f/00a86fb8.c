
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a86fb8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + 0x70;
    }
    plVar5 = *(long **)(lVar2 + 0x28);
  }
  else if ((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) {
    lVar2 = 0;
    plVar5 = _DAT_00000028;
  }
  else {
    lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
    plVar5 = *(long **)(lVar2 + 0x28);
  }
  if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
    FUN_00930750(param_1 + 0x656ec,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1e35f0);
    return;
  }
  uVar3 = (*(code *)**(undefined8 **)*plVar5)();
  FUN_00930750(param_1 + 0x656ec,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1e35f0);
  if ((((uVar3 & 1) == 0) || (*(long *)(lVar2 + 0x28) == 0)) ||
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar4 == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a8709c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)();
  return;
}

