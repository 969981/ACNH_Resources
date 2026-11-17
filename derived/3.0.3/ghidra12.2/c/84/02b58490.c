
/* WARNING: Removing unreachable block (ram,0x02b584f4) */
/* WARNING: Removing unreachable block (ram,0x02b58504) */

undefined4 FUN_02b58490(uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 in_w12;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  int iVar9;
  undefined *local_b0;
  int local_a8;
  undefined *local_a0;
  undefined1 local_98;
  int local_94;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined **local_78;
  undefined1 *puStack_70;
  undefined **local_68;
  undefined4 local_58 [10];
  
  puStack_70 = (undefined1 *)&local_b0;
  local_b0 = PTR_DAT_04bc43f8 + 0x10;
  if (0xf < param_1) {
    param_1 = 0;
  }
  local_a8 = (&DAT_05636e58)[(int)param_1];
  if (local_a8 != 0) {
    local_58[0] = 0;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_a0 = PTR_DAT_04bc4608 + 0x10;
      local_98 = PTR_DAT_04bbc570[8];
      local_94 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      local_88 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
      local_90 = PTR_DAT_04bb2010 + 0x10;
      local_80 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_7c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_a8 != 0) {
        local_78 = &PTR_FUN_04a9b150;
        local_68 = &local_a0;
        if (puVar1[1] != 0) {
          plVar6 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
          iVar5 = (**(code **)(*plVar6 + 0x18))();
          in_w12 = extraout_w12;
          if (0 < iVar5) {
            iVar9 = 0;
            do {
              FUN_01360490(local_58,puVar1[1],iVar9);
              uVar7 = (*(code *)*local_78)(&local_78,local_58);
              in_w12 = extraout_w12_00;
              if ((uVar7 & 1) != 0) break;
              bVar4 = iVar5 + -1 != iVar9;
              iVar9 = iVar9 + 1;
            } while (bVar4);
          }
        }
      }
      if ((local_94 != 0) && (puVar1[1] != 0)) {
        if ((uint)local_88 < 0x120) {
          if ((local_88._4_4_ < 0x100) &&
             (uVar2 = *(uint *)(puVar1[1] + (local_88 & 0xffffffff) * 0x400 +
                                (ulong)local_88._4_4_ * 4 + 0x30), uVar2 < 0x36)) {
            uVar8 = 0;
            do {
              uVar3 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1e18 +
                                ((long)((ulong)uVar8 << 0x20) >> 0x1d) + 4);
              if (uVar3 == uVar2) {
                in_w12 = *(undefined4 *)(*(long *)PTR_DAT_04bb5008 + 0x1e18 + (long)(int)uVar8 * 8);
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != 0x36);
            if (uVar3 == uVar2) {
              return in_w12;
            }
            return *(undefined4 *)PTR_DAT_04bb3238;
          }
        }
      }
    }
  }
  return *(undefined4 *)PTR_DAT_04bb3238;
}

