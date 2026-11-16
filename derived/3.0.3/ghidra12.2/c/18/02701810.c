
bool FUN_02701810(long param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  long local_78;
  void *local_70;
  
  bVar1 = param_2 != 1 || param_3 < 8;
  if (param_1 == 0) {
    return bVar1;
  }
  if (param_2 == 1 && param_3 >= 8) {
    return bVar1;
  }
  **(undefined1 **)(param_1 + 8) = 0;
  if (param_2 == 1) {
    FUN_006d8678(&local_78,"Villager%d");
    __dest = *(void **)(param_1 + 8);
    (**(code **)(local_78 + 0x18))(&local_78);
    __src = local_70;
    if (__dest == local_70) {
      return bVar1;
    }
    (**(code **)(local_78 + 0x18))(&local_78);
    lVar3 = 0;
    do {
      if (*(char *)((long)local_70 + lVar3) == '\0') goto LAB_0270196c;
      if (*(char *)((long)local_70 + lVar3 + 1) == '\0') goto LAB_02701960;
      if (*(char *)((long)local_70 + lVar3 + 2) == '\0') goto LAB_02701968;
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
  }
  else {
    if (param_2 != 2) {
      return bVar1;
    }
    FUN_006d8678(&local_78,"Moved");
    __dest = *(void **)(param_1 + 8);
    (**(code **)(local_78 + 0x18))(&local_78);
    __src = local_70;
    if (__dest == local_70) {
      return bVar1;
    }
    (**(code **)(local_78 + 0x18))(&local_78);
    lVar3 = 0;
    do {
      if (*(char *)((long)local_70 + lVar3) == '\0') goto LAB_0270196c;
      if (*(char *)((long)local_70 + lVar3 + 1) == '\0') goto LAB_02701960;
      if (*(char *)((long)local_70 + lVar3 + 2) == '\0') goto LAB_02701968;
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
  }
  lVar3 = 0;
LAB_0270196c:
  iVar2 = (int)lVar3;
  if (*(int *)(param_1 + 0x10) <= (int)lVar3) {
    iVar2 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  return bVar1;
LAB_02701960:
  lVar3 = lVar3 + 1;
  goto LAB_0270196c;
LAB_02701968:
  lVar3 = lVar3 + 2;
  goto LAB_0270196c;
}

