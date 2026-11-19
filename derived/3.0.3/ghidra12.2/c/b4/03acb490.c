
void FUN_03acb490(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (0 < *(int *)(param_1 + 0x238)) {
    uVar6 = *(undefined4 *)(param_1 + 0x2d8);
    if (*(int *)(param_1 + 0x238) != 1) {
      uVar6 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x2f8);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(param_1 + 1000) / iVar4;
    }
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x408) / iVar4;
    }
    FUN_03ace150(*(undefined4 *)(param_1 + 0x2b8),uVar6,*(undefined8 *)(param_1 + 0x378),iVar2,iVar3
                );
    iVar4 = *(int *)(param_1 + 0x238);
    if (1 < iVar4) {
      uVar5 = 1;
      do {
        uVar6 = *(undefined4 *)(param_1 + 0x2d8);
        if (uVar5 != iVar4 - 1U) {
          uVar6 = 0;
        }
        uVar1 = uVar5;
        if (*(uint *)(param_1 + 0x370) <= uVar5) {
          uVar1 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x2f8);
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = *(int *)(param_1 + 1000) / iVar4;
        }
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = *(int *)(param_1 + 0x408) / iVar4;
        }
        FUN_03ace150(0,uVar6,*(long *)(param_1 + 0x378) + (ulong)uVar1 * 0x5d0,iVar2,iVar3);
        iVar4 = *(int *)(param_1 + 0x238);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}

