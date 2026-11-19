
void FUN_03a259a0(long param_1)

{
  long lVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *__ptr;
  long lVar7;
  long lVar8;
  short *psVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04bc1010;
  lVar7 = *(long *)(param_1 + 0x230);
  if (lVar7 != 0) {
    __ptr = (long *)(lVar7 + -8);
    if (*__ptr != 0) {
      lVar8 = *__ptr * 0x298;
      do {
        lVar1 = lVar7 + lVar8;
        FUN_038fd0e0(lVar1 + -0x168);
        psVar9 = (short *)(lVar1 + -0x1be);
        if (*psVar9 != -1) {
          lVar10 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar4 = (int)*psVar9 - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar4) {
            uVar4 = 0;
          }
          lVar2 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar4 * 0x80;
          sVar3 = *(short *)(lVar2 + 0x76) + -1;
          *(short *)(lVar2 + 0x76) = sVar3;
          if (sVar3 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *psVar9 = -1;
        }
        FUN_038fd0e0(lVar1 + -0x248);
        lVar8 = lVar8 + -0x298;
      } while (lVar8 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}

