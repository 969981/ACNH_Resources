
void FUN_0054e750(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 local_30;
  int local_28;
  undefined4 uStack_24;
  
  iVar6 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar6) {
    uVar3 = FUN_00426720(PTR_DAT_048607b8,iVar6,4,*(undefined8 *)(param_1 + 0x18),iVar6);
    uVar2 = *(uint *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    if ((int)uVar2 < iVar6) {
      uVar1 = iVar6 - uVar2 & 3;
      *(int *)(param_1 + 0x20) = iVar6;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar2 * 4);
      if (2 < iVar6 + ~uVar2) {
        iVar6 = (uVar2 + uVar1) - iVar6;
        puVar4 = puVar5;
        do {
          puVar5 = puVar4 + 4;
          *puVar4 = 0x7f7fffee;
          puVar4[1] = 0x7f7fffee;
          iVar6 = iVar6 + 4;
          puVar4[2] = 0x7f7fffee;
          puVar4[3] = 0x7f7fffee;
          puVar4 = puVar5;
        } while (iVar6 != 0);
      }
      if (uVar1 != 0) {
        iVar6 = -uVar1;
        do {
          iVar6 = iVar6 + 1;
          *puVar5 = 0x7f7fffee;
          puVar5 = puVar5 + 1;
        } while (iVar6 != 0);
      }
    }
    else if (iVar6 < (int)uVar2) {
      *(int *)(param_1 + 0x20) = iVar6;
    }
  }
  local_28 = *(int *)(param_1 + 0x40);
  if (local_28 != 1) {
    local_30 = *(undefined8 *)(param_1 + 0x30);
    uStack_24 = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
    FUN_0054e510(*(long *)(*(long *)(param_1 + 0x38) + 0x270) + 0x128,*(long *)(param_1 + 0x38),
                 &local_30);
  }
  return;
}

