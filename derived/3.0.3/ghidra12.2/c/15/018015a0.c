
void FUN_018015a0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *__dest;
  void *__src;
  
  FUN_00739870(param_1,0,0,1);
  param_1[0x23f] = (undefined1 *)((long)param_1 + 0x1204);
  puVar3 = PTR_DAT_04bb2d88;
  *(undefined1 *)((long)param_1 + 0x1283) = 0;
  *(undefined1 *)((long)param_1 + 0x1204) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0x80;
  *param_1 = &PTR_LAB_049c4be8;
  param_1[0x23e] = puVar3 + 0x10;
  param_1[0x251] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x251);
  *(undefined1 *)(param_1 + 0x252) = 0;
  __dest = (void *)param_1[0x23f];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_0180169c;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0180169c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0180169c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0180169c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x240) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x240) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return;
}

