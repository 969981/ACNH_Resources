
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310eb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (((DAT_056f2de8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f2de8), iVar2 != 0)) {
    DAT_056f2dc8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f2dd0 = &DAT_040fe5ab;
    DAT_056f2de0 = &DAT_0407ebb1;
    DAT_056f2dd8 = DAT_056f2dc8;
    __cxa_guard_release(&DAT_056f2de8);
  }
  if (((DAT_056f2e00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f2e00), iVar2 != 0)) {
    _DAT_056f2df0 = 0x100000002;
    DAT_056f2df8 = &DAT_056f2dc8;
    __cxa_guard_release(&DAT_056f2e00);
  }
  uVar1 = DAT_056f2df4;
  if (0 < (int)DAT_056f2df4) {
    uVar6 = 0;
    do {
      lVar5 = (long)(int)(DAT_056f2df0 * uVar6);
      if (DAT_056f2df0 == 0 || DAT_056f2df4 <= uVar6) {
        lVar5 = 0;
      }
      lVar4 = (long)(int)(DAT_056f2df0 * uVar6 + 1);
      if (DAT_056f2df0 < 2 || DAT_056f2df4 <= uVar6) {
        lVar4 = 0;
      }
      uVar3 = FUN_03c68d44(param_2,DAT_056f2df8 + lVar5 * 2,DAT_056f2df8 + lVar4 * 2);
      uVar6 = uVar6 + 1;
      *(undefined8 *)(param_1 + 0x208) = uVar3;
    } while (uVar1 != uVar6);
  }
  if (((DAT_056f3028 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f3028), iVar2 != 0)) {
    DAT_056f2e08 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f2e10 = "P_TexPre_00";
    DAT_056f2e40 = "P_MaskPre_01";
    DAT_056f2e20 = "P_MaskPre_00";
    DAT_056f2e30 = "P_TexPre_01";
    DAT_056f2e50 = "P_TexPre_03";
    DAT_056f2e60 = "P_MaskPre_03";
    DAT_056f2e80 = "P_MaskPre_04";
    DAT_056f2e90 = "P_TexPre_05";
    DAT_056f2eb0 = "P_TexPre_06";
    DAT_056f2ec0 = "P_MaskPre_06";
    DAT_056f2ee0 = "P_MaskPre_07";
    DAT_056f2ef0 = "P_TexPre_08";
    DAT_056f2f10 = "P_TexPre_09";
    DAT_056f2f20 = "P_MaskPre_09";
    DAT_056f2e70 = "P_TexPre_04";
    DAT_056f2f40 = "P_MaskPre_10";
    DAT_056f2ea0 = "P_MaskPre_05";
    DAT_056f2f50 = "P_TexPre_11";
    DAT_056f2ed0 = "P_TexPre_07";
    DAT_056f2f70 = "P_TexPre_12";
    DAT_056f2f00 = "P_MaskPre_08";
    DAT_056f2f80 = "P_MaskPre_12";
    DAT_056f2f30 = "P_TexPre_10";
    DAT_056f2fa0 = "P_TexPre_13";
    DAT_056f2f60 = "P_MaskPre_11";
    DAT_056f2fb0 = "P_MaskPre_14";
    DAT_056f2f90 = "P_MaskPre_13";
    DAT_056f2fd0 = "P_TexPre_15";
    DAT_056f2fc0 = "P_TexPre_14";
    DAT_056f2fe0 = "P_MaskPre_15";
    DAT_056f2ff0 = "P_TexPre_16";
    DAT_056f3000 = "P_MaskPre_16";
    DAT_056f3010 = "P_MaskPre_17";
    DAT_056f3020 = "P_TexPre_17";
    DAT_056f2e18 = DAT_056f2e08;
    DAT_056f2e28 = DAT_056f2e08;
    DAT_056f2e38 = DAT_056f2e08;
    DAT_056f2e48 = DAT_056f2e08;
    DAT_056f2e58 = DAT_056f2e08;
    DAT_056f2e68 = DAT_056f2e08;
    DAT_056f2e78 = DAT_056f2e08;
    DAT_056f2e88 = DAT_056f2e08;
    DAT_056f2e98 = DAT_056f2e08;
    DAT_056f2ea8 = DAT_056f2e08;
    DAT_056f2eb8 = DAT_056f2e08;
    DAT_056f2ec8 = DAT_056f2e08;
    DAT_056f2ed8 = DAT_056f2e08;
    DAT_056f2ee8 = DAT_056f2e08;
    DAT_056f2ef8 = DAT_056f2e08;
    DAT_056f2f08 = DAT_056f2e08;
    DAT_056f2f18 = DAT_056f2e08;
    DAT_056f2f28 = DAT_056f2e08;
    DAT_056f2f38 = DAT_056f2e08;
    DAT_056f2f48 = DAT_056f2e08;
    DAT_056f2f58 = DAT_056f2e08;
    DAT_056f2f68 = DAT_056f2e08;
    DAT_056f2f78 = DAT_056f2e08;
    DAT_056f2f88 = DAT_056f2e08;
    DAT_056f2f98 = DAT_056f2e08;
    DAT_056f2fa8 = DAT_056f2e08;
    DAT_056f2fb8 = DAT_056f2e08;
    DAT_056f2fc8 = DAT_056f2e08;
    DAT_056f2fd8 = DAT_056f2e08;
    DAT_056f2fe8 = DAT_056f2e08;
    DAT_056f2ff8 = DAT_056f2e08;
    DAT_056f3008 = DAT_056f2e08;
    DAT_056f3018 = DAT_056f2e08;
    __cxa_guard_release(&DAT_056f3028);
  }
  (**(code **)(DAT_056f2e08 + 0x18))(&DAT_056f2e08);
  if (*DAT_056f2e10 == '\0') {
LAB_0310ec74:
    FUN_0386fd70(&DAT_056f2e08);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e08);
  }
  else {
    if (*DAT_056f2e10 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e10[lVar4] == '\0'))
        goto LAB_0310ec74;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e10[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e08);
  }
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  (**(code **)(DAT_056f2e18 + 0x18))(&DAT_056f2e18);
  if (*DAT_056f2e20 == '\0') {
LAB_0310ed00:
    FUN_0386fd70(&DAT_056f2e18);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e18);
  }
  else {
    if (*DAT_056f2e20 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e20[lVar4] == '\0'))
        goto LAB_0310ed00;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e20[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e18);
  }
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  (**(code **)(DAT_056f2e28 + 0x18))(&DAT_056f2e28);
  if (*DAT_056f2e30 == '\0') {
LAB_0310ed84:
    FUN_0386fd70(&DAT_056f2e28);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e28);
  }
  else {
    if (*DAT_056f2e30 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e30[lVar4] == '\0'))
        goto LAB_0310ed84;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e30[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e28);
  }
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  (**(code **)(DAT_056f2e38 + 0x18))(&DAT_056f2e38);
  if (*DAT_056f2e40 == '\0') {
LAB_0310ee10:
    FUN_0386fd70(&DAT_056f2e38);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e38);
  }
  else {
    if (*DAT_056f2e40 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e40[lVar4] == '\0'))
        goto LAB_0310ee10;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e40[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e38);
  }
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  (**(code **)(DAT_056f2e48 + 0x18))(&DAT_056f2e48);
  if (*DAT_056f2e50 == '\0') {
LAB_0310ee94:
    FUN_0386fd70(&DAT_056f2e48);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e48);
  }
  else {
    if (*DAT_056f2e50 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e50[lVar4] == '\0'))
        goto LAB_0310ee94;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e50[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e48);
  }
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  (**(code **)(DAT_056f2e58 + 0x18))(&DAT_056f2e58);
  if (*DAT_056f2e60 == '\0') {
LAB_0310ef20:
    FUN_0386fd70(&DAT_056f2e58);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e58);
  }
  else {
    if (*DAT_056f2e60 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e60[lVar4] == '\0'))
        goto LAB_0310ef20;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e60[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e58);
  }
  *(undefined8 *)(param_1 + 0x238) = uVar3;
  (**(code **)(DAT_056f2e68 + 0x18))(&DAT_056f2e68);
  if (*DAT_056f2e70 == '\0') {
LAB_0310efa4:
    FUN_0386fd70(&DAT_056f2e68);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e68);
  }
  else {
    if (*DAT_056f2e70 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e70[lVar4] == '\0'))
        goto LAB_0310efa4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e70[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e68);
  }
  *(undefined8 *)(param_1 + 0x240) = uVar3;
  (**(code **)(DAT_056f2e78 + 0x18))(&DAT_056f2e78);
  if (*DAT_056f2e80 == '\0') {
LAB_0310f030:
    FUN_0386fd70(&DAT_056f2e78);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e78);
  }
  else {
    if (*DAT_056f2e80 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e80[lVar4] == '\0'))
        goto LAB_0310f030;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e80[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e78);
  }
  *(undefined8 *)(param_1 + 0x248) = uVar3;
  (**(code **)(DAT_056f2e88 + 0x18))(&DAT_056f2e88);
  if (*DAT_056f2e90 == '\0') {
LAB_0310f0b4:
    FUN_0386fd70(&DAT_056f2e88);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e88);
  }
  else {
    if (*DAT_056f2e90 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2e90[lVar4] == '\0'))
        goto LAB_0310f0b4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2e90[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e88);
  }
  *(undefined8 *)(param_1 + 0x250) = uVar3;
  (**(code **)(DAT_056f2e98 + 0x18))(&DAT_056f2e98);
  if (*DAT_056f2ea0 == '\0') {
LAB_0310f140:
    FUN_0386fd70(&DAT_056f2e98);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2e98);
  }
  else {
    if (*DAT_056f2ea0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2ea0[lVar4] == '\0'))
        goto LAB_0310f140;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2ea0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2e98);
  }
  *(undefined8 *)(param_1 + 600) = uVar3;
  (**(code **)(DAT_056f2ea8 + 0x18))(&DAT_056f2ea8);
  if (*DAT_056f2eb0 == '\0') {
LAB_0310f1c4:
    FUN_0386fd70(&DAT_056f2ea8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2ea8);
  }
  else {
    if (*DAT_056f2eb0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2eb0[lVar4] == '\0'))
        goto LAB_0310f1c4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2eb0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2ea8);
  }
  *(undefined8 *)(param_1 + 0x260) = uVar3;
  (**(code **)(DAT_056f2eb8 + 0x18))(&DAT_056f2eb8);
  if (*DAT_056f2ec0 == '\0') {
LAB_0310f250:
    FUN_0386fd70(&DAT_056f2eb8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2eb8);
  }
  else {
    if (*DAT_056f2ec0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2ec0[lVar4] == '\0'))
        goto LAB_0310f250;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2ec0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2eb8);
  }
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  (**(code **)(DAT_056f2ec8 + 0x18))(&DAT_056f2ec8);
  if (*DAT_056f2ed0 == '\0') {
LAB_0310f2d4:
    FUN_0386fd70(&DAT_056f2ec8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2ec8);
  }
  else {
    if (*DAT_056f2ed0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2ed0[lVar4] == '\0'))
        goto LAB_0310f2d4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2ed0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2ec8);
  }
  *(undefined8 *)(param_1 + 0x270) = uVar3;
  (**(code **)(DAT_056f2ed8 + 0x18))(&DAT_056f2ed8);
  if (*DAT_056f2ee0 == '\0') {
LAB_0310f360:
    FUN_0386fd70(&DAT_056f2ed8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2ed8);
  }
  else {
    if (*DAT_056f2ee0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2ee0[lVar4] == '\0'))
        goto LAB_0310f360;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2ee0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2ed8);
  }
  *(undefined8 *)(param_1 + 0x278) = uVar3;
  (**(code **)(DAT_056f2ee8 + 0x18))(&DAT_056f2ee8);
  if (*DAT_056f2ef0 == '\0') {
LAB_0310f3e4:
    FUN_0386fd70(&DAT_056f2ee8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2ee8);
  }
  else {
    if (*DAT_056f2ef0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2ef0[lVar4] == '\0'))
        goto LAB_0310f3e4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2ef0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2ee8);
  }
  *(undefined8 *)(param_1 + 0x280) = uVar3;
  (**(code **)(DAT_056f2ef8 + 0x18))(&DAT_056f2ef8);
  if (*DAT_056f2f00 == '\0') {
LAB_0310f470:
    FUN_0386fd70(&DAT_056f2ef8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2ef8);
  }
  else {
    if (*DAT_056f2f00 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f00[lVar4] == '\0'))
        goto LAB_0310f470;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f00[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2ef8);
  }
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  (**(code **)(DAT_056f2f08 + 0x18))(&DAT_056f2f08);
  if (*DAT_056f2f10 == '\0') {
LAB_0310f4f4:
    FUN_0386fd70(&DAT_056f2f08);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f08);
  }
  else {
    if (*DAT_056f2f10 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f10[lVar4] == '\0'))
        goto LAB_0310f4f4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f10[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f08);
  }
  *(undefined8 *)(param_1 + 0x290) = uVar3;
  (**(code **)(DAT_056f2f18 + 0x18))(&DAT_056f2f18);
  if (*DAT_056f2f20 == '\0') {
LAB_0310f580:
    FUN_0386fd70(&DAT_056f2f18);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f18);
  }
  else {
    if (*DAT_056f2f20 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f20[lVar4] == '\0'))
        goto LAB_0310f580;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f20[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f18);
  }
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  (**(code **)(DAT_056f2f28 + 0x18))(&DAT_056f2f28);
  if (*DAT_056f2f30 == '\0') {
LAB_0310f604:
    FUN_0386fd70(&DAT_056f2f28);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f28);
  }
  else {
    if (*DAT_056f2f30 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f30[lVar4] == '\0'))
        goto LAB_0310f604;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f30[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f28);
  }
  *(undefined8 *)(param_1 + 0x2a0) = uVar3;
  (**(code **)(DAT_056f2f38 + 0x18))(&DAT_056f2f38);
  if (*DAT_056f2f40 == '\0') {
LAB_0310f690:
    FUN_0386fd70(&DAT_056f2f38);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f38);
  }
  else {
    if (*DAT_056f2f40 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f40[lVar4] == '\0'))
        goto LAB_0310f690;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f40[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f38);
  }
  *(undefined8 *)(param_1 + 0x2a8) = uVar3;
  (**(code **)(DAT_056f2f48 + 0x18))(&DAT_056f2f48);
  if (*DAT_056f2f50 == '\0') {
LAB_0310f714:
    FUN_0386fd70(&DAT_056f2f48);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f48);
  }
  else {
    if (*DAT_056f2f50 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f50[lVar4] == '\0'))
        goto LAB_0310f714;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f50[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f48);
  }
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  (**(code **)(DAT_056f2f58 + 0x18))(&DAT_056f2f58);
  if (*DAT_056f2f60 == '\0') {
LAB_0310f7a0:
    FUN_0386fd70(&DAT_056f2f58);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f58);
  }
  else {
    if (*DAT_056f2f60 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f60[lVar4] == '\0'))
        goto LAB_0310f7a0;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f60[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f58);
  }
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  (**(code **)(DAT_056f2f68 + 0x18))(&DAT_056f2f68);
  if (*DAT_056f2f70 == '\0') {
LAB_0310f824:
    FUN_0386fd70(&DAT_056f2f68);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f68);
  }
  else {
    if (*DAT_056f2f70 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f70[lVar4] == '\0'))
        goto LAB_0310f824;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f70[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f68);
  }
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  (**(code **)(DAT_056f2f78 + 0x18))(&DAT_056f2f78);
  if (*DAT_056f2f80 == '\0') {
LAB_0310f8b0:
    FUN_0386fd70(&DAT_056f2f78);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f78);
  }
  else {
    if (*DAT_056f2f80 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f80[lVar4] == '\0'))
        goto LAB_0310f8b0;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f80[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f78);
  }
  *(undefined8 *)(param_1 + 0x2c8) = uVar3;
  (**(code **)(DAT_056f2f88 + 0x18))(&DAT_056f2f88);
  if (*DAT_056f2f90 == '\0') {
LAB_0310f934:
    FUN_0386fd70(&DAT_056f2f88);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f88);
  }
  else {
    if (*DAT_056f2f90 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2f90[lVar4] == '\0'))
        goto LAB_0310f934;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2f90[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f88);
  }
  *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  (**(code **)(DAT_056f2f98 + 0x18))(&DAT_056f2f98);
  if (*DAT_056f2fa0 == '\0') {
LAB_0310f9c0:
    FUN_0386fd70(&DAT_056f2f98);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2f98);
  }
  else {
    if (*DAT_056f2fa0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2fa0[lVar4] == '\0'))
        goto LAB_0310f9c0;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2fa0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2f98);
  }
  *(undefined8 *)(param_1 + 0x2d8) = uVar3;
  (**(code **)(DAT_056f2fa8 + 0x18))(&DAT_056f2fa8);
  if (*DAT_056f2fb0 == '\0') {
LAB_0310fa44:
    FUN_0386fd70(&DAT_056f2fa8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2fa8);
  }
  else {
    if (*DAT_056f2fb0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2fb0[lVar4] == '\0'))
        goto LAB_0310fa44;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2fb0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2fa8);
  }
  *(undefined8 *)(param_1 + 0x2e0) = uVar3;
  (**(code **)(DAT_056f2fb8 + 0x18))(&DAT_056f2fb8);
  if (*DAT_056f2fc0 == '\0') {
LAB_0310fad0:
    FUN_0386fd70(&DAT_056f2fb8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2fb8);
  }
  else {
    if (*DAT_056f2fc0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2fc0[lVar4] == '\0'))
        goto LAB_0310fad0;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2fc0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2fb8);
  }
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  (**(code **)(DAT_056f2fc8 + 0x18))(&DAT_056f2fc8);
  if (*DAT_056f2fd0 == '\0') {
LAB_0310fb54:
    FUN_0386fd70(&DAT_056f2fc8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2fc8);
  }
  else {
    if (*DAT_056f2fd0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2fd0[lVar4] == '\0'))
        goto LAB_0310fb54;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2fd0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2fc8);
  }
  *(undefined8 *)(param_1 + 0x2f0) = uVar3;
  (**(code **)(DAT_056f2fd8 + 0x18))(&DAT_056f2fd8);
  if (*DAT_056f2fe0 == '\0') {
LAB_0310fbe0:
    FUN_0386fd70(&DAT_056f2fd8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2fd8);
  }
  else {
    if (*DAT_056f2fe0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2fe0[lVar4] == '\0'))
        goto LAB_0310fbe0;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2fe0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2fd8);
  }
  *(undefined8 *)(param_1 + 0x2f8) = uVar3;
  (**(code **)(DAT_056f2fe8 + 0x18))(&DAT_056f2fe8);
  if (*DAT_056f2ff0 == '\0') {
LAB_0310fc64:
    FUN_0386fd70(&DAT_056f2fe8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2fe8);
  }
  else {
    if (*DAT_056f2ff0 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f2ff0[lVar4] == '\0'))
        goto LAB_0310fc64;
        lVar5 = lVar5 + 1;
      } while (DAT_056f2ff0[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2fe8);
  }
  *(undefined8 *)(param_1 + 0x300) = uVar3;
  (**(code **)(DAT_056f2ff8 + 0x18))(&DAT_056f2ff8);
  if (*DAT_056f3000 == '\0') {
LAB_0310fcf0:
    FUN_0386fd70(&DAT_056f2ff8);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f2ff8);
  }
  else {
    if (*DAT_056f3000 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f3000[lVar4] == '\0'))
        goto LAB_0310fcf0;
        lVar5 = lVar5 + 1;
      } while (DAT_056f3000[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f2ff8);
  }
  *(undefined8 *)(param_1 + 0x308) = uVar3;
  (**(code **)(DAT_056f3008 + 0x18))(&DAT_056f3008);
  if (*DAT_056f3010 == '\0') {
LAB_0310fd74:
    FUN_0386fd70(&DAT_056f3008);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f3008);
  }
  else {
    if (*DAT_056f3010 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f3010[lVar4] == '\0'))
        goto LAB_0310fd74;
        lVar5 = lVar5 + 1;
      } while (DAT_056f3010[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f3008);
  }
  *(undefined8 *)(param_1 + 0x310) = uVar3;
  (**(code **)(DAT_056f3018 + 0x18))(&DAT_056f3018);
  if (*DAT_056f3020 == '\0') {
LAB_0310fe00:
    FUN_0386fd70(&DAT_056f3018);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f3018);
  }
  else {
    if (*DAT_056f3020 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f3020[lVar4] == '\0'))
        goto LAB_0310fe00;
        lVar5 = lVar5 + 1;
      } while (DAT_056f3020[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f3018);
  }
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

