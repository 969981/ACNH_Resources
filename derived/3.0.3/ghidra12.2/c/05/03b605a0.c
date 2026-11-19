
undefined8 FUN_03b605a0(float param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  
  if (*(long *)(param_2 + 0xd8) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0xc) == 1) {
    if (*(float *)(param_2 + 0x18) <= 0.0) {
      FUN_03b61ec0(param_1,*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0x1c),0);
    }
    else {
      fVar9 = *(float *)(param_2 + 0x18) * 200.0;
      local_78 = 0;
      fVar10 = (float)NEON_ucvtf((int)fVar9);
      local_88 = CONCAT44(*(undefined4 *)(param_2 + 0x1c),param_1);
      local_80 = local_80 & 0xffffffff00000000;
      local_a0 = CONCAT44((fVar9 - fVar10) / 200.0,
                          (int)*(undefined8 *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                          *(int *)(*(long *)PTR_DAT_04bd1e70 + 4) + (int)fVar9);
      FUN_03b625e0(*(undefined8 *)(param_2 + 0xd8),&local_a0,&local_88);
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    if (param_1 <= 0.0) {
      FUN_03b62d00(0x3f800000,*(undefined8 *)(param_2 + 0xd8));
    }
    uVar4 = (ulong)*(byte *)(param_2 + 0x50);
    if (1 < *(byte *)(param_2 + 0x50)) {
      uVar8 = 0;
      do {
        lVar1 = param_2 + uVar8 * 0x10;
        if (*(uint *)(lVar1 + 0x54) != 0) {
          uVar4 = 0;
          do {
            lVar5 = *(long *)(param_2 + 0xe0);
            local_80 = 0;
            local_78 = 0;
            bVar2 = *(byte *)(lVar1 + uVar4 + 0x5c);
            local_88 = 0;
            if (((*(char *)(lVar5 + 8) == '\0') || (*(int **)(lVar5 + 0x10) == (int *)0x0)) ||
               (**(int **)(lVar5 + 0x10) != 0x56415742)) {
              uVar6 = 6;
            }
            else {
              lVar5 = *(long *)(lVar5 + 0x18);
              if (bVar2 != 0) {
                if (3 < bVar2) {
                  uVar7 = bVar2 & 0xfc;
                  do {
                    uVar7 = uVar7 - 4;
                    lVar5 = lVar5 + (ulong)*(ushort *)(lVar5 + 0x38) * 0xc;
                    lVar5 = lVar5 + (ulong)*(ushort *)(lVar5 + 0x78) * 0xc;
                    lVar5 = lVar5 + 0x40 + (ulong)*(ushort *)(lVar5 + 0xb8) * 0xc;
                    lVar5 = lVar5 + (ulong)*(ushort *)(lVar5 + 0xb8) * 0xc + 0xc0;
                  } while (uVar7 != 0);
                }
                uVar7 = bVar2 & 3;
                if ((bVar2 & 3) != 0) {
                  do {
                    uVar7 = uVar7 - 1;
                    lVar5 = lVar5 + (ulong)*(ushort *)(lVar5 + 0x38) * 0xc + 0x40;
                  } while (uVar7 != 0);
                }
              }
              uVar6 = (ulong)*(ushort *)(lVar5 + 2);
            }
            *(undefined4 *)((long)&local_88 + uVar6 * 4) = 0x3f800000;
            fVar9 = *(float *)(lVar1 + 0x58);
            local_a0._0_4_ = (float)local_88;
            local_a0._4_4_ = (float)((ulong)local_88 >> 0x20);
            local_98 = (float)local_80;
            fStack_94 = (float)(local_80 >> 0x20);
            local_a0 = CONCAT44(fVar9 * local_a0._4_4_,fVar9 * (float)local_a0);
            local_90 = (float)local_78;
            fStack_8c = (float)((ulong)local_78 >> 0x20);
            _local_98 = CONCAT44(fVar9 * fStack_94,fVar9 * local_98);
            _local_90 = CONCAT44(fVar9 * fStack_8c,fVar9 * local_90);
            FUN_03b61cc0(*(undefined8 *)(param_2 + 0xd8),bVar2,&local_a0);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(lVar1 + 0x54));
          uVar4 = (ulong)*(byte *)(param_2 + 0x50);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

