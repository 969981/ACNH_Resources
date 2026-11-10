
void FUN_0034e9f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  (**(code **)PTR_DAT_04bcfbd0)();
  uVar6 = FUN_0034ce14(param_3[2]);
  (**(code **)PTR_DAT_04bbd900)(param_1,uVar6);
  uVar6 = FUN_0034cd90(param_3[1]);
  (**(code **)PTR_DAT_04bbd908)(param_1,uVar6);
  uVar6 = FUN_0034cda0(*param_3);
  (**(code **)PTR_DAT_04bbd910)(param_1,uVar6);
  iVar2 = *(int *)(param_3 + 0xc);
  lVar1 = param_1 + 4;
  *(float *)(param_1 + 0x20) = (float)iVar2;
  fVar7 = *(float *)(param_3 + 0x10);
  *(float *)(param_1 + 0x24) = fVar7;
  fVar8 = *(float *)(param_3 + 8);
  *(float *)(param_1 + 0x28) = fVar8;
  bVar5 = false;
  if ((fVar8 == 0.0) && (bVar5 = false, !NAN(fVar7))) {
    bVar5 = fVar7 == 0.0;
  }
  uVar6 = 7;
  if (bVar5 && iVar2 == 0) {
    uVar6 = 0;
  }
  (*DAT_04c626c0)(param_1,uVar6);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  (*DAT_04c625e8)(lVar1);
  (*DAT_04c625f0)(lVar1,(byte)param_3[4] >> 1 & 1);
  bVar3 = param_3[0x18];
  if (bVar3 < 2) {
    bVar3 = 0;
  }
  (*DAT_04c625f8)(lVar1,bVar3);
  (*DAT_04c62600)(lVar1,param_3[0x1a] & 1);
  bVar4 = *(byte *)(param_1 + 0x2d);
  bVar3 = (byte)param_3[4] >> 1 & 1;
  *(byte *)(param_1 + 0x2d) = bVar4 & 0xfe | bVar3;
  bVar3 = (bVar4 & 0xfc | bVar3 | ((byte)param_3[4] >> 2 & 1) << 1) ^ 2;
  *(byte *)(param_1 + 0x2d) = bVar3;
  bVar3 = (bVar3 & 0xf8 | bVar3 & 3 | (param_3[4] & 1) << 2) ^ 4;
  *(byte *)(param_1 + 0x2d) = bVar3;
  *(byte *)(param_1 + 0x2d) = bVar3 & 0xf7 | (param_3[6] == '\x01') << 3;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}

