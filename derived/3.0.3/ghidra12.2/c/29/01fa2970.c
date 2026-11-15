
void FUN_01fa2970(long *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  long *plVar3;
  
  *(undefined4 *)(param_1 + 0x2411) = 0;
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0xf0f) = 1;
  if ((int)param_1[0x15f1] == 0) goto LAB_01fa2a2c;
  plVar3 = param_1 + 0x197d;
  if ((int)*plVar3 < 1) {
    uVar1 = *(uint *)(param_1 + 0x1ce2);
    puVar2 = &DAT_053fd568;
    if ((-1 < (int)uVar1) && (plVar3 = param_1 + 0x1619, (int)uVar1 < (int)*plVar3))
    goto LAB_01fa29f4;
  }
  else {
    uVar1 = *(uint *)((long)param_1 + 0xe714);
    puVar2 = &DAT_053fd568;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (int)*plVar3)) {
LAB_01fa29f4:
      puVar2 = *(undefined4 **)(plVar3[1] + (ulong)uVar1 * 8);
    }
  }
  if (((puVar2[0x19] == 2) || ((*(byte *)((long)param_1 + 0xe724) & 3) != 0)) ||
     ((*(byte *)(*(long *)(param_1[0x1618] + 0x3b8) + 0xad5a) >> 2 & 1) != 0)) {
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
LAB_01fa2a2c:
  if (((*(int *)((long)param_1 + 0x77f4) == 0x41) || (*(int *)((long)param_1 + 0x77f4) == 0x50)) ||
     (((int)param_1[0xef6] == 0x41 || ((int)param_1[0xef6] == 0x50)))) {
                    /* WARNING: Could not recover jumptable at 0x01fa2a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x538))();
    return;
  }
  FUN_01f9c378(param_1,1,1);
  return;
}

