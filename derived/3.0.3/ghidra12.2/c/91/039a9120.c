
ushort FUN_039a9120(long param_1,long param_2,short *param_3,byte param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  short sVar13;
  
  uVar2 = *(ushort *)(param_1 + 0x284);
  if (uVar2 == 0) {
    return uVar2;
  }
  uVar7 = 0;
  lVar5 = *(long *)(param_1 + 0x28);
  while( true ) {
    uVar1 = uVar7;
    if (*(uint *)(param_1 + 0x20) <= uVar7) {
      uVar1 = 0;
    }
    plVar9 = (long *)(lVar5 + (ulong)uVar1 * 0x38);
    if (*plVar9 == param_2) break;
    uVar7 = uVar7 + 1;
    if (uVar2 == uVar7) {
      return 0;
    }
  }
  lVar3 = lVar5 + (ulong)uVar1 * 0x38;
  *(byte *)(lVar3 + 0x1e) = *(byte *)(lVar3 + 0x1e) & 0xfe | param_4 & 1;
  sVar13 = *param_3;
  if (((int)sVar13 == 0xffffffff) || (param_3[1] == -1)) {
LAB_039a9210:
    *(undefined4 *)(lVar5 + (ulong)uVar1 * 0x38 + 0x18) = *(undefined4 *)param_3;
    uVar2 = 1;
    goto LAB_039a9224;
  }
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar7 < (uint)(int)sVar13 || uVar7 == (int)sVar13) {
    plVar11 = (long *)0x0;
LAB_039a91d4:
    uVar8 = (uint)*(ushort *)(param_1 + 0x284);
    do {
      uVar12 = (uint)(short)plVar11[3];
      if (uVar12 == 0xffffffff || *(short *)((long)plVar11 + 0x1a) == -1) goto LAB_039a9210;
      if (uVar12 < uVar7) {
        plVar11 = *(long **)(*(long *)(param_1 + 0x38) + (long)(int)uVar12 * 8);
      }
      else {
        plVar11 = (long *)0x0;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  else {
    plVar11 = *(long **)(*(long *)(param_1 + 0x38) + (long)(int)sVar13 * 8);
    if (plVar9 != plVar11) goto LAB_039a91d4;
  }
  uVar2 = 0;
  *(undefined4 *)(lVar5 + (ulong)uVar1 * 0x38 + 0x18) = 0xffffffff;
LAB_039a9224:
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar10 != 0) {
    iVar6 = 0;
    iVar4 = 0;
    do {
      if (iVar10 != 0) {
        plVar11 = *(long **)(param_1 + 0x38);
        plVar9 = plVar11 + iVar10;
        do {
          lVar5 = *plVar11;
          sVar13 = *(short *)(lVar5 + 0x18);
          if (sVar13 == -1 || *(short *)(lVar5 + 0x1a) == -1) {
            iVar10 = 0;
          }
          else {
            iVar10 = 0;
            do {
              iVar10 = iVar10 + 1;
              lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)sVar13 * 8);
              sVar13 = *(short *)(lVar3 + 0x18);
            } while (sVar13 != -1 && *(short *)(lVar3 + 0x1a) != -1);
          }
          if ((iVar10 == iVar4) && (iVar6 < *(int *)(param_1 + 0x44))) {
            *(long *)(*(long *)(param_1 + 0x48) + (long)iVar6 * 8) = lVar5;
            iVar6 = *(int *)(param_1 + 0x40) + 1;
            *(int *)(param_1 + 0x40) = iVar6;
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar9);
        iVar10 = *(int *)(param_1 + 0x30);
      }
      iVar4 = iVar4 + 1;
    } while (iVar10 != iVar6);
  }
  return uVar2;
}

