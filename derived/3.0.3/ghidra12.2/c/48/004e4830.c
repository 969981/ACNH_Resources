
void FUN_004e4830(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar4 = PTR_DAT_048607b8;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar9 = 0;
    iVar7 = (int)param_2[1];
    do {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar9 * 0x10);
      puVar10 = (undefined8 *)*puVar8;
      iVar3 = *(int *)(puVar8 + 1);
      iVar1 = iVar7 + iVar3;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < iVar1) {
        lVar5 = FUN_00426720(puVar4,iVar1,0x30,*param_2,iVar7,(uint *)((long)param_2 + 0xc));
        *param_2 = lVar5;
      }
      else {
        lVar5 = *param_2;
      }
      if (iVar3 != 0) {
        puVar11 = puVar10 + (long)iVar3 * 6;
        puVar8 = (undefined8 *)(lVar5 + (long)iVar7 * 0x30);
        do {
          uVar2 = puVar10[1];
          *puVar8 = *puVar10;
          puVar8[1] = uVar2;
          uVar6 = puVar10[2];
          puVar8[2] = uVar6;
          if ((uVar6 & 1) != 0) {
            FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
          }
          uVar2 = puVar10[4];
          puVar8[3] = puVar10[3];
          puVar8[4] = uVar2;
          uVar6 = puVar10[5];
          puVar8[5] = uVar6;
          if ((uVar6 & 1) != 0) {
            FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
          }
          puVar10 = puVar10 + 6;
          puVar8 = puVar8 + 6;
        } while (puVar10 != puVar11);
      }
      *(int *)(param_2 + 1) = iVar1;
      lVar9 = lVar9 + 1;
      iVar7 = iVar1;
    } while (lVar9 < *(int *)(param_1 + 0x20));
  }
  return;
}

