
/* WARNING: Removing unreachable block (ram,0x014fd4a8) */
/* WARNING: Removing unreachable block (ram,0x014fd498) */
/* WARNING: Removing unreachable block (ram,0x014fd4b4) */
/* WARNING: Removing unreachable block (ram,0x014fd50c) */
/* WARNING: Removing unreachable block (ram,0x014fd51c) */

void FUN_014fd424(long param_1,uint param_2,long param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  uVar3 = *(uint *)(param_1 + 8);
  lVar9 = *(long *)PTR_DAT_04bb27a8;
  if (uVar3 == 0) {
    if (*(long *)(lVar9 + 0x1f8) == 0) {
      return;
    }
    plVar7 = (long *)(*(long *)(lVar9 + 0x1f8) + 0x60);
    plVar1 = plVar7 + param_4;
    if (7 < param_4) {
      plVar1 = plVar7;
    }
    if (*plVar1 == 0) {
      return;
    }
LAB_014fd5b8:
    plVar7 = (long *)(lVar9 + 0x1f8);
  }
  else {
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 == 0) {
      lVar10 = *(long *)(lVar9 + 0x1f8);
    }
    else {
      plVar7 = (long *)(lVar9 + 0x30) + uVar3;
      if (0x38 < uVar3) {
        plVar7 = (long *)(lVar9 + 0x30);
      }
      lVar10 = *plVar7;
    }
    if (lVar10 == 0) {
      return;
    }
    if (uVar3 == 0) {
      lVar10 = 0;
    }
    else {
      if (uVar3 == 0) {
        plVar7 = (long *)(lVar9 + 0x1f8);
      }
      else {
        plVar7 = (long *)(lVar9 + 0x30) + uVar3;
        if (0x38 < uVar3) {
          plVar7 = (long *)(lVar9 + 0x30);
        }
      }
      lVar10 = *plVar7;
    }
    plVar7 = (long *)(lVar10 + 0x60) + param_4;
    if (7 < param_4) {
      plVar7 = (long *)(lVar10 + 0x60);
    }
    if (*plVar7 == 0) {
      return;
    }
    if (uVar3 == 0) {
      lVar9 = 0;
      goto LAB_014fd5c0;
    }
    if (uVar3 == 0) goto LAB_014fd5b8;
    plVar7 = (long *)(lVar9 + 0x30) + uVar3;
    if (0x38 < uVar3) {
      plVar7 = (long *)(lVar9 + 0x30);
    }
  }
  lVar9 = *plVar7;
LAB_014fd5c0:
  lVar10 = lVar9 + 200 + (ulong)param_4 * 0x10;
  if (7 < param_4) {
    lVar10 = lVar9 + 200;
  }
  lVar9 = *(long *)(lVar10 + 8);
  if (lVar9 != 0) {
    iVar6 = *(int *)(param_3 + 0xc);
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    iVar2 = *(int *)(lVar9 + 0x14);
    uVar3 = *(int *)(param_3 + 8) - *(int *)(lVar9 + 0x10);
    plVar7 = (long *)(**(code **)*puVar11)(puVar11);
    uVar4 = (**(code **)(*plVar7 + 0x18))();
    if (uVar3 < uVar4) {
      uVar4 = iVar6 - iVar2;
      plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      uVar5 = (**(code **)(*plVar7 + 0x20))();
      if (uVar4 < uVar5) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))(puVar11);
        iVar6 = (**(code **)(*plVar7 + 0x18))();
        plVar7 = (long *)(lVar9 + 0x70);
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
        if ((uVar8 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x014fd698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*plVar7)(plVar7,uVar3 + iVar6 * uVar4,param_2 & 1);
          return;
        }
      }
    }
  }
  return;
}

