
undefined8 FUN_01180c90(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  undefined1 *__src_00;
  long lVar4;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  lVar4 = *(long *)(param_1 + 0x1d90);
  if (lVar4 == 0 || lVar4 + 0x10 != param_2) {
    lVar4 = *(long *)(param_1 + 0x1da8);
    if (lVar4 == 0) {
      return 0;
    }
    if (lVar4 + 0x10 != param_2) {
      return 0;
    }
  }
  (**(code **)(*(long *)(lVar4 + 0x5f70) + 0x18))(lVar4 + 0x5f70);
  __src = *(undefined1 **)(lVar4 + 0x5f78);
  local_45 = 0;
  if (local_84 != __src) {
    lVar3 = 0;
    do {
      if (__src[lVar3] == '\0') {
LAB_01180d54:
        iVar2 = (int)lVar3;
joined_r0x01180d58:
        if (0x3f < iVar2) {
          iVar2 = 0x3f;
        }
        goto LAB_01180d60;
      }
      if (__src[lVar3 + 1] == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01180d54;
      }
      if (__src[lVar3 + 2] == '\0') {
        iVar2 = (int)lVar3 + 2;
        goto joined_r0x01180d58;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    iVar2 = 0;
LAB_01180d60:
    memcpy(local_84,__src,(long)iVar2);
    local_84[iVar2] = 0;
    __src = *(undefined1 **)(lVar4 + 0x5f78);
  }
  (**(code **)(*param_4 + 0x18))(param_4);
  __src_00 = (undefined1 *)param_4[1];
  if (__src != __src_00) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar3 = 0;
    do {
      if (*(char *)(param_4[1] + lVar3) == '\0') goto LAB_01180e0c;
      lVar1 = param_4[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01180e0c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01180e0c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01180e0c:
    iVar2 = (int)lVar3;
    if (*(int *)(lVar4 + 0x5f80) <= (int)lVar3) {
      iVar2 = *(int *)(lVar4 + 0x5f80) + -1;
    }
    memcpy(__src,__src_00,(long)iVar2);
    __src[iVar2] = 0;
  }
  return 1;
}

