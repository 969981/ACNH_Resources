
uint FUN_03eafa70(long param_1,long param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar7 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  fVar8 = *(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10);
  fVar5 = fVar7 * *(float *)(param_2 + 0x18) + fVar4 * *(float *)(param_2 + 0x14) +
          fVar8 * *(float *)(param_2 + 0x1c);
  fVar6 = *(float *)(param_2 + 0x38);
  local_28 = *(float *)(param_1 + 0x14);
  fVar9 = -(fVar6 + local_28);
  bVar1 = false;
  bVar2 = false;
  if (fVar5 < fVar6 + local_28) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar5) && !NAN(fVar9)) {
      bVar1 = fVar5 == fVar9;
      bVar2 = fVar9 <= fVar5;
    }
  }
  if (bVar2 && !bVar1) {
    fVar9 = fVar7 * *(float *)(param_2 + 0x24) + fVar4 * *(float *)(param_2 + 0x20) +
            fVar8 * *(float *)(param_2 + 0x28);
    fVar10 = *(float *)(param_2 + 0x3c);
    fVar11 = -(local_28 + fVar10);
    bVar1 = false;
    bVar2 = false;
    if (fVar9 < local_28 + fVar10) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar9) && !NAN(fVar11)) {
        bVar1 = fVar9 == fVar11;
        bVar2 = fVar11 <= fVar9;
      }
    }
    if (bVar2 && !bVar1) {
      fVar4 = fVar7 * *(float *)(param_2 + 0x30) + fVar4 * *(float *)(param_2 + 0x2c) +
              fVar8 * *(float *)(param_2 + 0x34);
      fVar7 = *(float *)(param_2 + 0x40);
      fVar8 = -(local_28 + fVar7);
      bVar1 = false;
      bVar2 = false;
      if (fVar4 < local_28 + fVar7) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar4) && !NAN(fVar8)) {
          bVar1 = fVar4 == fVar8;
          bVar2 = fVar8 <= fVar4;
        }
      }
      if (bVar2 && !bVar1) {
        fVar11 = 0.0;
        fVar8 = 0.0;
        if (fVar5 < -fVar6) {
          fVar8 = fVar6 + fVar5;
        }
        if (fVar6 < fVar5) {
          fVar8 = fVar5 - fVar6;
        }
        fVar5 = 0.0;
        if (fVar9 < -fVar10) {
          fVar5 = fVar10 + fVar9;
        }
        if (fVar10 < fVar9) {
          fVar5 = fVar9 - fVar10;
        }
        if (fVar4 <= fVar7) {
          if (fVar4 < -fVar7) {
            fVar11 = fVar7 + fVar4;
          }
        }
        else {
          fVar11 = fVar4 - fVar7;
        }
        fVar4 = SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar11 * fVar11);
        if (fVar4 < local_28) {
          if (fVar4 == 0.0) {
            if (param_3 != (float *)0x0) {
              local_38 = *(undefined8 *)(param_2 + 0x30);
              local_28 = local_28 + 1.1920929e-07;
              uStack_60 = *(undefined8 *)(param_2 + 8);
              local_58 = *(undefined8 *)(param_2 + 0x10);
              uStack_50 = *(undefined8 *)(param_2 + 0x18);
              local_48 = *(undefined8 *)(param_2 + 0x20);
              uStack_40 = *(undefined8 *)(param_2 + 0x28);
              local_30 = (float)*(undefined8 *)(param_2 + 0x38);
              fStack_2c = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
              local_68 = &DAT_04ba4b10;
              _local_30 = CONCAT44(local_28 + fStack_2c,local_28 + local_30);
              local_28 = local_28 + *(float *)(param_2 + 0x40);
              uVar3 = FUN_03eaf030((float *)(param_1 + 8),&local_68,param_3);
              goto LAB_03eafc24;
            }
          }
          else if (param_3 != (float *)0x0) {
            fVar6 = 1.0 / fVar4;
            *param_3 = fVar8 * fVar6;
            param_3[1] = fVar5 * fVar6;
            param_3[2] = fVar11 * fVar6;
            param_3[3] = local_28 - fVar4;
            FUN_03eb4ed0(param_3,(float *)(param_2 + 0x14),param_3);
            fVar5 = *(float *)(param_1 + 0x10);
            fVar4 = *(float *)(param_1 + 0x14);
            fVar6 = *(float *)(param_1 + 0xc);
            param_3[4] = *(float *)(param_1 + 8) - fVar4 * *param_3;
            param_3[5] = fVar6 - fVar4 * param_3[1];
            param_3[6] = fVar5 - fVar4 * param_3[2];
          }
          uVar3 = 1;
          goto LAB_03eafc24;
        }
      }
    }
  }
  uVar3 = 0;
LAB_03eafc24:
  return uVar3 & 1;
}

