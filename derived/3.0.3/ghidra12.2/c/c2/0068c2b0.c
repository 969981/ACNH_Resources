
void FUN_0068c2b0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x10) << 4;
    puVar4 = puVar2;
    do {
      if (((*(int *)(puVar4 + 1) == 9) || (*(int *)(puVar4 + 1) == 7)) &&
         (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
        lVar1 = *plVar5;
        *plVar5 = 0;
        plVar5[1] = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)plVar5[2] + 0x18))();
        }
        plVar5[2] = 0;
        *(undefined4 *)(plVar5 + 1) = 0;
        (**(code **)(*(long *)(param_1 + 0x18) + 0x18))((long *)(param_1 + 0x18),*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0068c37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))((long *)(param_1 + 0x18),puVar2);
  return;
}

