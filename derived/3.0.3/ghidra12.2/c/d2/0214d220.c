
void FUN_0214d220(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  
  lVar4 = 0;
  lVar8 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    lVar8 = *(long *)(param_1 + 8);
  }
  lVar1 = 0;
  if (lVar8 != 0) {
    lVar1 = lVar8 + -0x10;
  }
  bVar7 = *(byte *)(lVar1 + 2);
  *(byte *)(param_1 + 0x230) = bVar7;
  bVar5 = *(byte *)(lVar1 + 3);
  *(byte *)(param_1 + 0x231) = bVar5;
  if (1 < *(uint *)(param_1 + 0x10)) {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  lVar8 = *(long *)(param_1 + 0x78);
  pbVar9 = (byte *)0x0;
  if (lVar4 != 0) {
    pbVar9 = (byte *)(lVar4 + -0x10);
  }
  bVar6 = *pbVar9;
  *(byte *)(param_1 + 0x232) = bVar6;
  bVar3 = pbVar9[1];
  *(byte *)(param_1 + 0x233) = bVar3;
  if (lVar8 != param_1 + 0x70) {
    pbVar9 = (byte *)(lVar8 + -0x10);
    do {
      if (pbVar9[8] != 0) {
        bVar2 = *pbVar9;
        if ((bVar2 < bVar7) || ((bVar7 == bVar2 && (pbVar9[1] < bVar5)))) {
          *(byte *)(param_1 + 0x230) = bVar2;
          bVar5 = pbVar9[1];
          *(byte *)(param_1 + 0x231) = bVar5;
          bVar7 = bVar2;
        }
        bVar2 = pbVar9[2];
        if ((bVar6 < bVar2) || ((bVar6 == bVar2 && (bVar3 < pbVar9[3])))) {
          *(byte *)(param_1 + 0x232) = bVar2;
          bVar3 = pbVar9[3];
          *(byte *)(param_1 + 0x233) = bVar3;
          bVar6 = bVar2;
        }
      }
      lVar8 = *(long *)(lVar8 + 8);
      pbVar9 = (byte *)(lVar8 + -0x10);
    } while (pbVar9 != (byte *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x1e4) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1e4) == 0x22) {
    return;
  }
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x1e0);
  if (bVar2 < bVar7) {
    bVar7 = *(byte *)(param_1 + 0x1e1);
  }
  else if ((bVar7 != bVar2) || (bVar7 = *(byte *)(param_1 + 0x1e1), bVar5 <= bVar7))
  goto LAB_0214d374;
  *(byte *)(param_1 + 0x230) = bVar2;
  *(byte *)(param_1 + 0x231) = bVar7;
LAB_0214d374:
  bVar7 = *(byte *)(param_1 + 0x1e2);
  if (bVar6 < bVar7) {
    bVar5 = *(byte *)(param_1 + 0x1e3);
  }
  else {
    if (bVar6 != bVar7) {
      return;
    }
    bVar5 = *(byte *)(param_1 + 0x1e3);
    if (bVar5 <= bVar3) {
      return;
    }
  }
  *(byte *)(param_1 + 0x232) = bVar7;
  *(byte *)(param_1 + 0x233) = bVar5;
  return;
}

