
undefined8 FUN_03b66dc4(float *param_1,ushort param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(DAT_05aebb88 + 1) != '\0') {
    lVar2 = *(long *)(DAT_05aebb88 + 0x1a0);
    if (((int)(uint)param_2 < *(int *)(lVar2 + 0x24)) && (*(char *)(lVar2 + 0x10) != '\0')) {
      if (param_2 == 0xffff) {
        return 0;
      }
      if (*(long *)(lVar2 + 0x18) == 0 || *(int *)(lVar2 + 0x30) <= (int)(uint)param_2) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + 0x18) + (ulong)param_2 * 0x120;
      if (((*(ushort *)(lVar2 + 0x118) == param_2) && (*(char *)(lVar2 + 0x7a) != '\0')) &&
         (0 < *(int *)(lVar2 + 0xf8))) {
        lVar4 = 0;
        if (*(long *)(lVar2 + 0xf0) != 0) {
          lVar4 = *(long *)(lVar2 + 0xf0) - (long)*(int *)(lVar2 + 0xfc);
        }
        uVar1 = nn::audio::IsVoiceValid((VoiceType *)(lVar4 + 0x80));
        if ((uVar1 & 1) != 0) {
          fVar5 = *param_1 * *(float *)(lVar2 + (ulong)(*param_3 == 0) * 0x18 + 0x88);
          fVar7 = 128.0;
          if (fVar5 <= 128.0) {
            fVar7 = fVar5;
          }
          fVar6 = -128.0;
          if (-128.0 <= fVar5) {
            fVar6 = fVar7;
          }
          if (NAN(fVar6)) {
            fVar6 = 0.0;
          }
          if (*(long *)(lVar2 + 0xf0) == lVar2 + 0xe8) {
            return 1;
          }
          lVar3 = (long)*(int *)(lVar2 + 0xfc);
          lVar4 = *(long *)(lVar2 + 0xf0) - lVar3;
          do {
            nn::audio::SetVoiceVolume((VoiceType *)(lVar4 + 0x80),fVar6);
            lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
          } while (lVar4 != (lVar2 + 0xe8) - (long)*(int *)(lVar2 + 0xfc));
          return 1;
        }
      }
    }
  }
  return 0;
}

