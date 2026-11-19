
void FUN_03a676f0(uint *param_1,undefined8 param_2,uint param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ushort local_114 [2];
  uint local_110;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_84;
  
  local_90 = 0xff7fffffff7fffff;
  local_a0 = PTR_DAT_04bd0f08 + 0x10;
  local_98 = 0x7f7fffff7f7fffff;
  local_88 = *(uint *)PTR_DAT_04bd0ea8;
  local_84 = 0x3f80000000000000;
  if (local_88 < 6) {
    if ((1 << (ulong)(local_88 & 0x1f) & 0x39U) == 0) {
      fVar12 = *(float *)(param_5 + 1);
      fVar11 = *(float *)((long)param_5 + 0xc);
    }
    else {
      fVar11 = *(float *)(param_5 + 1);
      fVar12 = *(float *)((long)param_5 + 0xc);
    }
    fVar14 = fVar11;
    fVar4 = 0.0;
    if (fVar11 <= 0.0) {
      fVar14 = 0.0;
      fVar4 = fVar11;
    }
    fVar13 = fVar12;
    fVar11 = 0.0;
    if (fVar12 <= 0.0) {
      fVar13 = 0.0;
      fVar11 = fVar12;
    }
    local_98 = CONCAT44(fVar11,fVar4);
    local_90 = CONCAT44(fVar13,fVar14);
  }
  uVar8 = param_4[0x26];
  if (0 < (int)uVar8) {
    uVar9 = 0;
    do {
      uVar1 = uVar9;
      if (param_1[8] <= uVar9) {
        uVar1 = 0;
      }
      uVar3 = *(uint *)(*(long *)(param_1 + 10) + (ulong)uVar1 * 4);
      uVar1 = uVar3;
      if (param_4[4] <= uVar3) {
        uVar1 = 0;
      }
      uVar2 = uVar3;
      if (*param_4 <= uVar3) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(param_4 + 2) + (long)(int)uVar2 * 4) & 1 << (ulong)(param_3 & 0x1f))
          != 0) {
        if (*param_1 <= uVar3) {
          uVar3 = 0;
        }
        fVar11 = *(float *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 0x10 + 8);
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        if (-1.0 <= fVar11) {
          bVar5 = false;
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar11)) {
            bVar5 = fVar11 < 1.0;
            bVar6 = fVar11 == 1.0;
            bVar7 = false;
          }
        }
        if (bVar6 || bVar5 != bVar7) {
          lVar10 = *(long *)(param_4 + 6);
          FUN_038e4cec(local_114);
          local_114[0] = 0;
          local_110 = local_110 & 0xfffffffe;
          FUN_038e4d90(local_114,param_2);
          FUN_03a68310(param_1,param_2);
          FUN_038e77e4(&local_a0,param_2,param_5);
          (**(code **)(*param_5 + 0x38))(param_5,param_2);
          FUN_038e4cec(local_114);
          lVar10 = lVar10 + (long)(int)uVar1 * 0x74;
          local_110 = local_110 & 0xfffffffe | (uint)*(byte *)(lVar10 + 0x5c);
          local_ec = *(undefined1 *)(lVar10 + 0x60);
          local_ea = *(undefined1 *)(lVar10 + 100);
          local_e8 = *(undefined1 *)(lVar10 + 0x68);
          local_114[0] = (ushort)*(byte *)(lVar10 + 0x54);
          local_eb = local_ec;
          local_e9 = local_ea;
          local_e7 = local_e8;
          FUN_038e4d90(local_114,param_2);
          FUN_03a68b80(param_1,param_2);
          uVar8 = param_4[0x26];
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar8);
  }
  return;
}

