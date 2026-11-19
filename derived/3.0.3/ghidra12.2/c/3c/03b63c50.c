
void FUN_03b63c50(long param_1)

{
  VoiceType *pVVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  WaveBuffer aWStack_90 [64];
  
  if (((*(char *)(param_1 + 0x7b) != '\0' && *(long *)(param_1 + 0x100) != 0) &&
      *(char *)(param_1 + 0x7a) != '\0') && 0 < *(int *)(param_1 + 0xf8)) {
    lVar8 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar8 = *(long *)(param_1 + 0xf0) - (long)*(int *)(param_1 + 0xfc);
    }
    uVar4 = nn::audio::IsVoiceValid((VoiceType *)(lVar8 + 0x80));
    if ((uVar4 & 1) != 0) {
      bVar2 = *(int *)(param_1 + 0x74) == 2;
      lVar8 = *(long *)(param_1 + 0x108);
      goto joined_r0x03b63cd4;
    }
  }
  bVar2 = true;
  lVar8 = *(long *)(param_1 + 0x108);
joined_r0x03b63cd4:
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0xb8) != '\0')) {
    if (bVar2) {
      return;
    }
  }
  else {
    uVar11 = *(uint *)(lVar8 + 0x10);
    if (0 < (int)uVar11) {
      uVar9 = 0;
      uVar10 = 1;
      do {
        if (uVar9 < uVar11) {
          lVar5 = lVar8;
          if (6 < uVar9) {
            uVar11 = uVar10 & 0xfffffff8;
            do {
              uVar11 = uVar11 - 8;
              lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *
                                                  )(lVar5 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
            } while (uVar11 != 0);
          }
          if ((uVar9 + 1 & 7) != 0) {
            uVar11 = uVar10 & 7;
            do {
              lVar5 = *(long *)(lVar5 + 8);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          lVar5 = 0;
        }
        lVar12 = 0;
        if (lVar5 != 0) {
          lVar12 = lVar5 - *(int *)(lVar8 + 0x14);
        }
        if (*(char *)(lVar12 + 0xb2) != '\0') {
          return;
        }
        uVar11 = *(uint *)(lVar8 + 0x10);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 1;
      } while ((int)uVar9 < (int)uVar11);
    }
    *(undefined1 *)(lVar8 + 0xb8) = 1;
    if (bVar2) {
      return;
    }
  }
  lVar8 = param_1 + 0xe8;
  if (*(long *)(param_1 + 0xf0) != lVar8) {
    lVar12 = (long)*(int *)(param_1 + 0xfc);
    lVar5 = *(long *)(param_1 + 0xf0) - lVar12;
    do {
      uVar4 = (**(code **)(*(long *)(lVar5 + 0xe0) + 0x28))
                        ((long *)(lVar5 + 0xe0),*(int *)(lVar5 + 0x138) + *(int *)(lVar5 + 0x130),0)
      ;
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + lVar12 + 8) - lVar12;
    } while (lVar5 != lVar8 - lVar12);
    if (*(long *)(param_1 + 0xf0) != lVar8) {
      lVar12 = (long)*(int *)(param_1 + 0xfc);
      bVar2 = true;
      lVar5 = *(long *)(param_1 + 0xf0) - lVar12;
      do {
        pVVar1 = (VoiceType *)(lVar5 + 0x80);
        lVar6 = nn::audio::GetReleasedWaveBuffer(pVVar1);
        if ((lVar6 != 0) || (iVar3 = nn::audio::GetWaveBufferCount(pVVar1), iVar3 != 4)) {
          lVar6 = lVar5 + 0x90;
          uVar4 = FUN_03b6c740(lVar6,aWStack_90);
          if ((uVar4 & 1) != 0) {
            nn::audio::AppendWaveBuffer(pVVar1,aWStack_90);
          }
          lVar7 = nn::audio::GetReleasedWaveBuffer(pVVar1);
          if ((lVar7 != 0) || (iVar3 = nn::audio::GetWaveBufferCount(pVVar1), iVar3 != 4)) {
            uVar4 = FUN_03b6c740(lVar6,aWStack_90);
            if ((uVar4 & 1) != 0) {
              nn::audio::AppendWaveBuffer(pVVar1,aWStack_90);
            }
            lVar7 = nn::audio::GetReleasedWaveBuffer(pVVar1);
            if ((lVar7 != 0) || (iVar3 = nn::audio::GetWaveBufferCount(pVVar1), iVar3 != 4)) {
              uVar4 = FUN_03b6c740(lVar6,aWStack_90);
              if ((uVar4 & 1) != 0) {
                nn::audio::AppendWaveBuffer(pVVar1,aWStack_90);
              }
              lVar7 = nn::audio::GetReleasedWaveBuffer(pVVar1);
              if (((lVar7 != 0) || (iVar3 = nn::audio::GetWaveBufferCount(pVVar1), iVar3 != 4)) &&
                 (uVar4 = FUN_03b6c740(lVar6,aWStack_90), (uVar4 & 1) != 0)) {
                nn::audio::AppendWaveBuffer(pVVar1,aWStack_90);
              }
            }
          }
        }
        if (((*(long *)(lVar5 + 200) != 0) && (*(char *)(lVar5 + 0x189) == '\0')) &&
           (*(char *)(lVar5 + 0xec) == '\0')) {
          bVar2 = false;
        }
        lVar5 = *(long *)(lVar5 + lVar12 + 8) - lVar12;
      } while (lVar5 != lVar8 - *(int *)(param_1 + 0xfc));
      if (!bVar2) {
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x7b) = 0;
  return;
}

