
/* WARNING: Removing unreachable block (ram,0x030eaa8c) */
/* WARNING: Removing unreachable block (ram,0x030eaa20) */
/* WARNING: Removing unreachable block (ram,0x030ea9c4) */
/* WARNING: Removing unreachable block (ram,0x030ea98c) */
/* WARNING: Removing unreachable block (ram,0x030ea920) */
/* WARNING: Removing unreachable block (ram,0x030ea8c4) */
/* WARNING: Removing unreachable block (ram,0x030ea88c) */
/* WARNING: Removing unreachable block (ram,0x030ea814) */
/* WARNING: Removing unreachable block (ram,0x030ea7bc) */
/* WARNING: Removing unreachable block (ram,0x030ea804) */
/* WARNING: Removing unreachable block (ram,0x030ea844) */
/* WARNING: Removing unreachable block (ram,0x030ea8a0) */
/* WARNING: Removing unreachable block (ram,0x030ea90c) */
/* WARNING: Removing unreachable block (ram,0x030ea944) */
/* WARNING: Removing unreachable block (ram,0x030ea9a0) */
/* WARNING: Removing unreachable block (ram,0x030eaa0c) */
/* WARNING: Removing unreachable block (ram,0x030eaa44) */
/* WARNING: Removing unreachable block (ram,0x030eaaa0) */

void FUN_030ea770(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  
  lVar2 = (long)*(int *)(param_1 + 0x364);
  local_30 = 0xffffffffffffffff;
  uStack_28 = 0xffffffffffffffff;
  lVar1 = param_1 + 0x350;
  uVar5 = 0xffffffff;
  local_20 = 0xffffffffffffffff;
  local_34 = 0;
  lVar3 = -lVar2;
  lVar6 = lVar1;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar1) {
      iVar4 = 0;
      goto LAB_030ea82c;
    }
  } while ((undefined4 *)(param_1 + 0x228) != (undefined4 *)(lVar6 + lVar3));
  iVar4 = 0;
  uVar5 = 0xffffffff;
  if ((lVar6 != 0) && (lVar6 != lVar2)) {
    local_14 = 0;
    local_30 = CONCAT44(0xffffffff,*(undefined4 *)(param_1 + 0x228));
    iVar4 = 1;
    uVar5 = local_34;
  }
LAB_030ea82c:
  local_34 = 1;
  lVar6 = lVar1;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar1) goto LAB_030ea8ac;
  } while (param_1 + 600 != lVar6 + lVar3);
  if ((lVar6 != 0) && (lVar6 != lVar2)) {
    local_14 = 1;
    iVar4 = iVar4 + 1;
    local_30 = (ulong)*(uint *)(param_1 + 600);
    uVar5 = local_34;
  }
LAB_030ea8ac:
  local_34 = 2;
  lVar6 = lVar1;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar1) goto LAB_030ea92c;
  } while (param_1 + 0x288 != lVar6 + lVar3);
  if ((lVar6 != 0) && (lVar6 != lVar2)) {
    local_14 = 2;
    iVar4 = iVar4 + 1;
    uStack_28 = CONCAT44(0xffffffff,*(undefined4 *)(param_1 + 0x288));
    uVar5 = local_34;
  }
LAB_030ea92c:
  local_34 = 3;
  lVar6 = lVar1;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar1) goto LAB_030ea9ac;
  } while (param_1 + 0x2b8 != lVar6 + lVar3);
  if ((lVar6 != 0) && (lVar6 != lVar2)) {
    local_14 = 3;
    iVar4 = iVar4 + 1;
    uStack_28 = (ulong)*(uint *)(param_1 + 0x2b8);
    uVar5 = local_34;
  }
LAB_030ea9ac:
  local_34 = 4;
  lVar6 = lVar1;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar1) goto LAB_030eaa2c;
  } while (param_1 + 0x2e8 != lVar6 + lVar3);
  if ((lVar6 != 0) && (lVar6 != lVar2)) {
    local_14 = 4;
    iVar4 = iVar4 + 1;
    local_20 = CONCAT44(0xffffffff,*(undefined4 *)(param_1 + 0x2e8));
    uVar5 = local_34;
  }
LAB_030eaa2c:
  local_34 = 5;
  lVar6 = lVar1;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar1) goto LAB_030eaaac;
  } while (param_1 + 0x318 != lVar6 + lVar3);
  if ((lVar6 != 0) && (lVar6 != lVar2)) {
    local_14 = 5;
    iVar4 = iVar4 + 1;
    local_20 = (ulong)*(uint *)(param_1 + 0x318);
    uVar5 = local_34;
  }
LAB_030eaaac:
  if (uVar5 != 0xffffffff) {
    local_18 = uVar5 < 2 && iVar4 == 1;
    FUN_02cb00d0(DAT_056658d0,param_1 + 0x1f8,&local_30);
  }
  return;
}

