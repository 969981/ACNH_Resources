
void FUN_01787800(long *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  void *__src;
  long lVar3;
  void *__dest;
  long local_148;
  void *local_140;
  
  FUN_00739870(param_1,0,0,1);
  puVar2 = PTR_DAT_04bbe558;
  param_1[0x23e] = 0xfffe00000000;
  *(undefined4 *)(param_1 + 0x23f) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0277d4ac((long)param_1 + 0x11f4);
  *(undefined1 *)((long)param_1 + 0x1214) = 0;
  param_1[0x241] = (long)param_1 + 0x1214;
  puVar2 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x242) = 0x80;
  *(undefined1 *)((long)param_1 + 0x1293) = 0;
  *(undefined1 *)(param_1 + 0x253) = 0;
  *param_1 = (long)&PTR_LAB_049c3410;
  *(undefined4 *)((long)param_1 + 0x129c) = param_2;
  param_1[0x240] = (long)(puVar2 + 0x10);
  FUN_00705c50(param_1 + 0x254);
  puVar2 = PTR_DAT_04bb36a8;
  param_1[0x2a5] = 0x3800000000;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x254] = (long)(puVar2 + 0x10);
  param_1[0x2a4] = (long)(param_1 + 0x2a3);
  param_1[0x2a3] = (long)(param_1 + 0x2a3);
  (**(code **)(param_1[0xb] + 0x18))(param_1 + 0xb);
  FUN_006e9528(&local_148,"Multi[%s]",param_1[0xc]);
  __dest = (void *)param_1[0xc];
  (**(code **)(local_148 + 0x18))(&local_148);
  __src = local_140;
  if (__dest != local_140) {
    (**(code **)(local_148 + 0x18))(&local_148);
    lVar3 = 0;
    do {
      if (*(char *)((long)local_140 + lVar3) == '\0') goto LAB_0178797c;
      if (*(char *)((long)local_140 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0178797c;
      }
      if (*(char *)((long)local_140 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0178797c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0178797c:
    iVar1 = (int)lVar3;
    if ((int)param_1[0xd] <= (int)lVar3) {
      iVar1 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return;
}

