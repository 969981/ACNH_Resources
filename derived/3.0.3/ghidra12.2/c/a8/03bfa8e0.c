
undefined8 FUN_03bfa8e0(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *__src;
  void *__dest;
  long lVar3;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined1 auStack_c4 [132];
  undefined1 auStack_40 [16];
  
  **(undefined1 **)(param_1 + 0x1c0) = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = param_2[1];
  local_e0 = &DAT_04842f18;
  local_c8 = 0;
  local_d0 = 0x80;
  local_d8 = auStack_c4;
  uVar2 = FUN_00227da0(&local_e0,lVar3,2);
  (**(code **)(local_e0 + 0x28))(auStack_40,&local_e0,lVar3,uVar2,2);
  if (1 < local_c8) {
    memmove(auStack_c4 + ((local_d0 & 0xffffffff) - (local_d0 >> 0x20)),auStack_c4,local_d0 >> 0x20)
    ;
    uVar2 = FUN_00227ec0(auStack_c4,(int)local_d0 + 1,
                         auStack_c4 + ((local_d0 & 0xffffffff) - (local_d0 >> 0x20)));
    local_d0 = CONCAT44(uVar2,(int)local_d0);
    local_c8 = 1;
  }
  __src = (void *)FUN_00227adc(&local_e0);
  __dest = *(void **)(param_1 + 0x1c0);
  if (__dest != __src) {
    lVar3 = 0;
    do {
      if (*(char *)((long)__src + lVar3) == '\0') goto LAB_03bfaa0c;
      if (*(char *)((long)__src + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03bfaa0c;
      }
      if (*(char *)((long)__src + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03bfaa0c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03bfaa0c:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x1c8) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x1c8) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  *(undefined1 *)(param_1 + 0x40f) = 1;
  return 1;
}

