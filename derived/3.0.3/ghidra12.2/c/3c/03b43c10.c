
void FUN_03b43c10(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  
  plVar5 = *(long **)(param_1 + 0x1e0);
  if ((plVar5 != (long *)0x0) && ((*(char *)(param_1 + 0x1a5) != '\0' || ((param_2 & 1) != 0)))) {
    bVar4 = *(short *)(param_1 + 0xea) != 0;
    uVar6 = (**(code **)(*plVar5 + 0x28))
                      (plVar5,(bVar4 && *(char *)(param_1 + 0xec) != '\0') &&
                              (!bVar4 || *(char *)(param_1 + 0xec) != '\x01'));
    if ((uVar6 & 1) == 0) {
      if ((*(int *)(param_1 + 0xc) < 6) || (7 < *(int *)(param_1 + 0xc))) {
        bVar3 = *(byte *)(param_1 + 0x16);
        bVar1 = bVar3 & 0xfe;
        *(byte *)(param_1 + 0x16) = bVar1;
        if ((bVar3 != 0) && (bVar1 == 0)) {
          lVar7 = *(long *)(param_1 + 0x120);
          nn::os::LockMutex((MutexType *)(lVar7 + 0x48));
          if (*(int *)(lVar7 + 0x10) == 3) {
            if (*(int *)(lVar7 + 0x14) == 2) {
              *(undefined4 *)(lVar7 + 0x24) = 0;
            }
            *(undefined4 *)(lVar7 + 0x10) = 4;
          }
          nn::os::UnlockMutex((MutexType *)(lVar7 + 0x48));
        }
      }
    }
    else {
      FUN_03b43dac(param_1,0);
    }
    lVar7 = *(long *)(param_1 + 0x1e8);
    if (lVar7 != 0) {
      uVar10 = *(uint *)(lVar7 + 0x20);
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined8 *)(lVar7 + 0xc) = 0x7f7fffff;
      *(undefined8 *)(lVar7 + 0x14) = 0x7f7fffff;
      if (0 < (int)uVar10) {
        uVar8 = 0;
        do {
          uVar2 = uVar8;
          if (uVar10 <= uVar8) {
            uVar2 = 0;
          }
          uVar8 = uVar8 + 1;
          puVar11 = (undefined4 *)(*(long *)(lVar7 + 0x28) + (ulong)uVar2 * 0x1c);
          *puVar11 = 0xffffffff;
          *(undefined8 *)(puVar11 + 1) = 0;
          *(undefined8 *)(puVar11 + 3) = 0;
          *(undefined8 *)(puVar11 + 5) = 0;
          uVar10 = *(uint *)(lVar7 + 0x20);
        } while ((int)uVar8 < (int)uVar10);
      }
      lVar7 = *(long *)(param_1 + 0x1e0);
      lVar9 = *(long *)(lVar7 + 0x88);
      if (lVar9 != 0 && 0 < *(int *)(lVar7 + 0x80)) {
        lVar13 = 0;
        iVar12 = 0;
        do {
          if (*(char *)(lVar9 + lVar13) != '\0') {
            FUN_03bc3b6c(*(undefined8 *)(param_1 + 0x1e8),iVar12);
            lVar7 = *(long *)(param_1 + 0x1e0);
          }
          lVar9 = *(long *)(lVar7 + 0x88);
          if (lVar9 == 0) {
            return;
          }
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + 0x98;
        } while (iVar12 < *(int *)(lVar7 + 0x80));
      }
    }
  }
  return;
}

