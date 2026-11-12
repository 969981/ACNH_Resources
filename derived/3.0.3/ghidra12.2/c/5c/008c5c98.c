
void FUN_008c5c98(long param_1,uint *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_70;
  int iStack_6c;
  int local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  
  local_70 = param_3;
  FUN_008c0a74(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x26458) + (long)param_3 * 8));
  iVar2 = 0;
  if (*(char *)(param_1 + 0x37fb5) != '\0') {
    iVar2 = *(int *)(param_1 + 0x315cc);
  }
  uVar3 = iVar2 + *(int *)(param_1 + 0x315d4);
  uVar1 = (ulong)(uVar3 >> 0x18);
  fVar4 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
  fVar5 = (float)(&DAT_04199798)[uVar1 * 4] + fVar4 * (float)(&DAT_0419979c)[uVar1 * 4];
  fVar4 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar4 * (float)(&DAT_041997a4)[uVar1 * 4];
  fVar6 = fVar5 * 0.0;
  uVar3 = *param_2 + local_70;
  *param_2 = uVar3;
  param_2[1] = param_2[1] + iStack_6c;
  param_2[2] = param_2[2] + local_68;
  param_2[3] = (uint)(local_64 + (float)param_2[3]);
  param_2[4] = (uint)(local_5c * fVar6 + fStack_60 * fVar4 + fStack_58 * (fVar5 + 0.0) +
                     (float)param_2[4]);
  param_2[7] = (uint)(local_54 + (float)param_2[7]);
  param_2[8] = (uint)(fStack_50 + (float)param_2[8]);
  param_2[9] = (uint)(local_4c + (float)param_2[9]);
  param_2[10] = (uint)(fStack_48 + (float)param_2[10]);
  param_2[5] = (uint)(local_5c * (fVar6 * 0.0 + 1.0) + fStack_60 * fVar4 * 0.0 + fStack_58 * fVar6 +
                     (float)param_2[5]);
  param_2[6] = (uint)((local_5c * fVar4 * 0.0 - fStack_60 * fVar5) + fStack_58 * fVar4 +
                     (float)param_2[6]);
  param_2[0xb] = (uint)(local_44 + (float)param_2[0xb]);
  param_2[0xc] = (uint)(fStack_40 + (float)param_2[0xc]);
  param_2[0xd] = (uint)(local_3c + (float)param_2[0xd]);
  param_2[0xe] = (uint)(fStack_38 + (float)param_2[0xe]);
  param_2[0xf] = (uint)(local_34 + (float)param_2[0xf]);
  if (1 < *(int *)(param_1 + 0x410) - 0x21U) {
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else {
      if (uVar3 >> 0x1e == 0) {
        return;
      }
      uVar3 = 0x40000000;
    }
    *param_2 = uVar3;
  }
  return;
}

