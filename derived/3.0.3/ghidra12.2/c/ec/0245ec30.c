
void FUN_0245ec30(long param_1,float *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  long *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined4 local_34;
  
  puVar7 = PTR_DAT_04bb2720;
  local_78 = 0;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar9 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar15 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb3140 + 0x10;
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  uStack_88 = 0;
  local_98 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_94 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  lVar13 = *(long *)puVar7;
  local_60 = 0;
  local_68 = (long *)(PTR_DAT_04bbfe68 + 0x10);
  local_90 = local_a0;
  if (lVar13 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar9 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar15 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  FUN_01a5190c(&local_68,0,&local_a0,&local_90);
  puVar7 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4();
  if (*(long *)puVar7 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      piVar11 = (int *)FUN_014fbd50(&local_80,0,&local_90);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*piVar11);
      if (*piVar11 != 0) {
        local_34 = *(undefined4 *)(param_1 + 0x230);
        FUN_0071c8d0(&local_68,&local_a0,&local_34,0);
        plVar1 = local_68;
        if (local_68 != (long *)0x0) {
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar12 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb5920);
          if ((uVar12 & 1) == 0) {
            local_60._0_2_ = (ushort)(byte)local_60;
          }
        }
        if ((((local_68 != (long *)0x0) && ((byte)local_60 != '\0')) && (local_60._1_1_ != '\0')) &&
           (local_60._2_1_ != '\0')) {
          iVar9 = *(int *)(param_1 + 0x226c);
          iVar3 = *(int *)(param_1 + 0x2270);
          iVar4 = *(int *)(param_1 + 0x2274);
          iVar5 = *(int *)(param_1 + 0x2278);
          if (((*(int *)(param_1 + 0x227c) != (int)local_a0) &&
              (*(int *)(param_1 + 0x2280) != (int)local_a0)) &&
             ((*(int *)(param_1 + 0x2284) != (int)local_a0 &&
              (*(int *)(param_1 + 0x2288) != (int)local_a0)))) {
            iVar6 = *(int *)PTR_DAT_04bb3238;
            if (*(int *)(param_1 + 0x227c) == iVar6) {
              lVar13 = 0;
            }
            else if (*(int *)(param_1 + 0x2280) == iVar6) {
              lVar13 = 1;
            }
            else if (*(int *)(param_1 + 0x2284) == iVar6) {
              lVar13 = 2;
            }
            else {
              if (*(int *)(param_1 + 0x2288) != iVar6) {
                return;
              }
              lVar13 = 3;
            }
            *(int *)(param_1 + 0x227c + lVar13 * 4) = (int)local_a0;
            puVar8 = PTR_DAT_04bbcd68;
            puVar7 = PTR_DAT_04bbcd60;
            if (((iVar9 != (int)local_a0 && iVar3 != (int)local_a0) && iVar4 != (int)local_a0) &&
                iVar5 != (int)local_a0) {
              plVar1 = local_68 + 0x15;
              if ((long *)local_68[0x16] != plVar1) {
                lVar13 = (long)*(int *)((long)local_68 + 0xbc);
                plVar14 = (long *)(local_68[0x16] - lVar13);
                puVar2 = PTR_DAT_04bb6608 + 0x10;
                do {
                  if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
                    *(undefined **)puVar7 = puVar2;
                    __cxa_guard_release(puVar8);
                  }
                  if ((plVar14 != (long *)0x0) &&
                     (uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar7), (uVar12 & 1) != 0)) {
                    *(undefined1 *)((long)plVar14 + 0x35c) = 1;
                    return;
                  }
                  plVar14 = (long *)(*(long *)((long)plVar14 + lVar13 + 8) - lVar13);
                } while (plVar14 != (long *)((long)plVar1 - lVar13));
              }
            }
          }
        }
      }
    }
  }
  return;
}

