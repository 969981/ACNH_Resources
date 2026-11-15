
void FUN_020f1040(char *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  int local_70;
  int local_6c;
  undefined **local_68;
  int *piStack_60;
  uint *local_58;
  uint local_44;
  
  puVar3 = PTR_DAT_04bb3968;
  local_44 = 0;
  local_6c = (int)*param_1;
  lVar8 = *(long *)PTR_DAT_04bb3968;
  if (lVar8 == 0) {
    return;
  }
  piStack_60 = &local_6c;
  local_68 = &PTR_FUN_04a770e0;
  local_58 = &local_44;
  if (*(int *)(lVar8 + 0xb88) == 0) {
    return;
  }
  lVar12 = (long)*(int *)(lVar8 + 0xb88) << 3;
  puVar7 = *(undefined8 **)(lVar8 + 0xb90);
  do {
    (*(code *)*local_68)(&local_68,*puVar7);
    puVar2 = PTR_DAT_04bb27c0;
    lVar12 = lVar12 + -8;
    puVar7 = puVar7 + 1;
  } while (lVar12 != 0);
  if (local_44 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                      ((ulong)(local_44 >> 0x11) & 0x7ff8));
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != local_44)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x020f1164;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020f1164;
    }
  }
  uVar11 = 0;
joined_r0x020f1164:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar7 = (undefined8 *)plVar10[0x77];
      if (((*PTR_DAT_04bb4110 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4110), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4108 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4110);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb4108), (uVar6 & 1) != 0)) {
        if (param_1[2] == '\x01') {
          if (((ulong)(byte)param_1[4] < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            puVar9 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)(byte)param_1[4] * 4 + 0xde8);
          }
          else {
            puVar9 = (uint *)PTR_DAT_04bb3238;
          }
          uVar11 = *puVar9;
        }
        else {
          local_44 = 0;
          local_70 = (int)param_1[3];
          lVar8 = *(long *)puVar3;
          uVar11 = 0;
          if (lVar8 != 0) {
            local_58 = &local_44;
            local_68 = &PTR_FUN_04a770e0;
            if (*(int *)(lVar8 + 0xb88) == 0) {
              return;
            }
            lVar12 = (long)*(int *)(lVar8 + 0xb88) << 3;
            puVar7 = *(undefined8 **)(lVar8 + 0xb90);
            piStack_60 = &local_70;
            do {
              (*(code *)*local_68)(&local_68,*puVar7);
              lVar12 = lVar12 + -8;
              puVar7 = puVar7 + 1;
              uVar11 = local_44;
            } while (lVar12 != 0);
          }
        }
        if (uVar11 != 0) {
          FUN_02085e20(plVar10[0x78],(int)param_1[1],uVar11,PTR_DAT_04bb6928,0);
        }
      }
    }
  }
  return;
}

