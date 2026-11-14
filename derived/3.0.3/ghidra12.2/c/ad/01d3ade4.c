
int FUN_01d3ade4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar4 = PTR_DAT_04bb2020;
  lVar10 = *(long *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x14);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  puStack_48 = &DAT_040c7c06;
  iVar5 = FUN_01d3aee0(lVar10 + iVar6,iVar3 - iVar6,&local_50,0,0);
  iVar2 = 0;
  if (-1 < iVar5) {
    iVar2 = iVar6;
  }
  uVar1 = iVar2 + iVar5;
  if (-1 < (int)uVar1) {
    uVar8 = param_2[1];
    uVar9 = uVar8 / 3;
    if (uVar8 != uVar9 * 3) {
      uVar9 = uVar9 + 1;
    }
    iVar2 = uVar1 + (int)uVar9 * 4;
    if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
      uVar7 = *param_2;
      *(undefined1 *)(lVar10 + (ulong)uVar1 + uVar9 * 4) = 0;
      FUN_038e8220(lVar10 + (ulong)uVar1,uVar7,uVar8,0);
      local_50 = puVar4 + 0x10;
      puStack_48 = &DAT_040c7c06;
      iVar6 = FUN_01d3aee0(lVar10 + iVar2,iVar3 - iVar2,&local_50,0,0);
      iVar3 = 0;
      if (-1 < iVar6) {
        iVar3 = iVar2;
      }
      return iVar3 + iVar6;
    }
  }
  return -1;
}

