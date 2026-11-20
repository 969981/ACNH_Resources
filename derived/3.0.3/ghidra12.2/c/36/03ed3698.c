
void FUN_03ed3698(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    lVar1 = param_3[5];
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
      *(ushort *)(lVar1 + 0x7a) = *(ushort *)(lVar1 + 0x7a) & 0xfff7;
    }
  }
  if (param_3[1] != 0) {
    lVar1 = param_3[6];
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
      *(ushort *)(lVar1 + 0x7a) = *(ushort *)(lVar1 + 0x7a) & 0xfff7;
    }
  }
  if (param_3[2] != 0) {
    lVar1 = param_3[7];
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
      *(ushort *)(lVar1 + 0x7a) = *(ushort *)(lVar1 + 0x7a) & 0xfff7;
    }
  }
  if (param_3[3] != 0) {
    lVar1 = param_3[8];
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
      *(ushort *)(lVar1 + 0x7a) = *(ushort *)(lVar1 + 0x7a) & 0xfff7;
    }
  }
  return;
}

