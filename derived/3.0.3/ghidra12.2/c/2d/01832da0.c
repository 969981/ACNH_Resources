
bool FUN_01832da0(long param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  float local_7c;
  float fStack_78;
  float local_74;
  byte local_48 [4];
  undefined4 local_44;
  
  iVar8 = FUN_006f0400(((float)*(int *)(param_1 + 0x550) * 10.0 + 5.0) - *(float *)(param_1 + 0x334)
                       ,((float)*(int *)(param_1 + 0x554) * 10.0 + 5.0) -
                        *(float *)(param_1 + 0x33c));
  puVar6 = PTR_FUN_04bbe748;
  puVar5 = PTR_DAT_04bb2d00;
  uVar11 = 0;
  bVar7 = true;
  do {
    local_44 = 0;
    uVar4 = *(uint *)(param_1 + 0x3f4);
    uVar2 = *(uint *)(param_1 + 1000) ^ *(uint *)(param_1 + 1000) << 0xb;
    uVar3 = *(uint *)(param_1 + 0x3ec) ^ *(uint *)(param_1 + 0x3ec) << 0xb;
    *(uint *)(param_1 + 0x3ec) = uVar4;
    uVar4 = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4;
    uVar2 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(param_1 + 0x3f4) = uVar2;
    uVar2 = iVar8 + -0x15555560 + uVar2 + (int)(CONCAT44(uVar4,uVar2) / 0x2aaaaac1) * -0x2aaaaac1;
    local_48[0] = *(byte *)(param_1 + 0x494) ^ 1;
    pfVar1 = (float *)(puVar5 + (ulong)(uVar2 >> 0x18) * 0x10);
    uVar13 = *(undefined4 *)(param_1 + 0x3f0);
    *(uint *)(param_1 + 0x3f0) = uVar4;
    lVar10 = *(long *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 1000) = uVar13;
    fVar12 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fStack_78 = *(float *)(lVar10 + 0x27c) + 0.0;
    local_7c = *(float *)(lVar10 + 0x278) + (*pfVar1 + fVar12 * pfVar1[1]) * 15.0;
    local_74 = *(float *)(lVar10 + 0x280) + (pfVar1[2] + fVar12 * pfVar1[3]) * 15.0;
    iVar9 = FUN_01a1e110(&local_7c,lVar10 + 0x278,puVar6,local_48);
    if (iVar9 == 1) {
      *(ulong *)(param_1 + 0x328) = CONCAT44(fStack_78,local_7c);
      *(float *)(param_1 + 0x330) = local_74;
      uVar13 = FUN_015cb8d4(param_1 + 0x328,1);
      *(undefined4 *)(param_1 + 0x32c) = uVar13;
      return bVar7;
    }
    bVar7 = uVar11 < 0x13;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x14);
  return bVar7;
}

