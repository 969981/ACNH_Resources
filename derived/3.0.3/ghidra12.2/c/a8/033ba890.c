
void FUN_033ba890(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  
  uVar3 = *(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x11b8) = 0;
  if (uVar3 < 0x14) {
    lVar6 = param_1 + 0xa10;
    plVar9 = (long *)(param_1 + 2000);
    lVar1 = lVar6 + (ulong)uVar3 * 0x60;
    if (0x13 < uVar3) {
      lVar1 = lVar6;
    }
    lVar2 = lVar6 + (ulong)uVar3 * 0x60;
    if (0x13 < uVar3) {
      lVar2 = lVar6;
    }
    lVar6 = FUN_0160cc10(plVar9,*(undefined4 *)(lVar1 + 0x58),lVar2,0);
    if (lVar6 == 0) {
      iVar4 = (**(code **)(*plVar9 + 0x168))(plVar9);
      if (0 < iVar4) {
        iVar11 = 0;
        do {
          iVar5 = (**(code **)(*plVar9 + 0x168))(plVar9);
          if (((iVar11 < iVar5) &&
              (lVar6 = (**(code **)(*plVar9 + 0x158))(plVar9,iVar11), lVar6 != 0)) &&
             (puVar8 = (uint *)(**(code **)(*(long *)(lVar6 + 0x210) + 0xf0))(lVar6 + 0x210),
             uVar3 == *puVar8)) goto LAB_033ba90c;
          iVar11 = iVar11 + 1;
        } while (iVar4 != iVar11);
      }
      goto LAB_033ba9d4;
    }
LAB_033ba90c:
    lVar1 = 0x360;
    lVar2 = lVar6 + 0x360;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x330;
      lVar2 = lVar6 + 0x330;
    }
    piVar7 = (int *)(**(code **)(*(long *)(lVar6 + lVar1) + 0xf0))(lVar2);
    iVar4 = *piVar7;
    *(int *)(param_1 + 0x11b8) = iVar4;
  }
  else {
LAB_033ba9d4:
    iVar4 = *(int *)(param_1 + 0x11b8);
  }
  if (iVar4 == 0) {
    FUN_033ba674(param_1);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x60) + 0x1b0);
    if (plVar9 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar9 + 0x50))();
      if ((uVar10 & 1) != 0) goto LAB_033baa3c;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar9 = *(long **)(lVar6 + 0x1b0);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x50))();
        plVar9 = *(long **)(lVar6 + 0x1b0);
        (**(code **)(*plVar9 + 0x20))(plVar9,0);
      }
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xf7;
  }
LAB_033baa3c:
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}

