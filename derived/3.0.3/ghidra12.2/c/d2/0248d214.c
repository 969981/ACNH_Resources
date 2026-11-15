
void FUN_0248d214(long param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_5c;
  float fStack_58;
  float local_54;
  
  if ((param_2 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    fVar6 = *(float *)(lVar5 + 0x278) + 0.0;
    fVar12 = *(float *)(lVar5 + 0x27c) + 5.0;
    fVar11 = *(float *)(lVar5 + 0x280) + 0.0;
    local_5c = (float)*(int *)(param_1 + 0x1902) * 0.001;
    uVar1 = (uint)*(ushort *)(param_1 + 0x1900) * 0x10000 + 0x20000000 >> 0x1e;
    fStack_58 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_54 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    if (uVar1 < 4) {
                    /* WARNING: Jumptable with 0 entries at 0x0248d354 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0248d358 + (ulong)(byte)(&DAT_0417aa13)[uVar1] * 4))();
      return;
    }
    iVar9 = (int)local_5c;
    bVar2 = local_5c < 0.0;
    bVar3 = local_54 < 0.0;
    iVar10 = (int)local_54;
    fVar7 = (float)FUN_016e026c(0,&local_5c,0,0);
    *(float *)(param_1 + 0x22b0) = fVar6;
    *(float *)(param_1 + 0x22b4) = fVar12;
    *(float *)(param_1 + 0x22b8) = fVar11;
    fVar8 = (((float)(int)((int)((float)iVar9 / 5.0) - (uint)bVar2 & 0xfffffffe) * 5.0 + 5.0) -
            fVar6) * 0.08;
    uVar4 = 0x11;
    fVar11 = (((float)(int)((int)((float)iVar10 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0) -
             fVar11) * 0.08;
    fVar6 = (fVar7 - (fVar12 + -0.2 + -0.4 + -0.6 + -0.8 + -1.0 + -1.2 + -1.4 + -1.6 + -1.8000001 +
                     -2.0)) / 10.0;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1900) * 0x10000 + 0x20000000 >> 0x1e;
    fStack_58 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_5c = (float)*(int *)(param_1 + 0x1902) * 0.001;
    local_54 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    if (uVar1 < 4) {
                    /* WARNING: Jumptable with 0 entries at 0x0248d2ac */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0248d2b0 + (ulong)(byte)(&DAT_0417aa17)[uVar1] * 4))();
      return;
    }
    iVar9 = (int)local_5c;
    bVar2 = local_5c < 0.0;
    bVar3 = local_54 < 0.0;
    iVar10 = (int)local_54;
    fVar6 = (float)FUN_016e026c(0,&local_5c,0,0);
    fVar8 = (((float)(int)((int)((float)iVar9 / 5.0) - (uint)bVar2 & 0xfffffffe) * 5.0 + 5.0) -
            *(float *)(param_1 + 0x22b0)) * 0.2;
    fVar11 = (((float)(int)((int)((float)iVar10 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0) -
             *(float *)(param_1 + 0x22b8)) * 0.2;
    uVar4 = 5;
    fVar6 = (fVar6 - (*(float *)(param_1 + 0x22b4) + -0.2 + -0.4 + -0.6 + -0.8 + -1.0)) / 5.0;
  }
  *(float *)(param_1 + 0x22bc) = fVar8;
  *(float *)(param_1 + 0x22c0) = fVar6;
  *(float *)(param_1 + 0x22c4) = fVar11;
  *(undefined4 *)(param_1 + 0x22c8) = uVar4;
  return;
}

