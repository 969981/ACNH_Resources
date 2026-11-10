
void FUN_00290d20(MessageQueueType *param_1,uint param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if ((int)param_2 < 1) {
    return;
  }
  uVar5 = (ulong)param_2;
  puVar1 = (ulong *)FUN_00285d10((ulong)param_2 << 3,param_3);
  if (puVar1 != (ulong *)0x0) {
    uVar2 = uVar5 & 3;
    if (param_2 < 4) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = puVar1 + 2;
      do {
        lVar3 = lVar3 + -4;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 4;
      } while (-lVar3 != (uVar5 & 0xfffffffc));
      lVar3 = -lVar3;
    }
    if ((param_2 & 3) != 0) {
      puVar4 = puVar1 + lVar3;
      do {
        uVar2 = uVar2 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  *(ulong **)(param_1 + 0x48) = puVar1;
  nn::os::InitializeMessageQueue(param_1,puVar1,uVar5);
  return;
}

