
void FUN_01bd9080(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  void *__dest;
  void *__src;
  undefined1 auStack_60 [16];
  long local_50;
  byte *local_48;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[1] = 0xffffffff;
  *(undefined1 *)param_1[4] = 0;
  __dest = (void *)param_1[4];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01bd913c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01bd913c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01bd913c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01bd913c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 5) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 5) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pbVar4 = (byte *)param_2[1];
  lVar3 = 0;
  do {
    if (pbVar4[lVar3] == 0) {
LAB_01bd91b8:
      if ((int)lVar3 < 0) {
        pbVar4 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pbVar4[lVar3 + 1] == 0) {
      lVar3 = lVar3 + 1;
      goto LAB_01bd91b8;
    }
    if (pbVar4[lVar3 + 2] == 0) {
      lVar3 = lVar3 + 2;
      goto LAB_01bd91b8;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  if ((*pbVar4 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_01bd91dc:
    *(undefined4 *)param_1 = 2;
    return;
  }
  FUN_01bd9380(&local_50,param_2);
  (**(code **)(local_50 + 0x18))(&local_50);
  lVar3 = 0;
  do {
    if (local_48[lVar3] == 0) {
LAB_01bd9240:
      iVar2 = (int)lVar3;
joined_r0x01bd9244:
      if (1 < iVar2) {
        (**(code **)(local_50 + 0x18))(&local_50);
        lVar3 = 0;
        goto LAB_01bd9270;
      }
      break;
    }
    if (local_48[lVar3 + 1] == 0) {
      lVar3 = lVar3 + 1;
      goto LAB_01bd9240;
    }
    if (local_48[lVar3 + 2] == 0) {
      iVar2 = (int)lVar3 + 2;
      goto joined_r0x01bd9244;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  goto LAB_01bd9348;
  while( true ) {
    if (local_48[lVar3 + 1] == 0) {
      lVar3 = lVar3 + 1;
      goto LAB_01bd92a8;
    }
    if (local_48[lVar3 + 2] == 0) {
      lVar3 = lVar3 + 2;
      goto LAB_01bd92a8;
    }
    lVar3 = lVar3 + 3;
    if (lVar3 == 0x80001) break;
LAB_01bd9270:
    pbVar4 = local_48;
    if (local_48[lVar3] == 0) {
LAB_01bd92a8:
      if ((int)lVar3 < 0) {
        pbVar4 = PTR_DAT_04bb2120;
      }
      break;
    }
  }
  if ((*pbVar4 & 0xffffffdf) - 0x41 < 0x1a) {
    (**(code **)(local_50 + 0x18))(&local_50);
    lVar3 = 0;
    do {
      if (local_48[lVar3] == 0) {
LAB_01bd931c:
        if (0 < (int)lVar3) {
          local_48 = local_48 + 1;
          goto LAB_01bd9334;
        }
        break;
      }
      if (local_48[lVar3 + 1] == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_01bd931c;
      }
      if (local_48[lVar3 + 2] == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_01bd931c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    local_48 = &DAT_0419b684;
LAB_01bd9334:
    if ((*local_48 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_01bd91dc;
  }
LAB_01bd9348:
  *(undefined4 *)param_1 = 1;
  FUN_01bd9620(auStack_60,param_1,param_2);
  return;
}

