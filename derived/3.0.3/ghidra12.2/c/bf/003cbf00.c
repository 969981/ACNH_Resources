
void FUN_003cbf00(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *local_28;
  
  uVar1 = nn::os::TryReceiveMessageQueue((ulong *)&local_28,(MessageQueueType *)(param_1 + 0x70));
  while ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)((long)local_28 + 0xc);
    iVar5 = *(int *)(param_1 + 0x110);
    plVar3 = local_28;
    do {
      plVar2 = plVar3;
      iVar5 = iVar5 + -1;
      *(int *)(param_1 + 0x110) = iVar5;
      plVar3 = (long *)*plVar2;
    } while (plVar3 != (long *)0x0);
    lVar4 = plVar2[2];
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(long *)(param_1 + 0x100) = lVar4;
    uVar1 = nn::os::TryReceiveMessageQueue((ulong *)&local_28,(MessageQueueType *)(param_1 + 0x70));
  }
  return;
}

