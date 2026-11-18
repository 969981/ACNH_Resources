
void FUN_032c42b8(long param_1,float *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar1 = (long *)(param_1 + 8) + param_4;
  if (0xf < param_4) {
    plVar1 = (long *)(param_1 + 8);
  }
  lVar4 = *plVar1;
  if ((param_3 & 1) == 0) {
    cVar3 = *(char *)(lVar4 + 4);
    *(undefined2 *)(lVar4 + 4) = 0;
    *(char *)(lVar4 + 6) = cVar3;
    if (cVar3 != '\0') {
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar4 + 0x14);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar4 + 0x10);
    }
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 8) = 0xff7fffffff7fffff;
    *(undefined8 *)(lVar4 + 0x18) = 0xff7fffffff7fffff;
    return;
  }
  bVar2 = *(byte *)(lVar4 + 4);
  *(undefined1 *)(lVar4 + 6) = 0;
  *(byte *)(lVar4 + 5) = bVar2 ^ 1;
  *(undefined1 *)(lVar4 + 4) = 1;
  if (bVar2 == 0) {
    *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar4 + 0xc);
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar4 + 8);
    *(float *)(lVar4 + 8) = *param_2;
    *(float *)(lVar4 + 0xc) = param_2[1];
    *(float *)(lVar4 + 0x18) = *param_2;
    fVar6 = param_2[1];
    *(undefined1 *)(lVar4 + 7) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0xff7fffffff7fffff;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(float *)(lVar4 + 0x1c) = fVar6;
    return;
  }
  fVar5 = *(float *)(lVar4 + 8);
  fVar7 = *(float *)(lVar4 + 0xc);
  fVar6 = fVar5;
  if (1.0 <= ABS(*param_2 - fVar5)) {
    fVar6 = *param_2;
  }
  fVar8 = fVar7;
  if (1.0 <= ABS(param_2[1] - fVar7)) {
    fVar8 = param_2[1];
  }
  *(float *)(lVar4 + 8) = fVar6;
  *(float *)(lVar4 + 0xc) = fVar8;
  *(float *)(lVar4 + 0x28) = fVar6 - fVar5;
  *(float *)(lVar4 + 0x2c) = fVar8 - fVar7;
  return;
}

