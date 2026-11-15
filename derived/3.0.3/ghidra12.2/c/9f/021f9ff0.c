
/* WARNING: Removing unreachable block (ram,0x021fa498) */
/* WARNING: Removing unreachable block (ram,0x021fa420) */

void FUN_021f9ff0(float param_1,float *param_2,float *param_3,float *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float local_128;
  float fStack_124;
  float local_120;
  undefined1 auStack_118 [8];
  int local_110 [16];
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint *local_c0;
  float local_b4 [2];
  float local_ac;
  uint local_98;
  
  puVar9 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(param_5 + 0x58);
  if (*(long *)puVar9 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar10) {
    return;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
    return;
  }
  local_ac = ((float)*(int *)(param_5 + 0x34) * 5.0 + (float)*(int *)(param_5 + 0x44) * 5.0 + 5.0) *
             0.5;
  local_b4[0] = ((float)*(int *)(param_5 + 0x30) * 5.0 + (float)*(int *)(param_5 + 0x40) * 5.0 + 5.0
                ) * 0.5;
  if (param_3 != (float *)0x0) {
    *param_3 = local_b4[0];
    param_3[2] = local_ac;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  local_c8 = *(undefined4 *)(param_5 + 0x58);
  uStack_c4 = *(undefined4 *)(param_5 + 0x5c);
  lVar14 = *(long *)puVar9;
  local_c0 = (uint *)0x0;
  local_d0 = PTR_DAT_04bc0510 + 0x10;
  uVar10 = FUN_0277d6c4(&local_c8);
  if (*(long *)puVar9 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(param_5 + 0x58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8),
         puVar13 != (uint *)0x0)) {
        local_c0 = puVar13;
        local_98 = FUN_01ae98d0(&local_d0);
        local_110[0xf] = 0;
        uVar10 = *puVar13;
        if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
          puVar12 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
          local_110[0xf] = 0;
          if (*puVar12 != 0) {
            uVar10 = puVar12[1];
            if ((uVar10 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar14 != 0) {
                uVar15 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar15 = (uint)((ulong)((long)puVar13 - lVar14) / (ulong)uVar10);
                }
                if (*puVar12 <= uVar15) {
                  uVar15 = 0xffffffff;
                }
                if ((uVar15 < DAT_053272c8) &&
                   (local_110[0xf] = (int)*(ushort *)(DAT_053272d0 + (long)(int)uVar15 * 2),
                   (uint)local_110[0xf] < 9)) goto LAB_021fa230;
              }
            }
            local_110[0xf] = 0;
          }
        }
        goto LAB_021fa230;
      }
    }
  }
  local_98 = FUN_01ae98d0(&local_d0);
  local_110[0xf] = 0;
LAB_021fa230:
  iVar5 = *(int *)(param_5 + 0x40);
  iVar7 = *(int *)(param_5 + 0x44);
  iVar6 = *(int *)(param_5 + 0x30);
  iVar8 = *(int *)(param_5 + 0x34);
  iVar1 = (iVar5 - iVar6) + 1;
  iVar2 = (iVar7 - iVar8) + 1;
  iVar11 = iVar5 + iVar6;
  if (iVar11 < 0 != SCARRY4(iVar5,iVar6)) {
    iVar11 = iVar11 + 1;
  }
  iVar3 = iVar7 + iVar8;
  fVar17 = 3.4028235e+38;
  local_110[0] = (iVar11 >> 1) + 1;
  fStack_124 = 0.0;
  local_110[1] = (int)((float)(iVar7 + 2) + param_1);
  if (iVar3 < 0 != SCARRY4(iVar7,iVar8)) {
    iVar3 = iVar3 + 1;
  }
  local_110[8] = local_110[0];
  local_110[9] = (int)((float)(iVar8 + -1) - param_1);
  local_110[5] = (iVar3 >> 1) + 1;
  local_110[4] = (int)((float)(iVar5 + 2) + param_1);
  local_110[0xc] = (int)((float)(iVar6 + -1) - param_1);
  local_110[0xd] = local_110[5];
  uVar10 = 0;
  do {
    if (local_110[0xf] == 1) {
      if (local_98 == uVar10) goto LAB_021fa390;
    }
    else if ((local_110[0xf] != 2) ||
            (((uint)(long)((float)(int)uVar10 * 90.0 * 11930465.0) ^ 0x80000000) ==
             (uint)(long)((float)(int)local_98 * 90.0 * 11930465.0))) {
LAB_021fa390:
      if ((*(byte *)(param_5 + 0x54) >> (ulong)(uVar10 & 0x1f) & 1) != 0) {
        puVar4 = auStack_118 + (ulong)uVar10 * 0x10;
        if (3 < uVar10) {
          puVar4 = auStack_118;
        }
        local_120 = (float)*(int *)(puVar4 + 0xc) * 5.0;
        local_128 = (float)*(int *)(puVar4 + 8) * 5.0;
        iVar11 = FUN_01318f40(local_b4,&local_128);
        if (iVar11 == 0) {
          if (local_110[0xf] == 8) {
            if ((uVar10 | 2) == 2) {
              if (3 < iVar1) {
                fVar16 = -1.0;
                if (0.0 <= *param_4 - local_128) {
                  fVar16 = 1.0;
                }
                local_128 = local_128 + fVar16 * ((float)iVar1 * 0.5 + -1.0) * 5.0;
              }
            }
            else if (3 < iVar2) {
              fVar16 = -1.0;
              if (0.0 <= param_4[2] - local_120) {
                fVar16 = 1.0;
              }
              local_120 = local_120 + fVar16 * ((float)iVar2 * 0.5 + -1.0) * 5.0;
            }
          }
          fVar16 = (param_4[2] - local_120) * (param_4[2] - local_120) +
                   (*param_4 - local_128) * (*param_4 - local_128);
          if (fVar16 < fVar17) {
            *param_2 = local_128;
            param_2[2] = local_120;
            param_2[1] = fStack_124;
            fVar17 = fVar16;
          }
        }
      }
    }
    uVar15 = 4;
    if ((int)uVar10 < 4) {
      uVar15 = uVar10 + 1;
    }
    uVar10 = uVar15;
    if (uVar15 == 4) {
      return;
    }
  } while( true );
}

