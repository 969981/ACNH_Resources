
void FUN_0152c890(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char *__src;
  char *__dest;
  long lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_78 [8];
  char *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  uStack_5c = *(undefined4 *)(param_1 + 0x12a0);
  local_60 = *(undefined4 *)(param_1 + 0x129c);
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1 + 0x129c);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
        local_58 = lVar4;
      }
    }
  }
  FUN_01adf970(auStack_78,&local_68);
  if ((*(byte *)(param_1 + 0x1298) >> 2 & 1) != 0) {
    iVar5 = 0;
    do {
      piVar6 = (int *)((long)&DAT_053275f0 + (long)iVar5 * 0x138 + 4);
      if ((*piVar6 != 0xfffe) && (iVar3 = FUN_0277d6c4(param_1 + 0x129c), iVar3 == *piVar6)) {
        __src = (char *)(&DAT_05327600)[(long)iVar5 * 0x27];
        if (*__src != '\0') goto LAB_0152c980;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x1f);
  }
  __src = local_70;
LAB_0152c980:
  __dest = *(char **)(param_1 + 0x280);
  if (__dest != __src) {
    lVar4 = 0;
    do {
      if (__src[lVar4] == '\0') goto LAB_0152ca48;
      if (__src[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0152ca48;
      }
      if (__src[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0152ca48;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0152ca48:
    iVar5 = (int)lVar4;
    if (*(int *)(param_1 + 0x288) <= (int)lVar4) {
      iVar5 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    __dest[iVar5] = '\0';
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  return;
}

