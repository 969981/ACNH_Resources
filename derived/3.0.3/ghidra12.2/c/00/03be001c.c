
void FUN_03be001c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x70) == *(int *)(lVar1 + 0x10))) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x7a);
    param_2 = param_2 & 0xffff;
    lVar2 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(param_1 + 0x7a) | param_2) & 1) != 0) {
      fVar4 = *(float *)(param_1 + 0x7c) * *(float *)(lVar2 + 0x9c);
      fVar5 = 0.0;
      if (0.0 <= fVar4) {
        fVar5 = fVar4;
      }
      if (0.0 <= fVar5) {
        *(float *)(lVar1 + 0x40) = fVar5;
        uVar3 = (uint)*(ushort *)(param_1 + 0x7a);
      }
    }
    if (((uVar3 | param_2) >> 1 & 1) != 0) {
      fVar4 = *(float *)(lVar2 + 0xa0);
      fVar5 = *(float *)(param_1 + 0x80);
      if (0.0 <= fVar4) {
        if (0.0 <= fVar5) {
          fVar5 = fVar5 * fVar4;
        }
        else {
          fVar5 = fVar4;
        }
      }
      *(float *)(lVar1 + 0x44) = fVar5;
      uVar3 = (uint)*(ushort *)(param_1 + 0x7a);
    }
    if ((((uVar3 | param_2) >> 2 & 1) != 0) &&
       (fVar5 = *(float *)(param_1 + 0x84) * *(float *)(lVar2 + 0xa4), 0.0 <= fVar5)) {
      *(float *)(lVar1 + 0x58) = fVar5;
      uVar3 = (uint)*(ushort *)(param_1 + 0x7a);
    }
    if (((uVar3 | param_2) >> 3 & 1) != 0) {
      *(float *)(lVar1 + 0x60) = *(float *)(param_1 + 0x88) + *(float *)(lVar2 + 0xa8);
      uVar3 = (uint)*(ushort *)(param_1 + 0x7a);
    }
    if (((((uVar3 | param_2) >> 5 & 1) != 0) &&
        (fVar5 = *(float *)(param_1 + 0x8c) * *(float *)(lVar2 + 0xb0), 0.0 <= fVar5)) &&
       (fVar5 <= 1.0)) {
      *(float *)(lVar1 + 0xf4) = fVar5;
    }
    if ((param_2 >> 4 & 1) != 0) {
      *(int *)(lVar1 + 0x6c) = (int)(long)(*(float *)(lVar2 + 0xac) * 6.8356525e+08);
    }
    if ((param_2 >> 6 & 1) != 0) {
      *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(lVar2 + 0xb4);
    }
    if ((param_2 >> 7 & 1) != 0) {
      *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar2 + 0xb8);
    }
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}

