
/* WARNING: Removing unreachable block (ram,0x016e91bc) */
/* WARNING: Removing unreachable block (ram,0x016e92ac) */

void FUN_016e905c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  char *pcVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  int local_44;
  
  puVar3 = PTR_DAT_04bb2010;
  uVar1 = *param_2;
  local_70 = param_2[1];
  local_68 = param_2[2];
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_80 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  local_78._4_1_ = (char)((ulong)uVar1 >> 0x20);
  bVar5 = local_78._4_1_ != '\0';
  local_78 = uVar1;
  if (bVar5) {
    local_60 = PTR_DAT_04bb2010 + 0x10;
    local_58 = (int)((float)(int)(float)local_88 / 5.0) - (uint)((float)local_88 < 0.0);
    iStack_54 = (int)((float)(int)local_80 / 5.0) - (uint)(local_80 < 0.0);
    FUN_011e9780(&local_60);
  }
  if (local_78._5_1_ != '\0') {
    FUN_01261e40(0x40200000,PTR_DAT_04bb5dc0,&local_88,0,0);
    FUN_01261e40(0x40200000,PTR_DAT_04bbcd38,&local_88,0,1);
  }
  if (local_78._6_1_ != '\0') {
    FUN_01261e40(0x40200000,PTR_DAT_04bbcd38,&local_88,0,1);
  }
  fVar10 = (float)FUN_016e026c(0,&local_70,0,0);
  puVar4 = PTR_DAT_04bb2200;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar9 != 0)) {
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    lVar9 = *(long *)(lVar9 + 0x118);
    if (lVar9 != 0) {
      local_44 = 0;
      fVar11 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_70,&local_44);
      if (local_44 == 5) {
        lVar9 = *(long *)(lVar9 + 0x280);
        fVar11 = 0.0;
        if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 8), lVar9 != 0)) {
          pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x488) + 0xf0))(lVar9 + 0x488);
          fVar11 = *pfVar7;
          uVar1 = local_88;
          uVar2 = local_68;
          goto joined_r0x016e92d0;
        }
      }
      else {
        local_60 = (undefined *)CONCAT44(local_60._4_4_,local_44);
        lVar9 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_44);
        if ((((lVar9 == 0) ||
             (pcVar8 = (char *)FUN_009823a0(lVar9,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
             pcVar8 == (char *)0x0)) || (*pcVar8 == '\0')) && (local_44 != 0xc)) goto LAB_016e92d8;
        fVar12 = 0.0;
        if ((*(long *)puVar4 != 0) && (lVar9 = *(long *)(*(long *)puVar4 + 0x50), lVar9 != 0)) {
          local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
          lVar9 = *(long *)(lVar9 + 0x118);
          if (lVar9 != 0) {
            fVar12 = (float)FUN_015bc77c(lVar9,&local_70,0,0);
          }
        }
        fVar11 = fVar11 + fVar12;
      }
      uVar1 = local_88;
      uVar2 = local_68;
      goto joined_r0x016e92d0;
    }
  }
LAB_016e92d8:
  fVar11 = -100.0;
  uVar1 = local_88;
  uVar2 = local_68;
joined_r0x016e92d0:
  if (local_68._7_1_ == '\0') {
    local_88._4_4_ = (float)((ulong)uVar1 >> 0x20);
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    local_88._4_4_ = local_88._4_4_ - fVar10;
    fVar10 = -local_88._4_4_;
    if (0.0 <= local_88._4_4_) {
      fVar10 = local_88._4_4_;
    }
    if (7.5 <= fVar10) {
      return;
    }
  }
  local_68._4_1_ = (char)((ulong)uVar2 >> 0x20);
  bVar5 = local_68._4_1_ != '\0';
  local_88 = uVar1;
  local_68 = uVar2;
  if (bVar5) {
    local_60 = puVar3 + 0x10;
    local_68._0_4_ = (float)uVar2;
    local_58 = (int)((float)(int)(float)local_70 / 5.0) - (uint)((float)local_70 < 0.0);
    iStack_54 = (int)((float)(int)(float)local_68 / 5.0) - (uint)((float)local_68 < 0.0);
    FUN_011e9780(&local_60);
  }
  if (local_68._5_1_ != '\0') {
    iVar14 = (int)(float)local_70;
    bVar5 = (float)local_70 < 0.0;
    bVar6 = (float)local_68 < 0.0;
    iVar15 = (int)(float)local_68;
    uVar13 = FUN_016e026c(0,&local_70,0,0);
    local_70 = CONCAT44(uVar13,(float)(int)((int)((float)iVar14 / 5.0) - (uint)bVar5 & 0xfffffffe) *
                               5.0 + 5.0);
    local_68 = CONCAT44(local_68._4_4_,
                        (float)(int)((int)((float)iVar15 / 5.0) - (uint)bVar6 & 0xfffffffe) * 5.0 +
                        5.0);
    FUN_01261e40(0x40980000,PTR_DAT_04bb5dc0,&local_70,0,0);
    FUN_01261e40(0x40980000,PTR_DAT_04bbcd38,&local_70,0,1);
  }
  if (local_68._6_1_ != '\0') {
    FUN_01261e40(0,PTR_DAT_04bbcd38,&local_70,0,1);
  }
  return;
}

