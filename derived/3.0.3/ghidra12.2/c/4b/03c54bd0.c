
void FUN_03c54bd0(long param_1,uint *param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != param_1 + 0x30) {
    lVar4 = lVar2 + -0x160;
    do {
      if ((uint)*(byte *)(lVar4 + 0x118) == *param_2) {
        nn::os::LockMutex((MutexType *)(lVar4 + 0x140));
        iVar1 = *(int *)(lVar4 + 0x108);
        if (*(int *)(lVar4 + 0x10c) <= iVar1) goto LAB_03c54c8c;
        if ((param_4 & 1) == 0) {
          plVar3 = (long *)(*(long *)(lVar4 + 0x110) + (long)iVar1 * 8);
LAB_03c54c78:
          *plVar3 = param_3;
          *(int *)(lVar4 + 0x108) = *(int *)(lVar4 + 0x108) + 1;
        }
        else if (-1 < iVar1) {
          if (iVar1 != 0) {
            memmove((void *)((long)*(void **)(lVar4 + 0x110) + 8),*(void **)(lVar4 + 0x110),
                    (long)iVar1 << 3);
          }
          plVar3 = *(long **)(lVar4 + 0x110);
          goto LAB_03c54c78;
        }
        *(undefined1 *)(param_3 + 8) = 0;
LAB_03c54c8c:
        nn::os::UnlockMutex((MutexType *)(lVar4 + 0x140));
        return;
      }
      lVar2 = *(long *)(lVar2 + 8);
      lVar4 = lVar2 + -0x160;
    } while (lVar4 != param_1 + -0x130);
  }
  return;
}

