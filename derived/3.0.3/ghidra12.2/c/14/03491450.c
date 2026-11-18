
int FUN_03491450(long param_1,long *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long local_80;
  void *local_78;
  long local_60;
  void *local_58;
  int local_50;
  
  iVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  if (iVar2 != -1 && iVar2 != 2) {
    (**(code **)(*param_2 + 0x48))(&local_60,param_2);
    iVar3 = FUN_0376dea0(&local_60,1);
    if (iVar3 - 2U < 5) {
      pvVar5 = *(void **)(param_1 + 0x1ce60);
      (**(code **)(local_60 + 0x18))(&local_60);
      pvVar1 = local_58;
      if (pvVar5 == local_58) {
        return iVar3;
      }
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar4 = 0;
      do {
        if (*(char *)((long)local_58 + lVar4) == '\0') goto LAB_03491678;
        if (*(char *)((long)local_58 + lVar4 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_03491678;
        }
        if (*(char *)((long)local_58 + lVar4 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_03491678;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_03491678:
      iVar2 = (int)lVar4;
      if (*(int *)(param_1 + 0x1ce68) <= (int)lVar4) {
        iVar2 = *(int *)(param_1 + 0x1ce68) + -1;
      }
      memcpy(pvVar5,pvVar1,(long)iVar2);
      *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
      return iVar3;
    }
    if (iVar3 == 7) {
      pvVar5 = *(void **)(param_1 + 0x1ce60);
      (**(code **)(local_60 + 0x18))(&local_60);
      pvVar1 = local_58;
      if (pvVar5 == local_58) {
        return 7;
      }
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar4 = 0;
      do {
        if (*(char *)((long)local_58 + lVar4) == '\0') goto LAB_034916b8;
        if (*(char *)((long)local_58 + lVar4 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_034916b8;
        }
        if (*(char *)((long)local_58 + lVar4 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_034916b8;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_034916b8:
      iVar2 = (int)lVar4;
      if (*(int *)(param_1 + 0x1ce68) <= (int)lVar4) {
        iVar2 = *(int *)(param_1 + 0x1ce68) + -1;
      }
      memcpy(pvVar5,pvVar1,(long)iVar2);
      *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
      return 7;
    }
    if (iVar2 == 1) {
      (**(code **)(*param_2 + 0x50))(&local_80,param_2);
      (**(code **)(local_80 + 0x18))(&local_80);
      pvVar1 = local_78;
      if (local_58 != local_78) {
        (**(code **)(local_80 + 0x18))(&local_80);
        lVar4 = 0;
        do {
          if (*(char *)((long)local_78 + lVar4) == '\0') goto LAB_034916f4;
          if (*(char *)((long)local_78 + lVar4 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_034916f4;
          }
          if (*(char *)((long)local_78 + lVar4 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_034916f4;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_034916f4:
        iVar2 = (int)lVar4;
        if (local_50 <= (int)lVar4) {
          iVar2 = local_50 + -1;
        }
        memcpy(local_58,pvVar1,(long)iVar2);
        *(undefined1 *)((long)local_58 + (long)iVar2) = 0;
      }
      iVar2 = FUN_0376dea0(&local_60,1);
      if ((iVar2 - 2U < 5) || (iVar2 == 7)) {
        FUN_03491760(param_1 + 0x1ce58,&local_60);
        return iVar2;
      }
    }
  }
  return 0;
}

