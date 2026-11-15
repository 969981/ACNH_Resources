
void FUN_01f3e174(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 local_18;
  
  if (*(char *)((long)param_1 + 0x789f) == '\0') {
    local_18 = CONCAT44(0x14,(undefined4)local_18);
    if ((*(int *)(param_1[2] + 0x360) == 0x14) || (*(int *)((long)param_1 + 0x77b4) < 0x1c3)) {
      FUN_01edf290(param_1);
      if ((char)param_1[0xf0f] == '\0') {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x789f) = 1;
      lVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
      *(undefined4 *)(lVar2 + 0x170) = 1;
      return;
    }
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
    if (*(int *)(lVar2 + 0x15c) < *(int *)(lVar2 + 0x164)) {
      return;
    }
    iVar1 = *(int *)((long)param_1 + 0xaf34);
    if (iVar1 == 2) {
      if ((*(byte *)((long)param_1 + 0xad5d) >> 3 & 1) != 0) {
        return;
      }
      if ((int)param_1[0x15e7] < (int)param_1[0x15ce]) {
        return;
      }
      FUN_02085a50(param_1[3],0,0);
      local_18 = 0;
      FUN_01e5a930(0x40000000,param_1[2],0x15,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,
                   PTR_DAT_04bc1600,6);
      *(undefined8 *)((long)param_1 + 0xaf34) = 1;
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      if ((*(byte *)((long)param_1 + 0xad5d) >> 3 & 1) == 0) {
        lVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
        *(undefined1 *)(lVar2 + 0x16c) = 1;
        FUN_02085a50(param_1[3],0,0);
        local_18 = 0;
        FUN_01e5a930(0x40000000,param_1[2],0x15,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,
                     PTR_DAT_04bc1600,6);
        *(undefined8 *)((long)param_1 + 0xaf34) = 1;
        return;
      }
      return;
    }
    lVar2 = param_1[2];
    local_18 = CONCAT44(0x15,(undefined4)local_18);
    if (*(int *)(lVar2 + 0x360) != 0x15) {
      return;
    }
    if (*(int *)(lVar2 + 0x4b8) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x378) != 0x23) {
      return;
    }
    if (*(int *)(param_1[1] + 0x750) != 0) {
      FUN_02085ce8(param_1[3],0,0,PTR_DAT_04bb2150);
      FUN_01e5aacc(param_1[2],6);
      *(undefined8 *)((long)param_1 + 0xaf34) = 2;
      return;
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
  *(undefined4 *)(lVar2 + 0x170) = 2;
  return;
}

