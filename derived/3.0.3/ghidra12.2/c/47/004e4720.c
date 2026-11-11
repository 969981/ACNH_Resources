
void FUN_004e4720(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar5 = FUN_004dcbb0(param_1 + 0x28);
  if (lVar5 != 0) {
    puVar7 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (long)*(int *)(*(long *)(param_1 + 0x28) + (long)*(int *)(lVar5 + 4) * 8 + 4) * 0x10);
    puVar8 = (undefined8 *)*puVar7;
    iVar3 = *(int *)(puVar7 + 1);
    iVar4 = (int)param_3[1];
    iVar1 = iVar4 + iVar3;
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < iVar1) {
      lVar5 = FUN_00426720(PTR_DAT_048607b8,iVar1,0x30,*param_3,iVar4);
      *param_3 = lVar5;
    }
    else {
      lVar5 = *param_3;
    }
    if (iVar3 != 0) {
      puVar9 = puVar8 + (long)iVar3 * 6;
      puVar7 = (undefined8 *)(lVar5 + (long)iVar4 * 0x30);
      do {
        uVar2 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        uVar6 = puVar8[2];
        puVar7[2] = uVar6;
        if ((uVar6 & 1) != 0) {
          FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        }
        uVar2 = puVar8[4];
        puVar7[3] = puVar8[3];
        puVar7[4] = uVar2;
        uVar6 = puVar8[5];
        puVar7[5] = uVar6;
        if ((uVar6 & 1) != 0) {
          FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        }
        puVar8 = puVar8 + 6;
        puVar7 = puVar7 + 6;
      } while (puVar8 != puVar9);
    }
    *(int *)(param_3 + 1) = iVar1;
  }
  return;
}

