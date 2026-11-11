
void FUN_003b7240(long param_1,long param_2,int param_3)

{
  VoiceType *pVVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = FUN_03b38a74();
  if (*(char *)(lVar7 + 0x950) == '\0') {
    iVar2 = 1;
    iVar3 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
  }
  else {
    iVar2 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))();
    iVar3 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
    if (iVar2 < 1) {
      return;
    }
  }
  if (0 < iVar3) {
    pVVar1 = (VoiceType *)(param_1 + 0x20);
    if (param_3 == 2) {
      iVar8 = 0;
      do {
        iVar6 = 0;
        do {
          while( true ) {
            iVar4 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
            iVar4 = iVar6 + iVar8 * iVar4;
            fVar9 = *(float *)(param_2 + (long)iVar4 * 4);
            fVar10 = (float)NEON_fminnm(fVar9,0x43000000);
            fVar11 = -128.0;
            if (-128.0 <= fVar9) {
              fVar11 = fVar10;
            }
            iVar5 = (**(code **)**(undefined8 **)(param_1 + 0xc0))();
            if (iVar5 == 0) break;
            if (iVar5 != 1) goto LAB_003b7594;
            nn::audio::SetVoiceMixVolume
                      (pVVar1,(FinalMixType *)(*(long *)(param_1 + 0xc0) + 0x40),fVar11,0,iVar4);
            iVar6 = iVar6 + 1;
            if (iVar3 == iVar6) goto LAB_003b72f0;
          }
          nn::audio::SetVoiceMixVolume
                    (pVVar1,(SubMixType *)(*(long *)(param_1 + 0xc0) + 0x50),fVar11,0,iVar4);
          iVar6 = iVar6 + 1;
        } while (iVar3 != iVar6);
LAB_003b72f0:
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar2);
    }
    else {
      iVar8 = 0;
      do {
        iVar6 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
        iVar6 = iVar6 * iVar8;
        fVar9 = *(float *)(param_2 + (long)iVar6 * 4);
        fVar10 = (float)NEON_fminnm(fVar9,0x43000000);
        fVar11 = -128.0;
        if (-128.0 <= fVar9) {
          fVar11 = fVar10;
        }
        iVar4 = (**(code **)**(undefined8 **)(param_1 + 0xc0))();
        if (iVar4 == 0) {
          nn::audio::SetVoiceMixVolume
                    (pVVar1,(SubMixType *)(*(long *)(param_1 + 0xc0) + 0x50),fVar11,0,iVar6);
        }
        else {
          if (iVar4 != 1) goto LAB_003b7594;
          nn::audio::SetVoiceMixVolume
                    (pVVar1,(FinalMixType *)(*(long *)(param_1 + 0xc0) + 0x40),fVar11,0,iVar6);
        }
        if (iVar3 != 1) {
          iVar6 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
          lVar7 = (long)(iVar6 * iVar8) + 1;
          fVar9 = *(float *)(param_2 + lVar7 * 4);
          fVar10 = (float)NEON_fminnm(fVar9,0x43000000);
          fVar11 = -128.0;
          if (-128.0 <= fVar9) {
            fVar11 = fVar10;
          }
          iVar4 = (**(code **)**(undefined8 **)(param_1 + 0xc0))();
          iVar6 = (int)lVar7;
          if (iVar4 == 0) {
            nn::audio::SetVoiceMixVolume
                      (pVVar1,(SubMixType *)(*(long *)(param_1 + 0xc0) + 0x50),fVar11,0,iVar6);
          }
          else {
            if (iVar4 != 1) {
LAB_003b7594:
                    /* WARNING: Subroutine does not return */
              nn::detail::UnexpectedDefaultImpl();
            }
            nn::audio::SetVoiceMixVolume
                      (pVVar1,(FinalMixType *)(*(long *)(param_1 + 0xc0) + 0x40),fVar11,0,iVar6);
          }
          if (iVar3 != 2) {
            iVar6 = 2;
            do {
              while( true ) {
                iVar4 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
                iVar4 = iVar6 + iVar8 * iVar4;
                iVar5 = (**(code **)**(undefined8 **)(param_1 + 0xc0))();
                if (iVar5 == 0) break;
                if (iVar5 != 1) goto LAB_003b7594;
                nn::audio::SetVoiceMixVolume
                          (pVVar1,(FinalMixType *)(*(long *)(param_1 + 0xc0) + 0x40),0.0,0,iVar4);
                iVar6 = iVar6 + 1;
                if (iVar3 == iVar6) goto LAB_003b73b0;
              }
              nn::audio::SetVoiceMixVolume
                        (pVVar1,(SubMixType *)(*(long *)(param_1 + 0xc0) + 0x50),0.0,0,iVar4);
              iVar6 = iVar6 + 1;
            } while (iVar3 != iVar6);
          }
        }
LAB_003b73b0:
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar2);
    }
  }
  return;
}

