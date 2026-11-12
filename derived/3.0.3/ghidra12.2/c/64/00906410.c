
void FUN_00906410(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_40;
  char *local_38;
  
  if (*(int *)(param_1 + 0x15c) != 0x45) {
    return;
  }
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    return;
  }
  if (*(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4) +
      *(float *)(param_1 + 0x2b0) * *(float *)(param_1 + 0x2b0) +
      *(float *)(param_1 + 0x2b8) * *(float *)(param_1 + 0x2b8) <= 0.0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 1;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    return;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "CameraArea:2";
  (**(code **)(*(long *)(param_1 + 0x188) + 0x18))(param_1 + 0x188);
  lVar4 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 400) + lVar4) == '\0') {
LAB_009064f8:
      if ((int)lVar4 < 0xc) {
        return;
      }
      uVar6 = 0;
      while( true ) {
        pcVar1 = (char *)(*(long *)(param_1 + 400) + uVar6);
        (**(code **)(local_40 + 0x18))(&local_40);
        if (pcVar1 == local_38) break;
        lVar5 = 0;
        while (cVar2 = pcVar1[lVar5], cVar2 == local_38[lVar5]) {
          if ((cVar2 == '\0') || (bVar3 = lVar5 == 0xb, lVar5 = lVar5 + 1, bVar3))
          goto LAB_00906564;
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == (int)lVar4 - 0xb) {
          return;
        }
      }
LAB_00906564:
      if ((int)uVar6 == -1) {
        return;
      }
      *(undefined1 *)(param_1 + 0x2cd) = 1;
      return;
    }
    lVar5 = *(long *)(param_1 + 400) + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_009064f8;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_009064f8;
    }
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) {
      return;
    }
  } while( true );
}

