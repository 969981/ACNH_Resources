
undefined4 FUN_033c3bd0(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 0x50);
  if ((uVar3 != 0xffffffff) && (uVar3 < 0x14)) {
    lVar6 = param_1 + 0xa10;
    plVar1 = (long *)(param_1 + 2000);
    lVar9 = lVar6 + (ulong)uVar3 * 0x60;
    if (0x13 < uVar3) {
      lVar9 = lVar6;
    }
    lVar2 = lVar6 + (ulong)uVar3 * 0x60;
    if (0x13 < uVar3) {
      lVar2 = lVar6;
    }
    lVar6 = FUN_0160cc10(plVar1,*(undefined4 *)(lVar9 + 0x58),lVar2,0);
    if (lVar6 != 0) {
LAB_033c3c58:
      if ((param_2 & 1) == 0) {
        lVar9 = *(long *)(lVar6 + 0x330);
        lVar6 = lVar6 + 0x330;
      }
      else {
        lVar9 = *(long *)(lVar6 + 0x360);
        lVar6 = lVar6 + 0x360;
      }
      puVar8 = (undefined4 *)(**(code **)(lVar9 + 0xf0))(lVar6);
      return *puVar8;
    }
    iVar4 = (**(code **)(*plVar1 + 0x168))(plVar1);
    if (0 < iVar4) {
      iVar10 = 0;
      do {
        iVar5 = (**(code **)(*plVar1 + 0x168))(plVar1);
        if (((iVar10 < iVar5) && (lVar6 = (**(code **)(*plVar1 + 0x158))(plVar1,iVar10), lVar6 != 0)
            ) && (puVar7 = (uint *)(**(code **)(*(long *)(lVar6 + 0x210) + 0xf0))(lVar6 + 0x210),
                 uVar3 == *puVar7)) goto LAB_033c3c58;
        iVar10 = iVar10 + 1;
      } while (iVar4 != iVar10);
    }
  }
  return 0;
}

