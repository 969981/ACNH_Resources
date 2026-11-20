
void FUN_03d71df0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  void *__dest;
  void *__src;
  
  **(undefined1 **)(param_2 + 8) = 0;
  __dest = *(void **)(param_2 + 8);
  (**(code **)(*param_4 + 0x18))(param_4);
  __src = (void *)param_4[1];
  if (__dest != __src) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar5 = 0;
    do {
      if (*(char *)(param_4[1] + lVar5) == '\0') goto LAB_03d71e9c;
      lVar1 = param_4[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d71e9c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d71e9c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d71e9c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_2 + 0x10) <= (int)lVar5) {
      iVar2 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  if (((*(long *)(param_1 + 0x28) == 0) ||
      (lVar5 = FUN_03d712c0(*(long *)(param_1 + 0x28),param_3), lVar5 == 0)) ||
     (pbVar3 = (byte *)(**(code **)(*(long *)(lVar5 + 0x150) + 0xf0))(lVar5 + 0x150),
     (*pbVar3 >> 1 & 1) == 0)) {
    return;
  }
  plVar4 = (long *)(**(code **)(*(long *)(lVar5 + 0xe8) + 0xf0))((long *)(lVar5 + 0xe8));
  (**(code **)(*plVar4 + 0x18))();
  FUN_038d13f0(param_2,&DAT_040a677f,plVar4[1]);
  return;
}

