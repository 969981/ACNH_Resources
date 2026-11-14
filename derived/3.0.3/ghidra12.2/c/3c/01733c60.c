
undefined8
FUN_01733c60(long param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  void *__dest;
  void *__src;
  
  puVar4 = PTR_DAT_04bb2118;
  pcVar5 = (char *)(param_1 + 0x78);
  if (*pcVar5 == '\0') {
    lVar6 = 0;
  }
  else {
    pcVar5 = (char *)(param_1 + 0xf8);
    if (*pcVar5 == '\0') {
      lVar6 = 1;
    }
    else if (*(char *)(param_1 + 0x178) == '\0') {
      pcVar5 = (char *)(param_1 + 0x178);
      lVar6 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x1f8) != '\0') {
        return 0;
      }
      pcVar5 = (char *)(param_1 + 0x1f8);
      lVar6 = 3;
    }
  }
  param_1 = param_1 + lVar6 * 0x80;
  *pcVar5 = '\x01';
  __dest = *(void **)(param_1 + 8);
  *(uint *)(param_1 + 0x7c) = *(int *)(*(long *)puVar4 + 0x508) + (param_5 & 1);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01733d7c;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01733d7c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01733d7c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01733d7c:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x10) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x58) = *param_3;
  *(undefined4 *)(param_1 + 0x5c) = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_3[2];
  *(undefined4 *)(param_1 + 100) = *param_4;
  *(undefined4 *)(param_1 + 0x68) = param_4[1];
  uVar3 = param_4[2];
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  return 1;
}

