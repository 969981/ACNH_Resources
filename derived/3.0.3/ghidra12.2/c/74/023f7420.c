
/* WARNING: Removing unreachable block (ram,0x023f763c) */
/* WARNING: Removing unreachable block (ram,0x023f776c) */

void FUN_023f7420(long param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined *local_70 [4];
  float local_4c;
  float fStack_48;
  float local_44;
  
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar8 + 0x2ec) = uVar9;
  *(undefined1 *)((long)puVar8 + 0x2e5) = 1;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  local_90 = CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                      (float)*(int *)(param_1 + 0x1902) * 0.001);
  local_88 = CONCAT44(local_88._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  if (sVar2 != -1) {
    local_b0 = CONCAT44(local_b0._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
      uVar9 = FUN_016e026c(0,&local_90,0,0);
      local_90 = CONCAT44(uVar9,(undefined4)local_90);
    }
  }
  local_70[0] = PTR_DAT_04bc3128 + 0x10;
  fStack_48 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_44 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  local_b0 = CONCAT44((float)(int)*(short *)(param_1 + 0x191a) * 0.25,
                      (float)*(int *)(param_1 + 0x1916) * 0.001);
  local_a8 = CONCAT44(local_a8._4_4_,(float)*(int *)(param_1 + 0x191c) * 0.001);
  (**(code **)(*(long *)PTR_DAT_04bbde30 + 0x10))(PTR_DAT_04bbde30,local_70);
  FUN_016d8dfc(param_1,&local_b0,&local_4c,&local_90,local_70);
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  local_88 = 0;
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (puVar8[0x227] == 0) {
    local_4c = 0.0;
  }
  else {
    local_4c = (float)(*(uint *)(puVar8 + 0x2d3) >> 1 & 1);
    local_b0 = CONCAT44(local_b0._4_4_,0x19);
    uVar4 = FUN_03850a90(puVar8[0x227],0x19,&local_90,local_4c);
    if ((uVar4 & 1) != 0) {
      fVar10 = 0.0;
      if ((local_78 != (long *)0x0) && (lVar7 = *local_78, lVar7 != 0)) {
        fVar10 = *(float *)(lVar7 + 0x18);
        if (fVar10 < 0.0) {
          fVar10 = *(float *)(local_78[1] + 0xc);
        }
        uVar6 = (uint)(fVar10 - *(float *)(lVar7 + 0x14));
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        fVar10 = (float)(uVar6 - 1);
      }
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(-1.0 / fVar10,&DAT_052461c0);
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar5 = &DAT_05240280;
        }
        else {
          plVar5 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar5 + 0x4c0))(-1.0 / fVar10);
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1922) != '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar8 = &DAT_05240280;
        lVar7 = DAT_052413b8;
      }
      else {
        puVar8 = &DAT_05240280;
        lVar7 = DAT_052413b8;
      }
    }
    else {
      lVar7 = puVar8[0x227];
    }
    if (lVar7 == 0) {
      iVar3 = *(int *)(param_1 + 0x178);
    }
    else {
      local_4c = 2.52234e-44;
      uVar4 = FUN_03850890(lVar7,0x12,&local_b0,*(uint *)(puVar8 + 0x2d3) >> 1 & 1);
      if ((uVar4 & 1) != 0) {
        local_4c = *(float *)(param_1 + 0x1928);
        fStack_48 = *(float *)(param_1 + 0x192c);
        local_44 = (float)CONCAT22(local_44._2_2_,1);
        FUN_02431500(param_1,&local_4c);
      }
      iVar3 = *(int *)(param_1 + 0x178);
    }
    if (iVar3 != 0) {
      return;
    }
  }
  uVar4 = FUN_016d93c8(param_1);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1923) != '\0') {
    *(undefined4 *)(param_1 + 0x1810) = 7;
    uVar4 = FUN_02320230(param_1);
    if ((uVar4 & 1) != 0) {
      FUN_0237432c(param_1,6);
      return;
    }
    local_a8 = CONCAT35((int3)(local_a8 >> 0x28),0x100000000);
LAB_023f7884:
    local_b0 = 0x1000000000006;
    FUN_02374564(param_1,&local_b0);
    return;
  }
  uVar4 = FUN_02320230(param_1);
  if ((uVar4 & 1) == 0) {
    local_a8 = local_a8 & 0xffffff0000000000;
    goto LAB_023f7884;
  }
  if (*(int *)(param_1 + 0x178) != 1) {
    uVar4 = FUN_00a738a0(param_1 + 0x1ee8,0);
    if ((uVar4 & 1) != 0) {
      uVar6 = FUN_00a74b78(param_1 + 0x1ee8);
      local_b0 = CONCAT44(local_b0._4_4_,uVar6);
      lVar7 = 1;
      if (uVar6 < 0xf) {
        if ((1 << (ulong)(uVar6 & 0x1f) & 0x600dU) == 0) {
          if ((uVar6 == 7) || (uVar6 == 9)) {
            lVar7 = (ulong)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
          }
        }
        else {
          lVar7 = 2;
        }
      }
      goto LAB_023f7898;
    }
  }
  lVar7 = 0;
LAB_023f7898:
  FUN_023752f4(param_1,lVar7,6);
  return;
}

