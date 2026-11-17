
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03121260(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (((DAT_056f41a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f41a8), iVar3 != 0)) {
    DAT_056f4128 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f4130 = "Variation";
    DAT_056f4140 = &DAT_0407ebb1;
    DAT_056f4160 = &DAT_0407ebb1;
    DAT_056f4150 = "Pattern";
    DAT_056f4170 = "Season";
    DAT_056f4180 = &DAT_0407ebb1;
    DAT_056f4190 = &DAT_040cf099;
    DAT_056f41a0 = &DAT_0407ebb1;
    DAT_056f4138 = DAT_056f4128;
    DAT_056f4148 = DAT_056f4128;
    DAT_056f4158 = DAT_056f4128;
    DAT_056f4168 = DAT_056f4128;
    DAT_056f4178 = DAT_056f4128;
    DAT_056f4188 = DAT_056f4128;
    DAT_056f4198 = DAT_056f4128;
    __cxa_guard_release(&DAT_056f41a8);
  }
  if (((DAT_056f41c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f41c0), iVar3 != 0)) {
    _DAT_056f41b0 = 0x400000002;
    DAT_056f41b8 = &DAT_056f4128;
    __cxa_guard_release(&DAT_056f41c0);
  }
  uVar1 = DAT_056f41b4;
  uVar9 = (ulong)DAT_056f41b4;
  if (0 < (int)DAT_056f41b4) {
    uVar4 = FUN_03c68d44(param_2,DAT_056f41b8,DAT_056f41b8 + (ulong)(1 < DAT_056f41b0) * 2);
    *(undefined8 *)(param_1 + 0x250) = uVar4;
    if (uVar1 != 1) {
      uVar5 = (ulong)(int)DAT_056f41b0;
      uVar6 = uVar5;
      if (uVar5 == 0 || DAT_056f41b4 < 2) {
        uVar6 = 0;
      }
      lVar8 = 0;
      if (1 < uVar5 && DAT_056f41b4 >= 2) {
        lVar8 = uVar5 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f41b8 + uVar6 * 2,DAT_056f41b8 + lVar8 * 2);
      *(undefined8 *)(param_1 + 600) = uVar4;
      if (uVar1 != 2) {
        uVar6 = (ulong)(int)DAT_056f41b0;
        lVar8 = uVar6 << 1;
        if (uVar6 == 0 || DAT_056f41b4 < 3) {
          lVar8 = 0;
        }
        lVar7 = (long)(int)((uint)(uVar6 << 1) | 1);
        if (uVar6 < 2 || DAT_056f41b4 < 3) {
          lVar7 = 0;
        }
        uVar4 = FUN_03c68d44(param_2,DAT_056f41b8 + lVar8 * 2,DAT_056f41b8 + lVar7 * 2);
        *(undefined8 *)(param_1 + 0x260) = uVar4;
        if (uVar1 != 3) {
          uVar6 = (ulong)(int)DAT_056f41b0;
          lVar8 = uVar6 * 3;
          if (uVar6 == 0 || DAT_056f41b4 < 4) {
            lVar8 = 0;
          }
          lVar7 = (long)((int)(uVar6 * 3) + 1);
          if (uVar6 < 2 || DAT_056f41b4 < 4) {
            lVar7 = 0;
          }
          uVar4 = FUN_03c68d44(param_2,DAT_056f41b8 + lVar8 * 2,DAT_056f41b8 + lVar7 * 2);
          *(undefined8 *)(param_1 + 0x268) = uVar4;
          if (uVar1 != 4) {
            uVar6 = 4;
            do {
              iVar3 = DAT_056f41b0 * (int)uVar6;
              bVar2 = _DAT_056f41b0 >> 0x20 <= uVar6;
              lVar8 = (long)iVar3;
              if (DAT_056f41b0 == 0 || bVar2) {
                lVar8 = 0;
              }
              lVar7 = (long)(iVar3 + 1);
              if (DAT_056f41b0 < 2 || bVar2) {
                lVar7 = 0;
              }
              uVar4 = FUN_03c68d44(param_2,DAT_056f41b8 + lVar8 * 2,DAT_056f41b8 + lVar7 * 2);
              uVar6 = uVar6 + 1;
              *(undefined8 *)(param_1 + 0x250) = uVar4;
            } while (uVar9 != uVar6);
          }
        }
      }
    }
  }
  if (((DAT_056f41d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f41d8), iVar3 != 0)) {
    DAT_056f41c8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f41d0 = "P_DummyTex_00";
    __cxa_guard_release(&DAT_056f41d8);
  }
  (**(code **)(DAT_056f41c8 + 0x18))(&DAT_056f41c8);
  if (*DAT_056f41d0 == '\0') {
LAB_031214c4:
    FUN_0386fd70(&DAT_056f41c8);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f41c8);
  }
  else {
    if (*DAT_056f41d0 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f41d0[lVar7] == '\0'))
        goto LAB_031214c4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f41d0[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f41c8);
  }
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

