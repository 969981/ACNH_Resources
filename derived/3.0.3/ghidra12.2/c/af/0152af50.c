
void FUN_0152af50(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  void *__src;
  long lVar6;
  long local_68;
  void *local_60;
  undefined *local_58;
  undefined2 local_50;
  byte local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_50 = *(undefined2 *)(param_1 + 0x129c);
  bVar1 = *(byte *)(param_1 + 0x129e);
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_4d = *(undefined1 *)(param_1 + 0x129f);
  local_4c = *(undefined4 *)(param_1 + 0x12a0);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  local_4e = bVar1;
  uVar3 = FUN_0277d6c4(&local_50);
  lVar5 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_1 + 0x129c);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
        local_48 = lVar5;
      }
    }
  }
  FUN_01adf970(&local_68,&local_58);
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if (lVar5 != 0) {
    FUN_0074ed40(lVar5,&local_68,0);
  }
  *(uint *)(param_1 + 0x1298) = *(uint *)(param_1 + 0x1298) | 0x20;
  if ((bVar1 >> 3 & 1) == 0) {
    iVar4 = FUN_0277d6c4(&local_50);
    __dest = *(void **)(param_1 + 0x280);
    if (iVar4 == 0x32a6) {
      (**(code **)(DAT_0520f218 + 0x18))(&DAT_0520f218);
      __src = DAT_0520f220;
      if (__dest == DAT_0520f220) goto LAB_0152b224;
      (**(code **)(DAT_0520f218 + 0x18))(&DAT_0520f218);
      lVar5 = 0;
      do {
        if (*(char *)((long)DAT_0520f220 + lVar5) == '\0') goto LAB_0152b1fc;
        if (*(char *)((long)DAT_0520f220 + lVar5 + 1) == '\0') goto LAB_0152b1f0;
        if (*(char *)((long)DAT_0520f220 + lVar5 + 2) == '\0') goto LAB_0152b1f8;
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
    }
    else {
      (**(code **)(DAT_0520f1e8 + 0x18))(&DAT_0520f1e8);
      __src = DAT_0520f1f0;
      if (__dest == DAT_0520f1f0) goto LAB_0152b224;
      (**(code **)(DAT_0520f1e8 + 0x18))(&DAT_0520f1e8);
      lVar5 = 0;
      do {
        if (*(char *)((long)DAT_0520f1f0 + lVar5) == '\0') goto LAB_0152b1fc;
        if (*(char *)((long)DAT_0520f1f0 + lVar5 + 1) == '\0') goto LAB_0152b1f0;
        if (*(char *)((long)DAT_0520f1f0 + lVar5 + 2) == '\0') goto LAB_0152b1f8;
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
    }
  }
  else {
    FUN_01ada670(&local_68,&local_58);
    __dest = *(void **)(param_1 + 0x280);
    (**(code **)(local_68 + 0x18))(&local_68);
    __src = local_60;
    if (__dest == local_60) goto LAB_0152b224;
    (**(code **)(local_68 + 0x18))(&local_68);
    lVar5 = 0;
    do {
      if (*(char *)((long)local_60 + lVar5) == '\0') goto LAB_0152b1fc;
      if (*(char *)((long)local_60 + lVar5 + 1) == '\0') goto LAB_0152b1f0;
      if (*(char *)((long)local_60 + lVar5 + 2) == '\0') goto LAB_0152b1f8;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
  }
  lVar5 = 0;
LAB_0152b1fc:
  iVar4 = (int)lVar5;
  if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
    iVar4 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(__dest,__src,(long)iVar4);
  *(undefined1 *)((long)__dest + (long)iVar4) = 0;
LAB_0152b224:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  return;
LAB_0152b1f0:
  lVar5 = lVar5 + 1;
  goto LAB_0152b1fc;
LAB_0152b1f8:
  lVar5 = lVar5 + 2;
  goto LAB_0152b1fc;
}

