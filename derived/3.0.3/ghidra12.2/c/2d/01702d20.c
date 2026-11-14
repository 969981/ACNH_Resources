
void FUN_01702d20(long *param_1)

{
  void *__dest;
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  void *__src;
  long lVar12;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_e5;
  undefined1 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  char local_c4 [5];
  char acStack_bf [3];
  char acStack_bc [5];
  undefined1 local_b7;
  undefined1 local_85;
  uint local_7c;
  undefined4 uStack_78;
  byte local_74 [4];
  uint local_70;
  uint local_6c;
  
  FUN_0073a9b0();
  local_178 = PTR_DAT_04bb2020 + 0x10;
  local_170 = "HumanCharaKind";
  local_d8._0_4_ = 3;
  bVar2 = (*(uint *)((long)param_1 + 0x15f4) >> 3 & 1) == 0;
  if (bVar2) {
    lVar9 = param_1[0x227];
  }
  else {
    lVar9 = param_1[0x227];
  }
  if (((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) &&
     (plVar8 = *(long **)(*(long *)(lVar9 + 0x78) + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_178,bVar2);
  }
  FUN_017025a0(param_1);
  if ((char)param_1[0xbd0] == '\0') goto LAB_017031dc;
  (**(code **)(*param_1 + 0x250))(&local_d8,param_1);
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_d8);
  lVar9 = *(long *)puVar4;
  if (lVar9 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_168 = 0;
      local_178 = PTR_DAT_04bc0510 + 0x10;
      local_170 = (char *)CONCAT44(local_d8._4_4_,(undefined4)local_d8);
      uVar5 = FUN_0277d6c4(&local_170);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_d8);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar9 != 0) {
              local_168 = lVar9;
            }
          }
        }
      }
      local_74[0] = 0;
      local_74[1] = 0;
      FUN_01adab50(&local_178,local_74);
      uVar5 = 0;
      do {
        local_70 = uVar5;
        if (local_70 != 0) {
          local_6c = local_70;
          if (local_70 < 0xe) {
            uVar5 = local_70 + 7;
            if (-1 < (int)local_70) {
              uVar5 = local_70;
            }
            local_7c = local_70;
            if (((uint)((int)uVar5 >> 3) < 2) &&
               ((local_74[(uint)((int)uVar5 >> 3)] >> (ulong)(local_70 & 7) & 1) != 0)) {
              if (local_70 == 9) {
                local_7c = 4;
                *(undefined1 **)((long)param_1 + 0x160c) = &DAT_3f8000003f800000;
                (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
                local_7c = 4;
                if (*(float *)((long)param_1 + 0x160c) == 0.001) {
                  uVar5 = *(uint *)((long)param_1 + 0x15f4) | 0x10;
                }
                else {
                  uVar5 = *(uint *)((long)param_1 + 0x15f4) & 0xffffffef;
                }
                *(uint *)((long)param_1 + 0x15f4) = uVar5;
              }
              break;
            }
          }
        }
        uVar5 = local_70 + 1;
      } while (local_70 + 1 != 0xe);
    }
  }
  (**(code **)(*param_1 + 0x270))(&local_7c,param_1);
  lVar12 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4(&local_7c);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) goto LAB_017031dc;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_017031dc;
  local_168 = 0;
  local_178 = PTR_DAT_04bc0510 + 0x10;
  local_170 = (char *)CONCAT44(uStack_78,local_7c);
  uVar5 = FUN_0277d6c4(&local_170);
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_7c);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar9 != 0) {
          local_168 = lVar9;
        }
      }
    }
  }
  iVar6 = FUN_01ad78cc(&local_178);
  if (iVar6 != 0x1c) goto LAB_017031dc;
  local_70 = 0;
  local_6c = 0x2b;
  if (param_1[0x227] == 0) {
LAB_01703190:
    *(undefined4 *)((long)param_1 + 0x1614) = 0x3f800000;
    (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
    uVar5 = *(uint *)((long)param_1 + 0x15f4) & 0xffffffdf;
  }
  else {
    uVar7 = FUN_03850a90(param_1[0x227],0x2b,0,0);
    if ((uVar7 & 1) == 0) goto LAB_01703190;
    *(undefined4 *)((long)param_1 + 0x1614) = 0x3a83126f;
    (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
    uVar5 = *(uint *)((long)param_1 + 0x15f4) | 0x20;
  }
  local_6c = 5;
  *(uint *)((long)param_1 + 0x15f4) = uVar5;
LAB_017031dc:
  if (param_1[0x227] != 0) {
    *(undefined1 *)(param_1[0x227] + 0xb5) = 1;
  }
  *(undefined1 *)((long)param_1 + 0x5f03) = 1;
  local_c4[0] = s_CommonBedWait_04077186[0];
  local_c4[1] = s_CommonBedWait_04077186[1];
  local_c4[2] = s_CommonBedWait_04077186[2];
  local_c4[3] = s_CommonBedWait_04077186[3];
  local_c4[4] = s_CommonBedWait_04077186[4];
  acStack_bf[0] = s_CommonBedWait_04077186[5];
  acStack_bf[1] = s_CommonBedWait_04077186[6];
  acStack_bf[2] = s_CommonBedWait_04077186[7];
  acStack_bc[0] = s_CommonBedWait_04077186[8];
  acStack_bc[1] = s_CommonBedWait_04077186[9];
  acStack_bc[2] = s_CommonBedWait_04077186[10];
  acStack_bc[3] = s_CommonBedWait_04077186[0xb];
  acStack_bc[4] = s_CommonBedWait_04077186[0xc];
  plVar8 = (long *)param_1[0x293];
  local_d0 = local_c4;
  local_85 = 0;
  local_b7 = 0;
  local_c8 = 0x40;
  local_d8 = PTR_DAT_04bb2bc0 + 0x10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x270))(plVar8,&local_d8);
  }
  local_178 = (undefined *)((ulong)local_178 & 0xffffffff00000000);
  if (param_1[0x227] != 0) {
    lVar9 = *(long *)(param_1[0x227] + 0x88);
    plVar8 = (long *)(lVar9 + 0x60);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcVar11 = *(char **)(lVar9 + 0x68);
    (**(code **)(local_d8 + 0x18))(&local_d8);
    puVar4 = PTR_PTR_04bb2238;
    if (pcVar11 != local_d0) {
      pcVar11 = *(char **)(lVar9 + 0x68);
      if (*pcVar11 != *local_d0) {
        return;
      }
      if (*pcVar11 != '\0') {
        uVar7 = 0;
        do {
          uVar10 = uVar7;
          if (uVar10 == 0x80000) {
            return;
          }
          if (pcVar11[uVar10 + 1] != local_d0[uVar10 + 1]) {
            return;
          }
          if (pcVar11[uVar10 + 1] == '\0') goto LAB_01703330;
          if (pcVar11[uVar10 + 2] != local_d0[uVar10 + 2]) {
            return;
          }
          uVar7 = uVar10 + 2;
        } while (pcVar11[uVar10 + 2] != '\0');
        uVar10 = uVar10 + 1;
LAB_01703330:
        if (uVar10 >> 0x13 != 0) {
          return;
        }
      }
    }
    iVar6 = 0;
    __dest = (void *)((long)&local_168 + 4);
    puVar1 = PTR_DAT_04bb2d88 + 0x10;
    do {
      local_e5 = 0;
      local_168 = CONCAT35(local_168._5_3_,0x80);
      local_e0 = 1;
      plVar8 = (long *)puVar4;
      if ((*(uint *)(param_1[9] + 0x15c) < 0xec) &&
         ((int *)(&DAT_04c969c8)[*(uint *)(param_1[9] + 0x15c)] != (int *)0x0)) {
        plVar8 = (long *)(PTR_DAT_04bb3840 +
                         (long)*(int *)(&DAT_04c969c8)[*(uint *)(param_1[9] + 0x15c)] * 0x10);
      }
      local_178 = puVar1;
      local_170 = __dest;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      __src = (void *)plVar8[1];
      if (__dest != __src) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        lVar9 = 0;
        do {
          if (*(char *)(plVar8[1] + lVar9) == '\0') goto LAB_01703450;
          lVar12 = plVar8[1] + lVar9;
          if (*(char *)(lVar12 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_01703450;
          }
          if (*(char *)(lVar12 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_01703450;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_01703450:
        iVar3 = (int)lVar9;
        if ((int)local_168 <= (int)lVar9) {
          iVar3 = (int)local_168 + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      lVar9 = param_1[0x227];
      local_e0 = 1;
      if (((*(char *)(lVar9 + 0x2c0) != '\0') && (*(char *)(lVar9 + 0xae) != '\0')) &&
         (*(char *)(lVar9 + 0xb4) == '\0')) {
        *(undefined1 *)(lVar9 + 0x2c0) = 0;
        FUN_03855b20(lVar9 + 0xc0,0);
      }
      FUN_0384f3b0(lVar9,&local_178);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 5);
  }
  return;
}

