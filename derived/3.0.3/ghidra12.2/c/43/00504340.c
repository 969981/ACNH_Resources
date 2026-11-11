
void FUN_00504340(long param_1,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long local_88;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  iVar3 = FUN_004d7d20();
  FUN_004db820(param_2,iVar3 << 2);
  if (0 < iVar3) {
    iVar5 = 0;
    iVar12 = 3;
    do {
      lVar9 = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x24) * (long)iVar5;
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 == 0) {
        uVar4 = 0;
LAB_00504430:
        bVar2 = true;
        local_88 = lVar9;
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_68 = *(undefined4 *)(param_1 + 0x30);
        local_78 = uVar4;
      }
      else {
        uVar4 = FUN_00428370(lVar7);
        if ((uVar4 & 1) == 0) goto LAB_00504430;
        uVar8 = uVar4 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar8);
        FUN_0043dd30(uVar8);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x30);
        local_88 = lVar9;
        local_80 = lVar7;
        local_78 = uVar4;
        FUN_0043dd30(uVar8);
        bVar2 = false;
        lVar7 = local_80;
        local_70 = uVar6;
        local_68 = uVar1;
      }
      local_80 = lVar7;
      if (((local_88 != 0) && (uVar8 = FUN_00428440(lVar7), lVar7 != 0)) && ((uVar8 & 0x1f) == 7)) {
        FUN_004d6770(&local_88);
      }
      if (!bVar2) {
        FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
        FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_004e4ec0(&local_88);
      if ((local_78 & 1) != 0) {
        FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      }
      lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * (long)(iVar12 + -3);
      lVar7 = *(long *)(param_2 + 0x28);
      uVar11 = (uint)uVar4;
      if (lVar7 == 0) {
        uVar8 = 0;
LAB_00504520:
        bVar2 = true;
        local_88 = lVar9;
        local_70 = *(undefined8 *)(param_2 + 0x10);
        local_68 = *(undefined4 *)(param_2 + 0x30);
        local_78 = uVar8;
      }
      else {
        uVar8 = FUN_00428370(lVar7);
        if ((uVar8 & 1) == 0) goto LAB_00504520;
        uVar10 = uVar8 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar10);
        FUN_0043dd30(uVar10);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x30);
        local_88 = lVar9;
        local_80 = lVar7;
        local_78 = uVar8;
        FUN_0043dd30(uVar10);
        bVar2 = false;
        lVar7 = local_80;
        local_70 = uVar6;
        local_68 = uVar1;
      }
      local_80 = lVar7;
      if (((local_88 != 0) && (uVar10 = FUN_00428440(lVar7), lVar7 != 0)) && ((uVar10 & 0x1f) == 7))
      {
        FUN_004d6770(&local_88);
      }
      if (!bVar2) {
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
      }
      FUN_004d7060(&local_88,uVar11 & 0xff);
      if ((local_78 & 1) != 0) {
        FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      }
      lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * (long)(iVar12 + -2);
      lVar7 = *(long *)(param_2 + 0x28);
      if (lVar7 == 0) {
        uVar8 = 0;
LAB_00504614:
        bVar2 = true;
        local_88 = lVar9;
        local_70 = *(undefined8 *)(param_2 + 0x10);
        local_68 = *(undefined4 *)(param_2 + 0x30);
        local_78 = uVar8;
      }
      else {
        uVar8 = FUN_00428370(lVar7);
        if ((uVar8 & 1) == 0) goto LAB_00504614;
        uVar10 = uVar8 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar10);
        FUN_0043dd30(uVar10);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x30);
        local_88 = lVar9;
        local_80 = lVar7;
        local_78 = uVar8;
        FUN_0043dd30(uVar10);
        bVar2 = false;
        lVar7 = local_80;
        local_70 = uVar6;
        local_68 = uVar1;
      }
      local_80 = lVar7;
      if (((local_88 != 0) && (uVar10 = FUN_00428440(lVar7), lVar7 != 0)) && ((uVar10 & 0x1f) == 7))
      {
        FUN_004d6770(&local_88);
      }
      if (!bVar2) {
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
      }
      FUN_004d7060(&local_88,uVar11 >> 8 & 0xff);
      if ((local_78 & 1) != 0) {
        FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      }
      lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * (long)(iVar12 + -1);
      lVar7 = *(long *)(param_2 + 0x28);
      if (lVar7 == 0) {
        uVar8 = 0;
LAB_00504708:
        bVar2 = true;
        local_88 = lVar9;
        local_70 = *(undefined8 *)(param_2 + 0x10);
        local_68 = *(undefined4 *)(param_2 + 0x30);
        local_78 = uVar8;
      }
      else {
        uVar8 = FUN_00428370(lVar7);
        if ((uVar8 & 1) == 0) goto LAB_00504708;
        uVar10 = uVar8 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar10);
        FUN_0043dd30(uVar10);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x30);
        local_88 = lVar9;
        local_80 = lVar7;
        local_78 = uVar8;
        FUN_0043dd30(uVar10);
        bVar2 = false;
        lVar7 = local_80;
        local_70 = uVar6;
        local_68 = uVar1;
      }
      local_80 = lVar7;
      if (((local_88 != 0) && (uVar10 = FUN_00428440(lVar7), lVar7 != 0)) && ((uVar10 & 0x1f) == 7))
      {
        FUN_004d6770(&local_88);
      }
      if (!bVar2) {
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
      }
      FUN_004d7060(&local_88,uVar11 >> 0x10 & 0xff);
      if ((local_78 & 1) != 0) {
        FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      }
      lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * (long)iVar12;
      lVar7 = *(long *)(param_2 + 0x28);
      if (lVar7 == 0) {
        uVar8 = 0;
LAB_00504800:
        bVar2 = true;
        local_88 = lVar9;
        local_70 = *(undefined8 *)(param_2 + 0x10);
        local_68 = *(undefined4 *)(param_2 + 0x30);
        local_78 = uVar8;
      }
      else {
        uVar8 = FUN_00428370(lVar7);
        if ((uVar8 & 1) == 0) goto LAB_00504800;
        uVar10 = uVar8 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar10);
        FUN_0043dd30(uVar10);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x30);
        local_88 = lVar9;
        local_80 = lVar7;
        local_78 = uVar8;
        FUN_0043dd30(uVar10);
        bVar2 = false;
        lVar7 = local_80;
        local_70 = uVar6;
        local_68 = uVar1;
      }
      local_80 = lVar7;
      if (((local_88 != 0) && (uVar10 = FUN_00428440(lVar7), lVar7 != 0)) && ((uVar10 & 0x1f) == 7))
      {
        FUN_004d6770(&local_88);
      }
      if (!bVar2) {
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
      }
      FUN_004d7060(&local_88,(uVar4 & 0xffffffff) >> 0x18);
      if ((local_78 & 1) != 0) {
        FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      }
      iVar5 = iVar5 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar3 != iVar5);
  }
  return;
}

