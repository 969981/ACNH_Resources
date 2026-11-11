
void FUN_005dabe0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  
  *param_1 = &PTR_LAB_048dfa58;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = param_3;
  iVar3 = *(int *)(param_3 + 0x30);
  if (iVar3 < 1) {
    uVar9 = 0;
  }
  else {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,iVar3,4,0,0,(long)param_1 + 0x24);
    uVar9 = *(uint *)(param_1 + 4);
    param_1[3] = lVar4;
    if (iVar3 - uVar9 != 0 && (int)uVar9 <= iVar3) {
      puVar7 = (undefined4 *)(lVar4 + (long)(int)uVar9 * 4);
      uVar2 = iVar3 - uVar9 & 3;
      *(int *)(param_1 + 4) = iVar3;
      if (2 < iVar3 + ~uVar9) {
        iVar8 = (uVar9 + uVar2) - iVar3;
        puVar6 = puVar7;
        do {
          puVar7 = puVar6 + 4;
          *puVar6 = 0x7f7fffee;
          puVar6[1] = 0x7f7fffee;
          iVar8 = iVar8 + 4;
          puVar6[2] = 0x7f7fffee;
          puVar6[3] = 0x7f7fffee;
          puVar6 = puVar7;
        } while (iVar8 != 0);
      }
      if (uVar2 != 0) {
        iVar8 = -uVar2;
        do {
          iVar8 = iVar8 + 1;
          *puVar7 = 0x7f7fffee;
          puVar7 = puVar7 + 1;
        } while (iVar8 != 0);
      }
      goto LAB_005dacd8;
    }
  }
  if (iVar3 < (int)uVar9) {
    *(int *)(param_1 + 4) = iVar3;
  }
LAB_005dacd8:
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x3fffffff) < iVar3) {
    uVar5 = FUN_00426720(PTR_DAT_048607b8,iVar3,4,param_1[5],*(undefined4 *)(param_1 + 6),
                         (uint *)((long)param_1 + 0x34));
    param_1[5] = uVar5;
  }
  uVar9 = *(uint *)(param_1 + 6);
  puVar1 = (uint *)((long)param_1 + 0x44);
  if ((int)uVar9 < iVar3) {
    *(int *)(param_1 + 6) = iVar3;
    memset((void *)(param_1[5] + (long)(int)uVar9 * 4),0,(ulong)(iVar3 + ~uVar9) * 4 + 4);
    uVar9 = *puVar1;
  }
  else if (iVar3 < (int)uVar9) {
    *(int *)(param_1 + 6) = iVar3;
    uVar9 = *puVar1;
  }
  else {
    uVar9 = *puVar1;
  }
  if ((int)(uVar9 & 0x3fffffff) < iVar3) {
    uVar5 = FUN_00426720(PTR_DAT_048607b8,iVar3,1,param_1[7],*(undefined4 *)(param_1 + 8),puVar1);
    param_1[7] = uVar5;
    uVar9 = *(uint *)(param_1 + 8);
  }
  else {
    uVar9 = *(uint *)(param_1 + 8);
  }
  if ((int)uVar9 < iVar3) {
    *(int *)(param_1 + 8) = iVar3;
    memset((void *)(param_1[7] + (long)(int)uVar9),0,(ulong)(iVar3 + ~uVar9) + 1);
    return;
  }
  if (iVar3 < (int)uVar9) {
    *(int *)(param_1 + 8) = iVar3;
  }
  return;
}

