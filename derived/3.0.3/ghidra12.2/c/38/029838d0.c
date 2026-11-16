
/* WARNING: Removing unreachable block (ram,0x02983ae0) */
/* WARNING: Removing unreachable block (ram,0x02983af0) */

void FUN_029838d0(long param_1,char *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  int local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined **local_68;
  undefined *local_58;
  ulong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_58 = (undefined *)CONCAT44(local_58._4_4_,*(undefined4 *)param_2);
  FUN_02986880(param_1 + 8,&local_58);
  puVar3 = PTR_DAT_04bbde00;
  if (((*PTR_DAT_04bbde00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar7 != 0))
  {
    FUN_016cb6ac(PTR_DAT_04bbddf8);
    __cxa_guard_release(PTR_DAT_04bbde00);
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 8));
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar7 != 0)) {
    FUN_016cb6ac(PTR_DAT_04bbddf8);
    __cxa_guard_release(PTR_DAT_04bbde00);
  }
  puVar2 = PTR_DAT_04bbddf8;
  uVar1 = *(uint *)(param_1 + 0x90);
  if (*(uint *)PTR_DAT_04bbddf8 <= uVar1) {
    uVar1 = 0;
  }
  iVar7 = *(int *)(*(long *)(PTR_DAT_04bbddf8 + 8) + (long)(int)uVar1 * 4);
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar6 != 0)) {
    FUN_016cb6ac(PTR_DAT_04bbddf8);
    __cxa_guard_release(PTR_DAT_04bbde00);
  }
  uVar1 = (uint)local_b0;
  if (*(uint *)puVar2 <= (uint)local_b0) {
    uVar1 = 0;
  }
  if (iVar7 != *(int *)(*(long *)(puVar2 + 8) + (long)(int)uVar1 * 4)) {
    *(uint *)(param_1 + 0x90) = (uint)local_b0;
    *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) | 1;
  }
  if (param_2[4] == '\0') {
    if ((*param_2 != '\0') && (param_2[1] != '\0')) {
      lVar10 = *(long *)PTR_DAT_04bb2720;
      if (lVar10 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(lVar10 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar7 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      uVar5 = *(undefined4 *)(puVar12 + 7);
      uVar9 = FUN_017f37d0(uVar5);
      if ((uVar9 & 1) != 0) {
        uVar5 = FUN_017f6cc8(uVar5);
        local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
        local_88 = PTR_DAT_04bc43f8 + 0x10;
        uVar9 = FUN_02b674f0(&local_58,uVar5);
        local_80 = (int)local_58;
        if ((uVar9 & 1) == 0) {
          local_80 = 0;
        }
        if (local_80 != 0) {
          local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
          lVar10 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
          if ((lVar10 == 0) || (*(long *)(lVar10 + 0x150) == 0)) {
            local_b0 = PTR_DAT_04bc4608 + 0x10;
            local_a8 = (undefined **)CONCAT71(local_a8._1_7_,PTR_DAT_04bbc570[8]);
            local_a8 = (undefined **)
                       CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a8);
            uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
            local_a0 = PTR_DAT_04bb2010 + 0x10;
            local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
            local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
          }
          else {
            local_b0 = PTR_DAT_04bc4608 + 0x10;
            local_a8 = (undefined **)CONCAT71(local_a8._1_7_,PTR_DAT_04bbc570[8]);
            local_a8 = (undefined **)
                       CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a8);
            uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
            local_a0 = PTR_DAT_04bb2010 + 0x10;
            local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
            local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
            if (local_80 != 0) {
              ppuStack_70 = &local_88;
              local_78 = &PTR_FUN_04a9b150;
              local_68 = &local_b0;
              plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x150) + 0x10))();
              iVar7 = (**(code **)(*plVar8 + 0x18))();
              if (0 < iVar7) {
                iVar6 = 0;
                do {
                  FUN_01360490(&local_58,*(undefined8 *)(lVar10 + 0x150),iVar6);
                  uVar9 = (*(code *)*local_78)(&local_78,&local_58);
                  if ((uVar9 & 1) != 0) break;
                  bVar4 = iVar7 + -1 != iVar6;
                  iVar6 = iVar6 + 1;
                } while (bVar4);
              }
            }
          }
          local_78 = (undefined **)((ulong)local_78 & 0xffffffffffff0000);
          uVar9 = FUN_02b649b0(&local_78,&local_b0);
          if ((uVar9 & 1) != 0) {
            local_58 = PTR_DAT_04bc05e8 + 0x10;
            if ((uint)(ushort)local_78 - (uint)DAT_05334f38 < DAT_05334f18) {
              local_50 = *(ulong *)(DAT_05334f20 +
                                   (long)(int)((uint)(ushort)local_78 - (uint)DAT_05334f38) * 8);
            }
            else {
              local_50 = 0;
            }
            FUN_01b4c300(&local_58);
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x97) == '\0') {
      if ((*(byte *)(param_1 + 0x95) & 1) != 0) {
        FUN_02983df0(param_1);
      }
    }
    else {
      FUN_02983df0(param_1);
      *(undefined1 *)(param_1 + 0x97) = 0;
    }
    local_50 = local_50 & 0xffffffffffffff00;
    local_a8 = &local_58;
    local_48 = 0;
    local_40 = 1;
    local_b0 = (undefined *)0x0;
    local_58 = PTR_DAT_04bb3d08 + 0x10;
    FUN_03838950(param_1 + 0x40,&local_b0);
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (*(int *)(*(long *)(param_1 + 0x70) + 0x20) != *(int *)(param_1 + 0x78))) {
      bVar4 = false;
      if (*(long *)(param_1 + 0x80) != 0) {
        bVar4 = *(int *)(*(long *)(param_1 + 0x80) + 0x20) == *(int *)(param_1 + 0x88);
      }
    }
    else {
      bVar4 = true;
    }
    *(bool *)(param_1 + 0x96) = bVar4;
    puVar11 = (undefined1 *)(param_1 + 0x95);
  }
  else {
    FUN_00767998(param_1 + 0x70,0xffffffff);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar7 != 0)) {
      FUN_016cb6ac(PTR_DAT_04bbddf8);
      __cxa_guard_release(PTR_DAT_04bbde00);
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar2 + 8) + uVar9 * 4) == 0) goto LAB_029839d8;
        uVar9 = uVar9 + 1;
      } while (*(uint *)puVar2 != uVar9);
    }
    uVar9 = 0;
LAB_029839d8:
    *(int *)(param_1 + 0x90) = (int)uVar9;
    puVar11 = (undefined1 *)(param_1 + 0x97);
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  *puVar11 = 0;
  return;
}

