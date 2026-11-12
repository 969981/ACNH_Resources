
void FUN_009921b0(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (0x11f < param_2) {
    return;
  }
  param_1 = param_1 + 9;
  *(undefined1 *)(param_1 + (ulong)param_2 + (ulong)param_2 * 2 + 1) = 0;
  if ((param_2 < 0x12) ||
     (*(undefined1 *)(param_1 + (ulong)(param_2 - 0x12) * 3 + 1) = 0, param_2 < 0x10e)) {
    *(undefined1 *)(param_1 + (ulong)(param_2 + 0x12) * 3 + 1) = 0;
    iVar3 = (param_2 & 0xffff) + (int)(((ulong)param_2 & 0xffff) / 0x12) * -0x12;
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + (ulong)(param_2 + 1) * 3 + 1) = 0;
      if (0x11 < param_2) {
        *(undefined1 *)(param_1 + (ulong)(param_2 - 0x11) * 3 + 1) = 0;
      }
      goto LAB_00992324;
    }
    *(undefined1 *)(param_1 + (ulong)(param_2 - 1) * 3 + 1) = 0;
    if (0x11 < param_2) {
      lVar1 = param_1 + (ulong)(param_2 - 0x13) * 3;
      if (0x11f < param_2 - 0x13) {
        lVar1 = param_1;
      }
      iVar4 = 0x11;
      bVar2 = true;
      goto LAB_009922c4;
    }
    bVar2 = true;
    iVar4 = 0x11;
  }
  else {
    iVar3 = (param_2 & 0xffff) + ((param_2 & 0xffff) / 0x12) * -0x12;
    if (iVar3 == 0) {
      lVar1 = param_1 + (ulong)(param_2 + 1) * 3;
      if (0x11e < param_2) {
        lVar1 = param_1;
      }
      *(undefined1 *)(lVar1 + 1) = 0;
      *(undefined1 *)(param_1 + (ulong)(param_2 - 0x11) * 3 + 1) = 0;
      return;
    }
    bVar2 = false;
    lVar1 = param_1 + (ulong)(param_2 - 1) * 3;
    iVar4 = -0x13;
LAB_009922c4:
    *(undefined1 *)(lVar1 + 1) = 0;
  }
  *(undefined1 *)(param_1 + (ulong)(iVar4 + param_2) * 3 + 1) = 0;
  if (iVar3 != 0x11) {
    lVar1 = param_1 + (ulong)(param_2 + 1) * 3;
    if (0x11e < param_2) {
      lVar1 = param_1;
    }
    *(undefined1 *)(lVar1 + 1) = 0;
    if (0x10 < param_2 && param_2 - 0x11 != 0) {
      *(undefined1 *)(param_1 + (ulong)(param_2 - 0x11) * 3 + 1) = 0;
    }
    if (bVar2) {
LAB_00992324:
      lVar1 = param_1 + (ulong)(param_2 + 0x13) * 3;
      if (0x10c < param_2) {
        lVar1 = param_1;
      }
      *(undefined1 *)(lVar1 + 1) = 0;
      return;
    }
  }
  return;
}

