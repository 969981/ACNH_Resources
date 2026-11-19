
/* WARNING: Removing unreachable block (ram,0x038a58f8) */
/* WARNING: Removing unreachable block (ram,0x038a57f0) */
/* WARNING: Removing unreachable block (ram,0x038a5878) */
/* WARNING: Removing unreachable block (ram,0x038a5970) */

void FUN_038a561c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  FUN_038a94d0();
  *(long *)(param_1 + 0x218) = param_1;
  *(undefined **)(param_1 + 0x1b0) = &DAT_04b62700;
  *(long *)(param_1 + 0x1b8) = param_1;
  *(undefined **)(param_1 + 0x210) = &DAT_04b62700;
  *(undefined8 *)(param_1 + 0x220) = 0x58;
  *(undefined8 *)(param_1 + 0x228) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0x78;
  *(undefined8 *)(param_1 + 0x1c8) = 1;
  puVar5 = PTR_DAT_04bcb7d8;
  lVar9 = *(long *)(param_1 + 400);
  puVar11 = *(undefined8 **)(param_1 + 0x198);
  puVar1 = (undefined8 *)(param_1 + 400);
  lVar7 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 8);
  if ((puVar11 != (undefined8 *)0x0 || lVar9 != 0) &&
     (lVar8 = *(long *)(param_1 + 0x1a8), lVar8 != 0)) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if (lVar9 != 0) {
      *(undefined8 **)(lVar9 + 8) = puVar11;
      puVar11 = *(undefined8 **)(param_1 + 0x198);
    }
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  lVar9 = *(long *)(param_1 + 0x1a8);
  if (lVar9 != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if (*(long *)(param_1 + 400) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 400) + 8) = puVar11;
      puVar11 = *(undefined8 **)(param_1 + 0x198);
    }
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x1a8) = lVar7 + 0x230;
  lVar9 = *(long *)(lVar7 + 0x230);
  *(undefined8 **)(lVar7 + 0x230) = puVar1;
  *(long *)(param_1 + 400) = lVar9;
  *(long *)(param_1 + 0x198) = lVar7 + 0x230;
  if (lVar9 != 0) {
    *(undefined8 **)(lVar9 + 8) = puVar1;
  }
  *(int *)(lVar7 + 0x240) = *(int *)(lVar7 + 0x240) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x1f0);
  lVar9 = *(long *)(param_1 + 0x1f0);
  puVar11 = *(undefined8 **)(param_1 + 0x1f8);
  if ((puVar11 != (undefined8 *)0x0 || lVar9 != 0) &&
     (lVar8 = *(long *)(param_1 + 0x208), lVar8 != 0)) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (lVar9 != 0) {
      *(undefined8 **)(lVar9 + 8) = puVar11;
      puVar11 = *(undefined8 **)(param_1 + 0x1f8);
    }
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  lVar9 = *(long *)(param_1 + 0x208);
  if (lVar9 != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (*(long *)(param_1 + 0x1f0) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x1f0) + 8) = puVar11;
      puVar11 = *(undefined8 **)(param_1 + 0x1f8);
    }
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x208) = lVar7 + 0x250;
  lVar9 = *(long *)(lVar7 + 0x250);
  *(undefined8 **)(lVar7 + 0x250) = puVar1;
  *(long *)(param_1 + 0x1f0) = lVar9;
  *(long *)(param_1 + 0x1f8) = lVar7 + 0x250;
  if (lVar9 != 0) {
    *(undefined8 **)(lVar9 + 8) = puVar1;
  }
  lVar9 = *(long *)puVar5;
  *(int *)(lVar7 + 0x260) = *(int *)(lVar7 + 0x260) + 1;
  puVar5 = PTR_DAT_04bcbbc8;
  lVar9 = *(long *)(lVar9 + 0x70);
  uVar4 = *(ushort *)(param_1 + 0x230);
  plVar10 = (long *)(lVar9 + 0x18);
  iVar2 = *(int *)(lVar9 + 0x30);
  if (iVar2 < *(int *)(lVar9 + 0x34)) {
    plVar6 = *(long **)(lVar9 + 0x20);
    if (plVar6 != (long *)0x0) {
      *(long *)(lVar9 + 0x20) = *plVar6;
    }
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[6] = (long)plVar10;
    *(undefined4 *)(plVar6 + 4) = 0x3fc5ca0b;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 0;
    *(int *)((long)plVar6 + 0x24) = iVar2;
    *(uint *)(plVar6 + 5) = uVar4 | 0xa0000;
    *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
    lVar7 = FUN_028c13b8(plVar10,*plVar10);
    *plVar10 = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 1;
  }
  uVar4 = *(ushort *)(param_1 + 0x234);
  iVar3 = *(int *)(param_1 + 0x238);
  plVar10 = (long *)(lVar9 + 0x758);
  iVar2 = *(int *)(lVar9 + 0x770);
  if (iVar2 < *(int *)(lVar9 + 0x774)) {
    plVar6 = *(long **)(lVar9 + 0x760);
    if (plVar6 != (long *)0x0) {
      *(long *)(lVar9 + 0x760) = *plVar6;
    }
    plVar6[6] = (long)plVar10;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(int *)((long)plVar6 + 0x24) = iVar2;
    *(uint *)(plVar6 + 5) = (uint)uVar4 | iVar3 << 0x10;
    *(undefined4 *)(plVar6 + 4) = 0x3fc5ca0b;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 0;
    *(int *)(lVar9 + 0x770) = *(int *)(lVar9 + 0x770) + 1;
    lVar7 = FUN_028c13b8(plVar10,*plVar10);
    *plVar10 = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 1;
  }
  uVar4 = *(ushort *)(param_1 + 0x23c);
  plVar10 = (long *)(lVar9 + 0xe98);
  iVar2 = *(int *)(lVar9 + 0xeb0);
  if (iVar2 < *(int *)(lVar9 + 0xeb4)) {
    plVar6 = *(long **)(lVar9 + 0xea0);
    if (plVar6 != (long *)0x0) {
      *(long *)(lVar9 + 0xea0) = *plVar6;
    }
    plVar6[6] = (long)plVar10;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0x3fc5ca0b;
    *(int *)((long)plVar6 + 0x24) = iVar2;
    *(uint *)(plVar6 + 5) = (uint)uVar4 * 0x10001;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 0;
    *(int *)(lVar9 + 0xeb0) = *(int *)(lVar9 + 0xeb0) + 1;
    lVar7 = FUN_028c13b8(plVar10,*plVar10);
    *plVar10 = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 1;
  }
  uVar4 = *(ushort *)(param_1 + 0x240);
  plVar10 = (long *)(lVar9 + 0xe98);
  iVar2 = *(int *)(lVar9 + 0xeb0);
  if (iVar2 < *(int *)(lVar9 + 0xeb4)) {
    plVar6 = *(long **)(lVar9 + 0xea0);
    if (plVar6 != (long *)0x0) {
      *(long *)(lVar9 + 0xea0) = *plVar6;
    }
    plVar6[6] = (long)plVar10;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(int *)((long)plVar6 + 0x24) = iVar2;
    *(uint *)(plVar6 + 5) = (uint)uVar4 * 0x10001;
    *(undefined4 *)(plVar6 + 4) = 0xd9e1037f;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 0;
    *(int *)(lVar9 + 0xeb0) = *(int *)(lVar9 + 0xeb0) + 1;
    lVar9 = FUN_028c13b8(plVar10,*plVar10);
    *plVar10 = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x268) = 0xa0000000a;
  *(undefined8 *)(param_1 + 0x278) = 0x2100000021;
  *(undefined8 *)(param_1 + 0x270) = 0x640000000a;
  *(undefined4 *)(param_1 + 0x280) = 0x21;
  return;
}

