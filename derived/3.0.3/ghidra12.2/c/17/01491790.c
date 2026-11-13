
int FUN_01491790(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [127];
  undefined1 local_bd;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined4 *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined1 auStack_90 [16];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulong local_70;
  
  local_170 = 0;
  local_16c = 0x3f800000;
  local_180 = 0x5d00000000;
  uStack_178 = 0;
  puStack_148 = local_13c;
  local_140 = 0x80;
  local_bd = 0;
  local_13c[0] = 0;
  local_150 = PTR_DAT_04bb2d88 + 0x10;
  local_164 = 0;
  local_15c = 0;
  local_b8 = 7;
  local_b4 = 0x300;
  local_b0 = param_3;
  uVar8 = FUN_01512630();
  if (((uVar8 & 1) == 0) && (0xb3 < *(int *)(param_1 + 0x2b8) - *(int *)(param_1 + 0x2d8))) {
    *param_2 = 2;
  }
  else {
    if ((uint)param_3[8] < 3) {
      local_a8 = *(undefined **)PTR_DAT_04bb37e0;
      FUN_01afbaa4(&local_80,param_3,param_3 + 6);
      puVar2 = PTR_DAT_04bb2720;
      local_78 = 0;
      local_a8 = local_80;
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
          iVar5 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      local_74 = *(undefined4 *)(puVar12 + 7);
      uVar4 = FUN_017baf44();
      puVar3 = PTR_DAT_04bb3140;
      local_70 = CONCAT71(local_70._1_7_,uVar4) & 0xffffffffffffff01;
      local_80 = PTR_DAT_04bb3140 + 0x10;
      uVar8 = FUN_01a50590(&local_80,param_3[9],param_3 + 2,&local_a8);
      if ((uVar8 & 1) != 0) {
        FUN_01afbaa4(&local_a8,param_3,param_3 + 6);
        lVar10 = *(long *)puVar2;
        local_78 = 0;
        if (lVar10 == 0) {
          puVar12 = &DAT_055c04a0;
        }
        else {
          puVar12 = &DAT_055c04a0;
          if (*(long *)(lVar10 + 0x330) != 0) {
            puVar12 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar5 = FUN_006bd550(*puVar12,0);
            puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar5 != 0x758f7eaf) {
              puVar12 = &DAT_055c04a0;
            }
          }
        }
        local_74 = *(undefined4 *)(puVar12 + 7);
        uVar4 = FUN_017baf44();
        local_70 = CONCAT71(local_70._1_7_,uVar4) & 0xffffffffffffff01;
        local_80 = puVar3 + 0x10;
        FUN_01a50970(&local_80,param_3[9],&local_a8,param_3 + 2);
      }
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x300));
    if (*(int *)(param_1 + 0x2d8) < 1) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = *(long **)(param_1 + 0x2d0);
      if (*plVar13 != 0) {
        *(long *)(*plVar13 + 8) = plVar13[1];
      }
      if ((long *)plVar13[1] != (long *)0x0) {
        *(long *)plVar13[1] = *plVar13;
      }
      *plVar13 = 0;
      plVar13[1] = 0;
      *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + -1;
    }
    iVar5 = *(int *)(param_1 + 0x2dc);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x300));
    puVar3 = PTR_DAT_04bc0510;
    puVar2 = PTR_DAT_04bb43c0;
    if ((plVar13 != (long *)0x0) &&
       (piVar14 = (int *)((long)plVar13 - (long)iVar5), piVar14 != (int *)0x0)) {
      local_70 = 0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = *param_3;
      local_74 = param_3[1];
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar2 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          FUN_0277d6c4(param_3);
        }
      }
      if (*(int *)(param_1 + 0x3d0) + -0xc9 < -1) {
        piVar11 = param_3 + 9;
        if (*piVar11 == 1) {
          local_78 = *param_3;
          local_74 = param_3[1];
          local_80 = puVar3 + 0x10;
          lVar10 = *(long *)puVar2;
          local_70 = 0;
          uVar6 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar10 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(param_3);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
                lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
                if (lVar10 != 0) {
                  local_70 = lVar10;
                }
              }
            }
          }
          FUN_01afb1a0(&local_80,auStack_90);
          local_a0 = 0;
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
              iVar5 = FUN_006bd550(*puVar12,0);
              puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar5 != 0x758f7eaf) {
                puVar12 = &DAT_055c04a0;
              }
            }
          }
          local_9c = *(undefined4 *)(puVar12 + 7);
          local_98 = FUN_017baf44();
          local_98 = local_98 & 1;
          local_a8 = PTR_DAT_04bb3140 + 0x10;
          piVar9 = (int *)FUN_014fbd50(&local_a8,*piVar11 + -1,param_3 + 2);
          iVar5 = *(int *)(param_1 + 0x230);
          if (*piVar9 != 0) {
            iVar5 = *piVar9;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0x230);
        }
        iVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,iVar5,1);
        *piVar14 = iVar5;
        nn::os::LockMutex((MutexType *)(param_1 + 0x358));
        plVar13 = (long *)((long)piVar14 + (long)*(int *)(param_1 + 0x334));
        lVar10 = *(long *)(param_1 + 800);
        *(long **)(param_1 + 800) = plVar13;
        *plVar13 = lVar10;
        plVar13[1] = param_1 + 800;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar13;
        }
        *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x358));
        puVar3 = PTR_DAT_04bbce88;
        puVar2 = PTR_DAT_04bbce80;
        if (iVar5 != 0) {
          if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
            lVar10 = (long)*(int *)(param_1 + 0xbc);
            plVar13 = (long *)(*(long *)(param_1 + 0xb0) - lVar10);
            do {
              if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
                *(undefined ***)puVar2 = &PTR_LAB_049a5a90;
                __cxa_guard_release(puVar3);
              }
              if ((plVar13 != (long *)0x0) &&
                 (uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar2), (uVar8 & 1) != 0)) {
                uVar6 = param_3[9];
                puVar1 = param_3 + 2;
                if (uVar6 - 2 < 4) {
                  FUN_014a0a00(plVar13,1,param_3,puVar1,piVar11);
                }
                else if (uVar6 < 2) {
                  FUN_0149fda0(plVar13,1,param_3,puVar1,piVar11);
                }
                else if (uVar6 == 7) {
                  FUN_014a0f60(plVar13,1,param_3,puVar1,piVar11);
                }
                break;
              }
              plVar13 = (long *)(*(long *)((long)plVar13 + lVar10 + 8) - lVar10);
            } while (plVar13 != (long *)((param_1 + 0xa8) - lVar10));
          }
          *param_2 = 9;
          return iVar5;
        }
      }
    }
    *param_2 = 0;
  }
  return *(int *)PTR_DAT_04bb3238;
}

