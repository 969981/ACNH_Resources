
undefined8 FUN_03b73594(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  
  if (param_1 <= 0.0) {
    uVar2 = 0;
    if ((((0.0 <= param_2) && (param_2 <= 1.0)) && (uVar2 = 0, 0.0 < param_4)) &&
       ((0.0 < param_3 && (param_3 < param_4 * 0.5)))) {
      if (param_1 == 0.0) {
        *(undefined2 *)(param_5 + 1) = 0;
        *param_5 = 0x4000;
      }
      else if (param_2 == 1.0) {
        fVar5 = (param_1 / 20.0) * 2.3025851;
        iVar3 = (int)(fVar5 * 1.442695);
        fVar5 = ((fVar5 - (float)iVar3 * 0.6931472) + 0.6931472) * 23.08312;
        uVar4 = (ulong)(uint)(int)fVar5;
        lVar1 = uVar4 * 8;
        fVar6 = *(float *)(&DAT_0419abb0 + lVar1);
        fVar7 = *(float *)(&DAT_0419abb4 + lVar1);
        *(undefined8 *)((long)param_5 + 2) = 0;
        *(short *)param_5 =
             (short)(int)(ABS((float)((int)(fVar6 + fVar7 * (fVar5 - (float)uVar4)) +
                                     iVar3 * 0x800000)) * 16384.0);
      }
      else {
        fVar5 = (float)FUN_038cd7d8((((1.0 - param_2) * param_1) / 10.0) * 2.3025851,0);
        fVar6 = cosf((param_3 * 6.2831855) / param_4);
        __x = -(fVar5 * fVar5) * (1.0 - fVar6 * fVar6) + (1.0 - fVar6) * (fVar5 + fVar5);
        fVar7 = SQRT(__x);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(__x);
        }
        fVar6 = ((1.0 - fVar6 * fVar5) - fVar7) / (1.0 - fVar5);
        fVar5 = (float)FUN_038cd7d8(((param_1 * param_2) / 20.0) * 2.3025851);
        *(undefined4 *)((long)param_5 + 2) = 0;
        *(undefined2 *)(param_5 + 1) = 0;
        *(short *)param_5 = (short)(int)(fVar5 * (1.0 - fVar6) * 16384.0);
        *(short *)((long)param_5 + 6) = (short)(int)(fVar6 * 16384.0);
      }
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}

