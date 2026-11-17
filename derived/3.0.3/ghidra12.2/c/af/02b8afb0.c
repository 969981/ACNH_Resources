
/* WARNING: Removing unreachable block (ram,0x02b8b968) */
/* WARNING: Removing unreachable block (ram,0x02b8b770) */
/* WARNING: Removing unreachable block (ram,0x02b8b51c) */
/* WARNING: Removing unreachable block (ram,0x02b8b264) */
/* WARNING: Removing unreachable block (ram,0x02b8afe4) */
/* WARNING: Removing unreachable block (ram,0x02b8aff4) */
/* WARNING: Removing unreachable block (ram,0x02b8b3c0) */
/* WARNING: Removing unreachable block (ram,0x02b8b678) */
/* WARNING: Removing unreachable block (ram,0x02b8b86c) */
/* WARNING: Removing unreachable block (ram,0x02b8ba64) */
/* WARNING: Removing unreachable block (ram,0x02b8b920) */
/* WARNING: Removing unreachable block (ram,0x02b8b72c) */
/* WARNING: Removing unreachable block (ram,0x02b8b47c) */
/* WARNING: Removing unreachable block (ram,0x02b8b1b8) */
/* WARNING: Removing unreachable block (ram,0x02b8b320) */
/* WARNING: Removing unreachable block (ram,0x02b8b5d8) */
/* WARNING: Removing unreachable block (ram,0x02b8b824) */
/* WARNING: Removing unreachable block (ram,0x02b8ba1c) */

void FUN_02b8afb0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined2 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  undefined *local_90;
  byte local_88;
  int local_84;
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ushort local_6c;
  undefined *local_68;
  undefined2 local_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  puVar7 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar7 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar7[1] != 0) {
    local_68 = PTR_DAT_04bb7648 + 0x10;
    lVar8 = *(long *)PTR_DAT_04bb27f8;
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar9 == 0)) {
      puVar5 = (undefined2 *)(lVar8 + 0x2c);
      if ((*(ushort *)(lVar8 + 0x28) & 0x40) != 0) {
        puVar5 = (undefined2 *)(lVar8 + 0x2a);
      }
      local_60 = *puVar5;
    }
    else if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
            (puVar3 = (undefined8 *)**(long **)(lVar9 + 0x60), puVar3 == (undefined8 *)0x0)) {
      local_60 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      local_60 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x60) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar9 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    lVar8 = FUN_03775a30(&local_68);
    if (lVar8 != 0) {
      if ((*(long *)(lVar8 + 0x108) == 0) ||
         (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x108) + 0x10), puVar3 == (undefined8 *)0x0))
      {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)*puVar3)();
        uVar4 = uVar4 & 0xffffffff;
      }
      if (*(int *)(param_1 + 8) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_6c = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
        }
        if ((((local_84 != 0) && (local_84 != 0)) && (local_84 == 0x1a)) && ((local_88 & 1) == 0)) {
          lVar9 = *(long *)PTR_DAT_04bb5008;
          uVar1 = (uint)local_6c - (uint)*(ushort *)(lVar9 + 0xff0);
          if ((uVar1 < *(uint *)(lVar9 + 0xfd0)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0xfd8) + (long)(int)uVar1 * 8), lVar9 != 0)) {
            puVar5 = (undefined2 *)FUN_02a7ea90(lVar9,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
            if (puVar5 == (undefined2 *)0x0) {
              uVar10 = 0;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
            else {
              uVar10 = *puVar5;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
          }
          else {
            uVar10 = 0xffff;
            lVar9 = *(long *)(lVar8 + 0x108);
          }
          if ((lVar9 != 0) && (plVar6 = *(long **)(lVar9 + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = local_58 & 0xffffffff00000000;
          *(undefined2 *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x4230) = uVar10;
        }
      }
      if (*(int *)(param_1 + 0xc) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_6c = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
        }
        if ((((local_84 != 0) && (local_84 != 0)) && (local_84 == 0x1a)) && ((local_88 & 1) == 0)) {
          lVar9 = *(long *)PTR_DAT_04bb5008;
          uVar1 = (uint)local_6c - (uint)*(ushort *)(lVar9 + 0xff0);
          if ((uVar1 < *(uint *)(lVar9 + 0xfd0)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0xfd8) + (long)(int)uVar1 * 8), lVar9 != 0)) {
            puVar5 = (undefined2 *)FUN_02a7ea90(lVar9,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
            if (puVar5 == (undefined2 *)0x0) {
              uVar10 = 0;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
            else {
              uVar10 = *puVar5;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
          }
          else {
            uVar10 = 0xffff;
            lVar9 = *(long *)(lVar8 + 0x108);
          }
          if ((lVar9 != 0) && (plVar6 = *(long **)(lVar9 + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,1);
          *(undefined2 *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x4232) = uVar10;
        }
      }
      if (*(int *)(param_1 + 0x10) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_6c = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
        }
        if ((((local_84 != 0) && (local_84 != 0)) && (local_84 == 0x1a)) && ((local_88 & 1) == 0)) {
          lVar9 = *(long *)PTR_DAT_04bb5008;
          uVar1 = (uint)local_6c - (uint)*(ushort *)(lVar9 + 0xff0);
          if ((uVar1 < *(uint *)(lVar9 + 0xfd0)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0xfd8) + (long)(int)uVar1 * 8), lVar9 != 0)) {
            puVar5 = (undefined2 *)FUN_02a7ea90(lVar9,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
            if (puVar5 == (undefined2 *)0x0) {
              uVar10 = 0;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
            else {
              uVar10 = *puVar5;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
          }
          else {
            uVar10 = 0xffff;
            lVar9 = *(long *)(lVar8 + 0x108);
          }
          if ((lVar9 != 0) && (plVar6 = *(long **)(lVar9 + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,2);
          *(undefined2 *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x4234) = uVar10;
        }
      }
      if (*(int *)(param_1 + 0x14) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_6c = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
        }
        if ((((local_84 != 0) && (local_84 != 0)) && (local_84 == 0x1a)) && ((local_88 & 1) == 0)) {
          lVar9 = *(long *)PTR_DAT_04bb5008;
          uVar1 = (uint)local_6c - (uint)*(ushort *)(lVar9 + 0xff0);
          if ((uVar1 < *(uint *)(lVar9 + 0xfd0)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0xfd8) + (long)(int)uVar1 * 8), lVar9 != 0)) {
            puVar5 = (undefined2 *)FUN_02a7ea90(lVar9,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
            if (puVar5 == (undefined2 *)0x0) {
              uVar10 = 0;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
            else {
              uVar10 = *puVar5;
              lVar9 = *(long *)(lVar8 + 0x108);
            }
          }
          else {
            uVar10 = 0xffff;
            lVar9 = *(long *)(lVar8 + 0x108);
          }
          if ((lVar9 != 0) && (plVar6 = *(long **)(lVar9 + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,3);
          *(undefined2 *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x4236) = uVar10;
        }
      }
      if (*(int *)(param_1 + 0x18) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          uVar2 = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
          uVar2 = local_6c;
        }
        local_6c = uVar2;
        if ((((local_84 != 0) && (local_84 != 0)) && (local_84 == 0x1b)) && ((local_88 & 1) == 0)) {
          if ((*(long *)(lVar8 + 0x108) != 0) &&
             (plVar6 = *(long **)(*(long *)(lVar8 + 0x108) + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = local_58 & 0xffffffff00000000;
          *(ushort *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x4238) = uVar2;
        }
      }
      if (*(int *)(param_1 + 0x1c) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          uVar2 = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
          uVar2 = local_6c;
        }
        local_6c = uVar2;
        if (((local_84 != 0) && (local_84 != 0)) && ((local_84 == 0x1b && ((local_88 & 1) == 0)))) {
          if ((*(long *)(lVar8 + 0x108) != 0) &&
             (plVar6 = *(long **)(*(long *)(lVar8 + 0x108) + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,1);
          *(ushort *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x423a) = uVar2;
        }
      }
      if (*(int *)(param_1 + 0x20) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          uVar2 = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
          uVar2 = local_6c;
        }
        local_6c = uVar2;
        if ((((local_84 != 0) && (local_84 != 0)) && (local_84 == 0x1b)) && ((local_88 & 1) == 0)) {
          if ((*(long *)(lVar8 + 0x108) != 0) &&
             (plVar6 = *(long **)(*(long *)(lVar8 + 0x108) + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,2);
          *(ushort *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x423c) = uVar2;
        }
      }
      if (*(int *)(param_1 + 0x24) != -1) {
        if (puVar7[1] == 0) {
          local_90 = PTR_DAT_04bc4608 + 0x10;
          local_88 = PTR_DAT_04bbc570[8];
          local_84 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_78 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_80 = PTR_DAT_04bb2010 + 0x10;
          local_70 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          uVar2 = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          FUN_01360490(&local_90);
          uVar2 = local_6c;
        }
        local_6c = uVar2;
        if (((local_84 != 0) && (local_84 != 0)) && ((local_84 == 0x1b && ((local_88 & 1) == 0)))) {
          if ((*(long *)(lVar8 + 0x108) != 0) &&
             (plVar6 = *(long **)(*(long *)(lVar8 + 0x108) + 0x20), plVar6 != (long *)0x0)) {
            local_58 = *(ulong *)(lVar8 + 0xe8);
            uStack_50 = *(undefined8 *)(lVar8 + 0xf0);
            local_48 = 0x48a8;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
          local_58 = CONCAT44(local_58._4_4_,3);
          *(ushort *)(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8) + 0x423e) = uVar2;
        }
      }
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x108) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x108) + 0x18), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
    }
  }
  return;
}

