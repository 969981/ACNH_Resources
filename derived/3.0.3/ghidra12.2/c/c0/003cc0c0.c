
void FUN_003cc0c0(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *local_18;
  
  do {
    uVar1 = nn::os::TryReceiveMessageQueue((ulong *)&local_18,(MessageQueueType *)(param_1 + 0x70));
    if ((uVar1 & 1) == 0) {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))();
      }
      nn::os::ReceiveMessageQueue((ulong *)&local_18,(MessageQueueType *)(param_1 + 0x70));
    }
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)((long)local_18 + 0xc);
    iVar2 = *(int *)(param_1 + 0x110);
    plVar5 = local_18;
    do {
      plVar4 = plVar5;
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0x110) = iVar2;
      plVar5 = (long *)*plVar4;
    } while (plVar5 != (long *)0x0);
    lVar3 = plVar4[2];
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(long *)(param_1 + 0x100) = lVar3;
  } while (*(int *)((long)local_18 + 0xc) != param_2);
  return;
}

