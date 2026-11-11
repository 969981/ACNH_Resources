
void FUN_003d8340(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  
  if (*param_2 != '\0') {
    fVar9 = (float)NEON_ucvtf((uint)(byte)param_2[0x22]);
    iVar6 = -0x40;
    if ((byte)param_2[0x1a] < 2) {
      iVar6 = -0x3f;
    }
    bVar3 = param_2[0x1b];
    if (bVar3 < 0x40) {
      fVar11 = (float)(uint)bVar3 / 63.0;
    }
    else {
      fVar11 = (float)(bVar3 + 1) * 0.015625;
    }
    fVar14 = (float)NEON_ucvtf((uint)(byte)param_2[0x1c]);
    local_b0 = (float)*(undefined8 *)(param_1 + 0x70);
    fVar10 = *(float *)(param_1 + 0x40);
    fVar16 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x228);
    fVar15 = 4.0;
    if (fVar16 <= 4.0 || *(char *)(param_1 + 0x12e) != '\x01') {
      fVar15 = fVar16;
    }
    local_c0 = (float)*(undefined8 *)(param_1 + 0x60);
    local_c0 = *(float *)(param_2 + 0x2c) * local_c0;
    local_b8 = (float)*(undefined8 *)(param_1 + 0x68);
    fStack_b4 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    cVar4 = *(char *)(param_1 + 0x50);
    uStack_bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    cVar1 = param_2[0x21];
    if (cVar4 != -1) {
      cVar1 = cVar4;
    }
    fVar16 = *(float *)(param_1 + 0x48);
    _local_b8 = CONCAT44(*(float *)(param_2 + 0x38) * fStack_b4,
                         *(float *)(param_2 + 0x34) * local_b8);
    fVar9 = fVar9 / 127.0;
    if (cVar4 != -1) {
      fVar9 = *(float *)(param_1 + 0x4c);
    }
    fVar13 = (float)NEON_ucvtf((uint)(byte)param_2[0x1d]);
    fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    local_a8 = (float)*(undefined8 *)(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_2 + 0x28) != -1) {
      iVar2 = *(int *)(param_2 + 0x28);
    }
    _local_b0 = CONCAT44(*(float *)(param_2 + 0x40) * fStack_ac,
                         *(float *)(param_2 + 0x3c) * local_b0);
    local_a4 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    local_a0 = (float)*(undefined8 *)(param_1 + 0x80);
    _local_a8 = CONCAT44(*(float *)(param_2 + 0x48) * local_a4,*(float *)(param_2 + 0x44) * local_a8
                        );
    fStack_9c = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
    local_98 = (float)*(undefined8 *)(param_1 + 0x88);
    _local_a0 = CONCAT44(*(float *)(param_2 + 0x50) * fStack_9c,
                         *(float *)(param_2 + 0x4c) * local_a0);
    local_94 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
    local_90 = (float)*(undefined8 *)(param_1 + 0x90);
    _local_98 = CONCAT44(*(float *)(param_2 + 0x58) * local_94,*(float *)(param_2 + 0x54) * local_98
                        );
    fVar17 = (float)NEON_ucvtf((uint)(byte)param_2[0x1e]);
    fStack_8c = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
    local_88 = (float)*(undefined8 *)(param_1 + 0x98);
    _local_90 = CONCAT44(*(float *)(param_2 + 0x60) * fStack_8c,
                         *(float *)(param_2 + 0x5c) * local_90);
    local_84 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    local_80 = (float)*(undefined8 *)(param_1 + 0xa0);
    fStack_7c = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
    fStack_78 = (float)*(undefined8 *)(param_1 + 0xa8);
    local_74 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
    _local_88 = CONCAT44(local_84 + fVar11 + *(float *)(param_2 + 0x68),
                         local_88 +
                         (float)(int)(iVar6 + (uint)(byte)param_2[0x1a]) / 63.0 +
                         *(float *)(param_2 + 100));
    fVar11 = (float)NEON_ucvtf((uint)(byte)param_2[0x1f]);
    fVar12 = *(float *)(param_2 + 0x24);
    _local_80 = CONCAT44(*(float *)(param_2 + 0x70) + fStack_7c +
                         fVar13 / 127.0 + *(float *)(param_1 + 0x230),
                         *(float *)(param_2 + 0x6c) + local_80 +
                         fVar14 / 127.0 + -1.0 + *(float *)(param_1 + 0x22c));
    _fStack_78 = CONCAT44(*(float *)(param_2 + 0x78) + local_74 +
                          fVar11 / 127.0 + *(float *)(param_1 + 0x238),
                          *(float *)(param_2 + 0x74) + fStack_78 +
                          fVar17 / 127.0 + *(float *)(param_1 + 0x234));
    if (param_2[0x18] != '\0') {
      fVar11 = (float)NEON_ucvtf((uint)(byte)param_2[0x19]);
      fVar14 = (float)NEON_ucvtf((uint)(byte)param_2[0x20]);
      uVar7 = 0;
      do {
        lVar8 = *(long *)(*(long *)(param_2 + uVar7 * 8 + 8) + 8);
        if (lVar8 != 0) {
          FUN_003c1550((fVar11 / 127.0) * fVar10 * fVar12,lVar8);
          FUN_003c157c(fVar15,lVar8);
          FUN_003c15dc(fVar14 * 0.015625 + fVar16,lVar8);
          FUN_003c15fc(fVar9,lVar8,(int)cVar1);
          FUN_003c16d0(lVar8,iVar2);
          FUN_003c15bc(lVar8,*(undefined4 *)(param_1 + 0x58));
          FUN_003c159c(lVar8,*(undefined4 *)(param_1 + 0x54));
          if (param_2[0x18] == '\x02') {
            if ((int)uVar7 == 0) {
              uVar5 = 1;
            }
            else {
              if ((int)uVar7 != 1) {
                    /* WARNING: Subroutine does not return */
                nn::detail::UnexpectedDefaultImpl();
              }
              uVar5 = 2;
            }
            uVar5 = FUN_003c2ca0(lVar8,uVar5);
            FUN_003d86f0(uVar5,&local_c0,*(undefined8 *)(param_1 + 0xb0),lVar8,uVar7 & 0xffffffff,
                         uStack_bc);
          }
          else if (param_2[0x18] == '\x01') {
            FUN_003c2ca0(lVar8,0);
            FUN_003c1d84(lVar8,&local_c0);
            if (*(long *)(param_1 + 0xb0) != 0) {
              FUN_003c1d8c(lVar8);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (byte)param_2[0x18]);
    }
  }
  return;
}

