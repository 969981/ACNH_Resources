
void FUN_003b78d0(long param_1,undefined4 param_2)

{
  VoiceType *pVVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar7 = 0;
    do {
      FUN_003b6f38(*(undefined8 *)(*(long *)(param_1 + 8) + lVar7 * 8),param_2);
      lVar6 = *(long *)(*(long *)(param_1 + 8) + lVar7 * 8);
      pVVar1 = (VoiceType *)(lVar6 + 0x20);
      uVar4 = nn::audio::IsVoiceValid(pVVar1);
      if ((uVar4 & 1) != 0) {
        iVar3 = nn::audio::GetVoicePlayState(pVVar1);
        iVar2 = *(int *)(lVar6 + 0xa8);
        if (iVar2 == 2) {
          if (iVar3 == 0) {
            uVar5 = 2;
LAB_003b7900:
            nn::audio::SetVoicePlayState(pVVar1,uVar5);
          }
        }
        else if (iVar2 == 1) {
          if (iVar3 == 0) {
            uVar5 = 1;
            goto LAB_003b7900;
          }
        }
        else if ((iVar2 == 0) && (iVar3 != 0)) {
          FUN_003b7030(lVar6,param_2);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}

