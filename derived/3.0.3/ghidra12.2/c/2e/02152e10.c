
undefined8 FUN_02152e10(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  cVar4 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  bVar3 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
  uVar1 = (int)cVar4 + 0x18;
  if (4 < cVar4) {
    uVar1 = (int)cVar4;
  }
  if (((*(int *)(param_1 + 0x1e4) == 0) || (*(int *)(param_1 + 0x1e4) == 0x22)) ||
     (((uint)*(byte *)(param_1 + 0x1e2) <= (uVar1 & 0xff) &&
      ((uint)*(byte *)(param_1 + 0x1e2) != (uVar1 & 0xff) || *(byte *)(param_1 + 0x1e3) <= bVar3))))
  {
    lVar5 = *(long *)(param_1 + 0x78);
    if (lVar5 != param_1 + 0x70) {
      lVar6 = lVar5 + -0x10;
      do {
        if ((*(int *)(lVar6 + 4) != 0) && (*(int *)(lVar6 + 4) != 0x22)) {
          if ((uVar1 & 0xff) < (uint)*(byte *)(lVar6 + 2)) {
            return 1;
          }
          if (((uint)*(byte *)(lVar6 + 2) == (uVar1 & 0xff)) && (bVar3 < *(byte *)(lVar6 + 3))) {
            return 1;
          }
        }
        lVar5 = *(long *)(lVar5 + 8);
        lVar6 = lVar5 + -0x10;
      } while (lVar6 != param_1 + 0x60);
    }
    if (((*(long *)(param_1 + 0x1f0) == 0) ||
        (iVar2 = *(int *)(*(long *)(param_1 + 0x1f0) + 4), iVar2 == 0)) || (iVar2 == 0x22)) {
      return 0;
    }
  }
  return 1;
}

