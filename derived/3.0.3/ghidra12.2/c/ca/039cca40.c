
void FUN_039cca40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  puVar4 = PTR_DAT_04bb3490;
  puVar3 = PTR_DAT_04bb3488;
  if (*(long *)(param_1 + 0x160) != param_1 + 0x158) {
    lVar11 = (long)*(int *)(param_1 + 0x16c);
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    lVar12 = *(long *)(param_1 + 0x160) - lVar11;
    do {
      if (*(short *)(lVar12 + 0x284) != 0) {
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          if (*(uint *)(lVar12 + 0x20) <= uVar9) {
            uVar5 = 0;
          }
          plVar10 = *(long **)(*(long *)(lVar12 + 0x28) + (ulong)uVar5 * 0x38);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar10 != (long *)0x0) &&
             (uVar7 = (**(code **)*plVar10)(plVar10,puVar3), (uVar7 & 1) != 0)) {
            *(byte *)((long)plVar10 + 0x2e1) =
                 *(byte *)((long)plVar10 + 0x2e1) & 0xf0 |
                 (byte)(-1 << (ulong)(*(byte *)((long)plVar10 + 0x2e2) & 0x1f)) ^ 0xff;
            uVar5 = (**(code **)(*plVar10 + 0x1e0))(plVar10);
            if (0 < (int)uVar5) {
              if (uVar5 < 4) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                do {
                  *(byte *)(plVar10[0x2e] + uVar7) =
                       ~(byte)(-1 << (ulong)(*(byte *)((long)plVar10 + 0x2e2) & 0x1f));
                  *(byte *)(plVar10[0x2e] + uVar7 + 1) =
                       ~(byte)(-1 << (ulong)(*(byte *)((long)plVar10 + 0x2e2) & 0x1f));
                  *(byte *)(plVar10[0x2e] + uVar7 + 2) =
                       ~(byte)(-1 << (ulong)(*(byte *)((long)plVar10 + 0x2e2) & 0x1f));
                  lVar2 = plVar10[0x2e] + uVar7;
                  uVar7 = uVar7 + 4;
                  *(byte *)(lVar2 + 3) =
                       ~(byte)(-1 << (ulong)(*(byte *)((long)plVar10 + 0x2e2) & 0x1f));
                } while (((ulong)uVar5 & 0xfffffffc) != uVar7);
              }
              uVar8 = (ulong)uVar5 & 3;
              if ((uVar5 & 3) != 0) {
                do {
                  uVar8 = uVar8 - 1;
                  *(byte *)(plVar10[0x2e] + uVar7) =
                       ~(byte)(-1 << (ulong)(*(byte *)((long)plVar10 + 0x2e2) & 0x1f));
                  uVar7 = uVar7 + 1;
                } while (uVar8 != 0);
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar12 + 0x284));
      }
      lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
    } while (lVar12 != (param_1 + 0x158) - lVar11);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  return;
}

