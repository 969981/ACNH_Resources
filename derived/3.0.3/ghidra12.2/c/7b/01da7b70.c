
void FUN_01da7b70(undefined1 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined **local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined1 local_64;
  uint local_48;
  undefined4 local_44;
  
  puVar9 = PTR_DAT_04bbaed0;
  puVar8 = PTR_DAT_04bb27d0;
  iVar3 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  local_94[0] = *param_1;
  FUN_01dc9344(*(undefined8 *)PTR_DAT_04bbaed0,local_94);
  local_68 = 0;
  uVar5 = *param_1;
  local_80 = 0;
  uStack_78 = 0;
  local_64 = 0;
  FUN_01dca358(*(undefined8 *)puVar9,&local_90);
  local_48 = 0;
  local_44 = (uint)local_44._3_1_ << 0x18;
  local_44._0_2_ = CONCAT11(uVar5,4);
  if (-1 < *(int *)(PTR_DAT_04bc14d0 + 8)) {
    FUN_01db1df0(**(long **)puVar8 + 0x480,*(int *)(PTR_DAT_04bc14d0 + 8),&local_48,&local_90,0x30,0
                );
  }
  FUN_025585cc(param_1);
  local_98[0] = *param_1;
  puStack_88 = local_98;
  piVar14 = (int *)**(undefined8 **)PTR_DAT_04bb4910;
  iVar4 = *piVar14;
  iVar2 = piVar14[3];
  local_90 = &PTR_FUN_04b43480;
  uVar6 = 0;
  if (*piVar14 != 0) {
    uVar6 = (iVar4 * piVar14[2] + -1) / *piVar14;
  }
  if (-1 < (int)uVar6) {
    uVar15 = 0;
    do {
      iVar7 = 0;
      if (*piVar14 != 0) {
        iVar7 = (iVar2 * iVar4 + -1) / *piVar14;
      }
      if (-1 < iVar7) {
        uVar16 = 0;
        do {
          lVar11 = *(long *)(piVar14 + 4) + (long)(int)(uVar15 + piVar14[2] * uVar16) * 0x23c;
          if ((uint)piVar14[3] <= uVar16 || (uint)piVar14[2] <= uVar15) {
            lVar11 = 0;
          }
          local_48 = uVar15;
          local_44 = uVar16;
          (*(code *)*local_90)(&local_90,lVar11,&local_48);
          uVar16 = uVar16 + 1;
        } while (iVar7 + 1U != uVar16);
      }
      bVar10 = uVar15 != uVar6;
      uVar15 = uVar15 + 1;
    } while (bVar10);
  }
  uVar13 = 0;
  uVar12 = 0;
  lVar11 = *(long *)PTR_DAT_04bb4760;
  do {
    lVar1 = lVar11 + 0x8f8 + uVar12 * 0x28;
    if (0x6c < (uint)uVar13) {
      lVar1 = lVar11 + 0x8f8;
    }
    *(undefined1 *)(lVar1 + 0x1d) = 1;
    uVar13 = uVar12 + 1;
    uVar12 = uVar13 & 0xffffffff;
  } while ((int)uVar13 != 0x6d);
  if (iVar3 == 3) {
    if (*(long *)PTR_DAT_04bb5ae8 != 0) {
      local_9c[0] = *param_1;
      FUN_009304e8(*(long *)PTR_DAT_04bb5ae8,local_9c);
    }
  }
  else {
    FUN_01e2f31c(*(long *)PTR_DAT_04bb3968 + 0xda0);
  }
  return;
}

