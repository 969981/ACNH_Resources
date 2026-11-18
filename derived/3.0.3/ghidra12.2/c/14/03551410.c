
void FUN_03551410(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x228);
  (**(code **)(*plVar4 + 0x120))(plVar4,0);
  if (plVar4[0xae] != 0) {
    *(undefined1 *)(plVar4[0xae] + 0x478) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x1c288);
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x1c270))) {
    lVar2 = param_1 + 0x1c260;
    uVar1 = uVar3 + 1 & 3;
    if (2 < uVar3) {
      uVar3 = uVar3 + 1 & 0xfffffffc;
      do {
        uVar3 = uVar3 - 4;
        lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 8) + 8) + 8) + 8);
      } while (uVar3 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar2 = *(long *)(lVar2 + 8);
    }
    if (((lVar2 != 0) && (lVar2 = lVar2 - *(int *)(param_1 + 0x1c274), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x270) == 0x78)) {
      FUN_0354adc0(param_1,0x78);
    }
  }
  FUN_0354f980(param_1,0,0);
  if ((*(uint *)(param_1 + 0x23c) & 0xfffffffe) == 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03551524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1099e0) + 0xa8))();
  return;
}

