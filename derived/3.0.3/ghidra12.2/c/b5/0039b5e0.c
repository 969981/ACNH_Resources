
void FUN_0039b5e0(long param_1,long param_2,float *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  void *__src;
  undefined8 uVar8;
  long lVar9;
  void *__dest;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  float local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  bVar6 = true;
  if ((((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
        (*(char *)(param_1 + 0xea) == -1)) &&
       ((bVar6 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
      (((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)))) &&
     ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
       (*(char *)(param_1 + 0xf3) == -1)) &&
      (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
    bVar6 = *(char *)(param_1 + 0x5a) != -1;
  }
  bVar3 = *(byte *)(param_1 + 0x10a);
  uVar10 = 0x40000503;
  lVar11 = 0;
  bVar5 = true;
  if ((bVar3 & 1) != 0) {
    uVar10 = 0x503;
  }
  do {
    pbVar1 = (byte *)(param_4 + lVar11 * 0x10);
    plVar12 = *(long **)(pbVar1 + 8);
    if ((bVar6) || ((*(byte *)((long)plVar12 + 0x12) >> 1 & 1) != 0)) {
      uVar8 = FUN_0037e5d0(param_1);
      uVar7 = FUN_0037e5a8(param_1);
      (**(code **)(*plVar12 + 0x20))
                (plVar12,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,uVar8,uVar7);
      if ((bVar3 & 1) != 0) {
        lVar9 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
        *(undefined4 *)(lVar9 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar9 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(float *)(lVar9 + 0x1a0) = *param_5;
        *(float *)(lVar9 + 0x1a4) = param_5[1];
        *(float *)(lVar9 + 0x1a8) = param_5[2];
        *(float *)(lVar9 + 0x1ac) = param_5[3];
        lVar9 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
        *(undefined4 *)(lVar9 + 0x1d0) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
        *(undefined4 *)(lVar9 + 0x1d4) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
        *(undefined4 *)(lVar9 + 0x1d8) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
        *(undefined4 *)(lVar9 + 0x1dc) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
        *(undefined4 *)(lVar9 + 0x1e0) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
        *(undefined4 *)(lVar9 + 0x1e4) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
        *(undefined4 *)(lVar9 + 0x1e8) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
        *(undefined4 *)(lVar9 + 0x1ec) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
        *(undefined4 *)(lVar9 + 0x1f0) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
        *(undefined4 *)(lVar9 + 500) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
        *(undefined4 *)(lVar9 + 0x1f8) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
        *(undefined4 *)(lVar9 + 0x1fc) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
        *(undefined4 *)(lVar9 + 0x200) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
        *(undefined4 *)(lVar9 + 0x204) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
        *(undefined4 *)(lVar9 + 0x208) = uVar13;
        uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
        *(undefined4 *)(lVar9 + 0x20c) = uVar13;
      }
    }
    else {
      uVar8 = FUN_0037e5d0(param_1);
      uVar7 = FUN_0037e5a8(param_1);
      (**(code **)(*plVar12 + 0x20))
                (plVar12,param_2,param_6,1,0,param_1 + 0x70,param_1 + 0x50,uVar8,uVar7);
      if ((bVar3 & 1) != 0) {
        lVar9 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
        *(undefined4 *)(lVar9 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar9 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(float *)(lVar9 + 0x1a0) = *param_5;
        *(float *)(lVar9 + 0x1a4) = param_5[1];
        *(float *)(lVar9 + 0x1a8) = param_5[2];
        *(float *)(lVar9 + 0x1ac) = param_5[3];
      }
    }
    if (bVar5) {
      local_70 = *param_5;
      uStack_6c = *(undefined4 *)(param_1 + 0x54);
      local_68 = *(undefined8 *)param_3;
LAB_0039b9f8:
      uVar2 = *(uint *)(PTR_DAT_04bd0980 + (ulong)*pbVar1 * 4) |
              *(uint *)(PTR_DAT_04bd0988 + lVar11 * 4) | 0x40000000;
      if ((bVar3 & 1) != 0) {
        uVar2 = *(uint *)(PTR_DAT_04bd0980 + (ulong)*pbVar1 * 4) |
                *(uint *)(PTR_DAT_04bd0988 + lVar11 * 4);
      }
      lVar11 = FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
      *(uint *)(lVar11 + 0x22c) = uVar2;
      __dest = (void *)FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
    }
    else {
      uStack_6c = *(undefined4 *)(param_1 + 0x54);
      local_70 = param_5[1];
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - local_70);
      if ((*(byte *)(param_1 + 0x10a) >> 1 & 1) == 0) goto LAB_0039b9f8;
      __dest = (void *)FUN_003788bc(*(undefined8 *)(pbVar1 + 8),param_2);
      __src = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(__dest,__src,0x230);
      *(uint *)((long)__dest + 0x22c) = *(uint *)(PTR_DAT_04bd0980 + (ulong)*pbVar1 * 4) | uVar10;
    }
    FUN_003649e0(param_2,__dest,&local_68,&local_70);
    lVar11 = 1;
    *(byte *)(*(long *)(pbVar1 + 8) + 0x48) =
         *(byte *)(*(long *)(pbVar1 + 8) + 0x48) & 0xf0 | *(byte *)(param_2 + 0x18d) & 0xf;
    bVar4 = !bVar5;
    bVar5 = false;
    if (bVar4) {
      return;
    }
  } while( true );
}

