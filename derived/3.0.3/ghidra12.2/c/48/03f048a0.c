
undefined8 FUN_03f048a0(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  void *__dest;
  void *__src;
  
  uVar3 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    if ((*(byte *)(param_4 + 0xd8) & 1) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_03f06e60(param_4,param_3,param_1,param_2);
      __dest = *(void **)(param_1 + 0x38);
      (**(code **)(*param_3 + 0x18))(param_3);
      __src = (void *)param_3[1];
      if (__dest != __src) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar4 = 0;
        do {
          if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_03f04970;
          lVar1 = param_3[1] + lVar4;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_03f04970;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_03f04970;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_03f04970:
        iVar2 = (int)lVar4;
        if (*(int *)(param_1 + 0x40) <= (int)lVar4) {
          iVar2 = *(int *)(param_1 + 0x40) + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        *(undefined1 *)((long)__dest + (long)iVar2) = 0;
      }
      iVar2 = *(int *)(param_1 + 8);
      *(long *)(param_1 + 0x28) = param_2;
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          FUN_03f049f0(param_1,iVar5,0);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

