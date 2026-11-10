
void FUN_0033d820(long param_1)

{
  undefined8 *puVar1;
  MutexType *pMVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 0x1d9) == '\0') {
    return;
  }
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x16d8));
  *(undefined8 *)(param_1 + 0x1700) = 0;
  *(undefined8 *)(param_1 + 0x16f8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16d8));
  FUN_0032c540();
  FUN_0031ea50(param_1 + 0x1710);
  if (0 < *(int *)(param_1 + 0x1b0)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x230) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x16c8) + lVar4);
      lVar4 = lVar4 + 0x48;
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
    } while (lVar5 < *(int *)(param_1 + 0x1b0));
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar5 = lVar5 + 1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar4);
        puVar1[0x1e] = 0;
        puVar1[0x1f] = 0;
        puVar1[0x1c] = 0;
        puVar1[0x1d] = 0;
        puVar1[0x1a] = 0;
        puVar1[0x1b] = 0;
        puVar1[0x18] = 0;
        puVar1[0x19] = 0;
        puVar1[0x16] = 0;
        puVar1[0x17] = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar7 = *(long *)(param_1 + 0x1b8) + lVar4;
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
        *(undefined8 *)(lVar7 + 0x1e0) = 0;
        *(undefined8 *)(lVar7 + 0x1e8) = 0;
        *(undefined8 *)(lVar7 + 0x1d0) = 0;
        *(undefined8 *)(lVar7 + 0x1d8) = 0;
        *(undefined8 *)(lVar7 + 0x1c0) = 0;
        *(undefined8 *)(lVar7 + 0x1c8) = 0;
        *(undefined8 *)(lVar7 + 0x1b0) = 0;
        *(undefined8 *)(lVar7 + 0x1b8) = 0;
        *(undefined8 *)(lVar7 + 0x1a0) = 0;
        *(undefined8 *)(lVar7 + 0x1a8) = 0;
        *(undefined8 *)(lVar7 + 400) = 0;
        *(undefined8 *)(lVar7 + 0x198) = 0;
        *(undefined8 *)(lVar7 + 0x180) = 0;
        *(undefined8 *)(lVar7 + 0x188) = 0;
        *(undefined8 *)(lVar7 + 0x170) = 0;
        *(undefined8 *)(lVar7 + 0x178) = 0;
        *(undefined8 *)(lVar7 + 0x160) = 0;
        *(undefined8 *)(lVar7 + 0x168) = 0;
        *(undefined8 *)(lVar7 + 0x150) = 0;
        *(undefined8 *)(lVar7 + 0x158) = 0;
        *(undefined8 *)(lVar7 + 0x140) = 0;
        *(undefined8 *)(lVar7 + 0x148) = 0;
        *(undefined8 *)(lVar7 + 0x130) = 0;
        *(undefined8 *)(lVar7 + 0x138) = 0;
        *(undefined8 *)(lVar7 + 0x120) = 0;
        *(undefined8 *)(lVar7 + 0x128) = 0;
        *(undefined8 *)(lVar7 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x118) = 0;
        *(undefined8 *)(lVar7 + 0x100) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0;
        lVar7 = *(long *)(param_1 + 0x1b8) + lVar4;
        lVar4 = lVar4 + 0x300;
        *(undefined8 *)(lVar7 + 0x2f8) = 0;
        *(undefined8 *)(lVar7 + 0x2f0) = 0;
        *(undefined8 *)(lVar7 + 0x2e8) = 0;
        *(undefined8 *)(lVar7 + 0x2e0) = 0;
        *(undefined8 *)(lVar7 + 0x2d8) = 0;
        *(undefined8 *)(lVar7 + 0x2d0) = 0;
        *(undefined8 *)(lVar7 + 0x2c8) = 0;
        *(undefined8 *)(lVar7 + 0x2c0) = 0;
        *(undefined8 *)(lVar7 + 0x2b8) = 0;
        *(undefined8 *)(lVar7 + 0x2b0) = 0;
        *(undefined8 *)(lVar7 + 0x2a8) = 0;
        *(undefined8 *)(lVar7 + 0x2a0) = 0;
        *(undefined8 *)(lVar7 + 0x298) = 0;
        *(undefined8 *)(lVar7 + 0x290) = 0;
        *(undefined8 *)(lVar7 + 0x288) = 0;
        *(undefined8 *)(lVar7 + 0x280) = 0;
        *(undefined8 *)(lVar7 + 0x278) = 0;
        *(undefined8 *)(lVar7 + 0x270) = 0;
        *(undefined8 *)(lVar7 + 0x268) = 0;
        *(undefined8 *)(lVar7 + 0x260) = 0;
        *(undefined8 *)(lVar7 + 600) = 0;
        *(undefined8 *)(lVar7 + 0x250) = 0;
        *(undefined8 *)(lVar7 + 0x248) = 0;
        *(undefined8 *)(lVar7 + 0x240) = 0;
        *(undefined8 *)(lVar7 + 0x238) = 0;
        *(undefined8 *)(lVar7 + 0x230) = 0;
        *(undefined8 *)(lVar7 + 0x228) = 0;
        *(undefined8 *)(lVar7 + 0x220) = 0;
        *(undefined8 *)(lVar7 + 0x218) = 0;
        *(undefined8 *)(lVar7 + 0x210) = 0;
        *(undefined8 *)(lVar7 + 0x208) = 0;
        *(undefined8 *)(lVar7 + 0x200) = 0;
      } while (lVar5 < *(int *)(param_1 + 0x1b0));
    }
  }
  FUN_0033d080(param_1);
  pMVar2 = (MutexType *)(param_1 + 0x1940);
  nn::os::LockMutex(pMVar2);
  lVar5 = 0;
  bVar9 = false;
  do {
    lVar4 = lVar5 + -0x40;
    plVar6 = (long *)(param_1 + 0x438 + lVar5 * 8);
    while (lVar5 = plVar6[0x80], plVar6[0x80] == 0) {
      bVar3 = lVar4 == -1;
      lVar4 = lVar4 + 1;
      plVar6 = plVar6 + 1;
      if (bVar3) {
        nn::os::UnlockMutex(pMVar2);
        if (!bVar9) {
          return;
        }
        goto LAB_0033dacc;
      }
    }
    do {
      while (lVar7 = *(long *)(lVar5 + 0x1e0), *plVar6 == 0) {
        *plVar6 = lVar5;
        *(undefined8 *)(lVar5 + 0x1e0) = 0;
        *(undefined8 *)(lVar5 + 0x1e8) = 0;
        plVar6[0x40] = lVar5;
        *(undefined1 *)(lVar5 + 0x1f) = 0;
        lVar5 = lVar7;
        if (lVar7 == 0) goto LAB_0033daa4;
      }
      *(long *)(plVar6[0x40] + 0x1e0) = lVar5;
      lVar8 = plVar6[0x40];
      *(undefined8 *)(lVar5 + 0x1e0) = 0;
      *(long *)(lVar5 + 0x1e8) = lVar8;
      plVar6[0x40] = lVar5;
      *(undefined1 *)(lVar5 + 0x1f) = 0;
      lVar5 = lVar7;
    } while (lVar7 != 0);
LAB_0033daa4:
    lVar5 = lVar4 + 0x41;
    bVar9 = true;
    if (lVar4 == -1) {
      nn::os::UnlockMutex(pMVar2);
LAB_0033dacc:
      memset((void *)(param_1 + 0x838),0,0x400);
      return;
    }
  } while( true );
}

