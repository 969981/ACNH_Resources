
undefined8 FUN_03bc9d70(long param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte abStack_18 [8];
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar2 = 0;
  abStack_18[0] = 0;
  abStack_18[1] = 0;
  abStack_18[2] = 0;
  abStack_18[3] = 0;
  abStack_18[4] = 0;
  abStack_18[5] = 0;
  if ((-1 < (int)param_3) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    if (param_3 < *(byte *)(lVar3 + 0x30)) {
      pbVar4 = (byte *)(lVar3 + 0x31);
      if (param_3 != 0) {
        if (param_3 != 1) {
          uVar5 = param_3 & 0xfffffffe;
          do {
            uVar5 = uVar5 - 2;
            pbVar4 = pbVar4 + (ulong)*pbVar4 * 2 + 1 + (ulong)pbVar4[(ulong)*pbVar4 * 2 + 1] * 2 + 1
            ;
          } while (uVar5 != 0);
        }
        if ((param_3 & 1) != 0) {
          pbVar4 = pbVar4 + (ulong)*pbVar4 * 2 + 1;
        }
      }
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        *param_2 = 0;
        param_2[1] = 0x3f800000;
      }
      else {
        if (bVar1 == 1) {
          uVar6 = 0;
        }
        else {
          uVar7 = 0;
          pbVar8 = pbVar4 + 3;
          do {
            uVar6 = uVar7 + 2;
            abStack_18[uVar7] = pbVar8[-2];
            abStack_18[uVar7 + 1] = *pbVar8;
            uVar7 = uVar6;
            pbVar8 = pbVar8 + 4;
          } while (((ulong)bVar1 & 0xfe) != uVar6);
        }
        if ((bVar1 & 1) != 0) {
          abStack_18[uVar6] = pbVar4[uVar6 * 2 + 1];
        }
        *param_2 = (uint)bVar1;
        param_2[1] = 0x3f800000;
        memcpy(param_2 + 2,abStack_18,(ulong)bVar1);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

