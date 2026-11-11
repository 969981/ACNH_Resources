
bool FUN_0047f930(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3._0_4_ = ABS(*param_2 - (float)*param_1);
  auVar3._4_4_ = ABS(param_2[1] - (float)((ulong)*param_1 >> 0x20));
  auVar3._8_4_ = ABS(param_2[2] - (float)param_1[1]);
  auVar3._12_4_ = ABS(param_2[3] - (float)((ulong)param_1[1] >> 0x20));
  auVar4._4_4_ = ABS((float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) -
                     (float)((ulong)param_1[2] >> 0x20));
  auVar4._0_4_ = ABS((float)*(undefined8 *)(param_2 + 4) - (float)param_1[2]);
  auVar4._8_4_ = ABS((float)*(undefined8 *)(param_2 + 6) - (float)param_1[3]);
  auVar4._12_4_ =
       ABS((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) - (float)((ulong)param_1[3] >> 0x20)
          );
  auVar4 = NEON_fmax(auVar3,auVar4,4);
  fVar1 = *param_3;
  auVar2._4_4_ = ABS((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) -
                     (float)((ulong)param_1[4] >> 0x20));
  auVar2._0_4_ = ABS((float)*(undefined8 *)(param_2 + 8) - (float)param_1[4]);
  auVar2._8_4_ = ABS((float)*(undefined8 *)(param_2 + 10) - (float)param_1[5]);
  auVar2._12_4_ =
       ABS((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) -
           (float)((ulong)param_1[5] >> 0x20));
  auVar4 = NEON_fmax(auVar4,auVar2,4);
  return auVar4._8_4_ <= fVar1 && (auVar4._0_4_ <= fVar1 && auVar4._4_4_ <= fVar1);
}

