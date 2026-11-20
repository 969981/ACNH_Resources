
void FUN_03eb5220(float param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if (param_1 <= 0.0) {
    uVar2 = *param_3;
    *(undefined8 *)(param_2 + 2) = param_3[1];
    *(undefined8 *)param_2 = uVar2;
    uVar2 = param_3[2];
    *(undefined8 *)(param_2 + 6) = param_3[3];
    *(undefined8 *)(param_2 + 4) = uVar2;
    uVar3 = param_3[5];
    uVar2 = param_3[4];
  }
  else {
    if (param_1 < 1.0) {
      FUN_02a08d44(auStack_60,param_3);
      FUN_02a08d44(auStack_70,param_4);
      FUN_03eb4f1c(param_1,&local_50,auStack_60,auStack_70);
      fVar1 = 1.0 - param_1;
      fVar7 = fStack_44 * -2.0;
      fVar6 = local_50 + local_50;
      fVar4 = local_50 * local_50 * -2.0 + 1.0;
      *param_2 = fStack_4c * fStack_4c * -2.0 + 1.0 + local_48 * local_48 * -2.0;
      param_2[1] = local_48 * fVar7 + fStack_4c * fVar6;
      fStack_44 = fStack_44 + fStack_44;
      param_2[2] = fStack_4c * fStack_44 + local_48 * fVar6;
      param_2[3] = *(float *)((long)param_4 + 0xc) * param_1 +
                   fVar1 * *(float *)((long)param_3 + 0xc);
      param_2[4] = local_48 * fStack_44 + fStack_4c * fVar6;
      param_2[5] = fVar4 + local_48 * local_48 * -2.0;
      param_2[6] = local_50 * fVar7 + local_48 * (fStack_4c + fStack_4c);
      fVar5 = *(float *)((long)param_3 + 0x1c);
      fVar8 = *(float *)((long)param_4 + 0x1c);
      param_2[9] = local_50 * fStack_44 + local_48 * (fStack_4c + fStack_4c);
      param_2[10] = fVar4 + fStack_4c * fStack_4c * -2.0;
      param_2[7] = fVar8 * param_1 + fVar1 * fVar5;
      param_2[8] = fStack_4c * fVar7 + local_48 * fVar6;
      param_2[0xb] = *(float *)((long)param_4 + 0x2c) * param_1 +
                     fVar1 * *(float *)((long)param_3 + 0x2c);
      return;
    }
    uVar2 = *param_4;
    *(undefined8 *)(param_2 + 2) = param_4[1];
    *(undefined8 *)param_2 = uVar2;
    uVar2 = param_4[2];
    *(undefined8 *)(param_2 + 6) = param_4[3];
    *(undefined8 *)(param_2 + 4) = uVar2;
    uVar3 = param_4[5];
    uVar2 = param_4[4];
  }
  *(undefined8 *)(param_2 + 10) = uVar3;
  *(undefined8 *)(param_2 + 8) = uVar2;
  return;
}

