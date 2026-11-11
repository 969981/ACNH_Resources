
void FUN_0039ac20(long param_1,undefined8 param_2,float *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *__dest;
  void *__src;
  float *pfVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8 [34];
  
  local_e8[0] = *param_3;
  local_e8[1] = param_3[1];
  pfVar8 = (float *)(param_1 + 0x50);
  local_e8[2] = *param_5;
  local_e8[6] = param_5[1];
  local_e8[3] = param_5[2];
  local_e8[0xb] = param_5[3];
  local_e8[0x11] = local_e8[1] - local_e8[3];
  local_e8[0x18] = local_e8[0] + local_e8[2];
  bVar3 = *(byte *)(param_1 + 0x10a);
  bVar4 = true;
  local_e8[4] = (local_e8[0] + *pfVar8) - local_e8[6];
  local_e8[0x1a] = (*pfVar8 - local_e8[2]) - local_e8[6];
  local_e8[0x13] = (*(float *)(param_1 + 0x54) - local_e8[3]) - local_e8[0xb];
  local_e8[9] = (local_e8[1] - *(float *)(param_1 + 0x54)) + local_e8[0xb];
  if ((((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
        (*(char *)(param_1 + 0xea) == -1)) &&
       ((bVar4 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
      (((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)))) &&
     ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
       (*(char *)(param_1 + 0xf3) == -1)) &&
      (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
    bVar4 = *(char *)(param_1 + 0x5a) != -1;
  }
  lVar9 = 0;
  puVar10 = (uint *)PTR_DAT_04bd0970;
  local_e8[5] = local_e8[1];
  local_e8[7] = local_e8[3];
  local_e8[8] = local_e8[0];
  local_e8[10] = local_e8[2];
  local_e8[0xc] = local_e8[4];
  local_e8[0xd] = local_e8[9];
  local_e8[0xe] = local_e8[6];
  local_e8[0xf] = local_e8[0xb];
  local_e8[0x10] = local_e8[0];
  local_e8[0x12] = local_e8[2];
  local_e8[0x14] = local_e8[4];
  local_e8[0x15] = local_e8[0x11];
  local_e8[0x16] = local_e8[6];
  local_e8[0x17] = local_e8[0x13];
  local_e8[0x19] = local_e8[1];
  local_e8[0x1b] = local_e8[3];
  local_e8[0x1c] = local_e8[0x18];
  local_e8[0x1d] = local_e8[9];
  local_e8[0x1e] = local_e8[0x1a];
  local_e8[0x1f] = local_e8[0xb];
  do {
    pbVar1 = (byte *)(param_4 + lVar9);
    plVar11 = *(long **)(pbVar1 + 8);
    if ((*(byte *)((long)plVar11 + 0x14) & 3) != 0) {
      if ((bVar4) || ((*(byte *)((long)plVar11 + 0x12) >> 1 & 1) != 0)) {
        uVar6 = FUN_0037e5d0(param_1);
        uVar5 = FUN_0037e5a8(param_1);
        (**(code **)(*plVar11 + 0x20))
                  (plVar11,param_2,param_6,0,0,param_1 + 0x70,pfVar8,uVar6,uVar5);
        if ((bVar3 & 1) != 0) {
          lVar7 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
          *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar7 + 0x1a0) = *param_5;
          *(float *)(lVar7 + 0x1a4) = param_5[1];
          *(float *)(lVar7 + 0x1a8) = param_5[2];
          *(float *)(lVar7 + 0x1ac) = param_5[3];
          lVar7 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
          *(undefined4 *)(lVar7 + 0x1d0) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
          *(undefined4 *)(lVar7 + 0x1d4) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
          *(undefined4 *)(lVar7 + 0x1d8) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
          *(undefined4 *)(lVar7 + 0x1dc) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
          *(undefined4 *)(lVar7 + 0x1e0) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
          *(undefined4 *)(lVar7 + 0x1e4) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
          *(undefined4 *)(lVar7 + 0x1e8) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
          *(undefined4 *)(lVar7 + 0x1ec) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
          *(undefined4 *)(lVar7 + 0x1f0) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
          *(undefined4 *)(lVar7 + 500) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
          *(undefined4 *)(lVar7 + 0x1f8) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
          *(undefined4 *)(lVar7 + 0x1fc) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
          *(undefined4 *)(lVar7 + 0x200) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
          *(undefined4 *)(lVar7 + 0x204) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
          *(undefined4 *)(lVar7 + 0x208) = uVar12;
          uVar12 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
          *(undefined4 *)(lVar7 + 0x20c) = uVar12;
        }
      }
      else {
        uVar6 = FUN_0037e5d0(param_1);
        uVar5 = FUN_0037e5a8(param_1);
        (**(code **)(*plVar11 + 0x20))
                  (plVar11,param_2,param_6,1,0,param_1 + 0x70,pfVar8,uVar6,uVar5);
        if ((bVar3 & 1) != 0) {
          lVar7 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
          *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar7 + 0x1a0) = *param_5;
          *(float *)(lVar7 + 0x1a4) = param_5[1];
          *(float *)(lVar7 + 0x1a8) = param_5[2];
          *(float *)(lVar7 + 0x1ac) = param_5[3];
        }
      }
      if ((lVar9 == 0) || ((bVar3 >> 1 & 1) == 0)) {
        uVar2 = *(uint *)(PTR_DAT_04bd0978 + (ulong)*pbVar1 * 4) | *puVar10 | 0x40000000;
        if ((bVar3 & 1) != 0) {
          uVar2 = *(uint *)(PTR_DAT_04bd0978 + (ulong)*pbVar1 * 4) | *puVar10;
        }
        lVar7 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
        *(uint *)(lVar7 + 0x22c) = uVar2;
      }
      else {
        __dest = (void *)FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
        local_f8 = *(undefined8 *)((long)__dest + 0x1c0);
        uStack_f0 = *(undefined8 *)((long)__dest + 0x1c8);
        __src = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
        memcpy(__dest,__src,0x230);
        *(undefined8 *)((long)__dest + 0x1c0) = local_f8;
        *(undefined8 *)((long)__dest + 0x1c8) = uStack_f0;
        uVar2 = *(uint *)(PTR_DAT_04bd0978 + (ulong)*pbVar1 * 4) | *puVar10 | 0x40000000;
        if ((bVar3 & 1) != 0) {
          uVar2 = *(uint *)(PTR_DAT_04bd0978 + (ulong)*pbVar1 * 4) | *puVar10;
        }
        *(uint *)((long)__dest + 0x22c) = uVar2;
      }
      uVar6 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
      local_100 = *(undefined4 *)((long)local_e8 + lVar9 + 8);
      local_f8 = CONCAT44(*(undefined4 *)((long)local_e8 + lVar9 + 4),
                          *(undefined4 *)((long)local_e8 + lVar9));
      uStack_fc = *(undefined4 *)((long)local_e8 + lVar9 + 0xc);
      FUN_003649e0(param_2,uVar6,&local_f8,&local_100);
    }
    lVar9 = lVar9 + 0x10;
    puVar10 = puVar10 + 1;
  } while (lVar9 != 0x80);
  return;
}

