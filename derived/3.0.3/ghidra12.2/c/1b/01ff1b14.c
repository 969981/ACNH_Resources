
void FUN_01ff1b14(long *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)(param_1 + 0x15eb);
  (**(code **)(*param_1 + 0x4f0))();
  lVar4 = param_1[1];
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined4 *)(param_1 + 0x15ec) = 0;
  lVar5 = *(long *)(lVar4 + 0x68);
  if (lVar5 != 0) {
    fVar6 = *(float *)(lVar5 + 0x278);
    fVar7 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
    fVar9 = fVar6 + -2.5;
    fVar8 = fVar7 + -2.5;
    iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    *pfVar1 = fVar6 - ((float)iVar3 * 5.0 + (float)(iVar3 + 1) * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x15ec) =
         fVar7 - ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5;
  }
  iVar3 = FUN_021d5df0(lVar4 + 0x3e0);
  if (iVar3 == 2) {
    param_1[0xfe0] = (long)param_1;
    param_1[0xfe1] = (long)&LAB_01ff21f8;
    param_1[0xfdf] = (long)&PTR_LAB_04a6cb80;
    param_1[0xfe2] = 0;
    *(byte *)(param_1[1] + 0x286) = *(byte *)(param_1[1] + 0x286) | 0x40;
    *(byte *)(param_1[1] + 0x286) = *(byte *)(param_1[1] + 0x286) | 8;
    param_1[0x15ab] = param_1[0x15ab] & 0xfffffffffffffffb;
  }
  *(undefined1 *)(*(long *)(param_1[1] + 0xa0) + 0x4f42) = 1;
  return;
}

