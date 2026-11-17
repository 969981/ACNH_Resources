
void FUN_02bd6c60(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  if ((param_2 == (long *)0x0) || (*(char *)(param_1 + 1) == '\0')) {
    return;
  }
  iVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  if (iVar5 != 0) {
    iVar11 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,iVar11);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar9 = (**(code **)*puVar8)(puVar8,puVar3), (uVar9 & 1) != 0)) &&
         (plVar12 = (long *)puVar8[0x71], plVar12 != (long *)0x0)) {
        iVar6 = (**(code **)(*plVar12 + 0x80))(plVar12,0);
        iVar7 = (**(code **)(*plVar12 + 0x80))(plVar12,1);
        lVar10 = *(long *)(plVar12[0xd] + (long)(iVar6 + (int)plVar12[0xc] * iVar7) * 0x18);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
          lVar10 = puVar8[0x71];
          if (*(char *)(lVar10 + 0x20) == '\0') {
            iVar6 = *(int *)(lVar10 + 0x28);
          }
          else {
            piVar2 = (int *)(lVar10 + 0x24);
            if (*(char *)(lVar10 + 0x21) != '\0') {
              piVar2 = (int *)(lVar10 + 0x28);
            }
            iVar6 = *piVar2;
          }
          if (iVar6 == 0) {
            FUN_030bfe80(puVar8,0);
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar5 != iVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x02bd6e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2);
  return;
}

