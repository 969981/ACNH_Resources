
void FUN_032c1bf0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((*(ushort *)(param_1 + 10) >> 7 & 1) != 0) {
    return;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      lVar4 = param_1[3];
      goto LAB_032c1c40;
    }
  }
  else {
    lVar4 = param_1[3];
    if (*(long **)(lVar3 + 8) == param_1) {
      if (lVar4 == 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      else {
        *(long *)(lVar3 + 8) = lVar4;
        *(undefined8 *)(param_1[3] + 0x10) = 0;
      }
      goto LAB_032c1c70;
    }
    lVar3 = param_1[2];
LAB_032c1c40:
    *(long *)(lVar3 + 0x18) = lVar4;
  }
  if (param_1[3] != 0) {
    *(long *)(param_1[3] + 0x10) = param_1[2];
  }
LAB_032c1c70:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*(ushort *)(param_1 + 10) >> 6 & 1) != 0) {
    param_1[5] = 0;
  }
  *(undefined2 *)((long)param_1 + 0x21c) = 0;
  *(undefined1 *)((long)param_1 + 0x21e) = 0;
  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xffe3;
  if (0 < (int)*(uint *)(DAT_0572b7f0 + 4)) {
    plVar1 = (long *)(DAT_0572b7f0 + 8);
    uVar5 = 0;
    plVar6 = plVar1;
    do {
      plVar2 = plVar6;
      if (0xf < uVar5) {
        plVar2 = plVar1;
      }
      if (*(long **)(*plVar2 + 0x30) == param_1) {
        if ((uVar5 & 0xfffffff0) != 0) {
          plVar6 = plVar1;
        }
        *(undefined8 *)(*plVar6 + 0x30) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (*(uint *)(DAT_0572b7f0 + 4) != uVar5);
  }
  return;
}

