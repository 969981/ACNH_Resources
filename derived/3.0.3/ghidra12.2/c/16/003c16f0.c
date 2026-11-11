
void FUN_003c16f0(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= *param_2) {
    fVar1 = *param_2;
  }
  if (fVar1 != *param_3) {
    *param_3 = fVar1;
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  fVar1 = param_2[1];
  if (fVar1 != param_3[1]) {
    param_3[1] = fVar1;
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    fVar1 = param_3[1];
  }
  if (fVar1 == 1.4013e-45) {
    if (param_2[2] != param_3[2]) {
      param_3[2] = param_2[2];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[3] != param_3[3]) {
      param_3[3] = param_2[3];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[4] != param_3[4]) {
      param_3[4] = param_2[4];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[5] != param_3[5]) {
      param_3[5] = param_2[5];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[6] != param_3[6]) {
      param_3[6] = param_2[6];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[7] != param_3[7]) {
      param_3[7] = param_2[7];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[8] != param_3[8]) {
      param_3[8] = param_2[8];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[9] != param_3[9]) {
      param_3[9] = param_2[9];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[10] != param_3[10]) {
      param_3[10] = param_2[10];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[0xb] != param_3[0xb]) {
      param_3[0xb] = param_2[0xb];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[0xc] != param_3[0xc]) {
      param_3[0xc] = param_2[0xc];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[0xd] != param_3[0xd]) {
      param_3[0xd] = param_2[0xd];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    fVar1 = param_3[1];
  }
  if (fVar1 == 0.0) {
    if (param_2[0xe] != param_3[0xe]) {
      param_3[0xe] = param_2[0xe];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
    if (param_2[0xf] != param_3[0xf]) {
      param_3[0xf] = param_2[0xf];
      *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    }
  }
  if (param_2[0x10] != param_3[0x10]) {
    param_3[0x10] = param_2[0x10];
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  if (param_2[0x11] != param_3[0x11]) {
    param_3[0x11] = param_2[0x11];
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  if (param_2[0x12] != param_3[0x12]) {
    param_3[0x12] = param_2[0x12];
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  if (param_2[0x13] != param_3[0x13]) {
    param_3[0x13] = param_2[0x13];
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  return;
}

