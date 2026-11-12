
void FUN_00946e10(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if ((param_2 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar9 == lVar4) {
      iVar5 = 1;
    }
    else if (lVar9 == *(long *)(param_1 + 0x70)) {
      iVar5 = 2;
    }
    else {
      iVar5 = 3;
      if (lVar9 != *(long *)(param_1 + 0x78)) {
        iVar5 = 0;
      }
    }
    if (*(long *)(param_1 + 0x1130) != param_1 + 0x1128) {
      lVar8 = (long)*(int *)(param_1 + 0x113c);
      lVar4 = *(long *)(param_1 + 0x1130) - lVar8;
      lVar9 = lVar4 + lVar8;
      do {
        lVar9 = *(long *)(lVar9 + 8);
        if (*(int *)(lVar4 + 0xa4) == iVar5) {
          FUN_009392c8();
        }
        lVar4 = lVar9 - lVar8;
      } while (lVar4 != (param_1 + 0x1128) - lVar8);
      lVar9 = *(long *)(param_1 + 0x80);
      lVar4 = *(long *)(param_1 + 0x68);
    }
    puVar3 = PTR_DAT_04bb27c8;
    if (lVar9 == lVar4) {
      iVar5 = 1;
    }
    else if (lVar9 == *(long *)(param_1 + 0x70)) {
      iVar5 = 2;
    }
    else {
      iVar5 = 3;
      if (lVar9 != *(long *)(param_1 + 0x78)) {
        iVar5 = 0;
      }
    }
    if (*(long *)(param_1 + 0x1148) != param_1 + 0x1140) {
      lVar8 = (long)*(int *)(param_1 + 0x1154);
      lVar4 = *(long *)(param_1 + 0x1148) - lVar8;
      lVar9 = lVar4 + lVar8;
      do {
        lVar9 = *(long *)(lVar9 + 8);
        if (*(int *)(lVar4 + 0x44) == iVar5) {
          if (*(char *)(lVar4 + 0x40) != '\0') {
            lVar6 = *(long *)puVar3;
            plVar1 = (long *)(*(int *)(lVar6 + 0x117c) + lVar4);
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(lVar6 + 0x1178) = *(int *)(lVar6 + 0x1178) + -1;
            iVar2 = *(int *)(lVar4 + 0x44);
            if (iVar2 == 3) {
              puVar7 = (undefined8 *)(lVar6 + 0xa0);
            }
            else if (iVar2 == 2) {
              puVar7 = (undefined8 *)(lVar6 + 0x98);
            }
            else {
              if (iVar2 != 1) goto LAB_009470d8;
              puVar7 = (undefined8 *)(lVar6 + 0x90);
            }
            FUN_00971e40(*puVar7,0,lVar4 + 0x18);
          }
LAB_009470d8:
          *(undefined1 *)(lVar4 + 0x40) = 0;
        }
        lVar4 = lVar9 - lVar8;
      } while (lVar4 != (param_1 + 0x1140) - lVar8);
      lVar9 = *(long *)(param_1 + 0x80);
    }
  }
  else {
    if (*(long *)(param_1 + 0x1130) != param_1 + 0x1128) {
      lVar8 = (long)*(int *)(param_1 + 0x113c);
      lVar4 = *(long *)(param_1 + 0x1130) - lVar8;
      lVar9 = lVar4 + lVar8;
      do {
        lVar9 = *(long *)(lVar9 + 8);
        if (*(int *)(lVar4 + 0xa4) == 1) {
          FUN_009392c8();
        }
        lVar4 = lVar9 - lVar8;
      } while (lVar4 != (param_1 + 0x1128) - lVar8);
    }
    puVar3 = PTR_DAT_04bb27c8;
    if (*(long *)(param_1 + 0x1148) != param_1 + 0x1140) {
      lVar8 = (long)*(int *)(param_1 + 0x1154);
      lVar4 = *(long *)(param_1 + 0x1148) - lVar8;
      lVar9 = lVar4 + lVar8;
      do {
        lVar9 = *(long *)(lVar9 + 8);
        if (*(int *)(lVar4 + 0x44) == 1) {
          if (*(char *)(lVar4 + 0x40) != '\0') {
            lVar6 = *(long *)puVar3;
            plVar1 = (long *)(*(int *)(lVar6 + 0x117c) + lVar4);
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(lVar6 + 0x1178) = *(int *)(lVar6 + 0x1178) + -1;
            iVar5 = *(int *)(lVar4 + 0x44);
            if (iVar5 == 3) {
              puVar7 = (undefined8 *)(lVar6 + 0xa0);
            }
            else if (iVar5 == 2) {
              puVar7 = (undefined8 *)(lVar6 + 0x98);
            }
            else {
              if (iVar5 != 1) goto LAB_00946f20;
              puVar7 = (undefined8 *)(lVar6 + 0x90);
            }
            FUN_00971e40(*puVar7,0,lVar4 + 0x18);
          }
LAB_00946f20:
          *(undefined1 *)(lVar4 + 0x40) = 0;
        }
        lVar4 = lVar9 - lVar8;
      } while (lVar4 != (param_1 + 0x1140) - lVar8);
    }
    lVar9 = *(long *)(param_1 + 0x68);
  }
  FUN_00961ef0(0,lVar9,7);
  param_2 = param_2 & 1;
  FUN_009457c0(param_1,param_2);
  FUN_00945c80(param_1,param_2);
  FUN_00946970(param_1,param_2);
  return;
}

