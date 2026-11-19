
void FUN_03a9ae70(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x2b0);
  if ((((lVar3 != 0) && (*(char *)(lVar3 + 0x3c0) != '\0')) &&
      (bVar2 = *(byte *)(param_2 + 8), (*(uint *)(lVar3 + 8) >> (ulong)(bVar2 & 0x1f) & 1) != 0)) &&
     ((iVar1 = *(int *)(lVar3 + 0x3d0), iVar1 != 0 && (0 < *(int *)(lVar3 + 0x3e0))))) {
    lVar4 = *(long *)(lVar3 + 0x3d8);
    iVar5 = 0;
    do {
      FUN_03aa45f0(lVar3,(uint)bVar2,lVar4 + (long)iVar5 * 0x50);
      iVar5 = iVar5 + 1;
      if (iVar1 == iVar5) {
        return;
      }
    } while (iVar5 < *(int *)(lVar3 + 0x3e0));
  }
  return;
}

