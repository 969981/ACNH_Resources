
void FUN_01f0a658(long *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  pfVar1 = (float *)(param_1 + 0x15eb);
  (**(code **)(*param_1 + 0x4f0))();
  lVar6 = param_1[1];
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined4 *)(param_1 + 0x15ec) = 0;
  lVar6 = *(long *)(lVar6 + 0x68);
  if (lVar6 != 0) {
    fVar7 = *(float *)(lVar6 + 0x278);
    fVar8 = *(float *)(lVar6 + 0x280);
    *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
    fVar10 = fVar7 + -2.5;
    fVar9 = fVar8 + -2.5;
    iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iVar5 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    *pfVar1 = fVar7 - ((float)iVar4 * 5.0 + (float)(iVar4 + 1) * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x15ec) =
         fVar8 - ((float)iVar5 * 5.0 + (float)(iVar5 + 1) * 5.0 + 5.0) * 0.5;
  }
  lVar6 = param_1[0x1549];
  if (lVar6 != 0) {
    *(uint *)(lVar6 + 0x7f0) = *(uint *)(lVar6 + 0x7f0) | 0x40;
  }
  (**(code **)(*param_1 + 0x540))(param_1);
  uVar3 = *(uint *)(param_1 + 0x15f0);
  if (uVar3 < 3) {
    local_38 = 0xffffffff;
    local_48 = 0;
    local_40 = 0;
    local_4c = *(undefined4 *)PTR_DAT_04bb3238;
    local_34 = 0;
    (**(code **)(*param_1 + 0x520))(param_1,&local_4c);
    puVar2 = *(undefined4 **)PTR_DAT_04bb9a68 + (ulong)uVar3 * 7;
    if (2 < uVar3) {
      puVar2 = *(undefined4 **)PTR_DAT_04bb9a68;
    }
    *puVar2 = local_4c;
    puVar2[1] = (undefined4)local_48;
    puVar2[2] = local_48._4_4_;
    puVar2[3] = (undefined4)local_40;
    puVar2[4] = local_40._4_4_;
    *(undefined1 *)(puVar2 + 6) = local_34;
    puVar2[5] = local_38;
  }
  return;
}

