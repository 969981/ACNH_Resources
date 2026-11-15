
void FUN_0207d440(long *param_1,long param_2)

{
  char *__src;
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  void *__dest;
  char *__dest_00;
  long lVar13;
  void *__src_00;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  
  local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)PTR_DAT_04bb4c80;
  lVar12 = param_2 + 0x7810;
  lVar13 = param_2 + 0x78a0;
  __src = "NpcFtrSwitchWallHang";
  if (3 < *(int *)(*param_1 + 200) - 2U && *(int *)(*param_1 + 200) != 7) {
    __src = "NpcSwitch";
  }
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar7 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_70 = (char *)CONCAT44(*(undefined4 *)(puVar15 + 7),(undefined4)local_70);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(&local_84,&local_78,1,lVar12,0);
  bVar6 = FUN_0277e294(&local_84);
  local_78._0_4_ = 1;
  *(byte *)(param_2 + 0x789d) = bVar6 & 1;
  uVar8 = FUN_01522be0(uVar14,lVar12,&local_78);
  if ((uVar8 & 1) == 0) {
    local_78._0_4_ = *(undefined4 *)(*param_1 + 200);
    uVar8 = FUN_01522be0(uVar14,lVar12,&local_78);
    if ((uVar8 & 1) == 0) {
      local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
      local_84 = 0;
      FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,&local_78,&local_84,PTR_DAT_04bc1600,6);
      __dest_00 = *(char **)(lVar2 + 0x3b8);
      if (__dest_00 != __src) {
        lVar12 = 0;
        do {
          if (__src[lVar12] == '\0') goto LAB_0207d86c;
          if (__src[lVar12 + 1] == '\0') goto LAB_0207d860;
          if (__src[lVar12 + 2] == '\0') goto LAB_0207d868;
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
LAB_0207d758:
        lVar12 = 0;
        goto LAB_0207d86c;
      }
    }
    else {
      if (*(char *)(param_2 + 0x789d) == '\0') {
        local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
        local_84 = 0;
        FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,&local_78,&local_84,PTR_DAT_04bc1600,6);
        __dest = *(void **)(lVar2 + 0x3b8);
        (**(code **)(*(long *)(param_2 + 0x78a0) + 0x18))(lVar13);
        __src_00 = *(void **)(param_2 + 0x78a8);
        if (__dest != __src_00) {
          (**(code **)(*(long *)(param_2 + 0x78a0) + 0x18))(lVar13);
          lVar12 = 0;
          do {
            if (*(char *)(*(long *)(param_2 + 0x78a8) + lVar12) == '\0') goto LAB_0207d80c;
            lVar13 = *(long *)(param_2 + 0x78a8) + lVar12;
            if (*(char *)(lVar13 + 1) == '\0') goto LAB_0207d800;
            if (*(char *)(lVar13 + 2) == '\0') goto LAB_0207d808;
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          goto LAB_0207d62c;
        }
        goto LAB_0207d834;
      }
      local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
      local_84 = 0;
      FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,&local_78,&local_84,PTR_DAT_04bc1600,6);
      __dest_00 = *(char **)(lVar2 + 0x3b8);
      if (__dest_00 != __src) {
        lVar12 = 0;
        do {
          if (__src[lVar12] == '\0') goto LAB_0207d86c;
          if (__src[lVar12 + 1] == '\0') goto LAB_0207d860;
          if (__src[lVar12 + 2] == '\0') goto LAB_0207d868;
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        goto LAB_0207d758;
      }
    }
    goto LAB_0207d894;
  }
  local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
  local_84 = 0;
  FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,&local_78,&local_84,PTR_DAT_04bc1600,6);
  __dest = *(void **)(lVar2 + 0x3b8);
  (**(code **)(*(long *)(param_2 + 0x78a0) + 0x18))(lVar13);
  __src_00 = *(void **)(param_2 + 0x78a8);
  if (__dest != __src_00) {
    (**(code **)(*(long *)(param_2 + 0x78a0) + 0x18))(lVar13);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x78a8) + lVar12) == '\0') goto LAB_0207d80c;
      lVar13 = *(long *)(param_2 + 0x78a8) + lVar12;
      if (*(char *)(lVar13 + 1) == '\0') goto LAB_0207d800;
      if (*(char *)(lVar13 + 2) == '\0') goto LAB_0207d808;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
LAB_0207d62c:
    lVar12 = 0;
    goto LAB_0207d80c;
  }
  goto LAB_0207d834;
LAB_0207d860:
  lVar12 = lVar12 + 1;
  goto LAB_0207d86c;
LAB_0207d868:
  lVar12 = lVar12 + 2;
LAB_0207d86c:
  iVar7 = (int)lVar12;
  if (*(int *)(lVar2 + 0x3c0) <= (int)lVar12) {
    iVar7 = *(int *)(lVar2 + 0x3c0) + -1;
  }
  memcpy(__dest_00,__src,(long)iVar7);
  __dest_00[iVar7] = '\0';
LAB_0207d894:
  *(undefined4 *)(lVar2 + 0x3a0) = 0;
  *(undefined1 *)(lVar2 + 0x410) = 0;
  goto LAB_0207d89c;
LAB_0207d800:
  lVar12 = lVar12 + 1;
  goto LAB_0207d80c;
LAB_0207d808:
  lVar12 = lVar12 + 2;
LAB_0207d80c:
  iVar7 = (int)lVar12;
  if (*(int *)(lVar2 + 0x3c0) <= (int)lVar12) {
    iVar7 = *(int *)(lVar2 + 0x3c0) + -1;
  }
  memcpy(__dest,__src_00,(long)iVar7);
  *(undefined1 *)((long)__dest + (long)iVar7) = 0;
LAB_0207d834:
  *(undefined4 *)(lVar2 + 0x3a0) = 0;
  *(undefined1 *)(lVar2 + 0x410) = 0;
  if (*(undefined8 **)(*param_1 + 0xb8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(*param_1 + 0xb8))();
  }
  *(undefined1 *)(param_2 + 0x789f) = 1;
LAB_0207d89c:
  lVar13 = *(long *)(param_2 + 8);
  lVar12 = *(long *)PTR_DAT_04bb3968;
  piVar9 = (int *)(**(code **)(*(long *)(lVar12 + 0x2208) + 0xf0))(lVar12 + 0x2208);
  iVar7 = *piVar9;
  piVar9 = (int *)(**(code **)(*(long *)(lVar12 + 0x2238) + 0xf0))(lVar12 + 0x2238);
  iVar3 = *piVar9;
  uVar4 = *(uint *)(lVar13 + 0x288);
  *(undefined4 *)(lVar13 + 0x288) = *(undefined4 *)(lVar13 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  *(undefined4 *)(lVar13 + 0x28c) = *(undefined4 *)(lVar13 + 0x290);
  uVar5 = *(uint *)(lVar13 + 0x294);
  *(uint *)(lVar13 + 0x290) = uVar5;
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  *(uint *)(lVar13 + 0x294) = uVar4;
  *(int *)(param_2 + 0x787c) = iVar7 + (int)((ulong)uVar4 * (ulong)(uint)(iVar3 - iVar7) >> 0x20);
  FUN_0207da6c(*param_1,&local_84,&local_88,param_2 + 0x7840,param_2 + 0x7808);
  lVar12 = *(long *)(param_2 + 0x18);
  uVar8 = FUN_02085a50(lVar12,3,0);
  if ((uVar8 & 1) != 0) {
    *(undefined1 *)(lVar12 + 0x801) = 1;
    lVar13 = lVar12 + 0x10;
    lVar2 = lVar13 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar12 + 0x294)) {
      lVar2 = lVar13;
    }
    *(undefined4 *)(lVar2 + 0x14) = local_7c;
    *(ulong *)(lVar2 + 0xc) = CONCAT44(uStack_80,local_84);
    lVar2 = lVar13 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar12 + 0x294)) {
      lVar2 = lVar13;
    }
    *(undefined1 *)(lVar2 + 0x7e) = 0;
  }
  puVar15 = *(undefined8 **)(lVar1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "NpcFtrHeight";
  if (((puVar15[0x227] != 0) && (lVar12 = *(long *)(puVar15[0x227] + 0x78), lVar12 != 0)) &&
     (plVar10 = *(long **)(lVar12 + 0x48), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x30))(local_88,plVar10,&local_78);
  }
  return;
}

