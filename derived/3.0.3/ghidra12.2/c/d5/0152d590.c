
void FUN_0152d590(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  undefined **local_110;
  void *local_108;
  undefined8 local_100;
  undefined1 local_7d;
  undefined **local_78;
  undefined2 local_70;
  byte local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  long local_60;
  void *local_58;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = *(undefined2 *)(param_1 + 0x129c);
  bVar3 = *(byte *)(param_1 + 0x129e);
  local_68 = 0;
  local_6d = *(undefined1 *)(param_1 + 0x129f);
  local_78 = &PTR_FUN_04a36b50;
  local_6c = *(undefined4 *)(param_1 + 0x12a0);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_6e = bVar3;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1 + 0x129c);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
        local_68 = lVar8;
      }
    }
  }
  if ((bVar3 >> 3 & 1) == 0) {
    local_110 = &PTR_FUN_04a36b50;
    local_108 = *(void **)(param_1 + 0x129c);
    local_100 = 0;
    lVar8 = *(long *)puVar4;
    uVar5 = FUN_0277d6c4(&local_108);
    if (*(long *)puVar4 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_1 + 0x129c);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
          local_100 = lVar8;
        }
      }
    }
    FUN_01adf970(&local_60,&local_110);
    pvVar6 = *(void **)(param_1 + 0x280);
    (**(code **)(local_60 + 0x18))(&local_60);
    pvVar7 = local_58;
    if (pvVar6 == local_58) goto LAB_0152d9d4;
    (**(code **)(local_60 + 0x18))(&local_60);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_58 + lVar8) == '\0') goto LAB_0152d9ac;
      if (*(char *)((long)local_58 + lVar8 + 1) == '\0') goto LAB_0152d9a0;
      if (*(char *)((long)local_58 + lVar8 + 2) == '\0') goto LAB_0152d9a8;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  else {
    FUN_01adf970(&local_60,&local_78);
    pvVar7 = (void *)((long)&local_100 + 4);
    local_100 = CONCAT44(local_100._4_4_,0x80);
    local_7d = 0;
    local_110 = &PTR_LAB_048fcff0;
    local_108 = pvVar7;
    (**(code **)(local_60 + 0x18))(&local_60);
    pvVar6 = local_58;
    if (pvVar7 != local_58) {
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar8 = 0;
      do {
        if (*(char *)((long)local_58 + lVar8) == '\0') goto LAB_0152d85c;
        if (*(char *)((long)local_58 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0152d85c;
        }
        if (*(char *)((long)local_58 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0152d85c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0152d85c:
      iVar1 = (int)lVar8;
      if ((int)local_100 <= (int)lVar8) {
        iVar1 = (int)local_100 + -1;
      }
      memcpy(pvVar7,pvVar6,(long)iVar1);
      *(undefined1 *)((long)pvVar7 + (long)iVar1) = 0;
    }
    pvVar7 = local_108;
    lVar8 = 0;
    local_110 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
    *(undefined1 *)((long)local_108 + (long)(int)local_100 + -1) = 0;
    do {
      if (*(char *)((long)local_108 + lVar8) == '\0') goto LAB_0152d8ec;
      if (*(char *)((long)local_108 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0152d8ec;
      }
      if (*(char *)((long)local_108 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0152d8ec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0152d8ec:
    uVar5 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    uVar2 = 4;
    if ((int)((int)local_100 - uVar5) < 5) {
      uVar2 = (int)local_100 + ~uVar5;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)((long)local_108 + (ulong)uVar5),&DAT_040eee51,(ulong)uVar2);
      *(undefined1 *)((long)pvVar7 + (ulong)uVar2 + (ulong)uVar5) = 0;
    }
    pvVar6 = *(void **)(param_1 + 0x280);
    (*(code *)local_110[3])(&local_110);
    pvVar7 = local_108;
    if (pvVar6 == local_108) goto LAB_0152d9d4;
    (*(code *)local_110[3])(&local_110);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_108 + lVar8) == '\0') goto LAB_0152d9ac;
      if (*(char *)((long)local_108 + lVar8 + 1) == '\0') goto LAB_0152d9a0;
      if (*(char *)((long)local_108 + lVar8 + 2) == '\0') goto LAB_0152d9a8;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  lVar8 = 0;
LAB_0152d9ac:
  iVar1 = (int)lVar8;
  if (*(int *)(param_1 + 0x288) <= (int)lVar8) {
    iVar1 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(pvVar6,pvVar7,(long)iVar1);
  *(undefined1 *)((long)pvVar6 + (long)iVar1) = 0;
LAB_0152d9d4:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  return;
LAB_0152d9a0:
  lVar8 = lVar8 + 1;
  goto LAB_0152d9ac;
LAB_0152d9a8:
  lVar8 = lVar8 + 2;
  goto LAB_0152d9ac;
}

