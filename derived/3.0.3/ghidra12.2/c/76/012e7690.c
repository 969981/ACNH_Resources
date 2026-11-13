
undefined8 FUN_012e7690(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  iVar1 = *(int *)(param_2 + 0x24) + 1;
  iVar9 = *(int *)(param_2 + 0x14);
  if (iVar1 != iVar9) {
    iVar3 = *(int *)(param_2 + 0x10);
    iVar10 = iVar3;
    do {
      lVar11 = *(long *)(param_1 + 8);
      iVar2 = *(int *)(lVar11 + 0x14);
      uVar4 = iVar10 - *(int *)(lVar11 + 0x10);
      puVar8 = (undefined8 *)(lVar11 + 0x28);
      plVar7 = (long *)(**(code **)*puVar8)(puVar8);
      uVar5 = (**(code **)(*plVar7 + 0x18))();
      if (uVar4 < uVar5) {
        uVar5 = iVar9 - iVar2;
        plVar7 = (long *)(**(code **)*puVar8)(puVar8);
        uVar6 = (**(code **)(*plVar7 + 0x20))();
        if ((((uVar5 < uVar6) && (*(long *)(lVar11 + 0x1b8) != 0)) &&
            (uVar4 < *(uint *)(lVar11 + 0x1c8))) && (uVar5 < *(uint *)(lVar11 + 0x1cc))) {
          iVar2 = *(int *)(lVar11 + 0x1c4);
          uVar4 = uVar4 + *(uint *)(lVar11 + 0x1c8) * uVar5;
          *(int *)(lVar11 + 0x1c4) = iVar2 + 1;
          if (((int)uVar4 < 0) || (*(int *)(lVar11 + 0x1c0) <= (int)uVar4)) {
            *(int *)(lVar11 + 0x1c4) = iVar2;
          }
          else {
            uVar5 = *(uint *)(*(long *)(lVar11 + 0x1b8) + (ulong)(uVar4 >> 5) * 4);
            *(int *)(lVar11 + 0x1c4) = iVar2;
            if ((uVar5 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
              return 1;
            }
          }
        }
      }
      if (iVar10 < *(int *)(param_2 + 0x20)) {
        iVar10 = iVar10 + 1;
      }
      else {
        iVar9 = iVar9 + 1;
        iVar10 = *(int *)(param_2 + 0x10);
      }
    } while ((iVar3 != iVar10) || (iVar1 != iVar9));
  }
  return 0;
}

