
bool FUN_03ad41f8(long param_1,long *param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar6 = param_5 * 5;
  uVar3 = (uint)*(ushort *)(param_1 + 8) & (-1 << (ulong)(uVar6 + 5 & 0x1f) ^ 0xffffffffU);
  if (uVar3 != 0) {
    lVar12 = param_2[2];
    lVar7 = param_2[6];
    iVar9 = (**(code **)(*param_2 + 0x20))(param_2);
    iVar10 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar8 = param_2[6];
    lVar12 = lVar12 + (ulong)(((int)lVar7 + iVar9) - 1U & -iVar10) * (long)param_3;
    lVar13 = param_2[2];
    iVar9 = (**(code **)(*param_2 + 0x20))(param_2);
    iVar10 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar7 = DAT_05ae9330;
    lVar13 = lVar13 + (ulong)(((int)lVar8 + iVar9) - 1U & -iVar10) * (long)param_4;
    uVar5 = *(ushort *)(param_1 + 8);
    if ((uVar5 >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
      uVar11 = (ulong)*(ushort *)(**(long **)(DAT_05ae9330 + 0x88) + 0x58);
      *(undefined4 *)(lVar12 + uVar11) = *(undefined4 *)(lVar13 + uVar11);
      uVar5 = *(ushort *)(param_1 + 8);
    }
    if (((uVar5 >> (ulong)(uVar6 & 0x1f)) >> 1 & 1) != 0) {
      uVar11 = (ulong)*(ushort *)(**(long **)(lVar7 + 0x88) + 0x70);
      puVar1 = (undefined8 *)(lVar12 + uVar11);
      puVar2 = (undefined8 *)(lVar13 + uVar11);
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      uVar5 = *(ushort *)(param_1 + 8);
    }
    if (((uVar5 >> (ulong)(uVar6 + 1 & 0x1f)) >> 1 & 1) != 0) {
      uVar11 = (ulong)*(ushort *)(**(long **)(lVar7 + 0x88) + 0x7c);
      puVar1 = (undefined8 *)(lVar12 + uVar11);
      puVar2 = (undefined8 *)(lVar13 + uVar11);
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      uVar5 = *(ushort *)(param_1 + 8);
    }
    if (((uVar5 >> (ulong)(uVar6 + 2 & 0x1f)) >> 1 & 1) != 0) {
      uVar11 = (ulong)*(ushort *)(**(long **)(lVar7 + 0x88) + 0x88);
      puVar1 = (undefined8 *)(lVar12 + uVar11);
      puVar2 = (undefined8 *)(lVar13 + uVar11);
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      uVar5 = *(ushort *)(param_1 + 8);
    }
    if (((uVar5 >> (ulong)(uVar6 + 3 & 0x1f)) >> 1 & 1) != 0) {
      uVar11 = (ulong)*(ushort *)(**(long **)(lVar7 + 0x88) + 0x94);
      puVar1 = (undefined8 *)(lVar13 + uVar11);
      puVar2 = (undefined8 *)(lVar12 + uVar11);
      uVar4 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
    }
  }
  return uVar3 != 0;
}

