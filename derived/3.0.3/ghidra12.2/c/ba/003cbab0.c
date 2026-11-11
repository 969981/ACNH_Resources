
void FUN_003cbab0(undefined1 *param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
                 undefined8 param_6)

{
  ulong *puVar1;
  char cVar2;
  
  *(long *)(param_1 + 0xe8) = param_2;
  *(ulong *)(param_1 + 0xf0) = param_4 >> 2;
  puVar1 = (ulong *)(param_2 + param_4);
  param_1[0x108] = 0;
  *(undefined8 *)(param_1 + 8) = param_6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(ulong **)(param_1 + 0x60) = puVar1;
  *(ulong **)(param_1 + 0xb8) = puVar1 + param_5;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (param_1[0x68] == '\0') {
    nn::os::InitializeMessageQueue((MessageQueueType *)(param_1 + 0x18),puVar1,(long)param_5);
    param_1[0x68] = 1;
    cVar2 = param_1[0xc0];
  }
  else {
    cVar2 = param_1[0xc0];
  }
  if (cVar2 == '\0') {
    nn::os::InitializeMessageQueue
              ((MessageQueueType *)(param_1 + 0x70),*(ulong **)(param_1 + 0xb8),(long)(param_5 + 1))
    ;
    param_1[0xc0] = 1;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *param_1 = 1;
  return;
}

