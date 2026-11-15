
void FUN_024c7b00(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  uint *puVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  uint local_44;
  
  local_58._4_4_ = 0;
  uStack_50 = 0;
  bVar8 = *(byte *)(param_1 + 0x1ee8);
  local_4c = 0;
  uStack_48 = 0x3dcccccd;
  local_44 = local_44 & 0xffffff00;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_58._0_4_ = CONCAT31(local_58._1_3_,bVar8);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_58,*(undefined4 *)(param_1 + 0x230),1);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024c7b68;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((*(byte *)(param_1 + 0x17d2) >> 6 & 1) != 0) {
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    local_60 = *(undefined8 *)(param_1 + 0x1918);
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar10 = 0;
      if (DAT_00000028 == '\0') goto LAB_024c7cd8;
LAB_024c7c90:
      bVar8 = (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))((long *)(lVar10 + 0x20));
      *(undefined1 *)(lVar10 + 0x28) = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar10 + 0x28) != '\0') goto LAB_024c7c90;
LAB_024c7cd8:
      bVar8 = 1;
    }
    *(byte *)(lVar10 + 0x29) = bVar8 & 1;
    local_58._0_4_ = 0xfffe;
    local_58._4_4_ = 0;
    FUN_0277d4ac(&local_58);
    FUN_016e49e4(&local_58,&local_60,1);
    puVar6 = PTR_DAT_04bb43c0;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar6 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        FUN_026738b0(pbVar1,&local_58,1,0);
      }
    }
    local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    if (*(int *)(param_1 + 0x178) != 0) goto LAB_024c7b68;
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58);
  if ((lVar10 != 0) &&
     (local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58),
     *(int *)(lVar10 + 0x15c) != 0)) {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar10 + 0x158);
    }
    bVar14 = *pbVar1;
    bVar8 = *pbVar3;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    if (bVar8 != bVar14) {
      local_60 = 0xfffe;
      FUN_0277d4ac(&local_60);
      puVar6 = PTR_DAT_04bb43c0;
      local_60 = *(undefined8 *)(param_1 + 0x1918);
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_60);
      lVar10 = *(long *)puVar6;
      local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58);
      if (lVar10 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58);
        if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
           (local_58 = (undefined *)CONCAT44(local_58._4_4_,(undefined4)local_58),
           *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          uStack_48 = 0;
          local_44 = 0;
          local_58 = PTR_DAT_04bc0510 + 0x10;
          uStack_50 = (undefined4)local_60;
          local_4c = local_60._4_4_;
          uVar9 = FUN_0277d6c4(&uStack_50);
          if (*(long *)puVar6 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar10 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_60);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar10 + 0x1d8)) &&
                 (((puVar13 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar13 != (uint *)0x0 && (uVar9 = *puVar13, uVar9 != 0)) &&
                  (puVar13 != (uint *)(ulong)uVar9)))) {
                puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
                if (((*puVar15 != 0) && (uVar9 = puVar15[1], uVar9 != 0)) &&
                   ((ulong)(ushort)puVar15[2] != 0)) {
                  lVar10 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    lVar10 = 0x1c;
                  }
                  lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
                  if (lVar10 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar13 - lVar10) / (ulong)uVar9);
                    }
                    if (*puVar15 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if (((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                        (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
                        , uVar5 < 0xbd)) && (uVar5 == 0x6d)) {
                      local_58 = PTR_DAT_04bb2020 + 0x10;
                      uStack_50 = 0x4078356;
                      local_4c = 0;
                      FUN_0279a9f0(pbVar1,&local_58,1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_024c7b68:
  lVar10 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x870) + 0xf0))(lVar10 + 0x870);
  uVar17 = *puVar11;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar17;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  piVar12 = (int *)(**(code **)(*plVar2 + 0x148))();
  uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar12 != 0) {
    uVar9 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar9 & 0xfffffffe;
  if ((uVar9 & 1) != 0) {
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    local_58._0_4_ = 0xfffe;
    local_58._4_4_ = 0;
    FUN_0277d4ac(&local_58);
    uVar9 = (uint)bVar8;
    bVar7 = 7 < uVar9;
    if (bVar7) {
      uVar9 = 0xff;
    }
    local_58._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x1918);
    local_58._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1918) >> 0x20);
    lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar9 * 0x740;
    if (bVar7) {
      lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar10 + 0x24c) = 3;
      FUN_01393458(lVar10 + 0x2f0);
    }
    else {
      *(undefined4 *)(lVar10 + 0x24c) = 4;
    }
  }
  return;
}

