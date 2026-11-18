
void FUN_032d1710(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  FUN_00362d60(*(undefined8 *)(param_1 + 0xe8));
  uVar1 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (**(long **)(*(long *)(param_1 + 0x30) + uVar7 * 8) != 0) {
        FUN_003630e4(*(undefined8 *)(param_1 + 0xe8));
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar4 = 0;
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      do {
        puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x30) + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *puVar6 = puVar5;
        *(undefined8 **)(param_1 + 0x38) = puVar6;
        puVar5 = puVar6;
      } while (lVar4 < *(int *)(param_1 + 0x28));
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar2 = PTR_DAT_04bc6338;
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x20))
            (*(long **)(param_1 + 0xe8),*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x200),0);
  *(undefined1 *)(param_1 + 0xf58) = 0;
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x38))
            (*(long **)(param_1 + 0xe8),*(undefined8 *)(*(long *)puVar2 + 0x68));
  plVar3 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032d1808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))();
  return;
}

