
void FUN_01363950(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  lVar5 = *(long *)(param_1 + 0x3d60);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
    FUN_03f42ca4(*(long *)(lVar5 + 0x20),lVar5,1);
  }
  FUN_012ea250(param_1 + 0x3d58);
  puVar4 = PTR_DAT_04bb3238;
  FUN_0125dae0(param_1 + 0x1520,PTR_DAT_04bb3238);
  *(undefined4 *)(param_1 + 0x1640) = *(undefined4 *)puVar4;
  if (*(long *)(param_1 + 0x14a8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x14a8) + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_012588e8();
  }
  puVar4 = PTR_DAT_04bb2200;
  iVar3 = *(int *)(param_1 + 0x4738);
  if (iVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x4740);
    iVar8 = 0;
    do {
      if (((*(ushort *)(lVar5 + (long)iVar8 * 0x70 + 0x10) >> 1 & 1) != 0) &&
         (*(long *)(*(long *)puVar4 + 0x100) != 0)) {
        FUN_015a30c0();
      }
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  if (*(int *)(param_1 + 15000) != 0) {
    lVar5 = (long)*(int *)(param_1 + 15000) << 3;
    uVar1 = *(undefined4 *)(PTR_DAT_04bbbd98 + 8);
    uVar2 = *(undefined4 *)(PTR_DAT_04bbbd98 + 0xc);
    plVar6 = *(long **)(param_1 + 0x3aa0);
    do {
      lVar7 = *plVar6;
      lVar5 = lVar5 + -8;
      *(undefined4 *)(lVar7 + 0x10) = uVar1;
      *(undefined4 *)(lVar7 + 0x14) = uVar2;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531 && (*(uint *)(param_1 + 0x4758) & 1) != 0) {
    FUN_012df8d8(param_1 + 0x4750,*(undefined4 *)(param_1 + 0x4770));
  }
  *(undefined4 *)(param_1 + 0x4780) = 0;
  *(undefined8 *)(param_1 + 0x4788) = 0;
  *(undefined4 *)(param_1 + 0x4790) = 0;
  return;
}

