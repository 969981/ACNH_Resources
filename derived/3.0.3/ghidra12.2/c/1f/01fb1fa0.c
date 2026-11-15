
undefined8 FUN_01fb1fa0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar6 = *(float *)(lVar4 + 0x278);
  fVar5 = (float)(*(int *)(param_3 + 0x20) + 1) * 5.0 + 5.0;
  bVar1 = false;
  bVar2 = true;
  if ((float)(*(int *)(param_3 + 0x10) + -1) * 5.0 <= fVar6) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6) && !NAN(fVar5)) {
      bVar1 = fVar6 == fVar5;
      bVar2 = fVar5 <= fVar6;
    }
  }
  if (!bVar2 || bVar1) {
    fVar6 = *(float *)(lVar4 + 0x280);
    fVar5 = (float)(*(int *)(param_3 + 0x24) + 1) * 5.0 + 5.0;
    bVar1 = false;
    bVar2 = true;
    if ((float)(*(int *)(param_3 + 0x14) + -1) * 5.0 <= fVar6) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar6) && !NAN(fVar5)) {
        bVar1 = fVar6 == fVar5;
        bVar2 = fVar5 <= fVar6;
      }
    }
    if (!bVar2 || bVar1) {
      FUN_0124c030(auStack_48);
      iVar3 = FUN_0123db50(auStack_40,local_38);
      if ((8 < iVar3 - 0x23U) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68),
         fVar5 = *(float *)(lVar4 + 0x278) -
                 ((float)*(int *)(param_3 + 0x10) * 5.0 +
                 (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0) * 0.5,
         fVar6 = *(float *)(lVar4 + 0x280) -
                 ((float)*(int *)(param_3 + 0x14) * 5.0 +
                 (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0) * 0.5,
         100.0 <= fVar6 * fVar6 + fVar5 * fVar5)) {
        return 1;
      }
    }
  }
  return 0;
}

