
undefined8 FUN_01e5b2b0(undefined4 param_1,float param_2,long param_3,long *param_4,byte param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  undefined8 local_48;
  
  local_48 = 0;
  FUN_01e5a930(0x40000000,param_3,0xd,&DAT_0419b56c,(long)&local_48 + 4,&local_48,&DAT_04178e00,
               (int)param_2);
  __dest = *(void **)(param_3 + 0x3b8);
  (**(code **)(*param_4 + 0x18))(param_4);
  __src = (void *)param_4[1];
  if (__dest != __src) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar3 = 0;
    do {
      if (*(char *)(param_4[1] + lVar3) == '\0') goto LAB_01e5b38c;
      lVar1 = param_4[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01e5b38c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01e5b38c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01e5b38c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_3 + 0x3c0) <= (int)lVar3) {
      iVar2 = *(int *)(param_3 + 0x3c0) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_3 + 0x3a0) = param_1;
  *(byte *)(param_3 + 0x410) = param_5 & 1;
  return 1;
}

