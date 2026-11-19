
void FUN_039ccc60(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  if (*(long *)(param_1 + 0x160) != param_1 + 0x158) {
    lVar4 = (long)*(int *)(param_1 + 0x16c);
    lVar3 = *(long *)(param_1 + 0x160) - lVar4;
    do {
      if (*(long *)(lVar3 + 0x70) == param_2 && param_2 != 0) {
        FUN_03a03cf0(param_2,lVar3);
        uVar1 = *(uint *)(lVar3 + 0x20);
        if ((uint)*(ushort *)(lVar3 + 0x284) <= *(uint *)(lVar3 + 0x20)) {
          uVar1 = (uint)*(ushort *)(lVar3 + 0x284);
        }
        if (uVar1 != 0) {
          lVar5 = *(long *)(lVar3 + 0x28);
          uVar6 = 0;
          do {
            plVar2 = *(long **)(lVar5 + (long)(int)uVar6 * 0x38);
            (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(lVar3 + 0x70));
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
        }
      }
      lVar3 = *(long *)(lVar3 + lVar4 + 8) - lVar4;
    } while (lVar3 != (param_1 + 0x158) - lVar4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  return;
}

