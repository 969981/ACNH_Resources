
ulong FUN_014e9900(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                  float *param_6,uint param_7)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  float extraout_s0;
  float extraout_s0_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_6c;
  float fStack_68;
  float local_64;
  
  fVar13 = *param_6;
  fVar14 = param_6[1];
  fVar15 = param_6[2];
  iVar4 = *(int *)(param_5 + 0x18);
  uVar5 = FUN_014e8b30();
  local_6c = extraout_s0;
  fStack_68 = param_2;
  local_64 = param_3;
  if (iVar4 - 2U < 4) {
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar3 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    uVar5 = FUN_0153e900(&local_6c,iVar4,*(undefined4 *)(puVar11 + 7));
    fVar12 = extraout_s0_00;
  }
  else {
    param_2 = 0.0;
    fVar12 = extraout_s0;
  }
  fVar12 = fVar12 - fVar13;
  param_2 = param_2 - fVar14;
  *(float *)(param_4 + 0x68) = fVar12;
  param_3 = param_3 - fVar15;
  *(float *)(param_4 + 0x6c) = param_2;
  *(float *)(param_4 + 0x70) = param_3;
  *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_4 + 0x38);
  *(float *)(param_4 + 0x48) = fVar13 + fVar12;
  *(float *)(param_4 + 0x4c) = fVar14 + param_2;
  *(float *)(param_4 + 0x50) = fVar15 + param_3;
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_5 + 0x14);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_5 + 0x18);
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_5 + 0x14);
  *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_5 + 0x18);
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_4 + 0x18) == 1) && (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
    uVar10 = *(uint *)(param_4 + 0x8c);
    if ((uVar10 == 0) ||
       (((plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0 ||
         ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
      plVar9 = (long *)0x0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      uVar5 = (**(code **)(*plVar6 + 0x60))();
      if ((int)uVar5 < 0x11) {
        uVar10 = 0;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014e9b18;
        uVar10 = 5U >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar9 != (long *)0x0) goto LAB_014e9b2c;
      goto LAB_014e9bac;
    }
LAB_014e9b18:
    uVar10 = 1;
    if (plVar9 == (long *)0x0) goto LAB_014e9bac;
LAB_014e9b2c:
    lVar8 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((uVar5 & 1) == 0) goto LAB_014e9bac;
    if ((int)lVar8 != 1) {
      uVar10 = 1;
    }
    if ((uVar10 != 0) || ((uVar1 >> 4 & 1) == 0)) goto LAB_014e9bac;
    uVar5 = FUN_0147eff0(plVar9,param_7 & 1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_014e7d1c(param_4);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    uVar7 = FUN_014e8030(param_4);
    if (*(int *)(param_4 + 0xe8) != 0) {
      plVar9 = *(long **)(param_4 + 0xf0);
      lVar8 = (long)*(int *)(param_4 + 0xe8) << 3;
      uVar10 = 1;
      do {
        plVar6 = (long *)FUN_014e7558(uVar7,*(undefined4 *)(*plVar9 + 0x14));
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x358))(plVar6,1);
          uVar10 = uVar10 & (uint)uVar7;
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      goto LAB_014e9ce4;
    }
  }
  else {
LAB_014e9bac:
    if (*(int *)(param_4 + 0x98) == 0) {
LAB_014e9c38:
      if (*(int *)(param_4 + 0x18) != 3) {
        return 0;
      }
      plVar9 = (long *)FUN_014e7558(uVar5,*(undefined4 *)(param_4 + 0x8c));
      if (plVar9 == (long *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x014e9c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar9 + 0x358))(plVar9,0);
      return uVar5;
    }
    plVar9 = (long *)FUN_014ba988(param_4 + 0x90);
    uVar5 = 0;
    if (plVar9 == (long *)0x0) goto LAB_014e9c38;
    uVar5 = (**(code **)(*plVar9 + 0x58))(plVar9,param_7 & 1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_014e7d1c(param_4);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    uVar7 = FUN_014e8030(param_4);
    if (*(int *)(param_4 + 0xe8) != 0) {
      plVar9 = *(long **)(param_4 + 0xf0);
      lVar8 = (long)*(int *)(param_4 + 0xe8) << 3;
      uVar10 = 1;
      do {
        plVar6 = (long *)FUN_014e7558(uVar7,*(undefined4 *)(*plVar9 + 0x14));
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x358))(plVar6,1);
          uVar10 = uVar10 & (uint)uVar7;
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      goto LAB_014e9ce4;
    }
  }
  uVar10 = 1;
LAB_014e9ce4:
  return (ulong)uVar10;
}

