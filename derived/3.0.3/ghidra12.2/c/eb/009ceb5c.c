
void FUN_009ceb5c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  lVar1 = DAT_04d02f58;
  if (DAT_04d02f58 != 0) {
    uVar5 = (ulong)param_2;
    if (3 < param_2) {
      uVar5 = 0;
    }
    if (*(long *)(DAT_04d02f58 + uVar5 * 8 + 0xf5b20) != 0) {
      uVar2 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = param_2;
      if (uVar2 != param_2) {
        *(undefined1 *)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      if (param_2 < *(uint *)(lVar1 + 0x60)) {
        plVar4 = *(long **)(*(long *)(lVar1 + 0x68) + (long)(int)param_2 * 8);
      }
      else {
        plVar4 = (long *)0x0;
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      if (0 < (int)plVar4[2]) {
        iVar3 = 0;
        if ((int)plVar4[1] <= *(int *)((long)plVar4 + 0xc)) {
          iVar3 = (int)plVar4[1];
        }
        lVar6 = *plVar4 + (long)(*(int *)((long)plVar4 + 0xc) - iVar3) * 0x1060;
        lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 8) * 0x830;
        if (1 < *(uint *)(param_1 + 8)) {
          lVar1 = lVar6;
        }
        if (0 < *(int *)(lVar1 + 0x780)) {
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 == 1) {
            *(undefined1 *)(param_1 + 0x14) = 4;
            if (*(float *)(param_1 + 0x18) <=
                SQRT(*(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
                     *(float *)(lVar1 + 0xc) * *(float *)(lVar1 + 0xc) +
                     *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14))) goto LAB_009ceca8;
            uVar7 = 0;
            uVar8 = 8;
          }
          else {
            if (iVar3 != 0) goto LAB_009ceca8;
            uVar7 = 1;
            *(undefined1 *)(param_1 + 0x14) = 1;
            if (SQRT(*(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
                     *(float *)(lVar1 + 0xc) * *(float *)(lVar1 + 0xc) +
                     *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14)) <=
                *(float *)(param_1 + 0x18)) goto LAB_009ceca8;
            uVar8 = 6;
          }
          *(undefined1 *)(param_1 + 0x14) = uVar8;
          *(int *)(param_1 + 0xc) = iVar3;
          *(undefined4 *)(param_1 + 0x10) = uVar7;
        }
      }
LAB_009ceca8:
      *(undefined1 *)(param_1 + 0x28) = 0;
      if (0 < (int)plVar4[2]) {
        iVar3 = 0;
        if ((int)plVar4[1] <= *(int *)((long)plVar4 + 0xc)) {
          iVar3 = (int)plVar4[1];
        }
        lVar6 = *plVar4 + (long)(*(int *)((long)plVar4 + 0xc) - iVar3) * 0x1060;
        lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 0x1c) * 0x830;
        if (1 < *(uint *)(param_1 + 0x1c)) {
          lVar1 = lVar6;
        }
        if (0 < *(int *)(lVar1 + 0x780)) {
          iVar3 = *(int *)(param_1 + 0x24);
          if (iVar3 == 0) {
            uVar7 = 1;
            *(undefined1 *)(param_1 + 0x28) = 1;
            if (SQRT(*(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
                     *(float *)(lVar1 + 0xc) * *(float *)(lVar1 + 0xc) +
                     *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14)) <=
                *(float *)(param_1 + 0x2c)) {
              return;
            }
            uVar8 = 6;
          }
          else {
            if (iVar3 != 1) {
              return;
            }
            *(undefined1 *)(param_1 + 0x28) = 4;
            if (*(float *)(param_1 + 0x2c) <=
                SQRT(*(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
                     *(float *)(lVar1 + 0xc) * *(float *)(lVar1 + 0xc) +
                     *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14))) {
              return;
            }
            uVar7 = 0;
            uVar8 = 8;
          }
          *(undefined1 *)(param_1 + 0x28) = uVar8;
          *(int *)(param_1 + 0x20) = iVar3;
          *(undefined4 *)(param_1 + 0x24) = uVar7;
        }
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

