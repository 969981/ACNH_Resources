
uint FUN_02800290(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined **local_50;
  long lStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  uVar5 = *(uint *)(param_1 + 0x170);
  if (*(byte *)(param_1 + 0x177) == 0 &&
      (((ulong)uVar5 == 0 && *(ushort *)(param_1 + 0x174) == 0) && *(byte *)(param_1 + 0x176) == 0))
  {
    iVar11 = 0;
  }
  else {
    lVar9 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
    iVar11 = 0;
    if ((uint)*(byte *)(param_1 + 0x177) ==
        ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff)) {
      iVar11 = ((int)lVar9 - (uint)*(ushort *)(param_1 + 0x174)) + (int)((ulong)lVar9 >> 0x20) +
               -0x7f1cd4ef;
    }
  }
  lStack_48 = param_1 + 0xb8;
  local_50 = &PTR_LAB_04a915d0;
  local_40 = &LAB_028012e0;
  uStack_38 = 0;
  uVar5 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  iVar3 = FUN_0277c8f0(uVar5,&local_50);
  local_50 = &PTR_LAB_04a915f8;
  uVar5 = *(uint *)(param_1 + 0xa0);
  local_40 = &LAB_028012f0;
  uStack_38 = 0;
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  lStack_48 = param_1;
  iVar4 = FUN_0277c8f0(uVar5,&local_50);
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 != 0) {
    puVar8 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      lVar9 = 0;
      if (lVar6 != 0) {
        lVar9 = lVar6 + 0x70;
      }
      goto LAB_028003d4;
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar9 = 0;
      if ((long *)puVar8[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      }
      goto LAB_028003d4;
    }
  }
  lVar9 = 0;
LAB_028003d4:
  if ((*(long **)(&LAB_001b6eb0 + lVar9) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(&LAB_001b6eb0 + lVar9), puVar8 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar8)();
    uVar5 = uVar5 ^ 1;
  }
  uVar1 = iVar3 + iVar11 + iVar4;
  uVar2 = *(int *)(*(long *)(lVar9 + 0x1b6e98) + *(long *)(lVar9 + 0x1b6e90)) * 10;
  if ((((uVar5 & 1) == 0) && (*(long *)(&LAB_001b6eb0 + lVar9) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(&LAB_001b6eb0 + lVar9) + 8), puVar8 != (undefined8 *)0x0))
  {
    (**(code **)*puVar8)();
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar1 / uVar2;
  }
  uVar10 = uVar5;
  if (uVar2 <= uVar1) {
    do {
      uVar7 = FUN_027feee0(param_1,uVar5);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = uVar5 - 1;
      uVar10 = 0;
    } while (uVar5 != 0);
  }
  return uVar10;
}

