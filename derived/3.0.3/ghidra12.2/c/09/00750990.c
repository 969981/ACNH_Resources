
void FUN_00750990(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  void *__src;
  long lVar3;
  void *__dest;
  long local_148;
  void *local_140;
  
  FUN_00739870(param_1,0,0,1);
  *(undefined4 *)(param_1 + 0x23e) = param_2;
  *param_1 = &PTR_LAB_04905340;
  FUN_00705c50(param_1 + 0x23f);
  puVar2 = PTR_DAT_04bb36a8;
  param_1[0x290] = 0x3800000000;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x23f] = puVar2 + 0x10;
  param_1[0x28f] = param_1 + 0x28e;
  param_1[0x28e] = param_1 + 0x28e;
  (**(code **)(param_1[0xb] + 0x18))(param_1 + 0xb);
  FUN_006e9528(&local_148,"Multi[%s]",param_1[0xc]);
  __dest = (void *)param_1[0xc];
  (**(code **)(local_148 + 0x18))(&local_148);
  __src = local_140;
  if (__dest != local_140) {
    (**(code **)(local_148 + 0x18))(&local_148);
    lVar3 = 0;
    do {
      if (*(char *)((long)local_140 + lVar3) == '\0') goto LAB_00750aac;
      if (*(char *)((long)local_140 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_00750aac;
      }
      if (*(char *)((long)local_140 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_00750aac;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_00750aac:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0xd) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return;
}

