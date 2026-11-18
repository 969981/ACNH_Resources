
void FUN_0327e450(long *param_1,long param_2,float *param_3)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = *(long *)(param_2 + 0x20);
  lVar4 = param_1[1];
  uVar1 = *(ushort *)(lVar5 + 0x30);
  uVar2 = *(ushort *)(lVar5 + 0x32);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  fVar7 = (float)uVar1;
  uVar1 = uVar2;
  if (*(short *)(lVar5 + 0x3a) != 3) {
    uVar1 = 1;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  fVar8 = (float)uVar1;
  FUN_01560750(lVar4,lVar5,*(undefined1 *)(lVar4 + 0xbe),*(undefined2 *)(lVar4 + 0xbc));
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(long *)(*param_1 + 0x20) = param_1[1];
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(float *)(lVar4 + 0x18) = fVar7;
  *(float *)(lVar4 + 0x1c) = fVar8;
  lVar4 = *param_1;
  if (param_3 != (float *)0x0) {
    fVar7 = *param_3;
    fVar8 = param_3[1];
  }
  *(float *)(lVar4 + 8) = fVar7;
  *(float *)(lVar4 + 0xc) = fVar8;
  lVar4 = param_1[3];
  if (*(uint *)(lVar4 + 0x18) < 6) {
    lVar5 = *param_1;
    if ((1 << (ulong)(*(uint *)(lVar4 + 0x18) & 0x1f) & 0x39U) == 0) {
      fVar8 = *(float *)(lVar5 + 8);
      fVar7 = *(float *)(lVar5 + 0xc);
    }
    else {
      fVar7 = *(float *)(lVar5 + 8);
      fVar8 = *(float *)(lVar5 + 0xc);
    }
    fVar6 = fVar7;
    fVar3 = 0.0;
    if (fVar7 <= 0.0) {
      fVar6 = 0.0;
      fVar3 = fVar7;
    }
    *(float *)(lVar4 + 0x10) = fVar6;
    fVar6 = fVar8;
    fVar7 = 0.0;
    if (fVar8 <= 0.0) {
      fVar6 = 0.0;
      fVar7 = fVar8;
    }
    *(float *)(lVar4 + 8) = fVar3;
    *(float *)(lVar4 + 0xc) = fVar7;
    *(float *)(lVar4 + 0x14) = fVar6;
  }
  return;
}

