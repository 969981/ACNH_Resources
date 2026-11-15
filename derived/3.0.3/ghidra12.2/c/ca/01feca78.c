
/* WARNING: Removing unreachable block (ram,0x01fecabc) */
/* WARNING: Removing unreachable block (ram,0x01fecacc) */

void FUN_01feca78(long param_1,float *param_2,undefined4 *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b4;
  float local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  uint local_7c;
  undefined4 local_78 [3];
  int local_6c;
  uint local_58;
  ushort local_54;
  
  local_78[0] = 0;
  FUN_02a58f80(local_78,*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148,param_4);
  if (local_6c == 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    *param_2 = *(float *)(lVar8 + 0x278);
    param_2[1] = *(float *)(lVar8 + 0x27c);
    param_2[2] = *(float *)(lVar8 + 0x280);
    return;
  }
  local_7c = 0;
  lVar8 = *(long *)PTR_DAT_04bb5008;
  uVar10 = (uint)local_54;
  if (local_6c != 0x1a) {
    uVar10 = 0;
  }
  uVar10 = uVar10 - *(ushort *)(lVar8 + 0xff0);
  if (uVar10 < *(uint *)(lVar8 + 0xfd0)) {
    puVar7 = *(uint **)(*(long *)(lVar8 + 0xfd8) + (long)(int)uVar10 * 8);
    local_7c = 0;
    if (puVar7 != (uint *)0x0) {
      uVar10 = *puVar7;
      if (uVar10 != 0 && puVar7 != (uint *)(ulong)uVar10) {
        puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar10);
        if (((*puVar9 != 0) && (uVar10 = puVar9[1], uVar10 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
           ) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar9 + lVar8 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar8 != 0) {
            uVar3 = 0;
            if ((ulong)uVar10 != 0) {
              uVar3 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar10);
            }
            if (*puVar9 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc4590) &&
               (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar3 * 2),
               local_7c = (uint)uVar4, uVar4 < 6)) goto LAB_01fecbbc;
          }
        }
      }
      local_7c = 0;
    }
  }
LAB_01fecbbc:
  local_98 = 0;
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a0 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  local_90 = puStack_a0;
  FUN_02a8f7b0(local_78,&local_a8);
  if (local_7c - 3 < 3) {
    fVar14 = 30.0;
    if (local_7c != 4) {
      fVar14 = 35.0;
    }
    fVar11 = ((float)(int)local_98 * 5.0 + (float)(int)local_88 * 5.0 + 5.0) * 0.5;
    fVar13 = ((float)local_98._4_4_ * 5.0 + (float)local_88._4_4_ * 5.0 + 5.0) * 0.5;
    fVar16 = 25.0;
    if (local_7c != 3) {
      fVar16 = fVar14;
    }
    fVar14 = -fVar16;
    if ((local_58 & 0xfffffffd) != 0) {
      fVar14 = fVar16;
    }
    fVar15 = fVar11 - fVar16 * 0.5;
    fVar11 = fVar16 * 0.5 + fVar11;
    fVar16 = fVar13 - fVar14 * 0.5;
    fVar13 = fVar14 * 0.5 + fVar13;
  }
  else if (local_7c < 3) {
    if ((local_58 | 2) == 2) {
      iVar2 = local_98._4_4_ + local_88._4_4_;
      iVar1 = iVar2 + 2;
      if (-1 < iVar2 + 1) {
        iVar1 = iVar2 + 1;
      }
      fVar15 = (float)(int)local_98 * 5.0;
      fVar16 = (float)(iVar1 >> 1) * 5.0;
      fVar11 = (float)(int)local_88 * 5.0;
      fVar13 = fVar16;
    }
    else {
      iVar2 = (int)local_98 + (int)local_88;
      iVar1 = iVar2 + 2;
      if (-1 < iVar2 + 1) {
        iVar1 = iVar2 + 1;
      }
      fVar13 = (float)local_88._4_4_ * 5.0;
      fVar15 = (float)(iVar1 >> 1) * 5.0;
      fVar16 = (float)local_98._4_4_ * 5.0;
      fVar11 = fVar15;
    }
  }
  else {
    fVar13 = 0.0;
    fVar11 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  local_b4 = 0;
  local_ac = 0.0;
  FUN_021d9820(&local_b4,1);
  bVar5 = (local_ac - fVar13) * (local_ac - fVar13) +
          ((float)local_b4 - fVar11) * ((float)local_b4 - fVar11) <=
          (local_ac - fVar16) * (local_ac - fVar16) +
          ((float)local_b4 - fVar15) * ((float)local_b4 - fVar15);
  if ((param_5 & 1) == 0) {
    fVar14 = fVar16;
    if (bVar5) {
      fVar14 = fVar13;
      fVar13 = fVar16;
    }
    param_2[1] = 0.0;
    fVar12 = fVar11;
    if (bVar5) {
      fVar12 = fVar15;
    }
    param_2[2] = fVar13;
    fVar13 = fVar14 - fVar13;
    if (bVar5) {
      fVar15 = fVar11;
    }
    *param_2 = fVar12;
    fVar11 = fVar15;
  }
  else {
    fVar14 = fVar16;
    fVar12 = fVar15;
    if (bVar5) {
      fVar14 = fVar13;
      fVar12 = fVar11;
    }
    param_2[1] = 0.0;
    if (bVar5) {
      fVar13 = fVar16;
    }
    *param_2 = fVar12;
    param_2[2] = fVar14;
    fVar13 = fVar13 - fVar14;
    if (bVar5) {
      fVar11 = fVar15;
    }
  }
  uVar6 = FUN_006f0400(fVar11 - fVar12,fVar13);
  *param_3 = uVar6;
  return;
}

