
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032ecf40(long param_1)

{
  long lVar1;
  long lVar2;
  short *psVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  undefined *local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined2 *local_120;
  undefined4 local_118;
  undefined2 local_114 [96];
  undefined2 local_54;
  
  lVar1 = param_1 + 0x698;
  (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(lVar1);
  puVar6 = PTR_DAT_04bb2da0;
  uVar12 = 0;
  while (*(short *)(*(long *)(param_1 + 0x6a0) + uVar12 * 2) != 0) {
    lVar9 = *(long *)(param_1 + 0x6a0) + uVar12 * 2;
    if (*(short *)(lVar9 + 2) == 0) {
      uVar12 = uVar12 + 1;
      break;
    }
    if (*(short *)(lVar9 + 4) == 0) {
      uVar12 = uVar12 + 2;
      iVar8 = (int)uVar12;
      goto joined_r0x032ecfb8;
    }
    uVar12 = uVar12 + 3;
    if (uVar12 == 0x80001) {
      return;
    }
  }
  iVar8 = (int)uVar12;
joined_r0x032ecfb8:
  if (iVar8 < 1) {
    return;
  }
  do {
    uVar5 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar5;
    (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(lVar1);
    lVar7 = *(long *)(param_1 + 0x6a0);
    lVar9 = 0;
    do {
      if (*(short *)(lVar7 + lVar9 * 2) == 0) goto LAB_032ed054;
      lVar2 = lVar7 + lVar9 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_032ed054;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_032ed054;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_032ed054:
    psVar11 = *(short **)(param_1 + 0x628);
    psVar3 = (short *)puVar6;
    if ((int)uVar5 <= (int)lVar9) {
      psVar3 = (short *)(lVar7 + uVar12 * 2);
    }
    if ((psVar11 != (short *)0x0) && (uVar5 = *(uint *)(param_1 + 0x630), 0 < (int)uVar5)) {
      sVar4 = *psVar3;
      if (*psVar11 != sVar4) {
        uVar10 = 0;
        do {
          if ((ulong)uVar5 - 1 == uVar10) goto LAB_032ecff0;
          lVar9 = uVar10 + 1;
          uVar10 = uVar10 + 1;
        } while (psVar11[lVar9] != sVar4);
        if (uVar5 <= uVar10) goto LAB_032ecff0;
      }
      (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(lVar1);
      lVar7 = *(long *)(param_1 + 0x6a0);
      lVar9 = 0;
      do {
        if (*(short *)(lVar7 + lVar9 * 2) == 0) {
LAB_032ed100:
          iVar8 = (int)lVar9;
joined_r0x032ed100:
          if ((iVar8 != 0) &&
             (lVar9 = (lVar9 << 0x20) + -0x100000000, *(short *)(lVar7 + (lVar9 >> 0x1f)) == sVar4))
          {
            *(undefined2 *)(lVar7 + (lVar9 >> 0x20) * 2) = 0;
          }
          break;
        }
        lVar2 = lVar7 + lVar9 * 2;
        if (*(short *)(lVar2 + 2) == 0) {
          lVar9 = lVar9 + 1;
          goto LAB_032ed100;
        }
        if (*(short *)(lVar2 + 4) == 0) {
          lVar9 = lVar9 + 2;
          iVar8 = (int)lVar9;
          goto joined_r0x032ed100;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(lVar1);
      lVar9 = 0;
      while (*(short *)(*(long *)(param_1 + 0x6a0) + lVar9 * 2) != 0) {
        lVar7 = *(long *)(param_1 + 0x6a0) + lVar9 * 2;
        if (*(short *)(lVar7 + 2) == 0) {
          lVar9 = lVar9 + 1;
          break;
        }
        if (*(short *)(lVar7 + 4) == 0) {
          lVar9 = lVar9 + 2;
          break;
        }
        lVar9 = lVar9 + 3;
        if (lVar9 == 0x80001) goto LAB_032ed178;
      }
      uVar12 = (ulong)((int)lVar9 - 1);
      if ((int)lVar9 < 1) break;
    }
LAB_032ecff0:
  } while (0 < (int)uVar12);
LAB_032ed178:
  if (DAT_05355a60 == 0) {
    local_54 = 0;
    local_118 = 0x61;
    local_120 = local_114;
    local_114[0] = 0;
    local_128 = PTR_DAT_04bc9690 + 0x10;
    (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(lVar1);
    lVar1 = _SUB_00000020;
    uStack_130 = *(undefined8 *)(param_1 + 0x6a0);
    local_138 = PTR_DAT_04bb8610 + 0x10;
    if (*(long *)(_SUB_00000020 + 0x1ae0) != 0) {
      FUN_032e28a0(*(long *)(_SUB_00000020 + 0x1ae0),_SUB_00000020 + 0x1a70);
    }
    *(undefined1 *)(lVar1 + 0x1aa8) = 1;
    if (*(int *)(lVar1 + 0x1aa4) - 1U < 2) {
      lVar9 = *(long *)PTR_DAT_04bb29d0;
      do {
        nn::os::ConvertToTimeSpan(lVar9 / 1000);
        nn::os::SleepThread();
      } while (*(int *)(lVar1 + 0x1aa4) - 1U < 2);
    }
    FUN_032ee0b0(lVar1 + 0x1800,&local_138,&local_128);
    (**(code **)(local_128 + 0x18))(&local_128);
    FUN_03363ed0(param_1 + 0x468,local_120);
  }
  return;
}

