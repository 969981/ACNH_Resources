
ulong FUN_002a74a0(ushort *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  ushort *puVar12;
  int iVar13;
  undefined8 uVar14;
  
  if (0x7f < *(int *)(param_1 + 0x600)) {
    return 0xffffffff;
  }
  *(int *)(param_1 + (long)*(int *)(param_1 + 0x600) * 0xc) = param_2;
  iVar7 = *(int *)(param_1 + 0x600);
  iVar8 = iVar7 + 1;
  *(int *)(param_1 + 0x600) = iVar8;
  if (-1 < iVar7) {
    iVar7 = 1;
    lVar9 = 0;
    puVar5 = param_1;
    do {
      puVar5 = puVar5 + 0xc;
      lVar1 = lVar9 + 1;
      lVar11 = (long)iVar8;
      if (lVar1 < lVar11) {
        puVar10 = param_1 + lVar9 * 0xc;
        puVar12 = puVar5;
        iVar13 = iVar7;
        do {
          if (((uint)*(byte *)((long)puVar12 + 3) << 0x18 | (uint)*puVar12 << 8 |
              (uint)(byte)puVar12[1]) <
              ((uint)*(byte *)((long)puVar10 + 3) << 0x18 | (uint)*puVar10 << 8 |
              (uint)(byte)puVar10[1])) {
            uVar14 = *(undefined8 *)(puVar12 + 4);
            uVar3 = *(undefined8 *)(puVar12 + 8);
            uVar2 = *(undefined8 *)puVar10;
            uVar4 = *(undefined8 *)(puVar10 + 4);
            *(undefined8 *)puVar10 = *(undefined8 *)puVar12;
            *(undefined8 *)(puVar10 + 4) = uVar14;
            uVar14 = *(undefined8 *)(puVar10 + 8);
            *(undefined8 *)(puVar10 + 8) = uVar3;
            *(undefined8 *)puVar12 = uVar2;
            *(undefined8 *)(puVar12 + 4) = uVar4;
            *(undefined8 *)(puVar12 + 8) = uVar14;
            iVar8 = *(int *)(param_1 + 0x600);
          }
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 0xc;
        } while (iVar13 < iVar8);
        lVar11 = (long)iVar8;
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar1;
    } while (lVar1 < lVar11);
  }
  uVar6 = 0;
  do {
    if (*(int *)param_1 == param_2) goto LAB_002a75d0;
    if (*(int *)(param_1 + 0xc) == param_2) {
      return uVar6 + 1 & 0xffffffff;
    }
    uVar6 = uVar6 + 2;
    param_1 = param_1 + 0x18;
  } while (uVar6 != 0x80);
  uVar6 = 0xffffffff;
LAB_002a75d0:
  return uVar6 & 0xffffffff;
}

