
/* WARNING: Removing unreachable block (ram,0x014fd218) */
/* WARNING: Removing unreachable block (ram,0x014fd208) */
/* WARNING: Removing unreachable block (ram,0x014fd224) */
/* WARNING: Removing unreachable block (ram,0x014fd27c) */
/* WARNING: Removing unreachable block (ram,0x014fd28c) */

undefined8 FUN_014fd19c(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  uVar3 = *(uint *)(param_1 + 8);
  lVar10 = *(long *)PTR_DAT_04bb27a8;
  if (uVar3 == 0) {
    if (*(long *)(lVar10 + 0x1f8) == 0) {
      return 0;
    }
    plVar7 = (long *)(*(long *)(lVar10 + 0x1f8) + 0x60);
    plVar1 = plVar7 + param_3;
    if (7 < param_3) {
      plVar1 = plVar7;
    }
    if (*plVar1 == 0) {
      return 0;
    }
LAB_014fd328:
    plVar7 = (long *)(lVar10 + 0x1f8);
  }
  else {
    if (uVar3 == 0) {
      return 0;
    }
    if (uVar3 == 0) {
      lVar11 = *(long *)(lVar10 + 0x1f8);
    }
    else {
      plVar7 = (long *)(lVar10 + 0x30) + uVar3;
      if (0x38 < uVar3) {
        plVar7 = (long *)(lVar10 + 0x30);
      }
      lVar11 = *plVar7;
    }
    if (lVar11 == 0) {
      return 0;
    }
    if (uVar3 == 0) {
      lVar11 = 0;
    }
    else {
      if (uVar3 == 0) {
        plVar7 = (long *)(lVar10 + 0x1f8);
      }
      else {
        plVar7 = (long *)(lVar10 + 0x30) + uVar3;
        if (0x38 < uVar3) {
          plVar7 = (long *)(lVar10 + 0x30);
        }
      }
      lVar11 = *plVar7;
    }
    plVar7 = (long *)(lVar11 + 0x60) + param_3;
    if (7 < param_3) {
      plVar7 = (long *)(lVar11 + 0x60);
    }
    if (*plVar7 == 0) {
      return 0;
    }
    if (uVar3 == 0) {
      lVar10 = 0;
      goto LAB_014fd330;
    }
    if (uVar3 == 0) goto LAB_014fd328;
    plVar7 = (long *)(lVar10 + 0x30) + uVar3;
    if (0x38 < uVar3) {
      plVar7 = (long *)(lVar10 + 0x30);
    }
  }
  lVar10 = *plVar7;
LAB_014fd330:
  lVar11 = lVar10 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar11 = lVar10 + 200;
  }
  lVar10 = *(long *)(lVar11 + 8);
  if (lVar10 != 0) {
    iVar6 = *(int *)(param_2 + 0xc);
    puVar12 = (undefined8 *)(lVar10 + 0x28);
    iVar2 = *(int *)(lVar10 + 0x14);
    uVar3 = *(int *)(param_2 + 8) - *(int *)(lVar10 + 0x10);
    plVar7 = (long *)(**(code **)*puVar12)(puVar12);
    uVar4 = (**(code **)(*plVar7 + 0x18))();
    if (uVar3 < uVar4) {
      uVar4 = iVar6 - iVar2;
      plVar7 = (long *)(**(code **)*puVar12)(puVar12);
      uVar5 = (**(code **)(*plVar7 + 0x20))();
      if (uVar4 < uVar5) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))(puVar12);
        iVar6 = (**(code **)(*plVar7 + 0x18))();
        plVar7 = (long *)(lVar10 + 0x50);
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
        if ((uVar8 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x014fd400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)*plVar7)(plVar7,uVar3 + iVar6 * uVar4);
          return uVar9;
        }
      }
    }
  }
  return 0;
}

