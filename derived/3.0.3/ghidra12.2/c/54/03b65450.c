
void FUN_03b65450(long param_1)

{
  uint uVar1;
  VoiceType *pVVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0xf0) != param_1 + 0xe8) {
    lVar9 = (long)*(int *)(param_1 + 0xfc);
    lVar10 = *(long *)(param_1 + 0xf0) - lVar9;
    do {
      pVVar2 = (VoiceType *)(lVar10 + 0x80);
      lVar3 = nn::audio::GetVoicePlayedSampleCount(pVVar2);
      uVar5 = (ulong)*(byte *)(lVar10 + 0x149);
      lVar6 = lVar10 + uVar5 * 0xc;
      lVar4 = *(long *)(lVar10 + 0x198);
      lVar6 = *(long *)(lVar10 + 0x198) +
              (ulong)(uint)(*(int *)(lVar6 + 0x150) - *(int *)(lVar6 + 0x14c));
      while (lVar6 < lVar3) {
        *(long *)(lVar10 + 0x198) = lVar6;
        uVar7 = uVar5 & 0xff;
        if (*(char *)(lVar10 + uVar7 * 0xc + 0x154) == '\0') {
          uVar1 = (int)uVar5 + 1;
          *(undefined1 *)(lVar10 + uVar7 * 0xc + 0x155) = 0;
          uVar1 = uVar1 + ((uVar1 & 0xff) / 5) * -5;
          uVar5 = (ulong)uVar1;
          uVar7 = uVar5 & 0xff;
          *(char *)(lVar10 + 0x149) = (char)uVar1;
        }
        lVar8 = lVar10 + uVar7 * 0xc;
        uVar1 = *(uint *)(lVar8 + 0x150);
        lVar4 = lVar6;
        if (uVar1 <= *(uint *)(lVar8 + 0x14c)) break;
        *(ulong *)(lVar10 + 400) = (ulong)*(uint *)(lVar8 + 0x14c);
        lVar6 = *(long *)(lVar10 + 0x198) + (ulong)(uVar1 - *(int *)(lVar8 + 0x14c));
      }
      *(long *)(lVar10 + 0x1a8) = lVar3;
      *(long *)(lVar10 + 0x1a0) = (lVar3 - lVar4) + *(long *)(lVar10 + 400);
      uVar5 = nn::audio::IsVoiceDroppedFlagOn(pVVar2);
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x7e) = 1;
      }
      if (*(char *)(param_1 + 0x7b) == '\0') {
        do {
          lVar4 = nn::audio::GetReleasedWaveBuffer(pVVar2);
        } while (lVar4 != 0);
      }
      lVar10 = *(long *)(lVar10 + lVar9 + 8) - lVar9;
    } while (lVar10 != (param_1 + 0xe8) - (long)*(int *)(param_1 + 0xfc));
  }
  return;
}

