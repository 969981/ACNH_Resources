
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03455b14(long param_1,undefined4 *param_2,byte *param_3)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  short *psVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  int local_50;
  float fStack_4c;
  undefined4 local_48;
  int local_44;
  float fStack_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  bVar7 = *param_3;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x4c) = bVar7;
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_3, 7 < uVar8)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar9 = &DAT_054f0c08;
      if (iVar11 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
        psVar9 = &DAT_054f0c08;
      }
    }
    else {
      psVar9 = &DAT_054f0c08;
    }
  }
  else {
    psVar9 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar9[0x32] == '\0') || (*psVar9 != *(short *)PTR_DAT_04bb6298)) {
    local_44 = 1;
  }
  else {
    local_44 = *(int *)(psVar9 + 0x30);
  }
  if (local_44 - 5U < 0xfffffffd) {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_44 = 6;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 6 & 1) != 0) && (DAT_05453f6c != -1)) {
        local_50 = 4;
        goto LAB_03455c78;
      }
    }
    if ((*(byte *)(*DAT_0537d558 + 0x476) < 2) || (uVar8 = FUN_033f9b30(), (uVar8 & 1) == 0)) {
      local_50 = 0;
    }
    else {
      local_50 = 0x11;
    }
  }
  else {
    local_50 = 0x12;
  }
LAB_03455c78:
  if (local_50 == 0) {
    local_38 = 0;
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_3 * 0x740;
    if (7 < *param_3) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    uVar8 = FUN_022b1ec4(lVar2 + 0xb0,param_2,&local_44);
    iVar11 = local_38;
    if ((uVar8 & 1) == 0) {
      FUN_03455e58(param_1,param_3);
      return;
    }
    local_50 = local_44;
    fStack_4c = fStack_40;
    local_48 = local_3c;
    local_34 = local_38;
    fVar12 = fStack_40;
    if (local_38 - 2U < 4) {
      uVar13 = local_3c;
      if (DAT_05aed670 == 0) {
        puVar10 = &DAT_055c04a0;
      }
      else {
        puVar10 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar10 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar5 = FUN_006bd550(*puVar10,0);
          puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar10 = &DAT_055c04a0;
          }
          fVar12 = fStack_40;
          uVar13 = local_3c;
        }
      }
      iVar11 = FUN_0153e6b0(&local_50,iVar11,*(undefined4 *)(puVar10 + 7));
      local_3c = uVar13;
    }
    else {
      iVar11 = local_44;
      fVar12 = fStack_40 + 40.0;
      if (local_38 != 7) {
        fVar12 = fStack_40;
      }
    }
    *(undefined4 *)(param_1 + 0x48) = 3;
    uVar6 = 3;
    uVar13 = *param_2;
    uVar3 = param_2[1];
    *(int *)(param_1 + 0x58) = iVar11;
    *(float *)(param_1 + 0x5c) = fVar12;
    *(undefined4 *)(param_1 + 0x60) = local_3c;
    *(int *)(param_1 + 100) = local_38;
    *(undefined4 *)(param_1 + 0x50) = uVar13;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  else {
    *(int *)(param_1 + 0x84) = local_50;
    *(undefined4 *)(param_1 + 0x48) = 3;
    uVar6 = 8;
  }
  FUN_03ebb160(param_1,uVar6);
  return;
}

