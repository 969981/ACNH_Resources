
void FUN_01e73870(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  void *__s;
  uint *puVar11;
  long lVar12;
  int iVar13;
  undefined *puVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined **local_9c0;
  undefined1 auStack_9b8 [24];
  long local_9a0;
  undefined8 local_998;
  undefined4 local_990;
  undefined4 local_988;
  undefined4 local_984;
  undefined4 uStack_980;
  undefined1 local_968;
  undefined8 local_960;
  int local_954;
  uint local_264;
  uint local_260;
  uint local_25c;
  int local_258;
  undefined4 local_250 [10];
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined4 local_174;
  undefined4 local_170;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_78 [2];
  
  lVar8 = DAT_053e0208;
  uVar19 = 0;
  piVar1 = (int *)(param_1 + 0xef10);
  puVar2 = (undefined8 *)(param_1 + 0xb03c);
  lVar15 = *(long *)(param_1 + 8);
  if (lVar15 == 0) {
    uVar20 = 0;
    uVar18 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar15 + 0x508);
    uVar20 = 0;
    uVar18 = 0;
    if (uVar9 != 0xffffffff) {
      puVar14 = &DAT_053fe348 + (ulong)uVar9 * 0xba0;
      if (9 < uVar9) {
        puVar14 = &DAT_053fe348;
      }
      uVar18 = *(undefined4 *)(puVar14 + 0x7d8);
      uVar20 = *(undefined4 *)(puVar14 + 0x7dc);
      uVar19 = *(undefined4 *)(puVar14 + 0x7e0);
    }
  }
  piVar10 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x2748) + 0xf0))(DAT_053e0208 + 0x2748);
  iVar4 = *piVar10;
  piVar10 = (int *)(**(code **)(*(long *)(lVar8 + 0x2778) + 0xf0))(lVar8 + 0x2778);
  iVar17 = *piVar10;
  uVar9 = *(uint *)(lVar15 + 0x288);
  *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
  uVar9 = uVar9 ^ uVar9 << 0xb;
  *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
  uVar5 = *(uint *)(lVar15 + 0x294);
  *(uint *)(lVar15 + 0x290) = uVar5;
  uVar9 = uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5;
  *(uint *)(lVar15 + 0x294) = uVar9;
  iVar4 = iVar4 + (int)((ulong)uVar9 * (ulong)((iVar17 - iVar4) + 1) >> 0x20);
  if (0 < iVar4) {
    iVar17 = 0;
    do {
      FUN_01e63f1c(local_250);
      local_250[0] = 0x4f;
      local_9c0 = &PTR_LAB_049ff3a8;
      memset(auStack_9b8,0,0x754);
      uVar9 = nn::os::GetSystemTick();
      local_264 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      local_260 = (local_264 ^ local_264 >> 0x1e) * 0x6c078965 + 2;
      local_25c = (local_260 ^ local_260 >> 0x1e) * 0x6c078965 + 3;
      local_258 = (local_25c ^ local_25c >> 0x1e) * 0x6c078965 + 4;
      __s = (void *)(*(code *)local_9c0[3])(&local_9c0);
      memset(__s,0,0x754);
      local_78[0] = 0x32;
      local_a0 = local_78;
      local_a8 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_9c0,&local_a8);
      puVar11 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar9 = *puVar11 ^ *puVar11 << 0xb;
      uVar3 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar5 = uVar9 ^ uVar3;
      uVar9 = uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar5;
      puVar11[2] = uVar3;
      puVar11[3] = uVar9;
      uVar9 = (uVar9 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      uVar5 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
      local_a8 = (undefined **)CONCAT44(uVar5,uVar9);
      uVar9 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (undefined4 *)CONCAT44((uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4,uVar9);
      lVar12 = (*(code *)local_9c0[4])(&local_9c0);
      lVar15 = 0;
      iVar13 = 0;
      do {
        puVar11 = (uint *)(lVar12 + lVar15);
        lVar15 = lVar15 + 4;
        uVar9 = *puVar11 - (*puVar11 >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        iVar13 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar13;
      } while (lVar15 != 0x754);
      if (iVar13 == 0) {
        puVar16 = (undefined4 *)&DAT_05586008;
      }
      else {
        lVar12 = (*(code *)local_9c0[4])(&local_9c0);
        lVar15 = 0;
        uVar9 = 0;
        do {
          puVar11 = (uint *)(lVar12 + lVar15);
          lVar15 = lVar15 + 4;
          uVar5 = *puVar11 - (*puVar11 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar9 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar9;
        } while (lVar15 != 0x754);
        puVar16 = local_78;
        uVar5 = (uint)local_a8 ^ (uint)local_a8 << 0xb;
        local_a8 = (undefined **)CONCAT44((undefined4)local_a0,local_a8._4_4_);
        uVar5 = uVar5 >> 8 ^ local_a0._4_4_ >> 0x13 ^ uVar5 ^ local_a0._4_4_;
        local_a0 = (undefined4 *)CONCAT44(uVar5,local_a0._4_4_);
        FUN_00889f80(local_78,&local_9c0,(int)((ulong)uVar5 * (ulong)uVar9 >> 0x20) + 1);
        FUN_01a4c66c(&local_a8,local_78);
      }
      local_1f8 = 1;
      local_220 = *(undefined4 *)(param_1 + 0xb044);
      local_1f0 = 0x100000001;
      local_174 = *puVar16;
      local_170 = puVar16[1];
      local_228 = *puVar2;
      local_218 = uVar18;
      local_214 = uVar20;
      local_210 = uVar19;
      if (*piVar1 < *(int *)(param_1 + 0xef14)) {
        FUN_021920b0(piVar1,local_250);
      }
      if (iVar17 < iVar4 + -1) {
        FUN_01e63f1c(&local_9c0);
        local_9c0 = (undefined **)CONCAT44(local_9c0._4_4_,1);
        lVar15 = *(long *)(param_1 + 8);
        piVar10 = (int *)(**(code **)(*(long *)(lVar8 + 0x27a8) + 0xf0))();
        iVar13 = *piVar10;
        piVar10 = (int *)(**(code **)(*(long *)(lVar8 + 0x27d8) + 0xf0))();
        uVar9 = *(uint *)(lVar15 + 0x288) ^ *(uint *)(lVar15 + 0x288) << 0xb;
        iVar6 = *piVar10;
        *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
        uVar7 = *(undefined4 *)(lVar15 + 0x290);
        uVar5 = *(uint *)(lVar15 + 0x294);
        *(uint *)(lVar15 + 0x290) = uVar5;
        local_968 = 1;
        local_960 = 0x100000001;
        *(undefined4 *)(lVar15 + 0x28c) = uVar7;
        uVar9 = uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5;
        *(uint *)(lVar15 + 0x294) = uVar9;
        local_998 = *puVar2;
        local_990 = *(undefined4 *)(param_1 + 0xb044);
        local_954 = iVar13 + (int)((ulong)uVar9 * (ulong)((iVar6 - iVar13) + 1) >> 0x20);
        local_988 = uVar18;
        local_984 = uVar20;
        uStack_980 = uVar19;
        if (*piVar1 < *(int *)(param_1 + 0xef14)) {
          FUN_021920b0(piVar1,&local_9c0);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar4);
  }
  FUN_01e63f1c(&local_9c0);
  local_9c0 = (undefined **)CONCAT44(local_9c0._4_4_,1);
  lVar15 = *(long *)(param_1 + 8);
  piVar10 = (int *)(**(code **)(*(long *)(lVar8 + 0x2808) + 0xf0))(lVar8 + 0x2808);
  iVar4 = *piVar10;
  piVar10 = (int *)(**(code **)(*(long *)(lVar8 + 0x2838) + 0xf0))(lVar8 + 0x2838);
  iVar17 = *piVar10;
  local_968 = 1;
  local_960 = 0x100000001;
  uVar9 = *(uint *)(lVar15 + 0x288);
  uVar5 = *(uint *)(lVar15 + 0x294);
  *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
  uVar7 = *(undefined4 *)(lVar15 + 0x290);
  uVar9 = uVar9 ^ uVar9 << 0xb;
  *(uint *)(lVar15 + 0x290) = uVar5;
  *(undefined4 *)(lVar15 + 0x28c) = uVar7;
  local_9a0 = param_1 + 0x12650;
  uVar9 = uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5;
  *(uint *)(lVar15 + 0x294) = uVar9;
  *(code **)(param_1 + 0x12660) = FUN_01e73870;
  *(long *)(param_1 + 0x12658) = param_1;
  *(undefined8 *)(param_1 + 0x12668) = 0;
  local_998 = *puVar2;
  local_954 = iVar4 + (int)((ulong)uVar9 * (ulong)((iVar17 - iVar4) + 1) >> 0x20);
  local_990 = *(undefined4 *)(param_1 + 0xb044);
  if (*piVar1 < *(int *)(param_1 + 0xef14)) {
    local_988 = uVar18;
    local_984 = uVar20;
    uStack_980 = uVar19;
    FUN_021920b0(piVar1,&local_9c0);
  }
  return;
}

