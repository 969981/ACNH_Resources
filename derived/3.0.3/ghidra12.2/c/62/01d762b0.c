
bool FUN_01d762b0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0) {
    return false;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
  nn::os::LockMutex((MutexType *)(lVar8 + 0x330));
  iVar3 = *(int *)(lVar8 + 0x128);
  puVar5 = *(uint **)(*(long *)(lVar8 + 0x110) + (long)iVar3 * 8);
  uVar2 = *puVar5;
  if (0 < (int)uVar2) {
    puVar6 = *(undefined8 **)(puVar5 + 2);
    lVar7 = (ulong)uVar2 << 3;
    do {
      if (*(int *)*puVar6 == param_2) goto LAB_01d763ac;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar2 = iVar3 + 1U & 1;
  uVar1 = -uVar2;
  if (-2 < iVar3) {
    uVar1 = uVar2;
  }
  puVar5 = *(uint **)(*(long *)(lVar8 + 0x110) + (ulong)uVar1 * 8);
  uVar2 = *puVar5;
  if (0 < (int)uVar2) {
    puVar6 = *(undefined8 **)(puVar5 + 2);
    lVar7 = (ulong)uVar2 << 3;
    do {
      if (*(int *)*puVar6 == param_2) goto LAB_01d763ac;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if ((*(int *)(lVar8 + 0x140) < 1) || (lVar7 = *(long *)(lVar8 + 0x138), lVar7 == lVar8 + 0x130)) {
    bVar4 = false;
  }
  else {
    do {
      bVar4 = *(int *)(lVar7 + -8) == param_2;
      if (bVar4) break;
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 + -8 != lVar8 + 0x128);
  }
LAB_01d763b8:
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x330));
  return bVar4;
LAB_01d763ac:
  bVar4 = true;
  goto LAB_01d763b8;
}

