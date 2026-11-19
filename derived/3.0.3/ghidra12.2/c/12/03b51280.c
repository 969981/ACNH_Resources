
long FUN_03b51280(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 400);
  uVar2 = *(uint *)(lVar1 + 0x401f4);
  iVar3 = -uVar2;
  while( true ) {
    if (iVar3 + *(int *)(lVar1 + 0x401f0) < 1) {
      return 0;
    }
    uVar4 = (ulong)(*(int *)(lVar1 + 0x401e0) - 1U & uVar2);
    lVar5 = *(long *)(*(long *)(lVar1 + 0x401e8) + uVar4 * 8);
    if (lVar5 == 0) break;
    *(undefined8 *)(*(long *)(lVar1 + 0x401e8) + uVar4 * 8) = 0;
    uVar2 = uVar2 + 1;
    DataMemoryBarrier(2,3);
    iVar3 = iVar3 + -1;
    *(uint *)(lVar1 + 0x401f4) = uVar2;
    if (lVar5 != -1) {
      lVar1 = *(long *)(param_1 + 0x1b8);
      if (lVar1 != 0) {
        nn::os::LockMutex((MutexType *)(lVar1 + 0x30));
        if (*(int *)(lVar1 + 0x50) != 0) {
          puVar7 = *(undefined8 **)(lVar1 + 0x58);
          lVar8 = (long)*(int *)(lVar1 + 0x50) << 3;
          do {
            plVar6 = (long *)*puVar7;
            uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
            if (((uVar4 & 1) != 0) &&
               (uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6), (uVar4 & 1) != 0)) {
              (**(code **)(*plVar6 + 0x30))(plVar6,lVar5,*(undefined8 *)(lVar1 + 8));
            }
            puVar7 = puVar7 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        nn::os::UnlockMutex((MutexType *)(lVar1 + 0x30));
      }
      return lVar5;
    }
  }
  return 0;
}

