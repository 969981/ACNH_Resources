
void FUN_03b66000(float param_1,long param_2,int param_3,long *param_4,uint param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_78 [4];
  float local_68;
  float fStack_64;
  
  uVar3 = (**(code **)(*param_4 + 0x58))(param_4);
  if ((uVar3 & 1) != 0) {
    local_78[0] = (float)(**(code **)(*param_4 + 0x50))(param_4);
    if (local_78[0] == 1.4013e-45) {
      iVar2 = (**(code **)(*param_4 + 0x50))(param_4);
      if (iVar2 == DAT_04c4bdc4) {
        local_78[0] = (float)*param_6;
        local_78[1] = (float)((ulong)*param_6 >> 0x20);
        local_78[2] = (float)param_6[1];
        local_78[3] = (float)((ulong)param_6[1] >> 0x20);
        local_68 = (float)param_6[2];
        fStack_64 = (float)((ulong)param_6[2] >> 0x20);
        local_78[1] = local_78[1] * param_1;
        local_78[0] = local_78[0] * param_1;
        local_78[3] = local_78[3] * param_1;
        local_78[2] = local_78[2] * param_1;
        _local_68 = CONCAT44(fStack_64 * param_1,local_68 * param_1);
        if ((int)param_5 < (int)*(uint *)(param_2 + 0xf8)) {
          if (param_5 < *(uint *)(param_2 + 0xf8)) {
            param_5 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
            lVar4 = param_2 + 0xe8;
            uVar6 = param_5 + 1;
            uVar1 = uVar6 & 3;
            if (2 < param_5) {
              uVar6 = uVar6 & 0xfffffffc;
              do {
                uVar6 = uVar6 - 4;
                lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
              } while (uVar6 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              lVar4 = *(long *)(lVar4 + 8);
            }
          }
          else {
            lVar4 = 0;
          }
          lVar5 = 0;
          if (lVar4 != 0) {
            lVar5 = lVar4 - *(int *)(param_2 + 0xfc);
          }
        }
        else {
          lVar5 = 0;
        }
        if (0 < *(int *)((long)param_4 + 0x74)) {
          lVar4 = 0;
          do {
            fVar7 = local_78[lVar4];
            fVar9 = 128.0;
            if (fVar7 <= 128.0) {
              fVar9 = fVar7;
            }
            fVar8 = -128.0;
            if (-128.0 <= fVar7) {
              fVar8 = fVar9;
            }
            if (NAN(fVar8)) {
              fVar8 = 0.0;
            }
            nn::audio::SetSplitterMixVolume
                      ((SplitterType *)(lVar5 + 0x88),param_3,(FinalMixType *)(param_4 + 0x1a),fVar8
                       ,0,(int)lVar4);
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)((long)param_4 + 0x74));
        }
      }
    }
    else if ((local_78[0] == 2.8026e-45) &&
            (iVar2 = (**(code **)(*param_4 + 0x50))(param_4), iVar2 == DAT_04c4bdc8)) {
      local_78[0] = (float)*param_6;
      local_78[1] = (float)((ulong)*param_6 >> 0x20);
      local_78[2] = (float)param_6[1];
      local_78[3] = (float)((ulong)param_6[1] >> 0x20);
      local_68 = (float)param_6[2];
      fStack_64 = (float)((ulong)param_6[2] >> 0x20);
      local_78[1] = local_78[1] * param_1;
      local_78[0] = local_78[0] * param_1;
      local_78[3] = local_78[3] * param_1;
      local_78[2] = local_78[2] * param_1;
      _local_68 = CONCAT44(fStack_64 * param_1,local_68 * param_1);
      if ((int)param_5 < (int)*(uint *)(param_2 + 0xf8)) {
        if (param_5 < *(uint *)(param_2 + 0xf8)) {
          param_5 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
          lVar4 = param_2 + 0xe8;
          uVar6 = param_5 + 1;
          uVar1 = uVar6 & 3;
          if (2 < param_5) {
            uVar6 = uVar6 & 0xfffffffc;
            do {
              uVar6 = uVar6 - 4;
              lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
            } while (uVar6 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            lVar4 = *(long *)(lVar4 + 8);
          }
        }
        else {
          lVar4 = 0;
        }
        lVar5 = 0;
        if (lVar4 != 0) {
          lVar5 = lVar4 - *(int *)(param_2 + 0xfc);
        }
      }
      else {
        lVar5 = 0;
      }
      if (0 < *(int *)((long)param_4 + 0x74)) {
        lVar4 = 0;
        do {
          fVar7 = local_78[lVar4];
          fVar9 = 128.0;
          if (fVar7 <= 128.0) {
            fVar9 = fVar7;
          }
          fVar8 = -128.0;
          if (-128.0 <= fVar7) {
            fVar8 = fVar9;
          }
          if (NAN(fVar8)) {
            fVar8 = 0.0;
          }
          nn::audio::SetSplitterMixVolume
                    ((SplitterType *)(lVar5 + 0x88),param_3,(SubMixType *)(param_4 + 0x1a),fVar8,0,
                     (int)lVar4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)((long)param_4 + 0x74));
      }
    }
  }
  return;
}

