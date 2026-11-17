
void FUN_02e49640(long param_1)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined *local_418;
  undefined *puStack_410;
  undefined *local_408;
  char *pcStack_400;
  undefined *local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined *local_3b0;
  undefined1 *puStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined *local_358;
  undefined1 *puStack_350;
  undefined4 local_348;
  undefined1 local_344 [63];
  undefined1 local_305;
  undefined8 local_300;
  undefined *local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined *local_2c8;
  undefined1 *puStack_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [63];
  undefined1 local_275;
  undefined *local_270;
  undefined1 *puStack_268;
  undefined4 local_260;
  undefined1 local_25c [63];
  undefined1 local_21d;
  undefined8 local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [63];
  undefined1 local_135;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined *local_68;
  int local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bc4e60;
  uVar9 = *(uint *)(param_1 + 0x588);
  iVar5 = -1;
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(param_1 + 0x570))) {
    lVar7 = param_1 + 0x560;
    uVar1 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    iVar5 = -1;
    if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x574), lVar7 != 0)) {
      iVar5 = *(int *)(lVar7 + 0x270);
    }
  }
  if (iVar5 - 0x58U < 5) {
    uVar9 = *(uint *)(&DAT_04180b80 + (long)(int)(iVar5 - 0x58U) * 4);
  }
  else {
    uVar9 = 0;
  }
  local_3f8 = (undefined *)CONCAT44(local_3f8._4_4_,uVar9);
  if ((int)uVar9 < 6) {
    piVar2 = (int *)(param_1 + 0x310) + (ulong)uVar9 * 4;
    if (5 < uVar9) {
      piVar2 = (int *)(param_1 + 0x310);
    }
    iVar5 = *piVar2;
  }
  else {
    iVar5 = 0;
  }
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((((puVar10 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), (uVar6 & 1) != 0)) &&
      (plVar11 = *(long **)puVar10[0x45], plVar11 != (long *)0x0)) && (plVar11[1] != 0)) {
    uVar12 = 0;
    if (iVar5 < 1) {
      uVar12 = 0x3f800000;
    }
    local_3f8 = PTR_DAT_04bc4f00 + 0x10;
    local_3f0 = 0x14;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_3f8);
    (**(code **)(plVar11[3] + 0x158))(uVar12,plVar11[1]);
  }
  if (iVar5 < 1) {
    puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
    if ((uVar6 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    lVar7 = *(long *)(puVar10[0x43] + (ulong)(2 < *(uint *)(puVar10 + 0x42)) * 0x10);
    if (lVar7 != 0) {
      uVar9 = *(uint *)(param_1 + 0x588);
      if ((int)uVar9 < 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = -1;
        if ((int)uVar9 < *(int *)(param_1 + 0x570)) {
          lVar8 = param_1 + 0x560;
          uVar1 = uVar9 + 1 & 3;
          if (2 < uVar9) {
            uVar9 = uVar9 + 1 & 0xfffffffc;
            do {
              uVar9 = uVar9 - 4;
              lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
            } while (uVar9 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            lVar8 = *(long *)(lVar8 + 8);
          }
          iVar5 = -1;
          if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_1 + 0x574), lVar8 != 0)) {
            iVar5 = *(int *)(lVar8 + 0x270);
          }
        }
      }
      if (iVar5 - 0x58U < 5) {
        puStack_410 = &DAT_04180b6c + *(int *)(&DAT_04180b6c + (long)(int)(iVar5 - 0x58U) * 4);
      }
      else {
        puStack_410 = &DAT_040d97a7;
      }
      local_3ec = 0;
      local_3f0 = CONCAT22(local_3f0._2_2_,0x100);
      local_3e4 = 0;
      puStack_3a8 = local_39c;
      local_3d0 = 0;
      local_3cc = 0;
      local_3c8 = 0xffffffff;
      uStack_3c0 = 0xffffffff00000000;
      local_3b8 = 0xffffffff;
      local_3a0 = 0x40;
      local_35d = 0;
      local_39c[0] = 0;
      local_3b0 = PTR_DAT_04bb2bc0 + 0x10;
      local_348 = 0x40;
      local_305 = 0;
      local_344[0] = 0;
      puStack_350 = local_344;
      local_2d0 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f0 = 0xffffffff00000000;
      local_2e8 = 0;
      local_2e4 = 0;
      local_2b8 = 0x40;
      local_275 = 0;
      local_260 = 0x40;
      local_21d = 0;
      local_300 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1fc = 0;
      local_1d0 = 0x40;
      local_18d = 0;
      local_178 = 0x40;
      local_135 = 0;
      local_218 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_108 = 0x40;
      local_c5 = 0;
      local_b0 = 0x40;
      local_6d = 0;
      local_3e0 = PTR_DAT_04bb2e00 + 0x10;
      puStack_268 = local_25c;
      local_25c[0] = 0;
      puStack_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2e0 = 0xffffffff;
      uStack_2d8 = 0xffffffff00000000;
      uStack_3d8 = 0;
      local_1d8 = local_1cc;
      local_1cc[0] = 0;
      local_110 = local_104;
      local_104[0] = 0;
      local_b8 = local_ac;
      local_180 = local_174;
      local_174[0] = 0;
      local_ac[0] = 0;
      uStack_2f0 = 0;
      local_60 = *(int *)PTR_DAT_04bc0b30;
      local_5c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_60 + 1;
      local_68 = PTR_DAT_04bc0a78 + 0x10;
      local_58 = 0;
      local_50 = 0;
      local_3f8 = PTR_DAT_04bc0bf0 + 0x10;
      local_48 = 0;
      local_418 = PTR_DAT_04bb2020 + 0x10;
      pcStack_400 = "FriendList";
      local_408 = local_418;
      local_358 = local_3b0;
      local_2f8 = local_3e0;
      local_2c8 = local_3b0;
      local_270 = local_3b0;
      local_210 = local_3e0;
      local_1e0 = local_3b0;
      local_188 = local_3b0;
      local_118 = local_3b0;
      local_c0 = local_3b0;
      FUN_01bea210(&local_3f8,lVar7,&local_408,&local_418);
      FUN_01bea9c8(&local_3f8);
      FUN_01be9eb8(&local_3f8);
    }
  }
  return;
}

