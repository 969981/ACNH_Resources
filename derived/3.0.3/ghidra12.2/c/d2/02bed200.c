
void FUN_02bed200(ulong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float fStack_74;
  uint local_6c;
  undefined4 uStack_68;
  uint local_64;
  
  local_6c = 0xfffe;
  uStack_68 = 0;
  FUN_0277d4ac(&local_6c);
  puVar3 = PTR_DAT_04bb27c0;
  uVar14 = 0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
LAB_02bed390:
    uVar15 = 0;
    fVar13 = 0.0;
    uVar16 = 0;
  }
  else {
    if (((((int)param_1 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              (param_1 >> 0x14 & 0xfff) * 8), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || ((int)plVar12[0x46] != (int)param_1)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) != 1 && *(int *)(lVar8 + 0x288) != -1) {
LAB_02bed2e0:
      uVar5 = 0;
      if (plVar12 != (long *)0x0) goto LAB_02bed2f4;
      goto LAB_02bed390;
    }
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02bed2e0;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar12 == (long *)0x0) goto LAB_02bed390;
LAB_02bed2f4:
    lVar8 = plVar12[0x2a];
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb5920);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar5;
    }
    if ((uVar7 & 1) == 0) goto LAB_02bed390;
    uVar15 = 0;
    fVar13 = 0.0;
    uVar16 = 0;
    if (uVar1 != 0) {
      local_6c = *(uint *)(plVar12 + 0x51);
      uStack_68 = *(undefined4 *)((long)plVar12 + 0x28c);
      lVar8 = plVar12[0xd];
      uVar15 = 0;
      uVar16 = 0;
      fVar13 = 0.0;
      if (lVar8 != 0) {
        uVar15 = *(undefined4 *)(lVar8 + 0x278);
        uVar16 = *(undefined4 *)(lVar8 + 0x280);
        fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x2b4));
        fVar13 = fVar13 * 1.4629181e-09;
      }
      if ((plVar12[0xc] != 0) && (lVar8 = *(long *)(plVar12[0xc] + 0x1150), lVar8 != 0)) {
        if (*(long *)(lVar8 + 0x88) == 0) {
          FUN_039a9f40(lVar8);
          puVar10 = (undefined4 *)(lVar8 + 0x294);
        }
        else {
          puVar10 = (undefined4 *)(*(long *)(lVar8 + 0x88) + 4);
        }
        uVar14 = *puVar10;
      }
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_90 = 0;
  uStack_8c = 0;
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  local_98 = local_6c;
  uStack_94 = uStack_68;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_98);
  local_64 = 0;
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
      local_64 = 0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_02bed4c8;
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_6c);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
        puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8);
        local_64 = 0;
        if (puVar9 == (uint *)0x0) goto LAB_02bed4c8;
        uVar5 = *puVar9;
        if (uVar5 != 0 && puVar9 != (uint *)(ulong)uVar5) {
          puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          if (((*puVar11 != 0) && (uVar5 = puVar11[1], uVar5 != 0)) &&
             ((ulong)(ushort)puVar11[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar11 + lVar8 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 local_64 = (uint)uVar2, uVar2 < 6)) goto LAB_02bed4c8;
            }
          }
        }
      }
    }
    local_64 = 0;
  }
LAB_02bed4c8:
  if (local_64 - 1 < 5) {
    uStack_88 = *(undefined4 *)(&DAT_0417fcbc + (long)(int)(local_64 - 1) * 4);
  }
  else {
    uStack_88 = 0;
  }
  local_98 = local_98 & 0xffffff00;
  local_a0 = (undefined *)CONCAT44(param_4,*param_3);
  uStack_94 = (undefined4)*param_2;
  local_90 = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_8c = *(undefined4 *)(param_2 + 1);
  local_84 = 2;
  local_80 = uVar15;
  uStack_7c = uVar14;
  local_78 = uVar16;
  fStack_74 = fVar13;
  FUN_029a77ec(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_a0);
  return;
}

