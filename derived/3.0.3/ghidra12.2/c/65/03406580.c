
int FUN_03406580(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  
  if ((int)param_1[8] < 1) {
    return -1;
  }
  if (param_2 == (undefined8 *)0x0) {
    return -1;
  }
  uVar9 = 0;
  uVar1 = *param_1;
  do {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 10) + uVar9 * 8) + 8) & 1) != 0) {
      iVar3 = 0;
      iVar8 = (int)uVar9;
      if (uVar1 != 0) {
        iVar3 = iVar8 / (int)uVar1;
      }
      uVar2 = iVar8 - iVar3 * uVar1;
      if (uVar2 < uVar1) {
        puVar6 = *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8);
      }
      else {
        puVar6 = (uint *)0x0;
      }
      uVar5 = (ulong)*puVar6;
      if (0 < (int)*puVar6) {
        puVar7 = *(undefined8 **)(puVar6 + 2);
        do {
          if ((undefined8 *)*puVar7 == param_2) {
            if (uVar2 < uVar1) {
              puVar6 = *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8);
            }
            else {
              puVar6 = (uint *)0x0;
            }
            if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
              *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc4d98);
            }
            uVar9 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4d90);
            if ((uVar9 & 1) == 0) {
              param_2 = (undefined8 *)0x0;
            }
            if (0 < (int)*puVar6) {
              uVar9 = 0;
              iVar3 = -1;
              goto LAB_03406690;
            }
            iVar3 = -1;
            goto LAB_034066b8;
          }
          puVar7 = puVar7 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == param_1[8]) {
      return -1;
    }
  } while( true );
  while (uVar9 = uVar9 + 1, *puVar6 != uVar9) {
LAB_03406690:
    if (*(undefined8 **)(*(long *)(puVar6 + 2) + uVar9 * 8) == param_2) {
      iVar3 = (int)uVar9;
      break;
    }
  }
LAB_034066b8:
  if ((int)*param_1 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)**(undefined8 **)(param_1 + 2);
  }
  return iVar3 + iVar4 * iVar8;
}

