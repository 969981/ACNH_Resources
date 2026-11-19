
void FUN_0389fef0(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  puVar4 = PTR_DAT_04bcb7d8;
  pMVar1 = (MutexType *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x68);
  nn::os::LockMutex(pMVar1);
  plVar13 = *(long **)(*(long *)puVar4 + 0x68);
  iVar3 = *(int *)(plVar13[0x1f] + 0x28);
  if (iVar3 == 0) {
    uVar17 = 0;
  }
  else {
    lVar9 = *(long *)(plVar13[0x1f] + 0x30);
    uVar17 = 0;
    lVar10 = (long)iVar3 << 3;
    do {
      uVar14 = (uint)uVar17;
      lVar12 = *(long *)(lVar9 + uVar17 * 8);
      if (*(uint *)(param_1 + 0x100) <= uVar14) {
        uVar14 = 0;
      }
      uVar17 = uVar17 + 1;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x108) + (ulong)uVar14 * 0x20);
      uVar11 = *(undefined8 *)(lVar12 + 0x10);
      iVar3 = *(int *)(lVar12 + 8);
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(lVar12 + 0x20);
      *puVar2 = uVar11;
      puVar2[2] = uVar11;
      lVar10 = lVar10 + -8;
      *(bool *)(puVar2 + 3) = iVar3 == 3;
    } while (lVar10 != 0);
    plVar13 = *(long **)(*(long *)puVar4 + 0x68);
  }
  cVar5 = (**(code **)(*plVar13 + 0x1a0))(plVar13);
  if (cVar5 != -1) {
    uVar15 = (uint)uVar17;
    uVar14 = uVar15 + 1;
    if (*(uint *)(param_1 + 0x100) <= uVar15) {
      uVar15 = 0;
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x108) + (ulong)uVar15 * 0x20);
    uVar11 = (**(code **)(*plVar13 + 0x198))(plVar13);
    uVar6 = (**(code **)(*plVar13 + 0x1a8))(plVar13);
    uVar8 = (**(code **)(*plVar13 + 0x230))(plVar13);
    uVar7 = (**(code **)(*plVar13 + 0x1a0))(plVar13);
    *puVar2 = uVar11;
    uVar17 = (ulong)uVar14;
    *(undefined1 *)(puVar2 + 1) = uVar6;
    *(undefined1 *)((long)puVar2 + 9) = uVar7;
    puVar2[2] = uVar8;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  uVar14 = *(uint *)(param_1 + 0x100);
  if ((int)uVar17 < (int)uVar14) {
    do {
      uVar16 = (uint)uVar17;
      uVar15 = uVar16;
      if (uVar14 <= uVar16) {
        uVar15 = 0;
      }
      uVar17 = (ulong)(uVar16 + 1);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x108) + (long)(int)uVar15 * 0x20);
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 0xffff;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      uVar14 = *(uint *)(param_1 + 0x100);
    } while ((int)(uVar16 + 1) < (int)uVar14);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

