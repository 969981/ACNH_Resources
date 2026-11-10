
undefined8 FUN_001f3588(int *param_1,void *param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  void *__src;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t __n;
  ulong uVar6;
  long local_38;
  
  plVar1 = (long *)(param_1 + 0x76);
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
  if (*param_1 == 1) {
    uVar4 = 2;
    goto LAB_001f3684;
  }
  if ((*param_1 == 0) && (iVar3 = FUN_001f62e0(*(undefined8 *)(param_1 + 0x56)), iVar3 != 0)) {
    iVar3 = FUN_001f54b0(*(undefined8 *)(param_1 + 0x56));
    if (iVar3 == 0) {
      iVar3 = FUN_001f6350(*(undefined8 *)(param_1 + 0x56));
      if (iVar3 == 0) {
        if ((char)param_1[0x72] != '\0') {
          FUN_001f3834(&local_38);
          iVar3 = param_1[0x5e];
          *(undefined1 *)(param_1 + 0x72) = 0;
          uVar6 = (ulong)(uint)(iVar3 * 5);
          if (iVar3 < 0) {
            uVar6 = -(ulong)(uint)(iVar3 * -5);
          }
          *(ulong *)(param_1 + 0x5c) = uVar6 + local_38;
        }
        __src = *(void **)(param_1 + 0x6c);
        if (__src == *(void **)(param_1 + 0x6e)) {
          *(undefined1 *)((long)param_1 + 0x1c9) = 0;
          uVar4 = 2;
        }
        else {
          __n = (long)*(void **)(param_1 + 0x6e) - (long)__src;
          uVar4 = 1;
          *(undefined1 *)((long)param_1 + 0x1c9) = 1;
          if (__n <= param_3) {
            memcpy(param_2,__src,__n);
            lVar2 = *(long *)(param_1 + 0x6e);
            uVar4 = 0;
            *(long *)(param_1 + 0x6e) = *(long *)(param_1 + 0x6c);
            *param_4 = lVar2 - *(long *)(param_1 + 0x6c);
          }
        }
        goto LAB_001f3684;
      }
      pcVar5 = "Client received closing frame from server.";
      uVar4 = 1000;
    }
    else {
      pcVar5 = "Client failed to receive.";
      uVar4 = 0x3e9;
    }
    FUN_001f372c(param_1,uVar4,pcVar5);
  }
  else {
    *(undefined1 *)((long)param_1 + 0x1c9) = 0;
    iVar3 = *(int *)(*(long *)(param_1 + 0x54) + 0x30);
    if (iVar3 < 0x1eb) {
      if (iVar3 == 0x19a) {
        uVar4 = 6;
        goto LAB_001f3684;
      }
      if (iVar3 == 0x1ea) {
        uVar4 = 7;
        goto LAB_001f3684;
      }
    }
    else {
      if (iVar3 == 0x1eb) {
        uVar4 = 8;
        goto LAB_001f3684;
      }
      if (iVar3 == 0x24e) {
        uVar4 = 5;
        goto LAB_001f3684;
      }
      if (iVar3 == 0x24f) {
        uVar4 = 9;
        goto LAB_001f3684;
      }
    }
  }
  uVar4 = 4;
LAB_001f3684:
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return uVar4;
}

