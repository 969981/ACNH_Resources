
void FUN_003b7a10(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  for (lVar2 = *(long *)(param_2 + 200); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x38)) {
    *(undefined4 *)(lVar2 + 0x34) = 3;
  }
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(long *)(param_2 + 200) = 0;
  if (*(char *)(param_2 + 0x29) != '\0') {
    lVar2 = FUN_03b38a74();
    nn::audio::ReleaseVoiceSlot((AudioRendererConfig *)(lVar2 + 0x18),(VoiceType *)(param_2 + 0x20))
    ;
    *(undefined1 *)(param_2 + 0x29) = 0;
  }
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0xa8) = 1;
  lVar2 = *param_1;
  lVar4 = (long)(int)param_1[2] + -1;
  uVar3 = (ulong)(param_2 - lVar2) >> 6 & 0x3fffffffffffffc;
  iVar1 = *(int *)(param_1[3] + uVar3);
  *(int *)(param_1 + 2) = (int)lVar4;
  lVar4 = lVar4 * 8;
  lVar5 = *(long *)(param_1[1] + lVar4);
  *(long *)(param_1[1] + (long)iVar1 * 8) = lVar5;
  *(long *)(param_1[1] + lVar4) = param_2;
  *(int *)(param_1[3] + ((ulong)(lVar5 - lVar2) >> 6 & 0x3fffffffffffffc)) = iVar1;
  *(undefined4 *)(param_1[3] + uVar3) = 0xffffffff;
  return;
}

