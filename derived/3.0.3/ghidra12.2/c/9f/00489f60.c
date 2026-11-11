
void FUN_00489f60(undefined4 *param_1,long *param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_58 [8];
  
  lVar7 = *param_2;
  lVar14 = param_2[1];
  if ((ulong)(lVar14 - lVar7) % 0xc != 0) {
    if (DAT_04c70f78 != '\0') {
      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
      lVar7 = FUN_004446b0(auStack_a0,"ITEMS section has the wrong size",&DAT_0413df78);
      *(char **)(lVar7 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x30) = 0x976;
      *(undefined4 *)(lVar7 + 0xc) = 0x66e1b3ab;
      FUN_00444c00(auStack_a0);
    }
    *param_1 = 0x80040200;
    return;
  }
  lVar13 = param_2[2];
  *(long *)(param_1 + 0x14) = lVar13;
  *(long *)(param_1 + 0x16) = lVar13 + (long)(int)((ulong)(lVar14 - lVar7) / 0xc) * 0xc;
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_0044e560(auStack_58);
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  uVar3 = param_1[6];
  uVar5 = uVar3;
  if ((int)uVar3 < 1) {
    local_a8._0_4_ = 0;
  }
  else {
    local_b0 = FUN_00426720(PTR_DAT_048607b8,uVar3,8,0,0,(long)&local_a8 + 4);
    uVar6 = (uint)local_a8;
    if (uVar3 - (uint)local_a8 != 0 && (int)(uint)local_a8 <= (int)uVar3) {
      uVar4 = ~(uint)local_a8;
      puVar10 = (undefined8 *)(local_b0 + (long)(int)(uint)local_a8 * 8);
      uVar2 = uVar3 - (uint)local_a8 & 3;
      local_a8 = CONCAT44(local_a8._4_4_,uVar3);
      if (2 < uVar3 + uVar4) {
        iVar12 = (uVar6 + uVar2) - uVar3;
        puVar9 = puVar10;
        do {
          puVar10 = puVar9 + 4;
          *puVar9 = 0xfffffffe;
          puVar9[1] = 0xfffffffe;
          iVar12 = iVar12 + 4;
          puVar9[2] = 0xfffffffe;
          puVar9[3] = 0xfffffffe;
          puVar9 = puVar10;
        } while (iVar12 != 0);
      }
      if (uVar2 != 0) {
        iVar12 = -uVar2;
        do {
          iVar12 = iVar12 + 1;
          *puVar10 = 0xfffffffe;
          puVar10 = puVar10 + 1;
        } while (iVar12 != 0);
      }
      goto joined_r0x0048a0f8;
    }
  }
  uVar5 = (uint)local_a8;
  if ((int)uVar3 < (int)(uint)local_a8) {
    local_a8 = CONCAT44(local_a8._4_4_,uVar3);
    uVar5 = uVar3;
  }
joined_r0x0048a0f8:
  if (uVar5 == 0) {
    if (DAT_04c70f78 != '\0') {
      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
      lVar7 = FUN_004446b0(auStack_a0,
                           "No types found. Was this input created for inplace loading? (Save.withTarget())"
                           ,&DAT_0413df78);
      *(char **)(lVar7 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x30) = 0x9e8;
      FUN_00444c00(auStack_a0);
    }
    *param_1 = 0x80040200;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x14);
    if (1 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar7) >> 2) * -0x55555555) {
      lVar13 = 0;
      lVar14 = 1;
      do {
        lVar7 = lVar7 + lVar13;
        uVar3 = *(uint *)(lVar7 + 0xc) & 0xf0000000;
        if ((uVar3 == 0x10000000 || uVar3 == 0x30000000) || uVar3 == 0x20000000) {
          uVar11 = (ulong)*(uint *)(lVar7 + 0xc) & 0xffffff;
          puVar1 = (ulong *)(local_b0 + uVar11 * 8);
          uVar8 = (ulong)(uint)*puVar1;
          if ((int)(uint)*puVar1 < -1) {
            uVar8 = FUN_0044e580(auStack_58,*(undefined8 *)(*(long *)(param_1 + 4) + uVar11 * 8));
            *puVar1 = uVar8;
          }
          if (-1 < (int)uVar8) {
            FUN_0044e7a0(auStack_58,puVar1,*(long *)(param_1 + 0x10) + (long)*(int *)(lVar7 + 0x10),
                         *(undefined4 *)(lVar7 + 0x14));
          }
        }
        lVar7 = *(long *)(param_1 + 0x14);
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0xc;
      } while (lVar14 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar7) >> 2) * -0x55555555);
    }
  }
  lVar7 = local_a8;
  uVar3 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_b0 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_b0,8,uVar3 & 0x3fffffff);
  }
  FUN_0044ebe0(auStack_58);
  return;
}

