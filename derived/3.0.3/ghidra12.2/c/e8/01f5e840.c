
void FUN_01f5e840(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined4 local_48;
  undefined4 local_44;
  
  *(undefined4 *)(param_1[3] + 0x29c) = 0x41f00000;
  (**(code **)(*param_1 + 0x328))(param_1,0);
  local_44 = 0;
  local_48 = 0;
  *(undefined4 *)(param_1[2] + 0x56c) = 0;
  FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,&local_44,&local_48,PTR_DAT_04bc1600,6);
  *(undefined2 *)(param_1 + 0x26e2) = 0;
  *(undefined4 *)((long)param_1 + 0x136e4) = 0;
  if ((*(int *)((long)param_1 + 0x77f4) != 0x5e) && ((int)param_1[0xef6] != 0x5e)) {
    pvVar4 = (void *)param_1[0x1041];
    (**(code **)(DAT_053ad080 + 0x18))(&DAT_053ad080);
    pvVar2 = DAT_053ad088;
    if (pvVar4 != DAT_053ad088) {
      (**(code **)(DAT_053ad080 + 0x18))(&DAT_053ad080);
      lVar3 = 0;
      do {
        if (*(char *)((long)DAT_053ad088 + lVar3) == '\0') goto LAB_01f5e96c;
        if (*(char *)((long)DAT_053ad088 + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_01f5e96c;
        }
        if (*(char *)((long)DAT_053ad088 + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_01f5e96c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01f5e96c:
      iVar1 = (int)lVar3;
      if ((int)param_1[0x1042] <= (int)lVar3) {
        iVar1 = (int)param_1[0x1042] + -1;
      }
      memcpy(pvVar4,pvVar2,(long)iVar1);
      *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
    }
    pvVar4 = (void *)param_1[0x104c];
    (**(code **)(DAT_053ad090 + 0x18))(&DAT_053ad090);
    pvVar2 = DAT_053ad098;
    if (pvVar4 != DAT_053ad098) {
      (**(code **)(DAT_053ad090 + 0x18))(&DAT_053ad090);
      lVar3 = 0;
      do {
        if (*(char *)((long)DAT_053ad098 + lVar3) == '\0') goto LAB_01f5ea10;
        if (*(char *)((long)DAT_053ad098 + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_01f5ea10;
        }
        if (*(char *)((long)DAT_053ad098 + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_01f5ea10;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01f5ea10:
      iVar1 = (int)lVar3;
      if ((int)param_1[0x104d] <= (int)lVar3) {
        iVar1 = (int)param_1[0x104d] + -1;
      }
      memcpy(pvVar4,pvVar2,(long)iVar1);
      *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
    }
  }
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  return;
}

