
/* WARNING: Removing unreachable block (ram,0x01c84754) */

void FUN_01c84710(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 8);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x70);
  plVar6 = (long *)(lVar4 + 0xaf8);
  iVar1 = *(int *)(lVar4 + 0xb10);
  if (iVar1 < *(int *)(lVar4 + 0xb14)) {
    uVar2 = *(undefined4 *)(param_1 + 0xd8);
    puVar3 = *(undefined8 **)(lVar4 + 0xb00);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar4 + 0xb00) = *puVar3;
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = plVar6;
    *(undefined4 *)(puVar3 + 4) = uVar2;
    *puVar3 = &PTR_LAB_04b62440;
    puVar3[1] = 0;
    *(int *)((long)puVar3 + 0x24) = iVar1;
    *(undefined4 *)(puVar3 + 5) = 0x400040;
    *(int *)(lVar4 + 0xb10) = *(int *)(lVar4 + 0xb10) + 1;
    lVar4 = FUN_028c13b8(plVar6,*plVar6);
    *plVar6 = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 1;
  }
  lVar4 = *(long *)(param_1 + 0x100);
  puVar7 = *(undefined8 **)(param_1 + 0x108);
  puVar3 = (undefined8 *)(param_1 + 0x100);
  if ((puVar7 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar5 = *(long *)(param_1 + 0x118), lVar5 != 0)) {
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar7;
      puVar7 = *(undefined8 **)(param_1 + 0x108);
    }
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = *puVar3;
    }
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x118);
  if (lVar4 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x100) + 8) = puVar7;
      puVar7 = *(undefined8 **)(param_1 + 0x108);
    }
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = *puVar3;
    }
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x118) = lVar8 + 0x230;
  lVar4 = *(long *)(lVar8 + 0x230);
  *(undefined8 **)(lVar8 + 0x230) = puVar3;
  *(long *)(param_1 + 0x100) = lVar4;
  *(long *)(param_1 + 0x108) = lVar8 + 0x230;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar3;
  }
  *(int *)(lVar8 + 0x240) = *(int *)(lVar8 + 0x240) + 1;
  puVar3 = (undefined8 *)(param_1 + 0x160);
  lVar4 = *(long *)(param_1 + 0x160);
  puVar7 = *(undefined8 **)(param_1 + 0x168);
  if ((puVar7 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar5 = *(long *)(param_1 + 0x178), lVar5 != 0)) {
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar7;
      puVar7 = *(undefined8 **)(param_1 + 0x168);
    }
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = *puVar3;
    }
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x178);
  if (lVar4 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (*(long *)(param_1 + 0x160) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x160) + 8) = puVar7;
      puVar7 = *(undefined8 **)(param_1 + 0x168);
    }
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = *puVar3;
    }
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x178) = lVar8 + 0x250;
  lVar4 = *(long *)(lVar8 + 0x250);
  *(undefined8 **)(lVar8 + 0x250) = puVar3;
  *(long *)(param_1 + 0x160) = lVar4;
  *(long *)(param_1 + 0x168) = lVar8 + 0x250;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar3;
  }
  *(int *)(lVar8 + 0x260) = *(int *)(lVar8 + 0x260) + 1;
  return;
}

