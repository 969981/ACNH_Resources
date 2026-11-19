
undefined8 FUN_03853d00(long *param_1,long *param_2)

{
  int iVar1;
  undefined1 *__src;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *__dest;
  undefined8 *__s;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  
  __s = (undefined8 *)param_2[1];
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if ((int)param_2[2] < 1) {
      iVar1 = (int)param_2[2] + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar2 = FUN_006bd550(param_2[1],0);
  *(undefined4 *)(param_2 + 0x13) = uVar2;
  uVar5 = 0;
  if (((DAT_05ae53d8 != (long *)0x0) &&
      (lVar3 = (**(code **)(*DAT_05ae53d8 + 0x48))(), uVar5 = 0, lVar3 != 0)) &&
     (lVar4 = (**(code **)(*param_1 + 0x30))(param_1), uVar5 = 0, lVar4 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    local_35 = 0;
    local_b8 = 0x80;
    local_b4[0] = 0;
    local_c0 = local_b4;
    local_c8 = PTR_DAT_04bb2d88 + 0x10;
    FUN_038d1270(&local_c8,"%s/%s",lVar3,uVar5);
    __dest = (undefined1 *)param_2[1];
    (**(code **)(local_c8 + 0x18))(&local_c8);
    __src = local_c0;
    if (__dest != local_c0) {
      (**(code **)(local_c8 + 0x18))(&local_c8);
      lVar3 = 0;
      do {
        if (local_c0[lVar3] == '\0') goto LAB_03853e7c;
        if (local_c0[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_03853e7c;
        }
        if (local_c0[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_03853e7c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_03853e7c:
      iVar1 = (int)lVar3;
      if ((int)param_2[2] <= (int)lVar3) {
        iVar1 = (int)param_2[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      __dest[iVar1] = 0;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar2 = FUN_006bd550(param_2[1],0);
    *(undefined4 *)(param_2 + 0x13) = uVar2;
    uVar5 = 1;
  }
  return uVar5;
}

