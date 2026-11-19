
void FUN_03b66350(float param_1,long param_2,long *param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  VoiceType *pVVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68 [4];
  float local_58;
  float fStack_54;
  
  uVar4 = (**(code **)(*param_3 + 0x58))(param_3);
  if ((uVar4 & 1) != 0) {
    local_68[0] = (float)(**(code **)(*param_3 + 0x50))(param_3);
    if (local_68[0] == 1.4013e-45) {
      iVar3 = (**(code **)(*param_3 + 0x50))(param_3);
      if (iVar3 == DAT_04c4bdc4) {
        local_68[0] = (float)*param_5;
        local_68[1] = (float)((ulong)*param_5 >> 0x20);
        local_68[2] = (float)param_5[1];
        local_68[3] = (float)((ulong)param_5[1] >> 0x20);
        local_58 = (float)param_5[2];
        fStack_54 = (float)((ulong)param_5[2] >> 0x20);
        local_68[1] = local_68[1] * param_1;
        local_68[0] = local_68[0] * param_1;
        local_68[3] = local_68[3] * param_1;
        local_68[2] = local_68[2] * param_1;
        _local_58 = CONCAT44(fStack_54 * param_1,local_58 * param_1);
        if ((int)param_4 < (int)*(uint *)(param_2 + 0xf8)) {
          if (param_4 < *(uint *)(param_2 + 0xf8)) {
            param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
            lVar5 = param_2 + 0xe8;
            uVar6 = param_4 + 1;
            uVar1 = uVar6 & 3;
            if (2 < param_4) {
              uVar6 = uVar6 & 0xfffffffc;
              do {
                uVar6 = uVar6 - 4;
                lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 8) + 8);
              } while (uVar6 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              lVar5 = *(long *)(lVar5 + 8);
            }
          }
          else {
            lVar5 = 0;
          }
          lVar2 = 0;
          if (lVar5 != 0) {
            lVar2 = lVar5 - *(int *)(param_2 + 0xfc);
          }
          pVVar7 = (VoiceType *)(lVar2 + 0x80);
        }
        else {
          pVVar7 = (VoiceType *)0x0;
        }
        if (0 < *(int *)((long)param_3 + 0x74)) {
          lVar5 = 0;
          do {
            fVar8 = local_68[lVar5];
            fVar10 = 128.0;
            if (fVar8 <= 128.0) {
              fVar10 = fVar8;
            }
            fVar9 = -128.0;
            if (-128.0 <= fVar8) {
              fVar9 = fVar10;
            }
            if (NAN(fVar9)) {
              fVar9 = 0.0;
            }
            nn::audio::SetVoiceMixVolume(pVVar7,(FinalMixType *)(param_3 + 0x1a),fVar9,0,(int)lVar5)
            ;
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)((long)param_3 + 0x74));
        }
      }
    }
    else if ((local_68[0] == 2.8026e-45) &&
            (iVar3 = (**(code **)(*param_3 + 0x50))(param_3), iVar3 == DAT_04c4bdc8)) {
      local_68[0] = (float)*param_5;
      local_68[1] = (float)((ulong)*param_5 >> 0x20);
      local_68[2] = (float)param_5[1];
      local_68[3] = (float)((ulong)param_5[1] >> 0x20);
      local_58 = (float)param_5[2];
      fStack_54 = (float)((ulong)param_5[2] >> 0x20);
      local_68[1] = local_68[1] * param_1;
      local_68[0] = local_68[0] * param_1;
      local_68[3] = local_68[3] * param_1;
      local_68[2] = local_68[2] * param_1;
      _local_58 = CONCAT44(fStack_54 * param_1,local_58 * param_1);
      if ((int)param_4 < (int)*(uint *)(param_2 + 0xf8)) {
        if (param_4 < *(uint *)(param_2 + 0xf8)) {
          param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
          lVar5 = param_2 + 0xe8;
          uVar6 = param_4 + 1;
          uVar1 = uVar6 & 3;
          if (2 < param_4) {
            uVar6 = uVar6 & 0xfffffffc;
            do {
              uVar6 = uVar6 - 4;
              lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 8) + 8);
            } while (uVar6 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            lVar5 = *(long *)(lVar5 + 8);
          }
        }
        else {
          lVar5 = 0;
        }
        lVar2 = 0;
        if (lVar5 != 0) {
          lVar2 = lVar5 - *(int *)(param_2 + 0xfc);
        }
        pVVar7 = (VoiceType *)(lVar2 + 0x80);
      }
      else {
        pVVar7 = (VoiceType *)0x0;
      }
      if (0 < *(int *)((long)param_3 + 0x74)) {
        lVar5 = 0;
        do {
          fVar8 = local_68[lVar5];
          fVar10 = 128.0;
          if (fVar8 <= 128.0) {
            fVar10 = fVar8;
          }
          fVar9 = -128.0;
          if (-128.0 <= fVar8) {
            fVar9 = fVar10;
          }
          if (NAN(fVar9)) {
            fVar9 = 0.0;
          }
          nn::audio::SetVoiceMixVolume(pVVar7,(SubMixType *)(param_3 + 0x1a),fVar9,0,(int)lVar5);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((long)param_3 + 0x74));
      }
    }
  }
  return;
}

