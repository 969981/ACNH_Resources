
void FUN_0039a7a0(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
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
  undefined8 *puVar11;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  
  local_80 = *param_3;
  fStack_9c = param_5[2];
  fStack_84 = param_5[3];
  local_90 = *param_5;
  local_98 = param_5[1];
  pfVar8 = (float *)(param_1 + 0x50);
  local_88 = *pfVar8;
  fVar14 = *(float *)(param_1 + 0x54);
  fStack_70 = (float)local_80;
  local_74 = (float)((ulong)local_80 >> 0x20);
  bVar4 = true;
  bVar3 = *(byte *)(param_1 + 0x10a);
  fStack_68 = local_90 + fStack_70;
  local_6c = local_74 - fStack_9c;
  local_78 = (local_88 + fStack_70) - local_98;
  local_a0 = local_88 - local_98;
  local_88 = local_88 - local_90;
  fStack_8c = fVar14 - fStack_9c;
  fStack_94 = fVar14 - fStack_84;
  local_64 = (local_74 - fVar14) + fStack_84;
  if (((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
       (*(char *)(param_1 + 0xea) == -1)) &&
      ((bVar4 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
     ((((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)) &&
      ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
        (*(char *)(param_1 + 0xf3) == -1)) &&
       (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
        ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))))) {
    bVar4 = *(char *)(param_1 + 0x5a) != -1;
  }
  lVar9 = 0;
  puVar11 = (undefined8 *)(param_4 + 8);
  puVar10 = (uint *)PTR_DAT_04bd0960;
  do {
    plVar12 = (long *)*puVar11;
    if ((plVar12 != (long *)0x0) && ((*(byte *)((long)plVar12 + 0x14) & 3) != 0)) {
      if ((bVar4) || ((*(byte *)((long)plVar12 + 0x12) >> 1 & 1) != 0)) {
        uVar6 = FUN_0037e5d0(param_1);
        uVar5 = FUN_0037e5a8(param_1);
        (**(code **)(*plVar12 + 0x20))
                  (plVar12,param_2,param_6,0,0,param_1 + 0x70,pfVar8,uVar6,uVar5);
        if ((bVar3 & 1) != 0) {
          lVar7 = FUN_003788bc(*puVar11,param_2);
          *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar7 + 0x1a0) = *param_5;
          *(float *)(lVar7 + 0x1a4) = param_5[1];
          *(float *)(lVar7 + 0x1a8) = param_5[2];
          *(float *)(lVar7 + 0x1ac) = param_5[3];
          lVar7 = FUN_003788bc(*puVar11,param_2);
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
          *(undefined4 *)(lVar7 + 0x1d0) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
          *(undefined4 *)(lVar7 + 0x1d4) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
          *(undefined4 *)(lVar7 + 0x1d8) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
          *(undefined4 *)(lVar7 + 0x1dc) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
          *(undefined4 *)(lVar7 + 0x1e0) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
          *(undefined4 *)(lVar7 + 0x1e4) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
          *(undefined4 *)(lVar7 + 0x1e8) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
          *(undefined4 *)(lVar7 + 0x1ec) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
          *(undefined4 *)(lVar7 + 0x1f0) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
          *(undefined4 *)(lVar7 + 500) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
          *(undefined4 *)(lVar7 + 0x1f8) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
          *(undefined4 *)(lVar7 + 0x1fc) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
          *(undefined4 *)(lVar7 + 0x200) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
          *(undefined4 *)(lVar7 + 0x204) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
          *(undefined4 *)(lVar7 + 0x208) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
          *(undefined4 *)(lVar7 + 0x20c) = uVar13;
        }
      }
      else {
        uVar6 = FUN_0037e5d0(param_1);
        uVar5 = FUN_0037e5a8(param_1);
        (**(code **)(*plVar12 + 0x20))
                  (plVar12,param_2,param_6,1,0,param_1 + 0x70,pfVar8,uVar6,uVar5);
        if ((bVar3 & 1) != 0) {
          lVar7 = FUN_003788bc(*puVar11,param_2);
          *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar7 + 0x1a0) = *param_5;
          *(float *)(lVar7 + 0x1a4) = param_5[1];
          *(float *)(lVar7 + 0x1a8) = param_5[2];
          *(float *)(lVar7 + 0x1ac) = param_5[3];
        }
      }
      uVar6 = *puVar11;
      if ((lVar9 != 0) && ((bVar3 >> 1 & 1) != 0)) {
        __dest = (void *)FUN_003788bc(uVar6,param_2);
        uVar6 = *(undefined8 *)((long)__dest + 0x1c0);
        uVar2 = *(undefined8 *)((long)__dest + 0x1c8);
        __src = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
        memcpy(__dest,__src,0x230);
        *(undefined8 *)((long)__dest + 0x1c0) = uVar6;
        *(undefined8 *)((long)__dest + 0x1c8) = uVar2;
        uVar6 = *puVar11;
      }
      uVar1 = *(uint *)(PTR_DAT_04bd0968 + (ulong)*(byte *)(puVar11 + -1) * 4) | *puVar10 |
              0x40000000;
      if ((bVar3 & 1) != 0) {
        uVar1 = *(uint *)(PTR_DAT_04bd0968 + (ulong)*(byte *)(puVar11 + -1) * 4) | *puVar10;
      }
      lVar7 = FUN_003788bc(uVar6,param_2);
      *(uint *)(lVar7 + 0x22c) = uVar1;
      uVar6 = FUN_003788bc(*puVar11,param_2);
      FUN_003649e0(param_2,uVar6,(long)&local_80 + lVar9,(long)&local_a0 + lVar9);
    }
    lVar9 = lVar9 + 8;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 1;
  } while (lVar9 != 0x20);
  return;
}

