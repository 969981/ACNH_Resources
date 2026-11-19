
void FUN_0391ee00(long *param_1)

{
  char *__src;
  int iVar1;
  long lVar2;
  char *__dest;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))();
  FUN_038d1270(param_1 + 0xf,&DAT_040ec793,(&DAT_05ae7c30)[(long)iVar1 * 5],(short)param_1[0x16]);
  if (((DAT_05ae90e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae90e0), iVar1 != 0)) {
    DAT_05ae90d0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05ae90d8 = "default";
    __cxa_guard_release(&DAT_05ae90e0);
  }
  __dest = (char *)param_1[0x1b];
  (**(code **)(DAT_05ae90d0 + 0x18))(&DAT_05ae90d0);
  __src = DAT_05ae90d8;
  if (__dest != DAT_05ae90d8) {
    (**(code **)(DAT_05ae90d0 + 0x18))(&DAT_05ae90d0);
    lVar2 = 0;
    do {
      if (DAT_05ae90d8[lVar2] == '\0') goto LAB_0391eee0;
      if (DAT_05ae90d8[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_0391eee0;
      }
      if (DAT_05ae90d8[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_0391eee0;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_0391eee0:
    iVar1 = (int)lVar2;
    if ((int)param_1[0x1c] <= (int)lVar2) {
      iVar1 = (int)param_1[0x1c] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(uint *)(param_1[7] + 0x260) = *(uint *)(param_1[7] + 0x260) | 1;
  if ((char)param_1[0xb] != '\0') {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(uint *)(param_1[7] + 0x260) = *(uint *)(param_1[7] + 0x260) | 1;
  }
  return;
}

