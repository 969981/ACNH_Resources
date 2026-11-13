
undefined8 FUN_01016f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 auStack_150 [16];
  undefined *local_140;
  char *local_138;
  undefined4 local_130;
  char local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  uint local_34;
  
  local_55 = 0;
  local_d4[0] = 0;
  puStack_e0 = local_d4;
  local_d8 = 0x80;
  local_130 = 0x40;
  local_ed = 0;
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_140 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_00aa0cd0(param_2,&local_e8,&local_140);
  puVar1 = PTR_s_cPlayer_04bb8020;
  local_34 = 0;
  uVar9 = 0;
  do {
    pcVar11 = "";
    if (uVar9 < 0x12) {
      pcVar11 = *(char **)(puVar1 + (ulong)uVar9 * 8 + 0x100);
    }
    (**(code **)(local_140 + 0x18))(&local_140);
    if (pcVar11 == local_138) {
LAB_01017070:
      local_34 = uVar9;
      break;
    }
    if (*pcVar11 == *local_138) {
      if (*pcVar11 == '\0') goto LAB_01017070;
      lVar7 = 0x7fffe;
      pcVar6 = local_138;
      while( true ) {
        if (pcVar11[1] != pcVar6[1]) break;
        if (pcVar11[1] == '\0') goto LAB_01017070;
        if (pcVar11[2] != pcVar6[2]) break;
        if (pcVar11[2] == '\0') goto LAB_01017070;
        if ((lVar7 == 0) || (cVar2 = pcVar11[3], cVar2 != pcVar6[3])) break;
        lVar7 = lVar7 + -3;
        pcVar6 = pcVar6 + 3;
        pcVar11 = pcVar11 + 3;
        if (cVar2 == '\0') goto LAB_01017070;
      }
    }
    uVar10 = 0x12;
    if ((int)uVar9 < 0x12) {
      uVar10 = uVar9 + 1;
    }
    uVar9 = uVar10;
  } while (uVar10 != 0x12);
  uVar4 = 0;
  switch(local_34) {
  case 0:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar4 = FUN_0274bce0(puVar1,&local_e8);
    break;
  case 1:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar4 = FUN_02754e30(puVar1,&local_e8);
    break;
  case 2:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar4 = FUN_02753180(puVar1,&local_e8);
    break;
  case 4:
    uVar4 = FUN_0273ea30(&local_e8);
    break;
  case 5:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar4 = FUN_0273c2a0(puVar1,&local_e8);
    break;
  case 6:
    if (*(long *)(param_1 + 8) != 0) {
      plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar5 & 1) != 0)) {
        puVar1 = PTR_DAT_04bb32e0;
        if (*(long *)(param_1 + 8) != 0) {
          puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
        }
        uVar4 = FUN_0265ced0((int)plVar8[0xa1],puVar1,&local_e8);
        return uVar4;
      }
    }
    goto LAB_010173f4;
  case 7:
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar5 & 1) != 0)) {
      uVar9 = *(uint *)(plVar8 + 0xa1);
      if ((uVar9 < 10) && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
        uVar4 = FUN_021991a0(&DAT_053fe348 + (ulong)uVar9 * 0xba0,&local_e8);
        return uVar4;
      }
    }
    goto LAB_010173f4;
  case 8:
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar5 & 1) != 0)) {
      uVar4 = FUN_027490f0((int)plVar8[0xa1],&local_e8);
      return uVar4;
    }
    goto LAB_010173f4;
  case 9:
    uVar4 = FUN_02743000(&local_e8);
    break;
  case 10:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar4 = FUN_027983c0(puVar1,&local_e8);
    break;
  case 0xe:
    FUN_0252d11c(auStack_150,0);
    uVar4 = FUN_02757a80(auStack_150,&local_e8);
    break;
  case 0xf:
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar5 & 1) != 0)) {
      FUN_0376bed0(auStack_150,plVar8);
      uVar4 = FUN_0376c020(auStack_150,&local_e8);
      return uVar4;
    }
    goto LAB_010173f4;
  case 0x10:
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if (((plVar8 != (long *)0x0) &&
        (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar5 & 1) != 0)) &&
       ((uVar5 = (ulong)*(uint *)((long)plVar8 + 0x50c),
        *(uint *)((long)plVar8 + 0x50c) != 0xffffffff || (uVar5 = FUN_016d01c0(), (int)uVar5 != -1))
       )) {
      puVar1 = PTR_DAT_04bb32e0;
      if (*(long *)(param_1 + 8) != 0) {
        puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      uVar4 = FUN_016d2514(uVar5,puVar1,&local_e8);
      return uVar4;
    }
    goto LAB_010173f4;
  case 0x11:
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar5 & 1) != 0)) {
      lVar7 = FUN_021c9770(*(undefined4 *)((long)plVar8 + 0x50c),1);
      if (lVar7 == 0) {
        return 0;
      }
      uVar4 = FUN_021ca500(lVar7,&local_e8);
      return uVar4;
    }
LAB_010173f4:
    uVar4 = 0;
  }
  return uVar4;
}

