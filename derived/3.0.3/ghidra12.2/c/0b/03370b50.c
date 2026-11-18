
bool FUN_03370b50(undefined8 *param_1,int param_2,int param_3,long param_4,uint param_5,uint param_6
                 )

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [40];
  long local_b0;
  float local_98;
  
  if (param_4 == 0) goto LAB_0337109c;
  FUN_00358b98(auStack_d8);
  puVar1 = PTR_DAT_04bc9498;
  lVar2 = (**(code **)(**(long **)PTR_DAT_04bc9498 + 0x60))(*(long **)PTR_DAT_04bc9498,0);
  plVar3 = *(long **)puVar1;
  lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,1);
  plVar3 = *(long **)puVar1;
  lVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,2);
  fVar10 = (float)param_3;
  if ((param_6 & 1) == 0) {
    lVar6 = FUN_0038a89c(param_4);
    if ((param_5 & 1) == 0) {
      if (lVar2 == lVar6) {
        local_b0 = lVar2;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        fVar8 = *(float *)(param_4 + 0xf8);
        local_98 = 0.0;
        psVar7 = (short *)*param_1;
        if (*psVar7 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          do {
            lVar6 = lVar2 + 1;
            lVar2 = lVar2 + 1;
          } while (psVar7[lVar6] != 0);
        }
        fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
        if ((fVar8 + 0.0) * fVar10 < fVar9) goto LAB_03371084;
      }
      lVar2 = FUN_0038a89c(param_4);
      if (lVar4 == lVar2) {
        local_b0 = lVar4;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        fVar8 = *(float *)(param_4 + 0xf8);
        local_98 = 0.0;
        psVar7 = (short *)*param_1;
        if (*psVar7 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          do {
            lVar4 = lVar2 + 1;
            lVar2 = lVar2 + 1;
          } while (psVar7[lVar4] != 0);
        }
        fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
        if ((fVar8 + 0.0) * fVar10 < fVar9) goto LAB_03371084;
      }
      lVar2 = FUN_0038a89c(param_4);
      if (lVar5 == lVar2) {
        local_b0 = lVar5;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        local_98 = 0.0;
        psVar7 = (short *)*param_1;
        fVar10 = (*(float *)(param_4 + 0xf8) + 0.0) * fVar10;
        if (*psVar7 == 0) goto LAB_03371070;
        lVar2 = 0;
        do {
          lVar4 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (psVar7[lVar4] != 0);
        goto LAB_03371074;
      }
    }
    else {
      if (lVar2 == lVar6) {
        local_b0 = lVar2;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        local_98 = *(float *)(param_4 + 0x104);
        fVar8 = local_98 + *(float *)(param_4 + 0xf8);
        psVar7 = (short *)*param_1;
        if (*psVar7 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          do {
            lVar6 = lVar2 + 1;
            lVar2 = lVar2 + 1;
          } while (psVar7[lVar6] != 0);
        }
        fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
        if (fVar8 * fVar10 < fVar9) goto LAB_03371084;
      }
      lVar2 = FUN_0038a89c(param_4);
      if (lVar4 == lVar2) {
        local_b0 = lVar4;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        local_98 = *(float *)(param_4 + 0x104);
        fVar8 = local_98 + *(float *)(param_4 + 0xf8);
        psVar7 = (short *)*param_1;
        if (*psVar7 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          do {
            lVar4 = lVar2 + 1;
            lVar2 = lVar2 + 1;
          } while (psVar7[lVar4] != 0);
        }
        fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
        if (fVar8 * fVar10 < fVar9) goto LAB_03371084;
      }
      lVar2 = FUN_0038a89c(param_4);
      if (lVar5 == lVar2) {
        local_b0 = lVar5;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        local_98 = *(float *)(param_4 + 0x104);
        psVar7 = (short *)*param_1;
        fVar10 = (local_98 + *(float *)(param_4 + 0xf8)) * fVar10;
        if (*psVar7 == 0) {
LAB_03371070:
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          do {
            lVar4 = lVar2 + 1;
            lVar2 = lVar2 + 1;
          } while (psVar7[lVar4] != 0);
        }
        goto LAB_03371074;
      }
    }
  }
  else {
    local_b0 = lVar2;
    FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
    if ((param_5 & 1) == 0) {
      fVar8 = *(float *)(param_4 + 0xf8);
      local_98 = 0.0;
      psVar7 = (short *)*param_1;
      if (*psVar7 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar6 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (psVar7[lVar6] != 0);
      }
      fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
      if ((fVar8 + 0.0) * fVar10 < fVar9) goto LAB_03371084;
      local_b0 = lVar4;
      FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
      fVar8 = *(float *)(param_4 + 0xf8);
      local_98 = 0.0;
      psVar7 = (short *)*param_1;
      if (*psVar7 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar4 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (psVar7[lVar4] != 0);
      }
      fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
      if ((fVar8 + 0.0) * fVar10 < fVar9) goto LAB_03371084;
      local_b0 = lVar5;
      FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
      local_98 = 0.0;
      psVar7 = (short *)*param_1;
      fVar10 = (*(float *)(param_4 + 0xf8) + 0.0) * fVar10;
      if (*psVar7 == 0) goto LAB_03371070;
      lVar2 = 0;
      do {
        lVar4 = lVar2 + 1;
        lVar2 = lVar2 + 1;
      } while (psVar7[lVar4] != 0);
    }
    else {
      local_98 = *(float *)(param_4 + 0x104);
      fVar8 = local_98 + *(float *)(param_4 + 0xf8);
      psVar7 = (short *)*param_1;
      if (*psVar7 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar6 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (psVar7[lVar6] != 0);
      }
      fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
      if (fVar8 * fVar10 < fVar9) goto LAB_03371084;
      local_b0 = lVar4;
      FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
      local_98 = *(float *)(param_4 + 0x104);
      fVar8 = local_98 + *(float *)(param_4 + 0xf8);
      psVar7 = (short *)*param_1;
      if (*psVar7 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar4 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (psVar7[lVar4] != 0);
      }
      fVar9 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
      if (fVar8 * fVar10 < fVar9) goto LAB_03371084;
      local_b0 = lVar5;
      FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
      local_98 = *(float *)(param_4 + 0x104);
      psVar7 = (short *)*param_1;
      fVar10 = (local_98 + *(float *)(param_4 + 0xf8)) * fVar10;
      if (*psVar7 == 0) goto LAB_03371070;
      lVar2 = 0;
      do {
        lVar4 = lVar2 + 1;
        lVar2 = lVar2 + 1;
      } while (psVar7[lVar4] != 0);
    }
LAB_03371074:
    fVar8 = (float)FUN_00358c40(auStack_d8,psVar7,lVar2);
    if (fVar10 < fVar8) {
LAB_03371084:
      thunk_FUN_0035008c(auStack_d8);
      return false;
    }
  }
  thunk_FUN_0035008c(auStack_d8);
LAB_0337109c:
  return *(int *)((long)param_1 + 0xc) <= param_2;
}

