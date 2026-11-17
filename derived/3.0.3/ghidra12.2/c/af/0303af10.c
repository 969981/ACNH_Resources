
void FUN_0303af10(long param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  cVar2 = *(char *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  uVar6 = *(ulong *)(param_1 + 0x48);
  if (uVar6 == 0) {
LAB_0303b0c4:
    FUN_0303a970(param_1);
    return;
  }
  lVar5 = *(long *)(uVar6 + 8);
  while (lVar5 != 0) {
    *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar6;
    uVar6 = *(ulong *)(uVar6 + 8);
    lVar5 = *(long *)(uVar6 + 8);
  }
  if (cVar2 == '\0') {
    do {
      while( true ) {
        if (((*(char *)(uVar6 + 0x20) == '\0') && (*(long *)(uVar6 + 0x28) == lVar7)) &&
           (*(int *)(uVar6 + 0x30) == iVar1)) {
          bVar3 = *(int *)(uVar6 + 0x34) == param_2;
        }
        else {
          bVar3 = false;
        }
        FUN_0303a000(uVar6 + 0x38,bVar3);
        lVar5 = *(long *)(uVar6 + 0x10);
        if (lVar5 == 0) break;
        *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar6;
        uVar6 = *(ulong *)(uVar6 + 0x10);
        lVar5 = *(long *)(uVar6 + 8);
        while (lVar5 != 0) {
          *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar6;
          uVar6 = *(ulong *)(uVar6 + 8);
          lVar5 = *(long *)(uVar6 + 8);
        }
      }
      uVar4 = uVar6;
      do {
        uVar6 = *(ulong *)(uVar4 + 0x18) & 0xfffffffffffffffe;
        if (uVar6 == 0) goto LAB_0303b0c4;
        bVar3 = *(ulong *)(uVar6 + 8) != uVar4;
        uVar4 = uVar6;
      } while (bVar3);
    } while( true );
  }
  do {
    while( true ) {
      if ((*(char *)(uVar6 + 0x20) == '\0') || (*(int *)(uVar6 + 0x30) != iVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = *(int *)(uVar6 + 0x34) == param_2;
      }
      FUN_0303a000(uVar6 + 0x38,bVar3);
      lVar7 = *(long *)(uVar6 + 0x10);
      if (lVar7 == 0) break;
      *(ulong *)(lVar7 + 0x18) = *(ulong *)(lVar7 + 0x18) & 1 | uVar6;
      uVar6 = *(ulong *)(uVar6 + 0x10);
      lVar7 = *(long *)(uVar6 + 8);
      while (lVar7 != 0) {
        *(ulong *)(lVar7 + 0x18) = *(ulong *)(lVar7 + 0x18) & 1 | uVar6;
        uVar6 = *(ulong *)(uVar6 + 8);
        lVar7 = *(long *)(uVar6 + 8);
      }
    }
    uVar4 = uVar6;
    do {
      uVar6 = *(ulong *)(uVar4 + 0x18) & 0xfffffffffffffffe;
      if (uVar6 == 0) goto LAB_0303b0c4;
      bVar3 = *(ulong *)(uVar6 + 8) != uVar4;
      uVar4 = uVar6;
    } while (bVar3);
  } while( true );
}

