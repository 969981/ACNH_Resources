
void FUN_004cbd30(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_38;
  
  iVar4 = *(int *)(param_1 + 0x40);
  iVar8 = iVar4;
  if (iVar4 <= param_2 + 1) {
    iVar8 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < iVar8) {
    uVar2 = FUN_00426720(PTR_DAT_048607b8,iVar8,0x10,*(undefined8 *)(param_1 + 0x38));
    iVar4 = *(int *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  if (iVar8 - iVar4 == 0 || iVar8 < iVar4) {
    if (iVar8 < iVar4) {
      *(int *)(param_1 + 0x40) = iVar8;
    }
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar4 * 0x10);
    uVar1 = iVar8 - iVar4 & 1;
    *(int *)(param_1 + 0x40) = iVar8;
    if (iVar8 != iVar4 + 1) {
      iVar8 = (iVar4 + uVar1) - iVar8;
      puVar6 = puVar7;
      do {
        puVar7 = puVar6 + 4;
        *puVar6 = 0;
        puVar6[1] = 0xffffffff00000000;
        iVar8 = iVar8 + 2;
        puVar6[2] = 0;
        puVar6[3] = 0xffffffff00000000;
        puVar6 = puVar7;
      } while (iVar8 != 0);
    }
    if (uVar1 != 0) {
      *puVar7 = 0;
      puVar7[1] = 0xffffffff00000000;
    }
  }
  local_38 = param_3[1];
  lVar3 = FUN_0049cee0((long *)(param_1 + 0xe8),&local_38);
  if (lVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0xe8) + (long)*(int *)(lVar3 + 4) * 0x10 + 8);
  }
  iVar4 = *(int *)(param_3 + 3);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)param_2 * 0x10);
  iVar8 = -iVar4;
  if (-1 < iVar4) {
    iVar8 = iVar4;
  }
  *puVar7 = *param_3;
  *(undefined4 *)(puVar7 + 1) = uVar5;
  *(int *)((long)puVar7 + 0xc) = iVar8;
  return;
}

