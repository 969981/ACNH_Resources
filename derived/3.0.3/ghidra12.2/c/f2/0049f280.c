
undefined8 FUN_0049f280(long param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  ulong uVar12;
  
  pbVar11 = *(byte **)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x40);
  lVar9 = (long)*(int *)(param_1 + 0x48);
  lVar2 = param_1 + 0x18;
  if ((byte *)(lVar6 + lVar9) <= pbVar11) {
    FUN_0049e150(lVar2,0x100);
    pbVar11 = *(byte **)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x40);
    lVar9 = (long)*(int *)(param_1 + 0x48);
    if ((byte *)(lVar6 + lVar9) <= pbVar11) {
      return 5;
    }
  }
  pbVar5 = pbVar11 + 1;
  *(byte **)(param_1 + 0x38) = pbVar5;
  uVar12 = (ulong)*pbVar11;
  if (0x3c < *pbVar11) {
LAB_0049f424:
    if ((byte *)(lVar6 + *(int *)(param_1 + 0x34)) < pbVar5) {
      *(byte **)(param_1 + 0x38) = pbVar11;
      pbVar5 = pbVar11;
    }
    do {
      do {
        pbVar11 = pbVar5;
        if ((byte *)(lVar6 + (int)lVar9) <= pbVar5) {
          FUN_0049e150(lVar2,0x100);
          pbVar11 = *(byte **)(param_1 + 0x38);
          lVar6 = *(long *)(param_1 + 0x40);
          lVar9 = (long)*(int *)(param_1 + 0x48);
          if ((byte *)(lVar6 + lVar9) <= pbVar11) {
            return 2;
          }
        }
        pbVar5 = pbVar11 + 1;
        *(byte **)(param_1 + 0x38) = pbVar5;
        uVar12 = (ulong)*pbVar11;
      } while (0x3c < *pbVar11);
      if ((1L << (uVar12 & 0x3f) & 0x100002600U) != 0) {
        if (pbVar5 <= (byte *)(lVar6 + *(int *)(param_1 + 0x34))) {
          return 2;
        }
        goto LAB_0049f4d8;
      }
      if (uVar12 == 0) {
        return 2;
      }
    } while (uVar12 != 0x3c);
    if (pbVar5 <= (byte *)(lVar6 + *(int *)(param_1 + 0x34))) {
      return 2;
    }
LAB_0049f4d8:
    *(byte **)(param_1 + 0x38) = pbVar11;
    return 2;
  }
  if ((1L << (uVar12 & 0x3f) & 0x100002600U) != 0) {
LAB_0049f308:
    bVar3 = *pbVar5;
    if (bVar3 == 0) {
      FUN_0049e150(lVar2,0x100);
      pbVar5 = *(byte **)(param_1 + 0x38);
      bVar3 = *pbVar5;
    }
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      return 3;
    }
    if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar5)
    goto code_r0x0049f34c;
    goto LAB_0049f300;
  }
  if (uVar12 == 0) {
    return 5;
  }
  if (uVar12 != 0x3c) goto LAB_0049f424;
  bVar3 = *pbVar5;
  if (bVar3 == 0) {
    FUN_0049e150(lVar2,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    bVar3 = *pbVar5;
  }
  if (bVar3 != 0x3f) {
    cVar4 = FUN_0049e340(lVar2,&DAT_04065ad8);
    if (cVar4 == '\0') {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
      return 0;
    }
    pcVar7 = *(char **)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x40);
    uVar12 = (ulong)*(uint *)(param_1 + 0x48);
    iVar1 = 0;
    while( true ) {
      iVar10 = iVar1;
      pcVar8 = pcVar7;
      if ((char *)(lVar6 + (int)uVar12) <= pcVar7) {
        FUN_0049e150(lVar2,0x100);
        pcVar8 = *(char **)(param_1 + 0x38);
        lVar6 = *(long *)(param_1 + 0x40);
        uVar12 = (ulong)*(int *)(param_1 + 0x48);
        if ((char *)(lVar6 + uVar12) <= pcVar8) {
          return 0xc;
        }
      }
      pcVar7 = pcVar8 + 1;
      *(char **)(param_1 + 0x38) = pcVar7;
      if (*pcVar8 == '\0') break;
      iVar1 = 0;
      if (((&DAT_0409a4c2)[iVar10] == *pcVar8) && (iVar1 = iVar10 + 1, iVar1 == 3)) {
        return 4;
      }
    }
    return 0xc;
  }
  if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar5) {
    FUN_0049e150(lVar2,0x100);
    pbVar5 = *(byte **)(param_1 + 0x38);
    if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar5)
    goto LAB_0049f3dc;
  }
  *(byte **)(param_1 + 0x38) = pbVar5 + 1;
LAB_0049f3dc:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 3;
  return 1;
code_r0x0049f34c:
  FUN_0049e150(lVar2,0x100);
  pbVar5 = *(byte **)(param_1 + 0x38);
  if (pbVar5 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_0049f300:
    pbVar5 = pbVar5 + 1;
    *(byte **)(param_1 + 0x38) = pbVar5;
  }
  goto LAB_0049f308;
}

