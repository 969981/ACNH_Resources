
void FUN_003b7790(long param_1)

{
  VoiceType *pVVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    iVar9 = 0;
  }
  else {
    lVar10 = 0;
    iVar9 = 0;
    do {
      pVVar1 = (VoiceType *)(*(long *)(*(long *)(param_1 + 8) + lVar10 * 8) + 0x20);
      uVar4 = nn::audio::IsVoiceValid(pVVar1);
      if ((uVar4 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 8) + lVar10 * 8);
        pVVar1 = (VoiceType *)(lVar8 + 0x20);
        uVar4 = nn::audio::IsVoiceValid(pVVar1);
joined_r0x003b7838:
        if ((((uVar4 & 1) != 0) &&
            (iVar3 = nn::audio::GetVoicePlayState(pVVar1), *(int *)(lVar8 + 0xa8) == 0 && iVar3 == 0
            )) && (FUN_003b7598(lVar8), *(char *)(lVar8 + 0x29) != '\0')) {
          lVar5 = nn::audio::GetVoicePlayedSampleCount(pVVar1);
          lVar7 = *(long *)(lVar8 + 200);
          if (lVar7 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(lVar7 + 0x18);
            if ((*(char *)(lVar7 + 0x30) != '\0') &&
               (lVar7 = *(long *)(lVar7 + 0x10) - lVar6, lVar7 < lVar5)) {
              lVar2 = 0;
              if (lVar7 != 0) {
                lVar2 = lVar5 / lVar7;
              }
              lVar5 = lVar5 - lVar2 * lVar7;
            }
          }
          *(long *)(lVar8 + 0xb8) = lVar5 + lVar6;
        }
      }
      else {
        uVar4 = nn::audio::IsVoiceDroppedFlagOn(pVVar1);
        if (((uVar4 & 1) == 0) ||
           (lVar8 = *(long *)(*(long *)(param_1 + 8) + lVar10 * 8), *(char *)(lVar8 + 0x28) == '\0')
           ) {
          lVar8 = *(long *)(*(long *)(param_1 + 8) + lVar10 * 8);
          pVVar1 = (VoiceType *)(lVar8 + 0x20);
          uVar4 = nn::audio::IsVoiceValid(pVVar1);
          goto joined_r0x003b7838;
        }
        *(undefined1 *)(lVar8 + 0x28) = 0;
        iVar9 = iVar9 + 1;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x24) = iVar9;
  return;
}

