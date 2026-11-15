
undefined4 FUN_02409d50(void)

{
  float *pfVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined *local_30;
  undefined8 uStack_28;
  
  puVar4 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  iVar8 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar6,0);
      iVar8 = 0;
      if (iVar5 == 0x758f7eaf) {
        iVar8 = 0;
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(*(long *)puVar4 + 0x330);
          iVar8 = 0;
          if (lVar9 != 0) {
            iVar8 = *(int *)(lVar9 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar8) {
    local_50 = 0.0;
    local_58 = 0;
    local_38 = 0;
    iStack_34 = 0;
    local_48 = PTR_DAT_04bbc1a0 + 0x10;
    local_30 = PTR_DAT_04bb2010 + 0x10;
    uStack_28 = 0;
    uStack_40 = local_30;
    FUN_01811430(&local_48);
    local_50 = (float)iStack_34 * 5.0 + 5.0;
    local_58 = CONCAT44(local_58._4_4_,(float)(int)local_38 * 5.0 + 5.0);
    lVar9 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0xa8) != 0)) && (*(char *)(lVar9 + 0x11c8) == '\0')) {
      FUN_0093a950(lVar9 + 0x28,&local_58,0);
    }
  }
  else {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_48._0_4_ = 0x19;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        uVar10 = FUN_03771210();
        local_58 = (ulong)uVar10;
        goto LAB_02409fb4;
      }
    }
    uVar7 = FUN_0180c600();
    if ((uVar7 & 1) == 0) {
      uStack_40._4_4_ = 0.0;
      local_38 = 0;
      local_48._4_4_ = 0.0;
      uStack_40._0_4_ = 0.0;
      FUN_016e70c0(&local_48);
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_38 >> 0x14) & 0xff0));
      fVar11 = (float)(local_38 & 0xffffff) * 5.9604645e-08;
      fVar12 = *pfVar1 + fVar11 * pfVar1[1];
      fVar11 = pfVar1[2] + fVar11 * pfVar1[3];
      fVar13 = fVar12 * 0.0;
      local_58 = CONCAT44((float)uStack_40 +
                          (fVar13 * 0.0 + 1.0) * 0.0 + fVar11 * 0.0 * 0.0 + fVar13 * -2.55,
                          local_48._4_4_ + fVar13 * 0.0 + fVar11 * 0.0 + (fVar12 + 0.0) * -2.55);
      local_50 = uStack_40._4_4_ + (fVar11 * 0.0 * 0.0 - fVar12 * 0.0) + fVar11 * -2.55;
    }
    else {
      local_58 = 0x431b0000;
      local_50 = 195.0;
    }
    FUN_016e026c(0,&local_58,0,0);
  }
LAB_02409fb4:
  return (undefined4)local_58;
}

