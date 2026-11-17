
void FUN_02bece60(ulong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  long *plVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float fStack_7c;
  uint local_78;
  undefined4 uStack_74;
  
  local_78 = 0xfffe;
  uStack_74 = 0;
  FUN_0277d4ac(&local_78);
  puVar2 = PTR_DAT_04bb27c0;
  uVar13 = 0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
LAB_02becfe4:
    uVar14 = 0;
    fVar12 = 0.0;
    uVar15 = 0;
  }
  else {
    if (((((int)param_1 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              (param_1 >> 0x14 & 0xfff) * 8), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || ((int)plVar11[0x46] != (int)param_1)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) != 1 && *(int *)(lVar8 + 0x288) != -1) {
LAB_02becf48:
      uVar5 = 0;
      if (plVar11 != (long *)0x0) goto LAB_02becf5c;
      goto LAB_02becfe4;
    }
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02becf48;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar11 == (long *)0x0) goto LAB_02becfe4;
LAB_02becf5c:
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
    uVar4 = 0;
    if ((int)lVar8 == 1) {
      uVar4 = uVar5;
    }
    if (((uVar7 & 1) == 0) || (uVar4 == 0)) goto LAB_02becfe4;
    local_78 = *(uint *)(plVar11 + 0x51);
    uVar14 = 0;
    fVar12 = 0.0;
    uStack_74 = *(undefined4 *)((long)plVar11 + 0x28c);
    uVar15 = 0;
    lVar8 = plVar11[0xd];
    if (lVar8 != 0) {
      uVar14 = *(undefined4 *)(lVar8 + 0x278);
      uVar13 = *(undefined4 *)(lVar8 + 0x27c);
      uVar15 = *(undefined4 *)(lVar8 + 0x280);
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x2b4));
      fVar12 = fVar12 * 1.4629181e-09;
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  local_98 = 0;
  uStack_94 = 0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = local_78;
  uStack_9c = uStack_74;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_a0);
  uVar5 = 0;
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar4 < *(uint *)(lVar8 + 0x1d8)) {
      uVar5 = 0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0) goto LAB_02bed11c;
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_78);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
        puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8);
        uVar5 = 0;
        if (puVar9 == (uint *)0x0) goto LAB_02bed11c;
        uVar5 = *puVar9;
        if (uVar5 != 0 && puVar9 != (uint *)(ulong)uVar5) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          if (((*puVar10 != 0) && (uVar5 = puVar10[1], uVar5 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar8 != 0) {
              uVar4 = 0;
              if ((ulong)uVar5 != 0) {
                uVar4 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar4 * 2),
                 uVar5 = (uint)uVar1, uVar1 < 6)) goto LAB_02bed11c;
            }
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_02bed11c:
  if (uVar5 - 1 < 5) {
    uStack_90 = *(undefined4 *)(&DAT_0417fcbc + (long)(int)(uVar5 - 1) * 4);
  }
  else {
    uStack_90 = 0;
  }
  if ((param_5 & 0xfc) != 0) {
    param_5 = 0;
  }
  local_8c = param_5 & 0xff;
  local_a0 = local_a0 & 0xffffff00;
  uStack_94 = *(undefined4 *)(param_2 + 1);
  local_a8 = (undefined *)CONCAT44(param_4,*param_3);
  uStack_9c = (undefined4)*param_2;
  local_98 = (undefined4)((ulong)*param_2 >> 0x20);
  if (3 < local_8c) {
    local_8c = 2;
  }
  local_88 = uVar14;
  uStack_84 = uVar13;
  local_80 = uVar15;
  fStack_7c = fVar12;
  FUN_029a7898(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_a8);
  return;
}

