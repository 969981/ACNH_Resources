
undefined8 FUN_021497d0(ushort *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar2 = *param_1;
    uVar6 = uVar1 - 1;
    if ((uint)uVar2 <= (uVar6 & 0xffff)) {
      iVar4 = *(int *)(param_1 + 6);
      uVar10 = (uint)uVar2;
      uVar7 = (uVar10 + iVar4) - 1;
      if ((uVar6 & 0xffff) <= (uVar7 & 0xffff)) {
        uVar5 = *(uint *)(param_2 + 0xc);
        lVar13 = (long)(int)uVar5 + -1;
        uVar3 = param_1[1];
        uVar12 = (uint)lVar13;
        if ((uint)uVar3 <= (uVar12 & 0xffff)) {
          uVar8 = ((uint)uVar3 + (uint)param_1[8]) - 1;
          if ((uVar12 & 0xffff) <= (uVar8 & 0xffff)) {
            lVar13 = (lVar13 - (ulong)uVar3) * (long)iVar4;
            if (((((*(char *)(lVar9 + (lVar13 + (int)(uVar6 - uVar10)) * 0x28 + 6) != '\x03') &&
                  ((uint)uVar3 <= (uVar5 & 0xffff))) && ((uVar5 & 0xffff) <= (uVar8 & 0xffff))) &&
                ((lVar11 = ((long)(int)uVar5 - (ulong)uVar3) * (long)iVar4,
                 *(char *)(lVar9 + (lVar11 + (int)(uVar6 - uVar10)) * 0x28 + 6) != '\x03' &&
                 (uVar10 <= (uVar1 & 0xffff))))) &&
               (((uVar1 & 0xffff) <= (uVar7 & 0xffff) &&
                ((*(char *)(lVar9 + (lVar13 + (int)(uVar1 - uVar2)) * 0x28 + 6) != '\x03' &&
                 (*(char *)(lVar9 + (lVar11 + (int)(uVar1 - uVar2)) * 0x28 + 6) != '\x03')))))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

