
int FUN_01b8b858(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_2 + 0x18) == '\0') {
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_2 + 0x10));
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x10));
      if (lVar2 <= lVar3) {
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x10));
        if (lVar3 != lVar2) {
          return 1;
        }
        goto LAB_01b8b880;
      }
    }
    iVar1 = -1;
  }
  else {
    if (*(char *)(param_2 + 0x18) == '\0') {
      return 1;
    }
LAB_01b8b880:
    iVar1 = 1;
    if (*(int *)(param_1 + 0xc) <= *(int *)(param_2 + 0xc)) {
      iVar1 = -(uint)(*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc));
    }
  }
  return iVar1;
}

