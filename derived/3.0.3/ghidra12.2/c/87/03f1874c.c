
void FUN_03f1874c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_04ba8068;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = param_1 + 0x18;
  param_1[0x19] = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar2 = PTR_DAT_04bd1e70;
  puVar1 = PTR_DAT_04bb29d0;
  if (param_2 == 0) {
    lVar3 = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  else {
    if (*(char *)(param_2 + 0x15) == '\0') {
      lVar3 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)PTR_DAT_04bb29d0 *
                     (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                     (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000 +
              *(long *)(param_2 + 0x18);
    }
    param_1[0x1c] = lVar3;
    param_1[0x1d] = param_2;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else if (*(char *)(param_2 + 0x15) == '\0') {
      lVar3 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)puVar1 *
                     (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
              1000 + *(long *)(param_2 + 0x18);
    }
  }
  param_1[0x23] = lVar3;
  param_1[0x24] = param_2;
  lVar3 = DAT_05b05418;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0x145) = 0;
  if (lVar3 == 0) {
    DAT_05b05418 = param_2;
  }
  *(undefined4 *)((long)param_1 + 0xd4) = 0x180;
  return;
}

