
undefined8 FUN_0016271c(char *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = param_2 - 10;
  if ((long)param_2 < 10) {
    return 2;
  }
  if ((*param_1 != '\x1f') || (param_1[1] != -0x75)) {
    return 1;
  }
  uVar3 = 1;
  if ((param_1[2] == '\b') && (bVar1 = param_1[3], bVar1 < 0x20)) {
    pcVar5 = param_1 + 10;
    if ((bVar1 >> 2 & 1) != 0) {
      if (param_2 < 0xc) {
        return 2;
      }
      uVar8 = (ulong)*(ushort *)(param_1 + 10) + 2;
      bVar2 = uVar7 < uVar8;
      uVar7 = uVar7 - uVar8;
      if (bVar2) {
        return 2;
      }
      pcVar5 = pcVar5 + uVar8;
    }
    if ((bVar1 >> 3 & 1) == 0) {
LAB_001627d0:
      if ((bVar1 >> 4 & 1) == 0) {
LAB_00162804:
        uVar8 = uVar7;
        if (((bVar1 >> 1 & 1) != 0) && (uVar8 = uVar7 - 2, (long)uVar7 < 2)) {
          return 2;
        }
        uVar3 = 0;
        *param_3 = param_2 - uVar8;
      }
      else {
        if (uVar7 == 0) {
          return 2;
        }
        uVar3 = 2;
        lVar4 = 1 - uVar7;
        do {
          if (*pcVar5 == '\0') {
            uVar7 = -lVar4;
            goto LAB_00162804;
          }
          lVar4 = lVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (lVar4 != 1);
      }
    }
    else {
      if (uVar7 == 0) {
        return 2;
      }
      uVar3 = 2;
      lVar4 = 1 - uVar7;
      pcVar6 = pcVar5;
      do {
        pcVar5 = pcVar6 + 1;
        if (*pcVar6 == '\0') {
          uVar7 = -lVar4;
          goto LAB_001627d0;
        }
        lVar4 = lVar4 + 1;
        pcVar6 = pcVar5;
      } while (lVar4 != 1);
    }
  }
  return uVar3;
}

