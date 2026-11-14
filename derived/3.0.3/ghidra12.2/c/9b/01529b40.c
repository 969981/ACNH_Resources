
void FUN_01529b40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  void *__src;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  long local_58;
  void *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)(param_1 + 0x12a0);
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *(undefined4 *)(param_1 + 0x129c);
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  lVar4 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_1 + 0x129c);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
        local_38 = lVar4;
      }
    }
  }
  FUN_01adf970(&local_58,&local_48);
  __dest = *(void **)(param_1 + 0x280);
  (**(code **)(local_58 + 0x18))(&local_58);
  __src = local_50;
  if (__dest != local_50) {
    (**(code **)(local_58 + 0x18))(&local_58);
    lVar4 = 0;
    do {
      if (*(char *)((long)local_50 + lVar4) == '\0') goto LAB_01529c90;
      if (*(char *)((long)local_50 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01529c90;
      }
      if (*(char *)((long)local_50 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01529c90;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01529c90:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x288) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  return;
}

