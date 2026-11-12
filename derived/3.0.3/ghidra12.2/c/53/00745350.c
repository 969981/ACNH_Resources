
void FUN_00745350(undefined8 *param_1,long *param_2,long param_3)

{
  void *__dest;
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *__src;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  param_1[5] = 0;
  param_1[6] = 0;
  __dest = (void *)((long)param_1 + 0x6c);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_04904128;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 0xd) = 0x20;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  *(undefined1 *)((long)param_1 + 0x8b) = 0;
  param_1[0xb] = puVar1;
  param_1[0xc] = __dest;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0074542c;
      lVar2 = param_2[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0074542c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0074542c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0074542c:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0xd) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  param_1[0xb] = &PTR_LAB_048f9700;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0xa40000;
  return;
}

