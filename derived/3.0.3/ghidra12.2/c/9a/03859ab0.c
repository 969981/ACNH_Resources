
void FUN_03859ab0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar6 = PTR_DAT_04bcb510;
  puVar5 = PTR_DAT_04bcb508;
  iVar7 = *(int *)(param_1 + 0x548);
  puVar1 = (undefined8 *)(param_1 + 0x538);
  if (iVar7 != 0) {
    puVar2 = PTR_DAT_04bcb518 + 0x10;
    do {
      if (iVar7 < 1) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)*puVar1;
        if (*plVar9 != 0) {
          *(long *)(*plVar9 + 8) = plVar9[1];
        }
        if ((long *)plVar9[1] != (long *)0x0) {
          *(long *)plVar9[1] = *plVar9;
        }
        *plVar9 = 0;
        plVar9[1] = 0;
        *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + -1;
      }
      plVar3 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar3 = (long *)((long)plVar9 - (long)*(int *)(param_1 + 0x54c));
      }
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
        *(undefined **)puVar5 = puVar2;
        __cxa_guard_release(puVar6);
      }
      if ((plVar3 != (long *)0x0) && (uVar8 = (**(code **)*plVar3)(plVar3,puVar5), (uVar8 & 1) != 0)
         ) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar3[1] = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      iVar7 = *(int *)(param_1 + 0x548);
    } while (iVar7 != 0);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x540);
  while (puVar4 != puVar1) {
    puVar10 = (undefined8 *)puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar10;
  }
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined8 **)(param_1 + 0x540) = puVar1;
  *(long *)(param_1 + 0x538) = param_1 + 0x538;
  return;
}

