
void FUN_023df4d4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_1c;
  float fStack_18;
  float local_14;
  
  if ((*(long *)(param_1 + 0x70) != 0) &&
     ((iVar1 = *(int *)(*(long *)(param_1 + 0x70) + 0x280), iVar1 == 0x47 ||
      ((iVar1 == 0x48 && (*(char *)(param_1 + 0x190c) != '\0')))))) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) {
      local_1c = 0.0;
      fStack_18 = 0.0;
      local_14 = 0.0;
    }
    else {
      uVar3 = (ulong)(*(uint *)(lVar2 + 0x2b4) >> 0x14) & 0xff0;
      fVar4 = (float)(*(uint *)(lVar2 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar5 = *(float *)((long)&DAT_04199798 + uVar3) +
              fVar4 * *(float *)((long)&DAT_0419979c + uVar3);
      fVar4 = *(float *)((long)&DAT_041997a0 + uVar3) +
              fVar4 * *(float *)((long)&DAT_041997a4 + uVar3);
      fVar6 = fVar5 * 0.0;
      local_1c = *(float *)(lVar2 + 0x278) + fVar6 * 0.0 + fVar4 * 0.0 + (fVar5 + 0.0) * 10.0;
      fStack_18 = *(float *)(lVar2 + 0x27c) +
                  (fVar6 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar6 * 10.0;
      local_14 = *(float *)(lVar2 + 0x280) + (fVar4 * 0.0 * 0.0 - fVar5 * 0.0) + fVar4 * 10.0;
    }
    FUN_01261e40(0x3f800000,PTR_DAT_04bbcbf0,&local_1c,0,0);
  }
  return;
}

