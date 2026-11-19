
void FUN_03a5bf30(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  void *__dest;
  ulong uVar7;
  void *__src;
  ulong uVar8;
  undefined *local_50;
  char *local_48;
  
  __dest = *(void **)(param_2 + 0x4c0);
  lVar1 = param_2 + 0x4b8;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_03a5bfd0;
      lVar2 = param_3[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03a5bfd0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03a5bfd0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03a5bfd0:
    iVar6 = (int)lVar5;
    if (*(int *)(param_2 + 0x4c8) <= (int)lVar5) {
      iVar6 = *(int *)(param_2 + 0x4c8) + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
  }
  FUN_038f64e0(lVar1,0x2f,0);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "/";
  (**(code **)(*(long *)(param_2 + 0x4b8) + 0x18))(lVar1);
  uVar7 = 0;
  do {
    if (*(char *)(*(long *)(param_2 + 0x4c0) + uVar7) == '\0') {
LAB_03a5c070:
      iVar6 = (int)uVar7;
joined_r0x03a5c074:
      if (iVar6 < 1) {
        return;
      }
      uVar8 = (ulong)((int)uVar7 - 1);
      lVar5 = -uVar7;
      while( true ) {
        pcVar3 = (char *)(*(long *)(param_2 + 0x4c0) + uVar8);
        (**(code **)(local_50 + 0x18))(&local_50);
        if ((pcVar3 == local_48) || (*pcVar3 == *local_48)) break;
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + 1;
        iVar6 = (int)uVar7;
        uVar4 = iVar6 - 1;
        uVar7 = (ulong)uVar4;
        if (uVar4 == 0 || iVar6 < 1) {
          return;
        }
      }
      if ((int)uVar8 < 0) {
        return;
      }
      (**(code **)(*(long *)(param_2 + 0x4b8) + 0x18))(lVar1);
      *(undefined1 *)(*(long *)(param_2 + 0x4c0) + uVar8) = 0;
      *(undefined8 *)(param_2 + 0x5d8) = *(undefined8 *)(param_2 + 0x4c0);
      (**(code **)(*(long *)(param_2 + 0x4b8) + 0x18))(lVar1);
      *(long *)(param_2 + 0x5e8) = *(long *)(param_2 + 0x4c0) - lVar5;
      return;
    }
    lVar5 = *(long *)(param_2 + 0x4c0) + uVar7;
    if (*(char *)(lVar5 + 1) == '\0') {
      uVar7 = uVar7 + 1;
      goto LAB_03a5c070;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      uVar7 = uVar7 + 2;
      iVar6 = (int)uVar7;
      goto joined_r0x03a5c074;
    }
    uVar7 = uVar7 + 3;
    if (uVar7 == 0x80001) {
      return;
    }
  } while( true );
}

