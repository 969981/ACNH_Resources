
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310dee0(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  if (((DAT_056f2cc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f2cc8), iVar3 != 0)) {
    DAT_056f2c68 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f2c70 = &DAT_0407c03e;
    DAT_056f2c80 = &DAT_0407ebb1;
    DAT_056f2ca0 = &DAT_0407ebb1;
    DAT_056f2c90 = "Invalid";
    DAT_056f2cb0 = "State";
    DAT_056f2cc0 = &DAT_0407ebb1;
    DAT_056f2c78 = DAT_056f2c68;
    DAT_056f2c88 = DAT_056f2c68;
    DAT_056f2c98 = DAT_056f2c68;
    DAT_056f2ca8 = DAT_056f2c68;
    DAT_056f2cb8 = DAT_056f2c68;
    __cxa_guard_release(&DAT_056f2cc8);
  }
  if (((DAT_056f2ce0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f2ce0), iVar3 != 0)) {
    _DAT_056f2cd0 = 0x300000002;
    DAT_056f2cd8 = &DAT_056f2c68;
    __cxa_guard_release(&DAT_056f2ce0);
  }
  uVar1 = DAT_056f2cd4;
  uVar9 = (ulong)DAT_056f2cd4;
  if (0 < (int)DAT_056f2cd4) {
    uVar4 = FUN_03c68d44(param_2,DAT_056f2cd8,DAT_056f2cd8 + (ulong)(1 < DAT_056f2cd0) * 2);
    *(undefined8 *)(param_1 + 0x208) = uVar4;
    if (uVar1 != 1) {
      uVar5 = (ulong)(int)DAT_056f2cd0;
      uVar6 = uVar5;
      if (uVar5 == 0 || DAT_056f2cd4 < 2) {
        uVar6 = 0;
      }
      lVar8 = 0;
      if (1 < uVar5 && DAT_056f2cd4 >= 2) {
        lVar8 = uVar5 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f2cd8 + uVar6 * 2,DAT_056f2cd8 + lVar8 * 2);
      *(undefined8 *)(param_1 + 0x210) = uVar4;
      if (uVar1 != 2) {
        uVar6 = (ulong)(int)DAT_056f2cd0;
        lVar8 = uVar6 << 1;
        if (uVar6 == 0 || DAT_056f2cd4 < 3) {
          lVar8 = 0;
        }
        lVar7 = (long)(int)((uint)(uVar6 << 1) | 1);
        if (uVar6 < 2 || DAT_056f2cd4 < 3) {
          lVar7 = 0;
        }
        uVar4 = FUN_03c68d44(param_2,DAT_056f2cd8 + lVar8 * 2,DAT_056f2cd8 + lVar7 * 2);
        *(undefined8 *)(param_1 + 0x218) = uVar4;
        if (uVar1 != 3) {
          uVar6 = 3;
          do {
            iVar3 = DAT_056f2cd0 * (int)uVar6;
            bVar2 = _DAT_056f2cd0 >> 0x20 <= uVar6;
            lVar8 = (long)iVar3;
            if (DAT_056f2cd0 == 0 || bVar2) {
              lVar8 = 0;
            }
            lVar7 = (long)(iVar3 + 1);
            if (DAT_056f2cd0 < 2 || bVar2) {
              lVar7 = 0;
            }
            uVar4 = FUN_03c68d44(param_2,DAT_056f2cd8 + lVar8 * 2,DAT_056f2cd8 + lVar7 * 2);
            uVar6 = uVar6 + 1;
            *(undefined8 *)(param_1 + 0x208) = uVar4;
          } while (uVar9 != uVar6);
        }
      }
    }
  }
  if (((DAT_056f2d98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f2d98), iVar3 != 0)) {
    DAT_056f2ce8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f2cf0 = "N_EditPenPos_00";
    DAT_056f2d00 = "N_Figure_00";
    DAT_056f2d10 = "N_Figure_01";
    DAT_056f2d30 = "P_Figure_00";
    DAT_056f2d40 = "P_Figure_01";
    DAT_056f2d50 = "P_Bucket_00";
    DAT_056f2d60 = "P_Line_00";
    DAT_056f2d70 = "P_Pipette_00";
    DAT_056f2d20 = "P_Pen_00";
    DAT_056f2d80 = "P_Stamp_00";
    DAT_056f2d90 = "P_Fill_00";
    DAT_056f2cf8 = DAT_056f2ce8;
    DAT_056f2d08 = DAT_056f2ce8;
    DAT_056f2d18 = DAT_056f2ce8;
    DAT_056f2d28 = DAT_056f2ce8;
    DAT_056f2d38 = DAT_056f2ce8;
    DAT_056f2d48 = DAT_056f2ce8;
    DAT_056f2d58 = DAT_056f2ce8;
    DAT_056f2d68 = DAT_056f2ce8;
    DAT_056f2d78 = DAT_056f2ce8;
    DAT_056f2d88 = DAT_056f2ce8;
    __cxa_guard_release(&DAT_056f2d98);
  }
  (**(code **)(DAT_056f2ce8 + 0x18))(&DAT_056f2ce8);
  if (*DAT_056f2cf0 == '\0') {
LAB_0310e0e4:
    FUN_0386fd70(&DAT_056f2ce8);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2ce8);
  }
  else {
    if (*DAT_056f2cf0 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2cf0[lVar7] == '\0'))
        goto LAB_0310e0e4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2cf0[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2ce8);
  }
  *(undefined8 *)(param_1 + 0x220) = uVar4;
  (**(code **)(DAT_056f2cf8 + 0x18))(&DAT_056f2cf8);
  if (*DAT_056f2d00 == '\0') {
LAB_0310e170:
    FUN_0386fd70(&DAT_056f2cf8);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2cf8);
  }
  else {
    if (*DAT_056f2d00 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d00[lVar7] == '\0'))
        goto LAB_0310e170;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d00[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2cf8);
  }
  *(undefined8 *)(param_1 + 0x228) = uVar4;
  (**(code **)(DAT_056f2d08 + 0x18))(&DAT_056f2d08);
  if (*DAT_056f2d10 == '\0') {
LAB_0310e1f4:
    FUN_0386fd70(&DAT_056f2d08);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d08);
  }
  else {
    if (*DAT_056f2d10 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d10[lVar7] == '\0'))
        goto LAB_0310e1f4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d10[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d08);
  }
  *(undefined8 *)(param_1 + 0x230) = uVar4;
  (**(code **)(DAT_056f2d18 + 0x18))(&DAT_056f2d18);
  if (*DAT_056f2d20 == '\0') {
LAB_0310e280:
    FUN_0386fd70(&DAT_056f2d18);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d18);
  }
  else {
    if (*DAT_056f2d20 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d20[lVar7] == '\0'))
        goto LAB_0310e280;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d20[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d18);
  }
  *(undefined8 *)(param_1 + 0x238) = uVar4;
  (**(code **)(DAT_056f2d28 + 0x18))(&DAT_056f2d28);
  if (*DAT_056f2d30 == '\0') {
LAB_0310e304:
    FUN_0386fd70(&DAT_056f2d28);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d28);
  }
  else {
    if (*DAT_056f2d30 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d30[lVar7] == '\0'))
        goto LAB_0310e304;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d30[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d28);
  }
  *(undefined8 *)(param_1 + 0x240) = uVar4;
  (**(code **)(DAT_056f2d38 + 0x18))(&DAT_056f2d38);
  if (*DAT_056f2d40 == '\0') {
LAB_0310e390:
    FUN_0386fd70(&DAT_056f2d38);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d38);
  }
  else {
    if (*DAT_056f2d40 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d40[lVar7] == '\0'))
        goto LAB_0310e390;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d40[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d38);
  }
  *(undefined8 *)(param_1 + 0x248) = uVar4;
  (**(code **)(DAT_056f2d48 + 0x18))(&DAT_056f2d48);
  if (*DAT_056f2d50 == '\0') {
LAB_0310e414:
    FUN_0386fd70(&DAT_056f2d48);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d48);
  }
  else {
    if (*DAT_056f2d50 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d50[lVar7] == '\0'))
        goto LAB_0310e414;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d50[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d48);
  }
  *(undefined8 *)(param_1 + 0x250) = uVar4;
  (**(code **)(DAT_056f2d58 + 0x18))(&DAT_056f2d58);
  if (*DAT_056f2d60 == '\0') {
LAB_0310e4a0:
    FUN_0386fd70(&DAT_056f2d58);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d58);
  }
  else {
    if (*DAT_056f2d60 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d60[lVar7] == '\0'))
        goto LAB_0310e4a0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d60[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d58);
  }
  *(undefined8 *)(param_1 + 600) = uVar4;
  (**(code **)(DAT_056f2d68 + 0x18))(&DAT_056f2d68);
  if (*DAT_056f2d70 == '\0') {
LAB_0310e524:
    FUN_0386fd70(&DAT_056f2d68);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d68);
  }
  else {
    if (*DAT_056f2d70 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d70[lVar7] == '\0'))
        goto LAB_0310e524;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d70[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d68);
  }
  *(undefined8 *)(param_1 + 0x260) = uVar4;
  (**(code **)(DAT_056f2d78 + 0x18))(&DAT_056f2d78);
  if (*DAT_056f2d80 == '\0') {
LAB_0310e5b0:
    FUN_0386fd70(&DAT_056f2d78);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d78);
  }
  else {
    if (*DAT_056f2d80 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d80[lVar7] == '\0'))
        goto LAB_0310e5b0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d80[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d78);
  }
  *(undefined8 *)(param_1 + 0x268) = uVar4;
  (**(code **)(DAT_056f2d88 + 0x18))(&DAT_056f2d88);
  if (*DAT_056f2d90 == '\0') {
LAB_0310e634:
    FUN_0386fd70(&DAT_056f2d88);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2d88);
  }
  else {
    if (*DAT_056f2d90 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2d90[lVar7] == '\0'))
        goto LAB_0310e634;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2d90[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2d88);
  }
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

