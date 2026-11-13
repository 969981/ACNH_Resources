
bool FUN_0122aaa0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 1) {
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = iVar4 + 1;
    }
    iVar3 = iVar5;
    if (iVar5 < 0) {
      iVar3 = iVar5 + 1;
    }
    if (iVar4 < -1) {
      return false;
    }
    uVar1 = iVar2 >> 1;
    if (0x8f < uVar1 || iVar5 < -1) {
      return false;
    }
    if ((uint)(iVar3 >> 1) < 0x80) {
      uVar7 = 1 << (ulong)(uVar1 & 7);
      uVar1 = uVar1 + (iVar3 >> 1) * 0x90 >> 3;
      bVar6 = (&DAT_0514da88)[uVar1];
      (&DAT_0514da88)[uVar1] = bVar6 & ((byte)uVar7 ^ 0xff);
      return (uVar7 & bVar6) == 0;
    }
    return false;
  }
  if (param_2 != 0) {
    return true;
  }
  if (DAT_05574040 == 0) {
LAB_0122ab98:
    lVar10 = 0;
  }
  else {
    puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar13 + 0x38))();
      lVar10 = 0;
      if (lVar9 != 0) {
        lVar10 = lVar9 + 0x70;
      }
    }
    else {
      if (puVar13 == (undefined8 *)0x0) goto LAB_0122ab98;
      lVar10 = 0;
      if ((long *)puVar13[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
      }
    }
  }
  lVar9 = *(long *)(lVar10 + 0x1c24e8);
  if (lVar9 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar12 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar10 + 0x1c24e8) == 0) goto LAB_0122ac10;
      plVar12 = *(long **)(*(long *)(lVar10 + 0x1c24e8) + 0x20);
    }
    if (plVar12 != (long *)0x0) {
      local_48 = *(long *)(lVar10 + 0x1c24c8);
      local_40 = *(undefined8 *)(lVar10 + 0x1c24d0);
      uStack_38 = 0x928;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_48);
    }
  }
LAB_0122ac10:
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  bVar8 = false;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 1;
  }
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = iVar5 + 1;
  }
  if ((((-2 < iVar4) && (uVar1 = iVar2 >> 1, uVar1 < 0x90)) && (-2 < iVar5)) &&
     ((uint)(iVar3 >> 1) < 0x80)) {
    uVar7 = 1 << (ulong)(uVar1 & 7);
    lVar9 = *(long *)(lVar10 + 0x1c24d0) + *(long *)(lVar10 + 0x1c24c8);
    uVar14 = (ulong)(uVar1 + (iVar3 >> 1) * 0x90 >> 3);
    bVar6 = *(byte *)(lVar9 + uVar14);
    bVar8 = (uVar7 & bVar6) == 0;
    *(byte *)(lVar9 + uVar14) = bVar6 & ((byte)uVar7 ^ 0xff);
  }
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x1c24e8) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x1c24e8) + 0x18), puVar13 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar13)();
  }
  return bVar8;
}

