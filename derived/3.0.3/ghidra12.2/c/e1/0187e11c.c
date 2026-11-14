
undefined8 FUN_0187e11c(float param_1,float param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_5c;
  float fStack_58;
  float local_54;
  byte local_48 [4];
  undefined4 local_44;
  
  uVar5 = FUN_0187e394(param_3,0,param_4,*(long *)(param_4 + 0x300) + 0x278,param_4 + 800);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(param_4 + 0x300);
    lVar8 = *(long *)(param_4 + 0x48);
    fVar10 = *(float *)(lVar7 + 0x278);
    fVar12 = *(float *)(lVar8 + 0x160);
    fVar9 = *(float *)(lVar7 + 0x280);
    fVar11 = *(float *)(lVar8 + 0x168);
    fVar13 = (fVar9 - fVar11) * (fVar9 - fVar11) + (fVar10 - fVar12) * (fVar10 - fVar12);
    if (900.0 < fVar13) {
      if (fVar13 <= param_2 * param_2) {
        fStack_58 = *(float *)(lVar8 + 0x164);
        local_5c = fVar12;
        local_54 = fVar11;
      }
      else {
        fVar12 = fVar12 - fVar10;
        fStack_58 = 0.0;
        fVar11 = fVar11 - fVar9;
        fVar13 = SQRT(fVar12 * fVar12 + 0.0 + fVar11 * fVar11);
        if (0.0 < fVar13) {
          fVar13 = param_2 / fVar13;
          fVar12 = fVar12 * fVar13;
          fStack_58 = fVar13 * 0.0;
          fVar11 = fVar11 * fVar13;
        }
        fStack_58 = fStack_58 + *(float *)(lVar7 + 0x27c);
        local_5c = fVar10 + fVar12;
        local_54 = fVar9 + fVar11;
      }
      local_44 = 0;
      local_48[0] = *(byte *)(param_4 + 0x494) ^ 1;
      uVar5 = FUN_01a1e110(&local_5c,lVar7 + 0x278,PTR_FUN_04bbe990,local_48);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(param_4 + 0x4a6) = 0;
        *(undefined2 *)(param_4 + 0x4a4) = 0;
        *(ulong *)(param_4 + 0x328) = CONCAT44(fStack_58,local_5c);
        *(float *)(param_4 + 0x330) = local_54;
        return 1;
      }
    }
    puVar4 = PTR_DAT_04bb39d8;
    iVar3 = *(int *)(param_4 + 800);
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar6[3];
    uVar1 = *puVar6 ^ *puVar6 << 0xb;
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar6[2] = uVar2;
    puVar6[3] = uVar1;
    local_5c = (float)(iVar3 + (int)(long)(((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * 60.0 *
                                          11930465.0));
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
    uVar2 = puVar6[3];
    uVar1 = *puVar6 ^ *puVar6 << 0xb;
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar6[2] = uVar2;
    puVar6[3] = uVar1;
    FUN_0187efb8((param_2 - param_1) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + param_1,param_4,
                 &local_5c);
    fVar9 = *(float *)(param_4 + 0x328) - *(float *)(*(long *)(param_4 + 0x300) + 0x278);
    fVar10 = *(float *)(param_4 + 0x330) - *(float *)(*(long *)(param_4 + 0x300) + 0x280);
    if (param_1 * param_1 <= fVar10 * fVar10 + fVar9 * fVar9) goto LAB_0187e358;
  }
  uVar5 = FUN_0187e6d0(param_1,param_2,param_4);
  if ((uVar5 & 1) == 0) {
    *(short *)(param_4 + 0x4a4) = *(short *)(param_4 + 0x4a4) + 1;
    return 0;
  }
LAB_0187e358:
  *(undefined1 *)(param_4 + 0x4a6) = 0;
  *(undefined2 *)(param_4 + 0x4a4) = 0;
  return 1;
}

