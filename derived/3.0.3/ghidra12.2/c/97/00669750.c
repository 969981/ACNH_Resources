
void FUN_00669750(long param_1)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  
  *(undefined4 *)(param_1 + 0xd54) = 0;
  iVar4 = *(int *)(param_1 + 0x4be0);
  if (iVar4 < *(int *)(param_1 + 0xd58)) {
    do {
      uVar5 = (ulong)(iVar4 << 2);
      sVar3 = *(short *)(param_1 + (long)(iVar4 << 2) * 4 + 0xd60);
      if (*(int *)(param_1 + (long)((int)sVar3 >> 2) * 4 + 0x4be4) == 0) {
        bVar2 = *(byte *)(param_1 + uVar5 * 4 + 0xd62);
        *(int *)(param_1 + 0xd54) = *(int *)(param_1 + 0xd54) + 1;
        *(short *)(param_1 + (ulong)bVar2 * 2 + 0xcd4) = sVar3;
        *(int *)(param_1 + 0xcd0) = (int)sVar3;
      }
      lVar1 = param_1 + (uVar5 | 1) * 4;
      sVar3 = *(short *)(lVar1 + 0xd60);
      if (*(int *)(param_1 + (long)((int)sVar3 >> 2) * 4 + 0x4be4) == 0) {
        bVar2 = *(byte *)(lVar1 + 0xd62);
        *(int *)(param_1 + 0xd54) = *(int *)(param_1 + 0xd54) + 1;
        *(short *)(param_1 + (ulong)bVar2 * 2 + 0xcd4) = sVar3;
        *(int *)(param_1 + 0xcd0) = (int)sVar3;
      }
      lVar1 = param_1 + (uVar5 | 2) * 4;
      sVar3 = *(short *)(lVar1 + 0xd60);
      if (*(int *)(param_1 + (long)((int)sVar3 >> 2) * 4 + 0x4be4) == 0) {
        bVar2 = *(byte *)(lVar1 + 0xd62);
        *(int *)(param_1 + 0xd54) = *(int *)(param_1 + 0xd54) + 1;
        *(short *)(param_1 + (ulong)bVar2 * 2 + 0xcd4) = sVar3;
        *(int *)(param_1 + 0xcd0) = (int)sVar3;
      }
      iVar4 = *(int *)(param_1 + (long)iVar4 * 4 + 0x4be4);
    } while (iVar4 < *(int *)(param_1 + 0xd58));
  }
  return;
}

