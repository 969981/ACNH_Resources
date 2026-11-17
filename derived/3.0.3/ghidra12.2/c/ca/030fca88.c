
void FUN_030fca88(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  lVar4 = *(long *)(param_1 + 8);
  if ((((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
      (*(int *)(param_2 + 0xc) == 0x1b)) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    if ((*(char *)(lVar4 + 0x1260) == '\0') && (lVar3 = *(long *)(lVar4 + 0x330), lVar3 != 0)) {
      lVar5 = 0x1258;
    }
    else if ((*(char *)(lVar4 + 0x12d8) == '\0') && (lVar3 = *(long *)(lVar4 + 0x338), lVar3 != 0))
    {
      lVar5 = 0x12d0;
    }
    else if ((*(char *)(lVar4 + 0x1350) == '\0') && (lVar3 = *(long *)(lVar4 + 0x340), lVar3 != 0))
    {
      lVar5 = 0x1348;
    }
    else if ((*(char *)(lVar4 + 0x13c8) == '\0') && (lVar3 = *(long *)(lVar4 + 0x348), lVar3 != 0))
    {
      lVar5 = 0x13c0;
    }
    else if ((*(char *)(lVar4 + 0x1440) == '\0') && (lVar3 = *(long *)(lVar4 + 0x350), lVar3 != 0))
    {
      lVar5 = 0x1438;
    }
    else if ((*(char *)(lVar4 + 0x14b8) == '\0') && (lVar3 = *(long *)(lVar4 + 0x358), lVar3 != 0))
    {
      lVar5 = 0x14b0;
    }
    else if ((*(char *)(lVar4 + 0x1530) == '\0') && (lVar3 = *(long *)(lVar4 + 0x360), lVar3 != 0))
    {
      lVar5 = 0x1528;
    }
    else if ((*(char *)(lVar4 + 0x15a8) == '\0') && (lVar3 = *(long *)(lVar4 + 0x368), lVar3 != 0))
    {
      lVar5 = 0x15a0;
    }
    else if ((*(char *)(lVar4 + 0x1620) == '\0') && (lVar3 = *(long *)(lVar4 + 0x370), lVar3 != 0))
    {
      lVar5 = 0x1618;
    }
    else {
      if (*(char *)(lVar4 + 0x1698) != '\0') {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x378);
      if (lVar3 == 0) {
        return;
      }
      lVar5 = 0x1690;
    }
    lVar4 = lVar4 + lVar5;
    iVar10 = *(int *)(param_2 + 0x18);
    iVar11 = *(int *)(param_2 + 0x1c);
    iVar2 = *(int *)(param_2 + 0x20);
    uVar1 = *(undefined2 *)(param_2 + 0x24);
    if (*(int *)(param_2 + 0xc) != 0x1b) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar3 + 0x230);
    lVar5 = 0x18;
    if (*(uint *)(lVar3 + 0x228) < 4) {
      lVar5 = 0;
    }
    uVar8 = puVar6[(ulong)(2 < *(uint *)(lVar3 + 0x228)) * 2];
    uVar9 = *(undefined8 *)((long)puVar6 + lVar5);
    uVar7 = *puVar6;
    *(byte *)(lVar4 + 0x60) = *(byte *)(param_2 + 8) >> 1 & 1;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(undefined2 *)(lVar4 + 0x58) = uVar1;
    *(long *)(lVar4 + 0x18) = lVar3;
    *(float *)(lVar4 + 0xc) = (float)iVar10 * 5.0 + 2.5;
    *(float *)(lVar4 + 0x14) = (float)iVar11 * 5.0 + 2.5;
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(undefined8 *)(lVar4 + 0x68) = uVar8;
    *(undefined8 *)(lVar4 + 0x70) = uVar9;
    *(int *)(lVar4 + 0x5c) = (int)(long)((float)iVar2 * 90.0 * 11930465.0);
    *(undefined1 *)(lVar4 + 8) = 1;
  }
  return;
}

