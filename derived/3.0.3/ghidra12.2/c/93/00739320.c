
uint FUN_00739320(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *__src;
  uint uVar3;
  long lVar4;
  undefined1 *__dest;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [127];
  undefined1 local_4d;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((*(byte *)(param_1 + 0x11f0) & 1) == 0) {
    local_4d = 0;
    local_d0 = 0x80;
    local_cc[0] = 0;
    local_d8 = local_cc;
    local_e0 = PTR_DAT_04bb2d88 + 0x10;
    uVar2 = *(undefined4 *)(*(long *)PTR_DAT_04bb3448 + 8);
    local_48 = PTR_DAT_04bb4ba0 + 0x10;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    local_40 = FUN_007de4b0(PTR_DAT_04bb4b98,&local_34);
    uVar3 = FUN_007dabc0(&local_48,&local_e0,uVar2,1);
    if ((uVar3 & 1) == 0) {
      (**(code **)(local_e0 + 0x10))(&local_e0,param_2);
    }
    else {
      __dest = *(undefined1 **)(param_1 + 0x1200);
      (**(code **)(local_e0 + 0x18))(&local_e0);
      __src = local_d8;
      if (__dest != local_d8) {
        (**(code **)(local_e0 + 0x18))(&local_e0);
        lVar4 = 0;
        do {
          if (local_d8[lVar4] == '\0') goto LAB_0073947c;
          if (local_d8[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0073947c;
          }
          if (local_d8[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0073947c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0073947c:
        iVar1 = (int)lVar4;
        if (*(int *)(param_1 + 0x1208) <= (int)lVar4) {
          iVar1 = *(int *)(param_1 + 0x1208) + -1;
        }
        memcpy(__dest,__src,(long)iVar1);
        __dest[iVar1] = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}

