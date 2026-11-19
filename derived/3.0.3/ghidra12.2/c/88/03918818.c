
void FUN_03918818(long param_1,long param_2,undefined8 param_3,int param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x890));
  if (*(int *)(param_1 + 0x238) < 1) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x230);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
  }
  lVar1 = 0;
  if (plVar3 != (long *)0x0) {
    lVar1 = (long)plVar3 - (long)*(int *)(param_1 + 0x23c);
  }
  if (*(int *)(lVar1 + 0x2600) == 0) {
    *(int *)(lVar1 + 0x2600) = *(int *)(lVar1 + 0x25f8);
  }
  else if (*(int *)(lVar1 + 0x25f8) != *(int *)(lVar1 + 0x2600)) goto LAB_039188e0;
  if ((*(byte *)(lVar1 + 0x2a38) >> 2 & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x228) = *(undefined4 *)(param_1 + 0x430);
    *(undefined4 *)(lVar1 + 0x22c) = *(undefined4 *)(param_1 + 0x434);
    *(undefined4 *)(lVar1 + 0x230) = *(undefined4 *)(param_1 + 0x438);
  }
LAB_039188e0:
  *(undefined4 *)(lVar1 + 0x2608) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)(lVar1 + 0x260c) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(lVar1 + 0x2610) = *(undefined4 *)(param_1 + 0x42c);
  lVar4 = *(long *)(param_1 + 0x248) + (long)(int)param_5 * 0x3a8;
  lVar5 = *(long *)(param_1 + 600) + (long)(int)param_5 * 0x3a8;
  if (*(uint *)(param_1 + 0x240) <= param_5) {
    lVar4 = 0;
  }
  if (*(uint *)(param_1 + 0x250) <= param_5) {
    lVar5 = 0;
  }
  if (param_4 == -1) {
    param_4 = *(int *)(param_2 + 0x18c);
  }
  *(long *)(param_2 + 0x150) = lVar4;
  *(long *)(param_2 + 0x158) = lVar5;
  *(long *)(param_2 + 0x1a0) = param_1;
  *(long *)(param_2 + 0x160) = lVar1;
  *(int *)(param_2 + 0x18c) = param_4;
  *(undefined4 *)(param_2 + 400) = 0xffffffff;
  uVar2 = *(undefined4 *)(param_1 + 0x420);
  *(undefined1 *)(param_2 + 0x199) = 0;
  *(undefined4 *)(param_2 + 0x168) = uVar2;
  *(long *)(lVar1 + 0x2a30) = param_2;
  lVar4 = *(long *)(param_2 + 0x160);
  if (*(int *)(lVar4 + 0x25f8) == *(int *)(lVar4 + 0x2600)) {
    *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(lVar1 + 0x228);
    *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(lVar1 + 0x22c);
    *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(lVar1 + 0x230);
    *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(lVar1 + 0x250);
    *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(lVar1 + 0x270);
    *(uint *)(lVar4 + 0x2a38) = *(uint *)(lVar4 + 0x2a38) & 0xfffffffe;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x890));
  return;
}

