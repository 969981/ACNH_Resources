
/* WARNING: Removing unreachable block (ram,0x0245a790) */
/* WARNING: Removing unreachable block (ram,0x0245a914) */

void FUN_0245a614(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined *local_60 [4];
  float local_3c;
  float fStack_38;
  float local_34;
  
  puVar5 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar7 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar5 + 0x2ec) = uVar7;
  *(undefined1 *)((long)puVar5 + 0x2e5) = 1;
  fStack_38 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_3c = (float)*(int *)(param_1 + 0x1902) * 0.001;
  local_34 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_80 = CONCAT44((float)(int)*(short *)(param_1 + 0x191a) * 0.25,
                      (float)*(int *)(param_1 + 0x1916) * 0.001);
  local_78 = CONCAT44(local_78._4_4_,(float)*(int *)(param_1 + 0x191c) * 0.001);
  local_a0 = CONCAT44((float)(int)*(short *)(param_1 + 0x1910) * 0.25,
                      (float)*(int *)(param_1 + 0x190c) * 0.001);
  local_98 = CONCAT44(local_98._4_4_,(float)*(int *)(param_1 + 0x1912) * 0.001);
  local_60[0] = PTR_DAT_04bc3128 + 0x10;
  (**(code **)(*(long *)PTR_DAT_04bbde30 + 0x10))(PTR_DAT_04bbde30,local_60);
  FUN_016d8dfc(param_1,&local_80,&local_a0,&local_3c,local_60);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
      lVar6 = DAT_052413b8;
      goto joined_r0x0245a768;
    }
    puVar5 = &DAT_05240280;
  }
  lVar6 = puVar5[0x227];
joined_r0x0245a768:
  if (lVar6 == 0) {
    local_3c = 0.0;
    iVar1 = *(int *)(param_1 + 0x178);
  }
  else {
    uVar2 = (ulong)local_a0 >> 0x20;
    local_3c = (float)(*(uint *)(puVar5 + 0x2d3) >> 1 & 1);
    local_a0 = CONCAT44((int)uVar2,0x19);
    uVar2 = FUN_03850a90(lVar6,0x19,&local_80,local_3c);
    if ((uVar2 & 1) != 0) {
      fVar8 = 0.0;
      if ((local_68 != (long *)0x0) && (lVar6 = *local_68, lVar6 != 0)) {
        fVar8 = *(float *)(lVar6 + 0x18);
        if (fVar8 < 0.0) {
          fVar8 = *(float *)(local_68[1] + 0xc);
        }
        uVar4 = (uint)(fVar8 - *(float *)(lVar6 + 0x14));
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        fVar8 = (float)(uVar4 - 1);
      }
      plVar3 = *(long **)(param_1 + 0x60);
      if (plVar3 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar1 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar3 = &DAT_05240280;
        }
        else {
          plVar3 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar3 + 0x4c0))(-1.0 / fVar8);
    }
    iVar1 = *(int *)(param_1 + 0x178);
  }
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x1921) != '\0')) {
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    if (puVar5[0x227] != 0) {
      local_3c = 2.52234e-44;
      uVar2 = FUN_03850890(puVar5[0x227],0x12,&local_a0,*(uint *)(puVar5 + 0x2d3) >> 1 & 1);
      if ((uVar2 & 1) != 0) {
        local_3c = *(float *)(param_1 + 0x1924);
        fStack_38 = *(float *)(param_1 + 0x1928);
        local_34 = (float)CONCAT22(local_34._2_2_,1);
        FUN_02431500(param_1,&local_3c);
      }
    }
  }
  uVar2 = FUN_016d93c8(param_1);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    local_98 = local_98 & 0xffffff0000000000;
    local_a0 = 0x1000000000006;
    FUN_02374564(param_1,&local_a0);
  }
  return;
}

