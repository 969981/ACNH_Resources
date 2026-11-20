
void FUN_03fc1b3c(long param_1,undefined1 param_2)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  
  pbVar2 = (byte *)(param_1 + 0x41f78);
  lVar3 = param_1 + 0x41cd8;
  bVar9 = *pbVar2;
  *(undefined1 *)(lVar3 + (ulong)bVar9 + 0x2a8) = param_2;
  if ((ulong)bVar9 == 0) {
    bVar9 = 1;
    goto LAB_03fc1cf0;
  }
  cVar6 = *(char *)(param_1 + 0x41f80);
  puVar4 = (undefined1 *)(param_1 + 0x44136);
  uVar7 = *(ushort *)(param_1 + 0x41f7a);
  uVar10 = (ulong)uVar7;
  if (uVar7 < 0x200) {
    if (cVar6 == *(char *)(lVar3 + uVar10)) {
      cVar6 = *(char *)(param_1 + 0x41f81);
      pcVar12 = (char *)(uVar10 + lVar3 + 1);
      if (cVar6 == *pcVar12) goto LAB_03fc1cac;
LAB_03fc1c94:
      *pcVar12 = cVar6;
    }
    else {
      *(char *)(lVar3 + uVar10) = cVar6;
      cVar6 = *(char *)(param_1 + 0x41f81);
      pcVar12 = (char *)((ulong)*(ushort *)(param_1 + 0x41f7a) + lVar3 + 1);
      if (cVar6 != *pcVar12) goto LAB_03fc1c94;
    }
    *puVar4 = 1;
    FUN_03fc161c(param_1,uVar7 >> 2);
  }
  else {
    uVar11 = uVar10 & 0x1f | 0x200;
    if (cVar6 != *(char *)(lVar3 + uVar11)) {
      iVar8 = (int)uVar11 * 4;
      *(char *)(lVar3 + uVar11) = cVar6;
      if (iVar8 - 0x800U < iVar8 - 0x7fcU) {
        FUN_03fc161c(param_1);
        FUN_03fc161c(param_1,iVar8 + -0x7ff);
        FUN_03fc161c(param_1,iVar8 + -0x7fe);
        FUN_03fc161c(param_1,iVar8 + -0x7fd);
      }
      *puVar4 = 1;
    }
    lVar5 = (uVar10 & 0x1f) + 0x201;
    if (*(char *)(param_1 + 0x41f81) != *(char *)(lVar3 + lVar5)) {
      *(char *)(lVar3 + lVar5) = *(char *)(param_1 + 0x41f81);
      iVar8 = (int)(uVar10 & 0x1f) * 4;
      FUN_03fc161c(param_1,iVar8 + 4);
      FUN_03fc161c(param_1,iVar8 + 5);
      FUN_03fc161c(param_1,iVar8 + 6);
      FUN_03fc161c(param_1,iVar8 + 7);
      *puVar4 = 1;
    }
  }
LAB_03fc1cac:
  uVar1 = *(ushort *)(param_1 + 0x41f7a) + 2;
  uVar7 = (ushort)uVar1 & 0x3fe;
  *(ushort *)(param_1 + 0x41f7a) = uVar7;
  *(ushort *)(param_1 + 0x41f7c) = uVar7 & (((ushort)(uVar1 >> 9) & 1) * 0x1e0 ^ 0xffff);
  *(byte *)(param_1 + 0x41f95) = *(char *)(param_1 + 0x41f94) * (char)(uVar1 >> 2) & 0x7f;
  bVar9 = (*pbVar2 ^ 0xff) & 1;
LAB_03fc1cf0:
  *pbVar2 = bVar9;
  return;
}

