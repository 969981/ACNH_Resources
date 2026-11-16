
uint FUN_026cebd0(long param_1,long param_2,uint param_3,long *param_4,long *param_5,int param_6)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined1 auVar4 [8];
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  size_t __n;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined *local_150;
  long *local_148;
  long *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_75;
  uint local_6c [3];
  
  plVar11 = (long *)(param_1 + 0x48);
  (**(code **)(*param_5 + 0x18))(param_5);
  lVar14 = 0;
  do {
    if (*(char *)(param_5[1] + lVar14) == '\0') goto LAB_026cec6c;
    lVar10 = param_5[1] + lVar14;
    if (*(char *)(lVar10 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_026cec6c;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_026cec6c;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_026cec6c:
  uVar7 = (uint)lVar14;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(plVar11);
  lVar14 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x50) + lVar14) == '\0') {
LAB_026cecb8:
      uVar7 = uVar7 - (int)lVar14;
      if ((int)uVar7 < 0) goto LAB_026ced54;
LAB_026cecc0:
      uVar8 = (ulong)uVar7;
      if ((int)lVar14 < 1) goto LAB_026ced60;
      goto LAB_026cecd0;
    }
    lVar10 = *(long *)(param_1 + 0x50) + lVar14;
    if (*(char *)(lVar10 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_026cecb8;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      lVar14 = lVar14 + 2;
      uVar7 = uVar7 - (int)lVar14;
      if (-1 < (int)uVar7) goto LAB_026cecc0;
      goto LAB_026ced54;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  if ((int)uVar7 < 0) {
LAB_026ced54:
    uVar7 = 0xffffffff;
  }
  else {
LAB_026ced60:
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
LAB_026ced70:
  (**(code **)(*param_5 + 0x18))(param_5);
  lVar10 = param_5[1];
  lVar14 = 0;
  do {
    if (*(char *)(lVar10 + lVar14) == '\0') goto LAB_026cedcc;
    if (*(char *)(lVar10 + lVar14 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_026cedcc;
    }
    if (*(char *)(lVar10 + lVar14 + 2) == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_026cedcc;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_026cedcc:
  pcVar9 = *(char **)(PTR_PTR_04bb2238 + 8);
  if ((int)uVar7 < (int)lVar14 && -2 < (int)uVar7) {
    pcVar9 = (char *)(lVar10 + (ulong)(uVar7 + 1));
  }
  if (*pcVar9 == '\0') {
    return 7;
  }
  if (0 < (int)uVar7) {
    local_75 = 0;
    plVar11 = (long *)(local_f8 + 4);
    local_f8._0_5_ = 0x80;
    local_108 = PTR_DAT_04bb2d88 + 0x10;
    local_100 = plVar11;
    (**(code **)(*param_5 + 0x18))(param_5);
    if (plVar11 != (long *)param_5[1]) {
      if ((int)local_f8._0_4_ <= (int)uVar7) {
        uVar7 = local_f8._0_4_ - 1;
      }
      memcpy(plVar11,(long *)param_5[1],(long)(int)uVar7);
      *(undefined1 *)((long)plVar11 + (long)(int)uVar7) = 0;
    }
    local_6c[0] = local_6c[0] & 0xffffff00;
    iVar6 = FUN_026d0f70(param_1,local_6c,&local_108);
    local_150 = (undefined *)CONCAT44(local_150._4_4_,iVar6);
    if (iVar6 != 1) {
      return 7;
    }
    if ((char)local_6c[0] == '\0') {
      FUN_038b4610(param_4,&local_108,0x666);
    }
  }
  local_108 = (undefined1 *)((ulong)local_108 & 0xffffffffffffff00);
  if ((char)param_4[0xf] == '\0') {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f8 = (undefined1  [8])0x0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_108 = PTR_DAT_04bb60d8 + 0x10;
    local_d0 = 0;
    local_100 = (long *)0x0;
    goto LAB_026cef08;
  }
  (**(code **)(*param_4 + 0xc0))(param_4,&local_108,param_5);
  if ((char)local_108 == '\0') {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f8 = (undefined1  [8])0x0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_108 = PTR_DAT_04bb60d8 + 0x10;
    local_d0 = 0;
    local_100 = (long *)0x0;
    if (((char)param_4[0xf] == '\0') ||
       (uVar8 = (**(code **)(*param_4 + 0x20))(param_4), (uVar8 & 1) == 0)) {
LAB_026cef08:
      if (((*PTR_DAT_04bc3648 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648), iVar6 != 0)) {
        *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
        __cxa_guard_release(PTR_DAT_04bc3648);
      }
      uVar8 = (**(code **)(*param_4 + 0x10))(param_4,PTR_DAT_04bc3640);
      iVar6 = 7;
      if ((uVar8 & 1) != 0) {
        iVar6 = 1;
      }
      local_150 = (undefined *)CONCAT44(local_150._4_4_,iVar6);
      if (iVar6 == 1) {
        uVar7 = 7;
        plVar11 = param_4;
        if ((uVar8 & 1) == 0) {
          plVar11 = (long *)0x0;
        }
        uVar2 = *(uint *)((long)plVar11 + 0x7c);
        if ((uVar2 != 0) && (uVar7 = 2, 0xf < (uVar2 >> 9 & 0x1ffe) - 0x1e || (uVar2 & 0x1ff) != 2))
        {
          uVar7 = 7;
        }
      }
      else {
LAB_026cf090:
        uVar7 = 7;
      }
    }
    else {
      local_d0 = 0;
      local_100 = (long *)(**(code **)(*param_4 + 0x68))(param_4,&local_108,param_5,3);
      if (local_100 == (long *)0x0) goto LAB_026cef08;
      local_f8 = (undefined1  [8])param_4;
      if ((((char)param_4[0xf] == '\0') ||
          (uVar8 = (**(code **)(*param_4 + 0x48))(param_4,&local_108), (uVar8 & 1) == 0)) ||
         (uVar8 = (**(code **)(*param_4 + 0x70))(param_4,&local_108), (uVar8 & 1) == 0)) {
        plVar11 = local_100;
        iVar6 = 7;
        if (local_100 != (long *)0x0) {
          iVar6 = 1;
        }
        if (iVar6 == 1) {
          local_150._0_4_ = iVar6;
          if ((*PTR_DAT_04bc3648 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648);
            if (iVar6 != 0) {
              *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
              __cxa_guard_release(PTR_DAT_04bc3648);
            }
          }
          uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bc3640);
          iVar6 = 7;
          if ((uVar8 & 1) != 0) {
            iVar6 = 1;
          }
        }
        local_150 = (undefined *)CONCAT44(local_150._4_4_,iVar6);
        goto LAB_026cf090;
      }
      uVar7 = 1;
      local_100 = (long *)0x0;
      local_f8 = (undefined1  [8])0x0;
    }
    auVar4 = local_f8;
    local_108 = PTR_DAT_04bb60d8 + 0x10;
    if (((local_f8 != (undefined1  [8])0x0) && ((char)*(long *)((long)local_f8 + 0x78) != '\0')) &&
       ((uVar8 = (**(code **)(*(long *)local_f8 + 0x48))(local_f8,&local_108), (uVar8 & 1) != 0 &&
        (uVar8 = (**(code **)(*(long *)auVar4 + 0x70))(auVar4,&local_108), (uVar8 & 1) != 0)))) {
      local_100 = (long *)0x0;
      local_f8 = (undefined1  [8])0x0;
    }
  }
  else {
    uVar7 = 1;
  }
  if (uVar7 != 1) {
    return uVar7;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_140 = (long *)0x0;
  puVar1 = PTR_DAT_04bb60d8 + 0x10;
  local_118 = 0;
  local_148 = (long *)0x0;
  local_150 = puVar1;
  local_10c = uVar7;
  uVar7 = FUN_026d1548(&local_150,param_4,param_5,1);
  plVar11 = local_148;
  if (uVar7 != 1) goto LAB_026cf5b4;
  if (((local_148 == (long *)0x0) || ((char)local_148[0xf] == '\0')) ||
     ((uVar8 = (**(code **)(*local_148 + 0x48))(local_148,&local_150), (uVar8 & 1) == 0 ||
      (uVar8 = (**(code **)(*plVar11 + 0xa0))(plVar11,&local_150,(long)param_6,0), (uVar8 & 1) == 0)
      ))) {
    local_f8 = (undefined1  [8])((ulong)local_f8 & 0xffffffffffffff00);
    local_108 = local_f8;
    local_6c[0] = 0;
    local_100 = (long *)0x8000000000;
    if ((local_148 == (long *)0x0) || ((char)local_148[0xf] == '\0')) {
LAB_026cf20c:
      __n = 0x27;
LAB_026cf210:
      puVar13 = local_108;
      memcpy(local_108,&DAT_040a1d72,__n);
      puVar13 = puVar13 + __n;
LAB_026cf22c:
      *puVar13 = 0;
    }
    else {
      uVar8 = (**(code **)(*local_148 + 0xb8))(local_148,local_6c,&local_150);
      if ((uVar8 & 1) == 0) {
        if (local_108 != &DAT_040a1d72) {
          if (0x27 < local_100._4_4_) goto LAB_026cf20c;
          puVar13 = local_108;
          if (1 < local_100._4_4_) {
            __n = (size_t)(local_100._4_4_ - 1);
            goto LAB_026cf210;
          }
          goto LAB_026cf22c;
        }
      }
      else {
        FUN_038d16fc(&local_108,&DAT_040c7be9,local_6c[0]);
      }
    }
    uVar7 = 7;
  }
  else {
    uVar7 = 1;
  }
  plVar3 = local_140;
  plVar11 = local_148;
  if (uVar7 != 1) {
    if ((((local_140 == (long *)0x0) || ((char)local_140[0xf] == '\0')) ||
        (uVar8 = (**(code **)(*local_140 + 0x48))(local_140,&local_150), (uVar8 & 1) == 0)) ||
       (uVar8 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_150), (uVar8 & 1) == 0)) {
      plVar11 = local_148;
      iVar6 = 7;
      if (local_148 != (long *)0x0) {
        iVar6 = 1;
      }
      if (iVar6 == 1) {
        local_108._0_4_ = iVar6;
        if ((*PTR_DAT_04bc3648 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648);
          if (iVar6 != 0) {
            *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
            __cxa_guard_release(PTR_DAT_04bc3648);
          }
        }
        uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bc3640);
        iVar6 = 7;
        if ((uVar8 & 1) != 0) {
          iVar6 = 1;
        }
      }
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar6);
    }
    else {
      local_148 = (long *)0x0;
      local_140 = (long *)0x0;
    }
    goto LAB_026cf5b4;
  }
  local_6c[0] = 0;
  if ((((local_148 == (long *)0x0) || (param_2 == 0)) ||
      (((char)local_148[0xf] == '\0' ||
       ((uVar8 = (**(code **)(*local_148 + 0x48))(local_148,&local_150), (uVar8 & 1) == 0 ||
        (uVar8 = (**(code **)(*plVar11 + 0x98))(plVar11,local_6c,&local_150,param_2,param_3),
        (uVar8 & 1) == 0)))))) || (local_6c[0] != param_3)) {
    plVar11 = local_148;
    iVar6 = 7;
    if (local_148 != (long *)0x0) {
      iVar6 = 1;
    }
    if (iVar6 == 1) {
      local_108._0_4_ = iVar6;
      if ((*PTR_DAT_04bc3648 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648);
        if (iVar6 != 0) {
          *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
          __cxa_guard_release(PTR_DAT_04bc3648);
        }
      }
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bc3640);
      bVar5 = (uVar8 & 1) == 0;
      if (bVar5) {
        plVar11 = (long *)0x0;
      }
      iVar6 = 7;
      if (!bVar5) {
        iVar6 = 1;
      }
    }
    else {
      plVar11 = (long *)0x0;
    }
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar6);
    if (iVar6 == 1) {
      uVar7 = *(uint *)((long)plVar11 + 0x7c);
      if (uVar7 == 0) goto LAB_026cf3f4;
      if ((uVar7 & 0x3fffff) == 0x202) {
        local_6c[0] = 5;
      }
      else if (((uVar7 & 0x1ff) == 2) && ((uVar7 >> 9 & 0x1ffe) - 0x1e < 0x10)) {
        local_6c[0] = 2;
      }
      else {
        local_6c[0] = 7;
        if ((uVar7 & 0x3fffff) == 0x402) {
          local_6c[0] = 8;
        }
      }
    }
    else {
      local_6c[0] = 7;
    }
  }
  else {
LAB_026cf3f4:
    local_6c[0] = 1;
  }
  plVar11 = local_140;
  if (local_6c[0] == 1) {
    if ((((local_140 == (long *)0x0) || ((char)local_140[0xf] == '\0')) ||
        (uVar8 = (**(code **)(*local_140 + 0x48))(local_140,&local_150), (uVar8 & 1) == 0)) ||
       (uVar8 = (**(code **)(*plVar11 + 0x70))(plVar11,&local_150), (uVar8 & 1) == 0)) {
      plVar11 = local_148;
      iVar6 = 7;
      if (local_148 != (long *)0x0) {
        iVar6 = 1;
      }
      if (iVar6 == 1) {
        local_108._0_4_ = iVar6;
        if ((*PTR_DAT_04bc3648 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648);
          if (iVar6 != 0) {
            *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
            __cxa_guard_release(PTR_DAT_04bc3648);
          }
        }
        (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bc3640);
      }
      local_108 = (undefined1 *)((ulong)local_108._4_4_ << 0x20);
      uVar7 = 7;
    }
    else {
      uVar7 = 1;
      local_148 = (long *)0x0;
      local_140 = (long *)0x0;
    }
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar7);
  }
  else if (((local_140 == (long *)0x0) || ((char)local_140[0xf] == '\0')) ||
          ((uVar8 = (**(code **)(*local_140 + 0x48))(local_140,&local_150), (uVar8 & 1) == 0 ||
           (uVar8 = (**(code **)(*plVar11 + 0x70))(plVar11,&local_150), (uVar8 & 1) == 0)))) {
    plVar11 = local_148;
    iVar6 = 7;
    if (local_148 != (long *)0x0) {
      iVar6 = 1;
    }
    if (iVar6 == 1) {
      local_108._0_4_ = iVar6;
      if ((*PTR_DAT_04bc3648 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648);
        if (iVar6 != 0) {
          *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
          __cxa_guard_release(PTR_DAT_04bc3648);
        }
      }
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bc3640);
      iVar6 = 7;
      if ((uVar8 & 1) != 0) {
        iVar6 = 1;
      }
    }
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar6);
    uVar7 = local_6c[0];
  }
  else {
    local_148 = (long *)0x0;
    local_140 = (long *)0x0;
    uVar7 = local_6c[0];
  }
LAB_026cf5b4:
  plVar11 = local_140;
  if ((local_140 != (long *)0x0) && ((char)local_140[0xf] != '\0')) {
    local_150 = puVar1;
    uVar8 = (**(code **)(*local_140 + 0x48))(local_140,&local_150);
    if ((uVar8 & 1) != 0) {
      (**(code **)(*plVar11 + 0x70))(plVar11,&local_150);
    }
  }
  return uVar7;
LAB_026cecd0:
  lVar10 = param_5[1];
  (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(plVar11);
  uVar7 = (uint)uVar8;
  if ((char *)(lVar10 + uVar8) == *(char **)(param_1 + 0x50)) goto LAB_026ced70;
  pcVar9 = *(char **)(param_1 + 0x50);
  lVar12 = lVar14;
  while( true ) {
    lVar12 = lVar12 + -1;
    if (*(char *)(lVar10 + uVar8) != *pcVar9) break;
    if (*(char *)(lVar10 + uVar8) == '\0') goto LAB_026ced70;
    lVar10 = lVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (lVar12 == 0) goto LAB_026ced70;
  }
  uVar8 = uVar8 - 1;
  bVar5 = (int)uVar7 < 1;
  uVar7 = 0xffffffff;
  if (bVar5) goto LAB_026ced70;
  goto LAB_026cecd0;
}

