
void FUN_02dd16c0(long *param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  
  puVar5 = PTR_DAT_04bc4d98;
  puVar4 = PTR_DAT_04bc4d90;
  if ((param_2 == 0) || ((char)param_1[1] == '\0')) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 0x2f8);
  if (uVar3 != 0) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      puVar10 = (undefined8 *)0x0;
      if (((-1 < (int)uVar12) && ((int)uVar12 < (int)*(uint *)(param_2 + 0x208))) &&
         (uVar12 < *(uint *)(param_2 + 0x208))) {
        puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x210) + uVar12 * 8);
      }
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if (((puVar10 != (undefined8 *)0x0) &&
          (uVar8 = (**(code **)*puVar10)(puVar10,puVar4), (uVar8 & 1) != 0)) &&
         (plVar11 = (long *)puVar10[0x71], plVar11 != (long *)0x0)) {
        iVar6 = (**(code **)(*plVar11 + 0x80))(plVar11,0);
        iVar7 = (**(code **)(*plVar11 + 0x80))(plVar11,1);
        lVar9 = *(long *)(plVar11[0xd] + (long)(iVar6 + (int)plVar11[0xc] * iVar7) * 0x18);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
          lVar9 = puVar10[0x71];
          if (*(char *)(lVar9 + 0x20) == '\0') {
            iVar6 = *(int *)(lVar9 + 0x28);
          }
          else {
            piVar2 = (int *)(lVar9 + 0x24);
            if (*(char *)(lVar9 + 0x21) != '\0') {
              piVar2 = (int *)(lVar9 + 0x28);
            }
            iVar6 = *piVar2;
          }
          if (iVar6 == 0) {
            FUN_030bfe80(puVar10,0);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar3 != uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x02dd1880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2);
  return;
}

