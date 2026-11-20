
void FUN_03f1790c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04ba8048;
  param_1[1] = param_2;
  lVar4 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  puVar2 = PTR_DAT_04bd1e70;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_04bb29d0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (lVar4 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
LAB_03f17a14:
    lVar3 = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  else {
    if (*(char *)(lVar4 + 0x15) == '\0') {
      lVar3 = *(long *)(lVar4 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)puVar1 *
                     (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
              1000 + *(long *)(lVar4 + 0x18);
    }
    param_1[6] = lVar3;
    param_1[7] = lVar4;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    if (lVar4 == 0) goto LAB_03f17a14;
    if (*(char *)(lVar4 + 0x15) == '\0') {
      lVar3 = *(long *)(lVar4 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)puVar1 *
                     (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
              1000 + *(long *)(lVar4 + 0x18);
    }
    param_1[0xd] = lVar3;
    param_1[0xe] = lVar4;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    if (*(char *)(lVar4 + 0x15) == '\0') {
      lVar3 = *(long *)(lVar4 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)puVar1 *
                     (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
              1000 + *(long *)(lVar4 + 0x18);
    }
  }
  param_1[0x11] = lVar3;
  param_1[0x12] = lVar4;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  lVar4 = *(long *)(param_2 + 8);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (lVar4 == 0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  else {
    if (*(char *)(lVar4 + 0x15) == '\0') {
      lVar3 = *(long *)(lVar4 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)puVar1 *
                     (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
              1000 + *(long *)(lVar4 + 0x18);
    }
    param_1[0x19] = lVar3;
    param_1[0x1a] = lVar4;
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x15) == '\0') {
        lVar3 = *(long *)(lVar4 + 0x18);
      }
      else {
        lVar3 = (long)(*(long *)puVar1 *
                       (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5)
                / 1000 + *(long *)(lVar4 + 0x18);
      }
      param_1[0x20] = lVar3;
      param_1[0x21] = lVar4;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      if (*(char *)(lVar4 + 0x15) == '\0') {
        lVar3 = *(long *)(lVar4 + 0x18);
      }
      else {
        lVar3 = (long)(*(long *)puVar1 *
                       (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5)
                / 1000 + *(long *)(lVar4 + 0x18);
      }
      goto LAB_03f17bc8;
    }
  }
  lVar3 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
LAB_03f17bc8:
  param_1[0x24] = lVar3;
  param_1[0x25] = lVar4;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((long)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x15a) = 0;
  *(undefined4 *)((long)param_1 + 0x164) = 0xbf800000;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else if (*(char *)(lVar4 + 0x15) == '\0') {
    lVar3 = *(long *)(lVar4 + 0x18);
  }
  else {
    lVar3 = (long)(*(long *)puVar1 *
                   (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
            1000 + *(long *)(lVar4 + 0x18);
  }
  param_1[0x2d] = lVar3;
  param_1[0x2e] = lVar4;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return;
}

