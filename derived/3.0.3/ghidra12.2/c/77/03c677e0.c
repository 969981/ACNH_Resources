
void FUN_03c677e0(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  plVar1 = (long *)param_2[2];
  if ((long *)param_2[1] == (long *)0x0) {
    if (plVar1 != (long *)0x0) goto LAB_03c67860;
    plVar6 = (long *)0x0;
    plVar1 = (long *)*param_2;
  }
  else {
    if (plVar1 != (long *)0x0) {
      plVar6 = plVar1;
      do {
        plVar5 = plVar6;
        plVar6 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
      if (plVar1 == plVar5) {
        iVar2 = (int)param_2[3] + -1;
      }
      else {
        *(long *)(*plVar5 + 8) = plVar5[2];
        if ((long *)plVar5[2] != (long *)0x0) {
          *(long *)plVar5[2] = *plVar5;
        }
        plVar5[2] = param_2[2];
        *(long **)param_2[2] = plVar5;
        *(int *)(plVar5 + 3) = (int)param_2[3];
        plVar1 = (long *)*plVar5;
        iVar2 = (int)plVar1[3] + 1;
      }
      *(int *)(plVar1 + 3) = iVar2;
      plVar5[1] = param_2[1];
      *(long **)param_2[1] = plVar5;
      *plVar5 = *param_2;
      lVar4 = *param_2;
      if (lVar4 == 0) {
        *param_1 = (long)plVar5;
      }
      else if (*(long **)(lVar4 + 8) == param_2) {
        *(long **)(lVar4 + 8) = plVar5;
      }
      else {
        *(long **)(lVar4 + 0x10) = plVar5;
      }
      goto LAB_03c67910;
    }
    plVar1 = (long *)param_2[1];
LAB_03c67860:
    *plVar1 = *param_2;
    plVar6 = plVar1;
    plVar1 = (long *)*param_2;
  }
  if (plVar1 == (long *)0x0) {
LAB_03c67b08:
    *param_1 = (long)plVar6;
LAB_03c67b0c:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 3) = 1;
    return;
  }
  if ((long *)plVar1[1] == param_2) {
    plVar1[1] = (long)plVar6;
    *(int *)(plVar1 + 3) = *(int *)(plVar1 + 3) + 1;
  }
  else {
    plVar1[2] = (long)plVar6;
    *(int *)(plVar1 + 3) = *(int *)(plVar1 + 3) + -1;
  }
LAB_03c67910:
  do {
    plVar5 = (long *)*plVar1;
    iVar2 = (int)plVar1[3];
    if (iVar2 == 0) {
      if (plVar5 == (long *)0x0) goto LAB_03c67b0c;
      iVar3 = (int)plVar5[3];
      iVar2 = -1;
      if ((long *)plVar5[1] == plVar1) {
        iVar2 = 1;
      }
    }
    else {
      if (iVar2 < -1) {
        plVar6 = (long *)plVar1[1];
        plVar7 = (long *)plVar6[2];
        if (0 < (int)plVar6[3]) {
          plVar6[2] = plVar7[1];
          plVar7[1] = (long)plVar6;
          if ((undefined8 *)plVar6[2] != (undefined8 *)0x0) {
            *(undefined8 *)plVar6[2] = plVar6;
          }
          *plVar7 = *plVar6;
          *plVar6 = (long)plVar7;
          plVar1[1] = (long)plVar7;
          plVar1[1] = plVar7[2];
          plVar7[2] = (long)plVar1;
          if ((undefined8 *)plVar1[1] != (undefined8 *)0x0) {
            *(undefined8 *)plVar1[1] = plVar1;
          }
          *plVar7 = *plVar1;
          *plVar1 = (long)plVar7;
          *(uint *)(plVar1 + 3) = *(uint *)(plVar7 + 3) >> 0x1f;
          uVar8 = -(uint)(0 < (int)plVar7[3]);
          goto LAB_03c67ad0;
        }
        plVar1[1] = (long)plVar7;
        plVar6[2] = (long)plVar1;
        if ((undefined8 *)plVar1[1] != (undefined8 *)0x0) {
          *(undefined8 *)plVar1[1] = plVar1;
        }
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        uVar8 = *(uint *)(plVar6 + 3) >> 0x1f;
        *(uint *)(plVar1 + 3) = ((int)plVar1[3] - *(uint *)(plVar6 + 3)) + 1;
        *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
      }
      else {
        if (iVar2 < 2) goto LAB_03c67b0c;
        plVar6 = (long *)plVar1[2];
        plVar7 = (long *)plVar6[1];
        if ((int)plVar6[3] < 0) {
          plVar6[1] = plVar7[2];
          plVar7[2] = (long)plVar6;
          if ((undefined8 *)plVar6[1] != (undefined8 *)0x0) {
            *(undefined8 *)plVar6[1] = plVar6;
          }
          *plVar7 = *plVar6;
          *plVar6 = (long)plVar7;
          plVar1[2] = (long)plVar7;
          plVar1[2] = plVar7[1];
          plVar7[1] = (long)plVar1;
          if ((undefined8 *)plVar1[2] != (undefined8 *)0x0) {
            *(undefined8 *)plVar1[2] = plVar1;
          }
          *plVar7 = *plVar1;
          *plVar1 = (long)plVar7;
          *(uint *)(plVar1 + 3) = -(uint)(0 < (int)plVar7[3]);
          uVar8 = *(uint *)(plVar7 + 3) >> 0x1f;
LAB_03c67ad0:
          *(uint *)(plVar6 + 3) = uVar8;
          uVar8 = 1;
          *(undefined4 *)(plVar7 + 3) = 0;
          plVar6 = plVar7;
        }
        else {
          plVar1[2] = (long)plVar7;
          plVar6[1] = (long)plVar1;
          if ((undefined8 *)plVar1[2] != (undefined8 *)0x0) {
            *(undefined8 *)plVar1[2] = plVar1;
          }
          *plVar6 = *plVar1;
          *plVar1 = (long)plVar6;
          uVar8 = (uint)(0 < (int)*(uint *)(plVar6 + 3));
          *(uint *)(plVar1 + 3) = (int)plVar1[3] + ~*(uint *)(plVar6 + 3);
          *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
        }
      }
      if (plVar5 == (long *)0x0) goto LAB_03c67b08;
      plVar7 = (long *)plVar5[1];
      lVar4 = 8;
      if (plVar7 != plVar1) {
        lVar4 = 0x10;
      }
      *(long **)((long)plVar5 + lVar4) = plVar6;
      if (uVar8 == 0) goto LAB_03c67b0c;
      iVar3 = -1;
      if (plVar7 == plVar1) {
        iVar3 = 1;
      }
      iVar2 = (int)plVar5[3];
    }
    *(int *)(plVar5 + 3) = iVar2 + iVar3;
    plVar1 = plVar5;
  } while( true );
}

