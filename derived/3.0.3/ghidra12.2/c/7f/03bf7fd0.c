
bool FUN_03bf7fd0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  iVar3 = *(int *)(param_1 + 0x258b8);
  if (iVar3 == 0) {
    return false;
  }
  lVar9 = *(long *)(DAT_05ae6a60 + 0x88);
  nn::os::LockMutex((MutexType *)(lVar9 + 0x330));
  iVar4 = *(int *)(lVar9 + 0x128);
  puVar6 = *(uint **)(*(long *)(lVar9 + 0x110) + (long)iVar4 * 8);
  uVar2 = *puVar6;
  if (0 < (int)uVar2) {
    puVar7 = *(undefined8 **)(puVar6 + 2);
    lVar8 = (ulong)uVar2 << 3;
    do {
      if (*(int *)*puVar7 == iVar3) goto LAB_03bf80dc;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar2 = iVar4 + 1U & 1;
  uVar1 = -uVar2;
  if (-2 < iVar4) {
    uVar1 = uVar2;
  }
  puVar6 = *(uint **)(*(long *)(lVar9 + 0x110) + (ulong)uVar1 * 8);
  uVar2 = *puVar6;
  if (0 < (int)uVar2) {
    puVar7 = *(undefined8 **)(puVar6 + 2);
    lVar8 = (ulong)uVar2 << 3;
    do {
      if (*(int *)*puVar7 == iVar3) goto LAB_03bf80dc;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  if ((*(int *)(lVar9 + 0x140) < 1) || (lVar8 = *(long *)(lVar9 + 0x138), lVar8 == lVar9 + 0x130)) {
    bVar5 = false;
  }
  else {
    do {
      bVar5 = *(int *)(lVar8 + -8) == iVar3;
      if (bVar5) break;
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 + -8 != lVar9 + 0x128);
  }
LAB_03bf80e8:
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x330));
  return bVar5;
LAB_03bf80dc:
  bVar5 = true;
  goto LAB_03bf80e8;
}

