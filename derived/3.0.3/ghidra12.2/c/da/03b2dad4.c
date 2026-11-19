
float * FUN_03b2dad4(long *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  byte bVar6;
  float fVar7;
  byte bVar8;
  float fVar9;
  byte bVar10;
  float fVar11;
  
  lVar3 = FUN_0037e610(param_2,"CaptureBGColor");
  lVar4 = FUN_0037e610(param_2,"CaptureBGAlpha");
  lVar2 = DAT_05ae7600;
  if ((lVar3 == 0) || (*(short *)(lVar3 + 8) != 3)) {
    if ((lVar4 == 0) || (*(int *)(lVar4 + (ulong)*(uint *)(lVar4 + 4)) != 0xff)) {
      pfVar5 = (float *)0x0;
    }
    else {
      pfVar5 = (float *)0x0;
      *param_4 = *param_4 | 2;
    }
  }
  else {
    pbVar1 = (byte *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
    if (DAT_05ae7600 == 0) {
      pfVar5 = malloc(0x10);
    }
    else {
      if (param_1 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_1 = (long *)(lVar2 + 8);
        if (lVar3 != 0) {
          param_1 = (long *)(lVar3 + 0xa8);
        }
        param_1 = (long *)*param_1;
      }
      pfVar5 = (float *)(**(code **)(*param_1 + 0x30))(param_1,0x10,8);
    }
    bVar6 = *pbVar1;
    bVar8 = pbVar1[4];
    bVar10 = pbVar1[8];
    pfVar5[3] = 0.0;
    fVar7 = (float)NEON_ucvtf((uint)bVar6);
    fVar9 = (float)NEON_ucvtf((uint)bVar8);
    fVar11 = (float)NEON_ucvtf((uint)bVar10);
    *pfVar5 = fVar7 / 255.0;
    pfVar5[1] = fVar9 / 255.0;
    pfVar5[2] = fVar11 / 255.0;
    if (lVar4 != 0) {
      pfVar5[3] = (float)*(int *)(lVar4 + (ulong)*(uint *)(lVar4 + 4)) / 255.0;
    }
  }
  return pfVar5;
}

