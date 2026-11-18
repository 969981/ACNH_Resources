
void FUN_03324968(long *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x2bd) = param_2;
  if (*(char *)((long)param_1 + 0x17e4) == '\0') {
    *(char *)((long)param_1 + 0x17e4) = '\x01';
  }
  else if (*(char *)((long)param_1 + 0x17e5) != '\0') {
    return;
  }
  puVar2 = PTR_DAT_04bc1118;
  if ((param_2 >> 1 & 1) == 0) {
    FUN_03324b60(param_1);
    goto LAB_03324b3c;
  }
  lVar3 = *(long *)PTR_DAT_04bc1118;
  if ((*(int *)((long)param_1 + 0x15ec) != 0) || (0 < *(int *)(lVar3 + 0x474))) goto LAB_03324b0c;
  lVar4 = *(long *)(lVar3 + 0xbf8);
  if ((lVar4 != 0) && (*(int *)(lVar3 + 0x3c) == 9)) {
    (**(code **)(*(long *)(lVar4 + 0x4e8) + 0x18))(lVar4 + 0x4e8);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(lVar4 + 0x4f0) + lVar3 * 2) == 0) {
LAB_03324a4c:
        if (0 < (int)lVar3) goto LAB_03324b08;
        break;
      }
      lVar1 = *(long *)(lVar4 + 0x4f0) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_03324a4c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_03324a4c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    (**(code **)(*(long *)(lVar4 + 0xb40) + 0x18))(lVar4 + 0xb40);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(lVar4 + 0xb48) + lVar3 * 2) == 0) {
LAB_03324aa4:
        if (0 < (int)lVar3) goto LAB_03324b08;
        break;
      }
      lVar1 = *(long *)(lVar4 + 0xb48) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_03324aa4;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_03324aa4;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    (**(code **)(*(long *)(lVar4 + 0x1198) + 0x18))(lVar4 + 0x1198);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(lVar4 + 0x11a0) + lVar3 * 2) == 0) {
LAB_03324b00:
        if (0 < (int)lVar3) goto LAB_03324b08;
        break;
      }
      lVar1 = *(long *)(lVar4 + 0x11a0) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_03324b00;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_03324b00;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
  }
LAB_03324b34:
  FUN_0331ec40(param_1);
LAB_03324b3c:
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_03322410(param_1);
  return;
LAB_03324b08:
  lVar3 = *(long *)puVar2;
LAB_03324b0c:
  if (*(char *)(*(long *)(lVar3 + 0x20) + 0x16968) != '\0') {
    if (*(int *)((long)param_1 + 0x15ec) == 1) {
      *(undefined4 *)((long)param_1 + 0x15ec) = 0;
    }
    goto LAB_03324b3c;
  }
  goto LAB_03324b34;
}

