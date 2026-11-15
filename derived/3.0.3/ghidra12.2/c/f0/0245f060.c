
void FUN_0245f060(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_4c;
  float fStack_48;
  float local_44;
  
  puVar2 = PTR_DAT_04bb2d00;
  lVar3 = *(long *)(param_1 + 0x68);
  fVar5 = 0.0;
  local_4c = 0.0;
  fStack_48 = 0.0;
  local_44 = 0.0;
  if (lVar3 != 0) {
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar3 + 0x2b4) >> 0x14) & 0xff0));
    fVar4 = (float)(*(uint *)(lVar3 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar6 = *pfVar1 + fVar4 * pfVar1[1];
    fVar4 = pfVar1[2] + fVar4 * pfVar1[3];
    fVar7 = fVar6 * 0.0;
    local_4c = *(float *)(lVar3 + 0x278) + fVar7 * 0.0 + fVar4 * 0.0 + (fVar6 + 0.0) * 5.0;
    fStack_48 = *(float *)(lVar3 + 0x27c) +
                (fVar7 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar7 * 5.0;
    local_44 = *(float *)(lVar3 + 0x280) + (fVar4 * 0.0 * 0.0 - fVar6 * 0.0) + fVar4 * 5.0;
  }
  FUN_0245ec30(param_1,&local_4c);
  lVar3 = *(long *)(param_1 + 0x68);
  fStack_48 = 0.0;
  local_44 = 0.0;
  if (lVar3 != 0) {
    pfVar1 = (float *)(puVar2 + ((ulong)(*(uint *)(lVar3 + 0x2b4) >> 0x14) & 0xff0 ^ 0x800));
    fVar5 = (float)(*(uint *)(lVar3 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar6 = *pfVar1 + fVar5 * pfVar1[1];
    fVar4 = pfVar1[2] + fVar5 * pfVar1[3];
    fVar7 = fVar6 * 0.0;
    fVar5 = *(float *)(lVar3 + 0x278) + fVar7 * 0.0 + fVar4 * 0.0 + (fVar6 + 0.0) * 5.0;
    fStack_48 = *(float *)(lVar3 + 0x27c) +
                (fVar7 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar7 * 5.0;
    local_44 = *(float *)(lVar3 + 0x280) + (fVar4 * 0.0 * 0.0 - fVar6 * 0.0) + fVar4 * 5.0;
  }
  local_4c = fVar5;
  FUN_0245ec30(param_1,&local_4c);
  lVar3 = *(long *)(param_1 + 0x68);
  fVar5 = 0.0;
  local_4c = 0.0;
  fStack_48 = 0.0;
  local_44 = 0.0;
  if (lVar3 != 0) {
    pfVar1 = (float *)(puVar2 + (ulong)(*(uint *)(lVar3 + 0x2b4) + 0x40000000 >> 0x18) * 0x10);
    fVar4 = (float)(*(uint *)(lVar3 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar6 = *pfVar1 + fVar4 * pfVar1[1];
    fVar4 = pfVar1[2] + fVar4 * pfVar1[3];
    fVar7 = fVar6 * 0.0;
    local_4c = *(float *)(lVar3 + 0x278) + fVar7 * 0.0 + fVar4 * 0.0 + (fVar6 + 0.0) * 5.0;
    fStack_48 = *(float *)(lVar3 + 0x27c) +
                (fVar7 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar7 * 5.0;
    local_44 = *(float *)(lVar3 + 0x280) + (fVar4 * 0.0 * 0.0 - fVar6 * 0.0) + fVar4 * 5.0;
  }
  FUN_0245ec30(param_1,&local_4c);
  lVar3 = *(long *)(param_1 + 0x68);
  fStack_48 = 0.0;
  local_44 = 0.0;
  if (lVar3 != 0) {
    pfVar1 = (float *)(puVar2 + (ulong)(*(uint *)(lVar3 + 0x2b4) + 0xc0000000 >> 0x18) * 0x10);
    fVar5 = (float)(*(uint *)(lVar3 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar6 = *pfVar1 + fVar5 * pfVar1[1];
    fVar4 = pfVar1[2] + fVar5 * pfVar1[3];
    fVar7 = fVar6 * 0.0;
    fVar5 = *(float *)(lVar3 + 0x278) + fVar7 * 0.0 + fVar4 * 0.0 + (fVar6 + 0.0) * 5.0;
    fStack_48 = *(float *)(lVar3 + 0x27c) +
                (fVar7 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar7 * 5.0;
    local_44 = *(float *)(lVar3 + 0x280) + (fVar4 * 0.0 * 0.0 - fVar6 * 0.0) + fVar4 * 5.0;
  }
  local_4c = fVar5;
  FUN_0245ec30(param_1,&local_4c);
  return;
}

