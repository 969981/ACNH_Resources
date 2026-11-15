
void FUN_01ed8ee0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *__src;
  long lVar3;
  char *__dest;
  undefined *__dest_00;
  
  FUN_01ea53bc(param_1,1);
  if ((((*(char *)(param_1 + 0xad60) != '\0') &&
       (uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar2 < 10)) &&
      ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) &&
     ((&DAT_053fe830)[(ulong)uVar2 * 0x2e8] == 4)) {
    __dest = *(char **)(param_1 + 0x8208);
    if (__dest != "NNPC_Reaction_Worry") {
      iVar1 = 0x13;
      if (*(int *)(param_1 + 0x8210) < 0x14) {
        iVar1 = *(int *)(param_1 + 0x8210) + -1;
      }
      memcpy(__dest,"NNPC_Reaction_Worry",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    __dest_00 = *(undefined **)(param_1 + 0x8260);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    __src = PTR_DAT_04c4b988;
    if (__dest_00 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar3 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar3] == '\0') goto LAB_01ed901c;
        if (PTR_DAT_04c4b988[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_01ed901c;
        }
        if (PTR_DAT_04c4b988[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_01ed901c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01ed901c:
      iVar1 = (int)lVar3;
      if (*(int *)(param_1 + 0x8268) <= (int)lVar3) {
        iVar1 = *(int *)(param_1 + 0x8268) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar1);
      __dest_00[iVar1] = 0;
    }
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfffffffffffffffc;
  }
  return;
}

