
void FUN_0126ec30(undefined4 *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x2a);
  *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xfffffffd;
  if (*(void **)(lVar8 + 0x60) != (void *)0x0) {
    iVar4 = *(int *)(lVar8 + 0x68);
    iVar5 = iVar4 + 0x1e;
    if (0 < iVar4) {
      iVar5 = iVar4 + -1;
    }
    uVar1 = (iVar5 >> 5) + 1;
    memset(*(void **)(lVar8 + 0x60),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  iVar5 = *(int *)(lVar8 + 0x1c);
  if (0 < iVar5) {
    iVar4 = *(int *)(lVar8 + 0x18);
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        if (0 < iVar4) {
          iVar6 = *(int *)(lVar8 + 0x6c);
          iVar5 = 0;
          do {
            uVar1 = iVar5 + iVar3 * iVar4;
            *(int *)(lVar8 + 0x6c) = iVar6 + 1;
            if (((-1 < (int)uVar1) && (lVar7 = *(long *)(lVar8 + 0x60), lVar7 != 0)) &&
               ((int)uVar1 < *(int *)(lVar8 + 0x68))) {
              lVar2 = (ulong)(uVar1 >> 5) * 4;
              *(uint *)(lVar7 + lVar2) = *(uint *)(lVar7 + lVar2) | 1 << (ulong)(uVar1 & 0x1f);
              iVar6 = *(int *)(lVar8 + 0x6c) + -1;
              iVar4 = *(int *)(lVar8 + 0x18);
            }
            iVar5 = iVar5 + 1;
            *(int *)(lVar8 + 0x6c) = iVar6;
          } while (iVar5 < iVar4);
          iVar5 = *(int *)(lVar8 + 0x1c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
  }
  lVar8 = *(long *)(param_1 + 0x2a);
  if ((*(byte *)(lVar8 + 8) & 1) != 0) {
    iVar5 = *(int *)(lVar8 + 0x1c);
    if ((0 < iVar5) && (iVar4 = *(int *)(lVar8 + 0x18), 0 < iVar4)) {
      iVar3 = 0;
      do {
        if (0 < iVar4) {
          iVar5 = 0;
          do {
            if ((*(byte *)(lVar8 + 8) & 1) != 0) {
              FUN_0138367c(lVar8 + 0x28,iVar5,iVar3);
              iVar4 = *(int *)(lVar8 + 0x18);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
          iVar5 = *(int *)(lVar8 + 0x1c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
  }
  *param_1 = 1;
  return;
}

