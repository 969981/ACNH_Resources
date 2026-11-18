
void FUN_033fbef0(long *param_1,int param_2,byte *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int local_3c;
  uint local_34;
  
  if (param_2 == DAT_0574c820) {
    local_3c = 8;
  }
  else if (param_2 == DAT_0574c81c) {
    local_3c = 9;
  }
  else if (param_2 == DAT_0574c7f8) {
    uVar8 = FUN_02bee7d0(param_3);
    if ((uVar8 & 1) == 0) goto LAB_033fbfbc;
LAB_033fbf8c:
    local_3c = 0xf;
  }
  else if (param_2 == DAT_0574c7fc) {
    uVar8 = FUN_02bee960(param_3);
    if ((uVar8 & 1) == 0) goto LAB_033fbf8c;
LAB_033fbfbc:
    local_3c = 0xe;
  }
  else {
    local_3c = param_2;
    if (param_2 == DAT_0574c7f4) {
      iVar3 = FUN_033fc390(param_3);
      if (iVar3 == 0) goto LAB_033fbfbc;
      local_3c = 7;
    }
  }
  if (((*param_3 < 8) && (uVar2 = FUN_02582d8c(param_3,1), uVar2 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) {
    uVar2 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d8);
    uVar8 = (ulong)uVar2;
    if ((int)uVar2 < 0) goto LAB_033fc0ac;
    lVar6 = (long)*(int *)(*(long *)PTR_DAT_04bc95e0 + 0x184);
    lVar4 = *(long *)(*(long *)PTR_DAT_04bc95e0 + 0x178) - lVar6;
    if (*(int *)(lVar4 + 0x18) != 0xd) {
      do {
        lVar4 = *(long *)(lVar4 + lVar6 + 8) - lVar6;
      } while (*(int *)(lVar4 + 0x18) != 0xd);
    }
    if (*(int *)(lVar4 + 0x2c) != 1) goto LAB_033fc0ac;
    lVar4 = *(long *)PTR_DAT_04bb3960;
    local_34 = uVar2;
    iVar3 = nn::hid::GetNpadJoyAssignment(&local_34);
    if (iVar3 != 1) goto LAB_033fc0ac;
    if (3 < uVar2) {
      uVar8 = 0;
    }
    bVar1 = *(int *)(lVar4 + uVar8 * 4 + 0xf5b40) - 3U < 2;
  }
  else {
LAB_033fc0ac:
    bVar1 = false;
  }
  if (DAT_0574d390 == local_3c) {
    lVar4 = 0;
  }
  else if (DAT_0574d3c8 == local_3c) {
    lVar4 = 1;
  }
  else if (DAT_0574d400 == local_3c) {
    lVar4 = 2;
  }
  else if (DAT_0574d438 == local_3c) {
    lVar4 = 3;
  }
  else if (DAT_0574d470 == local_3c) {
    lVar4 = 4;
  }
  else if (DAT_0574d4a8 == local_3c) {
    lVar4 = 5;
  }
  else if (DAT_0574d4e0 == local_3c) {
    lVar4 = 6;
  }
  else if (DAT_0574d518 == local_3c) {
    lVar4 = 7;
  }
  else if (DAT_0574d550 == local_3c) {
    lVar4 = 8;
  }
  else if (DAT_0574d588 == local_3c) {
    lVar4 = 9;
  }
  else if (DAT_0574d5c0 == local_3c) {
    lVar4 = 10;
  }
  else if (DAT_0574d5f8 == local_3c) {
    lVar4 = 0xb;
  }
  else {
    if (DAT_0574d630 != local_3c) {
      lVar4 = *(long *)(PTR_PTR_04bb2238 + 8);
      goto LAB_033fc30c;
    }
    lVar4 = 0xc;
  }
  if (bVar1) {
    if (((*param_3 < 8) && (uVar2 = FUN_02582d8c(param_3,1), uVar2 < 8)) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0' &&
        ((-1 < *(int *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d8) &&
         (lVar6 = FUN_009b56e8(*(undefined8 *)PTR_DAT_04bb3960), lVar6 != 0)))))) {
      puVar7 = *(undefined8 **)(lVar6 + 0xc20);
      if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4f38);
      }
      if (((puVar7 == (undefined8 *)0x0) ||
          (uVar8 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb4f30), (uVar8 & 1) == 0)) ||
         ((*(byte *)((long)puVar7 + 0x17c) >> 1 & 1) == 0)) goto LAB_033fc2c8;
      puVar7 = &DAT_0574d3a8 + lVar4 * 7;
    }
    else {
LAB_033fc2c8:
      puVar7 = &DAT_0574d3b8 + lVar4 * 7;
    }
    pcVar5 = (char *)puVar7[1];
    if (*pcVar5 != '\0') {
      *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
      param_1[1] = (long)pcVar5;
      return;
    }
  }
  lVar4 = (&DAT_0574d3a0)[lVar4 * 7];
LAB_033fc30c:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar4;
  return;
}

