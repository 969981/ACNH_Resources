
long FUN_02a055b0(long *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  int local_50;
  int iStack_4c;
  long local_48;
  
  if (-1 < param_2) {
    plVar7 = (long *)param_1[0xb];
    plVar12 = plVar7;
    if (0 < (int)*(uint *)(param_1 + 0xd)) {
      iVar10 = 0;
      if ((int)param_1[0xc] <= *(int *)((long)param_1 + 100)) {
        iVar10 = (int)param_1[0xc];
      }
      plVar12 = plVar7 + (*(int *)((long)param_1 + 100) - iVar10);
    }
    if ((int)param_3 < 0) {
      return 0;
    }
    if (*(int *)(*plVar12 + 0x28) <= param_2) {
      return 0;
    }
    iVar10 = (int)param_1[0xc];
    if ((int)param_3 < iVar10) {
      param_2 = *(int *)((long)param_1 + 0xc) + param_2;
      iVar1 = (int)param_1[2] + param_3;
      if (param_3 < *(uint *)(param_1 + 0xd)) {
        iVar2 = *(int *)((long)param_1 + 100) + param_3;
        iVar4 = 0;
        if (iVar10 <= iVar2) {
          iVar4 = iVar10;
        }
        plVar7 = plVar7 + (iVar2 - iVar4);
      }
      lVar11 = *plVar7;
      lVar8 = lVar11;
      do {
        lVar8 = *(long *)(lVar8 + 8);
        plVar12 = (long *)(lVar8 + -8);
        if (plVar12 == (long *)(lVar11 + -8)) {
          plVar12 = (long *)0x0;
          break;
        }
        iVar10 = (int)*(short *)(*plVar12 + 8);
        if ((param_2 == iVar10) && (iVar1 == *(short *)(*plVar12 + 10))) {
          return 0;
        }
      } while (iVar10 <= param_2);
      if ((int)param_1[7] != 0) {
        lVar8 = param_1[6];
        if ((int)param_1[7] < 1) {
          lVar8 = 0;
        }
        plVar7 = (long *)0x0;
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + -8);
        }
        lVar8 = *plVar7;
        *(short *)(lVar8 + 8) = (short)param_2;
        *(short *)(lVar8 + 10) = (short)iVar1;
        plVar9 = plVar7 + 1;
        if (*plVar9 != 0) {
          *(long *)(*plVar9 + 8) = plVar7[2];
        }
        if ((long *)plVar7[2] != (long *)0x0) {
          *(long *)plVar7[2] = *plVar9;
        }
        *plVar9 = 0;
        plVar7[2] = 0;
        *(int *)(param_1 + 7) = (int)param_1[7] + -1;
        *plVar7 = param_1[8];
        param_1[8] = (long)plVar7;
        local_48 = lVar8;
        if ((param_4 & 1) == 0) {
LAB_02a05744:
          if (plVar12 == (long *)0x0) {
            plVar7 = (long *)FUN_02a0450c(lVar11);
          }
          else {
            plVar7 = *(long **)(lVar11 + 0x18);
            if (plVar7 != (long *)0x0) {
              *(long *)(lVar11 + 0x18) = *plVar7;
            }
            plVar7[2] = 0;
            *plVar7 = 0;
            plVar9 = plVar7 + 1;
            *plVar9 = 0;
            plVar12 = plVar12 + 1;
            lVar6 = *plVar12;
            *plVar12 = (long)plVar9;
            plVar7[2] = (long)plVar12;
            *plVar9 = lVar6;
            if (lVar6 != 0) {
              *(long **)(lVar6 + 8) = plVar9;
            }
            *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
          }
          *plVar7 = lVar8;
          plVar12 = param_1 + 0xe;
          uVar13 = *(uint *)((long)param_1 + 0x84);
          if (-1 < (int)uVar13) {
            if (0 < (int)uVar13) {
              uVar13 = uVar13 - 1;
            }
            iVar10 = -((int)uVar13 >> 1);
            uVar13 = uVar13 | 1;
            do {
              uVar3 = param_3 + iVar10;
              if (((int)uVar3 < 0) || ((int)*(uint *)(param_1 + 0xd) <= (int)uVar3)) {
                local_58 = 0;
              }
              else {
                puVar5 = (undefined8 *)param_1[0xb];
                if (uVar3 < *(uint *)(param_1 + 0xd)) {
                  iVar1 = 0;
                  if ((int)param_1[0xc] <= (int)(param_3 + iVar10 + *(int *)((long)param_1 + 100)))
                  {
                    iVar1 = (int)param_1[0xc];
                  }
                  puVar5 = puVar5 + (int)(param_3 + iVar10 + (*(int *)((long)param_1 + 100) - iVar1)
                                         );
                }
                local_58 = *puVar5;
              }
              local_68 = (long *)CONCAT44((int)*(short *)(lVar8 + 8),iVar10);
              local_60 = CONCAT44(local_60._4_4_,(int)*(short *)(lVar8 + 10));
              FUN_02a03660(plVar12,&local_68);
              iVar10 = iVar10 + 1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          local_68 = plVar12;
          (**(code **)(*param_1 + 0x38))(param_1,&local_68);
          plVar7 = (long *)param_1[4];
          if (plVar7 == (long *)0x0) {
            return lVar8;
          }
          local_68 = plVar12;
          (**(code **)(*plVar7 + 0x30))(plVar7,&local_68);
          return lVar8;
        }
        plVar7 = (long *)param_1[4];
        local_68 = (long *)((ulong)local_68 & 0xffffffffffffff00);
        local_60 = 0;
        if (plVar7 != (long *)0x0) {
          local_60 = lVar8;
          local_50 = param_2;
          iStack_4c = iVar1;
          (**(code **)(*plVar7 + 0x28))(plVar7,&local_68,&local_50);
          if ((char)local_68 != '\0') goto LAB_02a05744;
        }
        FUN_02a05b8c(param_1 + 5,&local_48);
      }
    }
  }
  return 0;
}

