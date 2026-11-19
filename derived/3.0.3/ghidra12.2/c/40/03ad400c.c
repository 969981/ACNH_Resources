
bool FUN_03ad400c(long param_1,long param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar7 = param_3 * 5;
  uVar3 = (uint)*(ushort *)(param_1 + 8) & (-1 << (ulong)(uVar7 + 5 & 0x1f) ^ 0xffffffffU);
  if (uVar3 != 0) {
    param_4 = param_4 + -1;
    if (param_3 != 0) {
      param_4 = 0;
    }
    lVar4 = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = *(long *)(param_2 + 0x20) + (long)param_3 * 0x48;
    }
    lVar8 = FUN_00347cc4(lVar4);
    lVar4 = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = *(long *)(param_2 + 0x20) + (long)param_4 * 0x48;
    }
    lVar9 = FUN_00347cc4(lVar4);
    lVar4 = DAT_05ae9330;
    uVar6 = *(ushort *)(param_1 + 8);
    if ((uVar6 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
      uVar10 = (ulong)*(ushort *)(**(long **)(DAT_05ae9330 + 0x88) + 0x58);
      *(undefined4 *)(lVar8 + uVar10) = *(undefined4 *)(lVar9 + uVar10);
      uVar6 = *(ushort *)(param_1 + 8);
    }
    if (((uVar6 >> (ulong)(uVar7 & 0x1f)) >> 1 & 1) != 0) {
      uVar10 = (ulong)*(ushort *)(**(long **)(lVar4 + 0x88) + 0x70);
      puVar1 = (undefined8 *)(lVar8 + uVar10);
      puVar2 = (undefined8 *)(lVar9 + uVar10);
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      uVar6 = *(ushort *)(param_1 + 8);
    }
    if (((uVar6 >> (ulong)(uVar7 + 1 & 0x1f)) >> 1 & 1) != 0) {
      uVar10 = (ulong)*(ushort *)(**(long **)(lVar4 + 0x88) + 0x7c);
      puVar1 = (undefined8 *)(lVar8 + uVar10);
      puVar2 = (undefined8 *)(lVar9 + uVar10);
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      uVar6 = *(ushort *)(param_1 + 8);
    }
    if (((uVar6 >> (ulong)(uVar7 + 2 & 0x1f)) >> 1 & 1) != 0) {
      uVar10 = (ulong)*(ushort *)(**(long **)(lVar4 + 0x88) + 0x88);
      puVar1 = (undefined8 *)(lVar8 + uVar10);
      puVar2 = (undefined8 *)(lVar9 + uVar10);
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      uVar6 = *(ushort *)(param_1 + 8);
    }
    if (((uVar6 >> (ulong)(uVar7 + 3 & 0x1f)) >> 1 & 1) != 0) {
      uVar10 = (ulong)*(ushort *)(**(long **)(lVar4 + 0x88) + 0x94);
      puVar1 = (undefined8 *)(lVar8 + uVar10);
      puVar2 = (undefined8 *)(lVar9 + uVar10);
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
    }
    lVar4 = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = *(long *)(param_2 + 0x20) + (long)param_3 * 0x48;
    }
    FUN_00347cdc(lVar4,0,0x100);
    lVar4 = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = *(long *)(param_2 + 0x20) + (long)param_3 * 0x48;
    }
    FUN_00347cd8(lVar4);
    lVar4 = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = *(long *)(param_2 + 0x20) + (long)param_4 * 0x48;
    }
    FUN_00347cdc(lVar4,0,0x100);
    lVar4 = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = *(long *)(param_2 + 0x20) + (long)param_4 * 0x48;
    }
    FUN_00347cd8(lVar4);
  }
  return uVar3 != 0;
}

