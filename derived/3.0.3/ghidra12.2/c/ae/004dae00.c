
void FUN_004dae00(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar2 = uVar4;
  if ((int)uVar4 < param_2 + 1) {
    uVar2 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < (int)uVar2) {
    uVar3 = FUN_00426720(PTR_DAT_048607b8,uVar2,0x20,*(undefined8 *)(param_1 + 0x28));
    uVar4 = *(uint *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  if (uVar2 - uVar4 == 0 || (int)uVar2 < (int)uVar4) {
    if ((int)uVar2 < (int)uVar4) {
      iVar8 = uVar4 - uVar2;
      *(uint *)(param_1 + 0x30) = uVar2;
      if (0 < iVar8) {
        puVar9 = (ulong *)(*(long *)(param_1 + 0x28) + (long)(int)uVar4 * 0x20 + -0x10);
        do {
          if ((*puVar9 & 1) != 0) {
            FUN_0043dd50(*puVar9 & 0xfffffffffffffffe);
          }
          iVar8 = iVar8 + -1;
          puVar9 = puVar9 + -4;
        } while (iVar8 != 0);
      }
    }
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar4 * 0x20);
    uVar1 = uVar2 - uVar4 & 3;
    *(uint *)(param_1 + 0x30) = uVar2;
    if (2 < uVar2 + ~uVar4) {
      iVar8 = (uVar4 + uVar1) - uVar2;
      puVar5 = puVar6;
      do {
        puVar6 = puVar5 + 0x10;
        *(undefined4 *)(puVar5 + 3) = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        iVar8 = iVar8 + 4;
        *(undefined4 *)(puVar5 + 7) = 0;
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
        puVar5[8] = 0;
        *(undefined4 *)(puVar5 + 0xf) = 0;
        puVar5[0xc] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xd] = 0;
        puVar5[0xe] = 0;
        puVar5 = puVar6;
      } while (iVar8 != 0);
    }
    if (uVar1 != 0) {
      iVar8 = -uVar1;
      do {
        *(undefined4 *)(puVar6 + 3) = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        iVar8 = iVar8 + 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 4;
      } while (iVar8 != 0);
    }
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)param_2 * 0x20);
  uVar3 = param_3[1];
  *puVar6 = *param_3;
  puVar6[1] = uVar3;
  if ((param_3[2] & 1) != 0) {
    FUN_0043dd30(param_3[2] & 0xfffffffffffffffe);
  }
  uVar7 = puVar6[2];
  if ((uVar7 & 1) != 0) {
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
  }
  puVar6[2] = param_3[2];
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_3 + 3);
  return;
}

