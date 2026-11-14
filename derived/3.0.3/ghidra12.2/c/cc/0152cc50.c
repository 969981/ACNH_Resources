
void FUN_0152cc50(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *__dest;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *__dest_00;
  undefined *local_138;
  undefined1 *local_130;
  int local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  int local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  uStack_5c = *(undefined4 *)(param_1 + 0x12a0);
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *(undefined4 *)(param_1 + 0x129c);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  lVar5 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_1 + 0x129c);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
        local_58 = lVar5;
      }
    }
  }
  FUN_01adf970(&local_138,&local_68);
  __dest_00 = *(void **)(param_1 + 0x280);
  (**(code **)(local_138 + 0x18))(&local_138);
  puVar3 = local_130;
  if (__dest_00 != local_130) {
    (**(code **)(local_138 + 0x18))(&local_138);
    lVar5 = 0;
    do {
      if (*(char *)((long)local_130 + lVar5) == '\0') goto LAB_0152cdac;
      if (*(char *)((long)local_130 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0152cdac;
      }
      if (*(char *)((long)local_130 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0152cdac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0152cdac:
    iVar1 = (int)lVar5;
    if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
      iVar1 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(__dest_00,puVar3,(long)iVar1);
    *(undefined1 *)((long)__dest_00 + (long)iVar1) = 0;
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  local_a5 = 0;
  local_128 = 0x80;
  local_6d = 0;
  local_138 = PTR_DAT_04bb2d88 + 0x10;
  local_90 = 0x20;
  local_98 = local_8c;
  local_8c[0] = 0;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  local_124[0] = 0;
  local_130 = local_124;
  (**(code **)(DAT_0520f238 + 0x18))(&DAT_0520f238);
  puVar3 = DAT_0520f240;
  if (local_124 != DAT_0520f240) {
    (**(code **)(DAT_0520f238 + 0x18))(&DAT_0520f238);
    lVar5 = 0;
    do {
      if (DAT_0520f240[lVar5] == '\0') goto LAB_0152ce9c;
      if (DAT_0520f240[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0152ce9c;
      }
      if (DAT_0520f240[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0152ce9c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0152ce9c:
    iVar1 = (int)lVar5;
    if (local_128 <= (int)lVar5) {
      iVar1 = local_128 + -1;
    }
    memcpy(local_124,puVar3,(long)iVar1);
    local_124[iVar1] = 0;
  }
  __dest = local_98;
  (**(code **)(DAT_0520f318 + 0x18))(&DAT_0520f318);
  puVar3 = DAT_0520f320;
  if (__dest != DAT_0520f320) {
    (**(code **)(DAT_0520f318 + 0x18))(&DAT_0520f318);
    lVar5 = 0;
    do {
      if (DAT_0520f320[lVar5] == '\0') goto LAB_0152cf40;
      if (DAT_0520f320[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0152cf40;
      }
      if (DAT_0520f320[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0152cf40;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0152cf40:
    iVar1 = (int)lVar5;
    if (local_90 <= (int)lVar5) {
      iVar1 = local_90 + -1;
    }
    memcpy(__dest,puVar3,(long)iVar1);
    __dest[iVar1] = 0;
  }
  FUN_0152da00(param_1,&local_138);
  return;
}

