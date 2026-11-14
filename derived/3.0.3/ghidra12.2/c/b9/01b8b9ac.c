
int FUN_01b8b9ac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_01b84d30();
  iVar2 = FUN_01b84d30(param_2);
  if (iVar1 == 3) {
    if (iVar2 == 3) {
LAB_01b8b9f0:
      if (*(char *)(param_1 + 0x18) != '\0') {
        if (*(char *)(param_2 + 0x18) != '\0') {
LAB_01b8ba00:
          if (*(int *)(param_1 + 0xc) <= *(int *)(param_2 + 0xc)) {
            return -(uint)(*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc));
          }
        }
        goto LAB_01b8ba10;
      }
      if (*(char *)(param_2 + 0x18) == '\0') {
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_2 + 0x10));
        lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x10));
        if (lVar3 <= lVar4) {
          lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x10));
          if (lVar4 == lVar3) goto LAB_01b8ba00;
          goto LAB_01b8ba10;
        }
      }
    }
    iVar1 = -1;
  }
  else {
    if (iVar2 != 3) goto LAB_01b8b9f0;
LAB_01b8ba10:
    iVar1 = 1;
  }
  return iVar1;
}

