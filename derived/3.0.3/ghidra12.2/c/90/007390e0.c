
void FUN_007390e0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *__src;
  ulong uVar4;
  long lVar5;
  undefined1 *__dest;
  void *__dest_00;
  void *__src_00;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_24;
  
  if ((*(byte *)(param_1 + 0x11f0) & 1) == 0) {
    local_55 = 0;
    local_d8 = 0x80;
    local_d4[0] = 0;
    local_e0 = local_d4;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    uVar3 = *(undefined4 *)(*(long *)PTR_DAT_04bb3448 + 8);
    local_50 = PTR_DAT_04bb4ba0 + 0x10;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    local_48 = FUN_007de4b0(PTR_DAT_04bb4b98,&local_24);
    uVar4 = FUN_007dabc0(&local_50,&local_e8,uVar3,0);
    if ((uVar4 & 1) == 0) {
      (**(code **)(local_e8 + 0x10))(&local_e8,param_2);
    }
    __dest = *(undefined1 **)(param_1 + 0x280);
    (**(code **)(local_e8 + 0x18))(&local_e8);
    __src = local_e0;
    if (__dest != local_e0) {
      (**(code **)(local_e8 + 0x18))(&local_e8);
      lVar5 = 0;
      do {
        if (local_e0[lVar5] == '\0') goto LAB_007392a0;
        if (local_e0[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_007392a0;
        }
        if (local_e0[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_007392a0;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_007392a0:
      iVar2 = (int)lVar5;
      if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
        iVar2 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      __dest[iVar2] = 0;
    }
  }
  else {
    __dest_00 = *(void **)(param_1 + 0x280);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src_00 = (void *)param_2[1];
    if (__dest_00 != __src_00) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_007392d8;
        lVar1 = param_2[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_007392d8;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_007392d8;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_007392d8:
      iVar2 = (int)lVar5;
      if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
        iVar2 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(__dest_00,__src_00,(long)iVar2);
      *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  return;
}

