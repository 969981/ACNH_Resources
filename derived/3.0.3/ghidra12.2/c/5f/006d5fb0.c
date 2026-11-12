
bool FUN_006d5fb0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    return false;
  }
  lVar10 = *(long *)(DAT_05ae6a60 + 0x88);
  nn::os::LockMutex((MutexType *)(lVar10 + 0x330));
  iVar4 = *(int *)(lVar10 + 0x128);
  puVar6 = *(uint **)(*(long *)(lVar10 + 0x110) + (long)iVar4 * 8);
  uVar3 = *puVar6;
  if (0 < (int)uVar3) {
    puVar7 = *(undefined8 **)(puVar6 + 2);
    lVar8 = (ulong)uVar3 << 3;
    do {
      if (*(int *)*puVar7 == iVar2) goto LAB_006d60ac;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar3 = iVar4 + 1U & 1;
  uVar1 = -uVar3;
  if (-2 < iVar4) {
    uVar1 = uVar3;
  }
  puVar6 = *(uint **)(*(long *)(lVar10 + 0x110) + (ulong)uVar1 * 8);
  uVar3 = *puVar6;
  if (0 < (int)uVar3) {
    puVar7 = *(undefined8 **)(puVar6 + 2);
    lVar8 = (ulong)uVar3 << 3;
    do {
      if (*(int *)*puVar7 == iVar2) goto LAB_006d60ac;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  if ((*(int *)(lVar10 + 0x140) < 1) || (lVar8 = *(long *)(lVar10 + 0x138), lVar8 == lVar10 + 0x130)
     ) {
    bVar9 = true;
  }
  else {
    do {
      bVar5 = *(int *)(lVar8 + -8) == iVar2;
      bVar9 = !bVar5;
      if (bVar5) break;
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 + -8 != lVar10 + 0x128);
  }
LAB_006d60b8:
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x330));
  return bVar9;
LAB_006d60ac:
  bVar9 = false;
  goto LAB_006d60b8;
}

