
/* WARNING: Removing unreachable block (ram,0x00946d64) */
/* WARNING: Removing unreachable block (ram,0x00946b68) */
/* WARNING: Removing unreachable block (ram,0x00946c14) */
/* WARNING: Removing unreachable block (ram,0x00946c38) */
/* WARNING: Removing unreachable block (ram,0x00946cc0) */
/* WARNING: Removing unreachable block (ram,0x00946d88) */

void FUN_00946970(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined **local_168;
  undefined1 *puStack_160;
  undefined1 auStack_158 [4];
  undefined1 auStack_154 [4];
  undefined8 local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_13c [127];
  undefined1 local_bd;
  ushort local_b6;
  undefined2 local_b4;
  byte local_b2;
  ushort local_b0;
  undefined2 local_ae;
  byte local_ac;
  byte local_aa;
  long local_a8;
  long local_a0;
  undefined *local_98;
  int local_90;
  int local_8c;
  
  lVar7 = *(long *)PTR_DAT_04bb27a8;
  if ((param_2 & 1) == 0) {
    local_150 = (undefined *)((ulong)local_150._4_4_ << 0x20);
  }
  else {
    if (*(int *)(lVar7 + 0x200) == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0x32;
    }
    if (uVar8 == 0) {
      return;
    }
    local_150 = (undefined *)CONCAT44(local_150._4_4_,uVar8);
    if (uVar8 != 0) {
      plVar2 = (long *)(lVar7 + 0x30) + uVar8;
      if (0x38 < uVar8) {
        plVar2 = (long *)(lVar7 + 0x30);
      }
      lVar7 = *plVar2;
      goto joined_r0x00946a10;
    }
  }
  lVar7 = *(long *)(lVar7 + 0x1f8);
joined_r0x00946a10:
  if (((lVar7 != 0) && (lVar10 = *(long *)(lVar7 + 0xb8), lVar10 != 0)) &&
     (lVar11 = *(long *)(lVar7 + 0xa8), lVar11 != 0)) {
    local_a8 = lVar11 + 0x10;
    local_a0 = lVar11 + 0x20;
    local_90 = *(int *)(lVar11 + 0x18);
    local_8c = *(int *)(lVar11 + 0x1c);
    iVar3 = *(int *)(lVar11 + 0x18);
    local_98 = PTR_DAT_04bb2018 + 0x10;
    iVar1 = *(int *)(lVar11 + 0x2c) + 1;
    if ((iVar3 != local_90) || (iVar1 != local_8c)) {
      do {
        uVar5 = FUN_01269270(lVar10,&local_98);
        if ((uVar5 & 1) != 0) {
          FUN_01309ec4(&local_b6,lVar11,&local_98);
          local_150 = (undefined *)((ulong)local_150 & 0xffffffff00000000);
          fVar12 = 0.0;
          if (local_aa != 4) {
            fVar12 = (float)local_aa * 15.0;
          }
          uVar5 = (ulong)*(ushort *)(DAT_0519d040 + 0x408);
          lVar9 = local_b6 - uVar5;
          uVar8 = *(uint *)(DAT_0519d040 + 1000);
          if (((uint)lVar9 < uVar8) && (*(long *)(*(long *)(DAT_0519d040 + 0x3f0) + lVar9 * 8) != 0)
             ) {
            local_bd = 0;
            local_13c[0] = 0;
            local_140 = 0x80;
            local_150 = &DAT_048fc708;
            lVar9 = *(long *)(*(long *)(DAT_0519d040 + 0x3f0) + lVar9 * 8);
            local_148 = local_13c;
            if (lVar9 != 0) {
              lVar6 = FUN_012763b0(lVar9,0x29,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc338);
              lVar9 = *(long *)PTR_PTR_04bbc340;
              if (lVar6 != 0) {
                lVar9 = lVar6;
              }
              FUN_038d1270(&local_150,"%s_%d",lVar9,local_b4);
            }
            uVar8 = (uint)local_b2;
            local_168 = (undefined **)CONCAT44(local_168._4_4_,uVar8);
            (**(code **)(local_150 + 0x18))(&local_150);
            local_168 = &PTR_LAB_048f9770;
            puStack_160 = local_148;
            FUN_00945160(fVar12,(float)(uVar8 << 0x1e) * 1.4629181e-09,param_1,&local_168,&local_98,
                         auStack_154,auStack_158,param_2 & 1);
            uVar5 = (ulong)*(ushort *)(DAT_0519d040 + 0x408);
            uVar8 = *(uint *)(DAT_0519d040 + 1000);
          }
          local_150 = (undefined *)CONCAT44(local_150._4_4_,1);
          uVar4 = (uint)local_b0 - (int)uVar5;
          if ((uVar4 < uVar8) &&
             (*(long *)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar4 * 8) != 0 &&
              local_b0 != 0)) {
            local_bd = 0;
            local_140 = 0x80;
            local_13c[0] = 0;
            local_150 = PTR_DAT_04bb2d88 + 0x10;
            lVar9 = *(long *)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar4 * 8);
            local_148 = local_13c;
            if (lVar9 != 0) {
              lVar6 = FUN_012763b0(lVar9,0x29,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc338);
              lVar9 = *(long *)PTR_PTR_04bbc340;
              if (lVar6 != 0) {
                lVar9 = lVar6;
              }
              FUN_038d1270(&local_150,"%s_%d",lVar9,local_ae);
            }
            uVar8 = (uint)local_ac;
            local_168 = (undefined **)CONCAT44(local_168._4_4_,uVar8);
            (**(code **)(local_150 + 0x18))(&local_150);
            local_168 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            puStack_160 = local_148;
            FUN_00945160(fVar12,(float)(uVar8 << 0x1e) * 1.4629181e-09,param_1,&local_168,&local_98,
                         auStack_154,auStack_158,param_2 & 1);
          }
        }
        if (local_90 < *(int *)(local_a0 + 8)) {
          local_90 = local_90 + 1;
        }
        else {
          local_8c = local_8c + 1;
          local_90 = *(int *)(local_a8 + 8);
        }
      } while (iVar3 != local_90 || iVar1 != local_8c);
    }
    lVar10 = 0x68;
    if ((param_2 & 1) == 0) {
      lVar10 = 0x80;
    }
    FUN_0096e9e0(*(undefined8 *)(param_1 + lVar10),lVar7 + 0x10);
  }
  return;
}

