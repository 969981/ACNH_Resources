
void FUN_03864b90(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined **local_70;
  undefined4 local_68;
  
  if (param_2 == 2) {
    lVar8 = *(long *)(param_1 + 0x480);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x490);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4a0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4b0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    if (*(long *)(param_1 + 0x2d8) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x2d8) + 0x42) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x2d8) + 0x41) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4c0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4d0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x208);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      lVar8 = (long)*(int *)(param_1 + 0x438) * (long)*(int *)(param_1 + 0x2e8);
      iVar2 = *(int *)(param_1 + 0x2f4);
      do {
        if ((uVar3 < *(uint *)(param_1 + 0x208)) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x210) + uVar3 * 8), lVar5 != 0)) {
          plVar9 = *(long **)(lVar5 + 0x1d0);
          local_70 = &PTR_LAB_04a3ee98;
          local_68 = 7;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
          uVar4 = (**(code **)(plVar9[3] + 0x90))(plVar9[1]);
          if ((uVar4 & 1) != 0) {
            FUN_03d5d0e0(*(undefined8 *)(*(long *)(param_1 + 0x210) + uVar3 * 8),
                         *(undefined4 *)(param_1 + 0x2e0),
                         lVar8 <= (long)uVar3 && (long)uVar3 < (long)iVar2 + (long)(int)lVar8);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    goto LAB_03864fbc;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x208) != 0) {
      lVar8 = (long)*(int *)(param_1 + 0x208) << 3;
      plVar9 = *(long **)(param_1 + 0x210);
      do {
        if (*plVar9 != 0) {
          plVar7 = *(long **)(*plVar9 + 0x1d0);
          local_70 = &PTR_LAB_04a3ee98;
          local_68 = 7;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
          uVar3 = (**(code **)(plVar7[3] + 0x90))(plVar7[1]);
          if ((uVar3 & 1) != 0) {
            FUN_03d5d0e0(*plVar9,*(undefined4 *)(param_1 + 0x2e0),0);
          }
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar8 = *(long *)(param_1 + 0x480);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x490);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4a0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4b0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4c0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4d0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x2d8);
    if (lVar8 == 0) goto LAB_03864fbc;
    uVar6 = 1;
  }
  else {
    if (param_2 != 0) goto LAB_03864fbc;
    if (*(int *)(param_1 + 0x208) != 0) {
      lVar8 = (long)*(int *)(param_1 + 0x208) << 3;
      plVar9 = *(long **)(param_1 + 0x210);
      do {
        if (*plVar9 != 0) {
          plVar7 = *(long **)(*plVar9 + 0x1d0);
          local_70 = &PTR_LAB_04a3ee98;
          local_68 = 7;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
          uVar3 = (**(code **)(plVar7[3] + 0x90))(plVar7[1]);
          if ((uVar3 & 1) != 0) {
            FUN_03d5d0e0(*plVar9,*(undefined4 *)(param_1 + 0x2e0),0);
          }
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar8 = *(long *)(param_1 + 0x480);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x490);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4a0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4b0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4c0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x4d0);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x2e0))) {
      *(undefined2 *)(lVar8 + 0xbc) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x2d8);
    if (lVar8 == 0) goto LAB_03864fbc;
    uVar6 = 0;
  }
  *(undefined1 *)(lVar8 + 0x42) = uVar6;
  *(undefined1 *)(*(long *)(param_1 + 0x2d8) + 0x41) = uVar6;
LAB_03864fbc:
  *(int *)(param_1 + 0x2e4) = param_2;
  return;
}

