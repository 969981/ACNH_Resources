
void FUN_00147570(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 == 0) {
    return;
  }
  auVar12 = FUN_00147178();
  lVar1 = auVar12._0_8_ + param_2 / 1000;
  uVar3 = auVar12._8_4_ + ((int)param_2 + (int)(param_2 / 1000) * -1000) * 1000;
  if (999999 < (int)uVar3) {
    lVar1 = lVar1 + 1;
    uVar3 = uVar3 - 1000000;
  }
  uVar7 = auVar12._8_8_ & 0xffffffff00000000 | (ulong)uVar3;
  FUN_00149f68(param_1,(ulong)param_3);
  lVar11 = param_1 + (ulong)param_3 * 0x30;
  puVar2 = (undefined8 *)(param_1 + 0x12f8);
  *(long *)(lVar11 + 0x1330) = lVar1;
  *(ulong *)(lVar11 + 0x1338) = uVar7;
  *(uint *)(lVar11 + 0x1340) = param_3;
  lVar5 = FUN_00143bd0(puVar2);
  if ((lVar5 != 0) && (plVar10 = (long *)*puVar2, plVar10 != (long *)0x0)) {
    iVar4 = FUN_001471a8(*(undefined8 *)(*plVar10 + 0x18),*(undefined8 *)(*plVar10 + 0x20),
                         *(undefined8 *)(lVar11 + 0x1330),*(undefined8 *)(lVar11 + 0x1338));
    if (iVar4 < 1) {
      do {
        plVar8 = plVar10;
        plVar10 = (long *)plVar8[2];
        if (plVar10 == (long *)0x0) break;
        iVar4 = FUN_001471a8(*(undefined8 *)(*plVar10 + 0x18),*(undefined8 *)(*plVar10 + 0x20),
                             *(undefined8 *)(lVar11 + 0x1330),*(undefined8 *)(lVar11 + 0x1338));
      } while (iVar4 < 1);
      goto LAB_00147658;
    }
  }
  plVar8 = (long *)0x0;
LAB_00147658:
  lVar5 = param_1 + (ulong)param_3 * 0x30 + 0x1318;
  FUN_00143a90(puVar2,plVar8,lVar5,lVar5);
  if ((*(long *)(param_1 + 0x12b0) != 0) || (*(int *)(param_1 + 0x12b8) != 0)) {
    iVar4 = FUN_001471a8(lVar1,uVar7,*(long *)(param_1 + 0x12b0),*(undefined8 *)(param_1 + 0x12b8));
    if (0 < iVar4) {
      return;
    }
    iVar4 = FUN_0017af74(*(undefined8 *)(lVar9 + 0xb0),param_1 + 0x12c0);
    if (iVar4 != 0) {
      FUN_0014d430(param_1,"Internal error removing splay node = %d\n",iVar4);
    }
  }
  *(long *)(param_1 + 0x12b0) = lVar1;
  *(ulong *)(param_1 + 0x12b8) = uVar7;
  *(long *)(param_1 + 0x12f0) = param_1;
  uVar6 = FUN_0017adec(lVar1,uVar7,*(undefined8 *)(lVar9 + 0xb0),param_1 + 0x12c0);
  *(undefined8 *)(lVar9 + 0xb0) = uVar6;
  return;
}

