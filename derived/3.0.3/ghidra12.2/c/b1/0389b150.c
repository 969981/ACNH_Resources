
undefined8 FUN_0389b150(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = DAT_05ae6a60;
  if (*(int *)(param_1 + 0x1e4) != 1) {
    return 0;
  }
  if (1 < *(int *)(*(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0xf8) + 0x58)) {
    uVar4 = param_2[1];
    uVar6 = param_2[2];
    *(undefined8 *)(param_1 + 0x188) = *param_2;
    *(undefined8 *)(param_1 + 400) = uVar4;
    *(undefined8 *)(param_1 + 0x198) = uVar6;
    *(undefined8 *)(param_1 + 0x1d8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
    lVar8 = *(long *)(lVar8 + 0x68);
    if (*(long *)(lVar8 + 0x10) != 0) {
      lVar5 = *(long *)(lVar8 + 0xf8);
      uVar2 = *(uint *)(lVar5 + 0x58);
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          lVar9 = *(long *)(*(long *)(lVar5 + 0x60) + uVar7 * 8);
          if (((*(long *)(lVar9 + 0x10) == *(long *)(lVar8 + 0x10)) &&
              (*(char *)(lVar9 + 0x18) == *(char *)(lVar8 + 0x18))) &&
             (*(char *)(lVar9 + 0x19) == *(char *)(lVar8 + 0x19))) {
            *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x198);
            if (*(long *)(param_1 + 0x198) != 0) goto LAB_0389b250;
            iVar1 = (int)uVar7 + 1;
            iVar3 = 0;
            if (uVar2 != 0) {
              iVar3 = iVar1 / (int)uVar2;
            }
            lVar8 = *(long *)(*(long *)(*(long *)(lVar5 + 0x60) + (ulong)(iVar1 - iVar3 * uVar2) * 8
                                       ) + 0x10);
            goto LAB_0389b248;
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
      }
      lVar8 = *(long *)(param_1 + 0x198);
LAB_0389b248:
      *(long *)(param_1 + 0x1d0) = lVar8;
      if (lVar8 != 0) {
LAB_0389b250:
        if (*(int *)(param_1 + 0x1e4) != 2) {
          *(undefined4 *)(param_1 + 0x1e4) = 2;
          uVar4 = nn::os::GetSystemTick();
          *(undefined8 *)(param_1 + 0x1e8) = uVar4;
        }
        return 1;
      }
    }
  }
  return 0;
}

