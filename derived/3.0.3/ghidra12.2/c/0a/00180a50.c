
undefined8 FUN_00180a50(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if ((((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
      (plVar4 = *(long **)(param_1 + 0x38), plVar4 != (long *)0x0)) && (*plVar4 == param_1)) {
    iVar2 = (int)plVar4[1];
    if (((iVar2 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar2 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar2 == 0x29a || (iVar2 == 0x2a)))) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x58) = 2;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      plVar4[4] = plVar4[2];
      plVar4[5] = 0;
      iVar2 = (int)plVar4[6];
      if (iVar2 < 0) {
        iVar2 = -iVar2;
        *(int *)(plVar4 + 6) = iVar2;
      }
      uVar3 = 0x39;
      if (iVar2 != 2) {
        uVar3 = 0x2a;
      }
      *(undefined4 *)(plVar4 + 1) = uVar3;
      if (iVar2 != 2) {
        uVar1 = FUN_0017f300(0,0,0);
      }
      else {
        uVar1 = FUN_0017ef30();
      }
      *(undefined8 *)(param_1 + 0x60) = uVar1;
      *(undefined4 *)((long)plVar4 + 0x4c) = 0xfffffffe;
      FUN_00183ac0(plVar4);
      return 0;
    }
  }
  return 0xfffffffe;
}

