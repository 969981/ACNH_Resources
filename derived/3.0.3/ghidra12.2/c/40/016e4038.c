
/* WARNING: Removing unreachable block (ram,0x016e4418) */

void FUN_016e4038(long param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  float fVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined5 local_6c;
  undefined3 uStack_67;
  undefined5 uStack_64;
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  lVar10 = *(long *)(param_1 + 0xa0);
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x178) & 1) == 0)) {
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0.0;
    local_80 = 0;
    local_c0 = PTR_DAT_04bb2cc0 + 0x10;
    local_74 = 0;
    local_90 = PTR_DAT_04bb2ca0 + 0x10;
    local_b8 = (char *)0x0;
    local_6c = 0;
    uStack_67 = 0;
    uStack_64 = 0;
    local_78 = 7;
    local_88 = 0;
    local_58 = PTR_DAT_04bb2010 + 0x10;
    local_48 = 0;
    uStack_50 = 0;
    local_44 = 0;
    FUN_0093ab70(*(long *)PTR_DAT_04bb27c8 + 0x28,*(long *)(param_1 + 0x68) + 0x278,&local_c0);
    local_cc = (undefined4)local_88;
    uStack_c8 = local_88._4_4_;
    local_c4 = (undefined4)local_80;
  }
  else {
    local_c4 = *(undefined4 *)(lVar10 + 0x4fe8);
    local_cc = *(undefined4 *)(lVar10 + 0x4fe0);
    uStack_c8 = *(undefined4 *)(lVar10 + 0x4fe4);
  }
  local_c0 = (undefined *)
             CONCAT44(local_c0._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
  FUN_006f0ab0(&local_cc,&local_c0);
  puVar4 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = "HumanDownSlopeDegree";
  local_c0 = puVar1;
  if (((puVar11[0x227] != 0) && (lVar10 = *(long *)(puVar11[0x227] + 0x78), lVar10 != 0)) &&
     (plVar6 = *(long **)(lVar10 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_c0);
  }
  puVar2 = (undefined2 *)((long)puVar11 + 0x5c71);
  local_c0 = (undefined *)
             CONCAT44(local_c0._4_4_,*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x40000000);
  FUN_006f0ab0(&local_cc,&local_c0);
  local_b8 = "HumanLeftDownSlopeDegree";
  lVar10 = puVar11[0x227];
  local_c0 = puVar1;
  if (lVar10 != 0) {
    if ((*(long *)(lVar10 + 0x78) == 0) ||
       (plVar6 = *(long **)(*(long *)(lVar10 + 0x78) + 0x48), plVar6 == (long *)0x0)) {
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2dc);
      lVar10 = *(long *)(lVar10 + 0x78);
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_c0);
      local_c0 = puVar4 + 0x10;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2dc);
      local_b8 = "HumanMoveSpeed";
      if (puVar11[0x227] == 0) goto LAB_016e4240;
      lVar10 = *(long *)(puVar11[0x227] + 0x78);
    }
    local_b8 = "HumanMoveSpeed";
    local_c0 = puVar4 + 0x10;
    if (lVar10 != 0) {
      local_b8 = "HumanMoveSpeed";
      local_c0 = puVar4 + 0x10;
      plVar6 = *(long **)(lVar10 + 0x48);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x30))(uVar12,plVar6,&local_c0);
      }
    }
  }
LAB_016e4240:
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_007535b4(&local_c0,*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x238);
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    local_d0 = 0.0;
    local_d8 = 0;
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar7 = &DAT_05240280;
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    uVar8 = FUN_016ff8c0(puVar7,0xd,&local_d8);
    if ((uVar8 & 1) != 0) {
      fVar13 = local_d8._4_4_ * local_a0._4_4_;
      fVar3 = (float)local_d8 * (float)local_a0;
      local_d8 = CONCAT44(local_a8._4_4_ +
                          local_d8._4_4_ * local_b0._4_4_ + (float)local_d8 * (float)local_b0 +
                          local_d0 * (float)local_a8,
                          local_b8._4_4_ +
                          local_d8._4_4_ * local_c0._4_4_ + (float)local_d8 * (float)local_c0 +
                          local_d0 * (float)local_b8);
      local_d0 = fStack_94 + fVar13 + fVar3 + local_d0 * local_98;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    local_e0 = 0.0;
    local_e8 = 0;
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar7 = &DAT_05240280;
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    uVar8 = FUN_016ff8c0(puVar7,0x11,&local_e8);
    if ((uVar8 & 1) != 0) {
      fVar13 = local_e8._4_4_ * local_a0._4_4_;
      fVar3 = (float)local_e8 * (float)local_a0;
      local_e8 = CONCAT44(local_a8._4_4_ +
                          local_e8._4_4_ * local_b0._4_4_ + (float)local_e8 * (float)local_b0 +
                          local_e0 * (float)local_a8,
                          local_b8._4_4_ +
                          local_e8._4_4_ * local_c0._4_4_ + (float)local_e8 * (float)local_c0 +
                          local_e0 * (float)local_b8);
      local_e0 = fStack_94 + fVar13 + fVar3 + local_e0 * local_98;
    }
    local_f8 = puVar4 + 0x10;
    pcStack_f0 = "HumanFrontFoot";
    if (((puVar11[0x227] != 0) && (lVar10 = *(long *)(puVar11[0x227] + 0x78), lVar10 != 0)) &&
       (plVar6 = *(long **)(lVar10 + 0x48), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_f8,local_d0 < local_e0);
    }
  }
  *puVar2 = 0;
  *(undefined1 *)((long)puVar11 + 0x5c73) = 0;
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  uVar9 = 0;
  if (puVar7[0x227] != 0) {
    uVar9 = *(uint *)(puVar7 + 0x2d3) >> 1 & 1;
  }
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar9);
  FUN_01727510(puVar2,puVar11,uVar9);
  if ((float)local_c0 != 0.0) {
    FUN_01727510(puVar2,puVar11,0);
  }
  return;
}

