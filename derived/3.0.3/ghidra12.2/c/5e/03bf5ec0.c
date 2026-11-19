
long FUN_03bf5ec0(long param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  char *__s2;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = plVar1 + *(uint *)(param_1 + 0x10);
  if (1 < *(uint *)(param_1 + 0x10)) {
    plVar3 = plVar1;
  }
  if ((*plVar3 != 0) && (DataMemoryBarrier(2,1), *(char *)(*plVar3 + 0xb0) != '\0')) {
    DataMemoryBarrier(2,1);
    plVar3 = plVar1 + *(uint *)(param_1 + 0x10);
    if (1 < *(uint *)(param_1 + 0x10)) {
      plVar3 = plVar1;
    }
    lVar5 = *plVar3;
    iVar10 = *(int *)(*(long *)(lVar5 + 8) + 8);
    if (((iVar10 != 0) && (iVar8 = iVar10 + -1, 0 < iVar10)) &&
       (lVar9 = *(long *)(lVar5 + 0x28), lVar9 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x20);
      iVar10 = 0;
      uVar11 = *(ulong *)PTR_DAT_04bb38c0;
      uVar12 = *(ulong *)PTR_DAT_04bb38c8;
      do {
        iVar2 = iVar8 + iVar10;
        if (iVar2 < 0 != SCARRY4(iVar8,iVar10)) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        uVar13 = (ulong)*(ushort *)(lVar5 + (long)iVar2 * 2);
        uVar6 = (ulong)*(uint *)(lVar9 + uVar13 * 0x20);
        pcVar7 = (char *)(uVar12 | uVar6);
        __s2 = pcVar7 + 0x100000000;
        if (uVar11 <= uVar6) {
          __s2 = pcVar7;
        }
        iVar4 = strcmp(param_2,__s2);
        if (iVar4 == 0) {
          return lVar9 + uVar13 * 0x20;
        }
        if (iVar4 < 1) {
          iVar8 = iVar2 + -1;
        }
        else {
          iVar10 = iVar2 + 1;
        }
      } while (iVar10 <= iVar8);
    }
  }
  return 0;
}

