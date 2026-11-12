
void FUN_006b3f44(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_1[1] != 0) {
    plVar3 = (long *)*param_1;
    puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x28,8);
    if (puVar1 == (undefined8 *)0x0) {
      param_1[1] = 0;
    }
    else {
      uVar2 = -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
      *(undefined4 *)(puVar1 + 3) = 1;
      puVar1[4] = plVar3;
      puVar1[2] = &DAT_048f8a70;
      *puVar1 = &PTR_LAB_048f8a20;
      puVar1[1] = 0;
      plVar3 = *(long **)(param_1[1] + uVar2);
      *(undefined8 **)(param_1[1] + uVar2) = puVar1;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006b3fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
    }
  }
  return;
}

