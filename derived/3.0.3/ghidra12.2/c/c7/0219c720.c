
void FUN_0219c720(long *param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int local_38 [2];
  
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_4 == 0) {
    plVar5 = (long *)*param_1;
    if (plVar5 != param_1) {
      do {
        plVar5 = (long *)*plVar5;
      } while (param_1 + -1 != plVar5 + -1);
    }
  }
  else {
    uVar10 = (ulong)param_4;
    piVar7 = local_38;
    uVar9 = uVar10;
    do {
      if (*(char *)param_3[1] != '\0') {
        (**(code **)(*param_3 + 0x18))(param_3);
        iVar4 = FUN_006bd550(param_3[1],0);
        *piVar7 = iVar4;
      }
      uVar9 = uVar9 - 1;
      piVar7 = piVar7 + 1;
      param_3 = param_3 + 7;
    } while (uVar9 != 0);
    plVar5 = (long *)*param_1;
    if (plVar5 != param_1) {
      plVar6 = plVar5 + -1;
      if ((param_5 & 1) == 0) {
        do {
          piVar7 = local_38;
          lVar8 = param_2;
          uVar9 = uVar10;
          do {
            if ((int)*plVar6 == *piVar7) {
              uVar1 = 0;
              if (*(ushort *)((long)plVar6 + 4) != 999) {
                uVar1 = (uint)*(ushort *)((long)plVar6 + 4);
              }
              uVar3 = 1 << (ulong)(uVar1 & 0x1f);
              uVar2 = *(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4);
              if (uVar1 < 0x400 && (uVar3 & uVar2) != 0) {
                *(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4) = uVar2 & (uVar3 ^ 0xffffffff);
              }
            }
            uVar9 = uVar9 - 1;
            lVar8 = lVar8 + 0x80;
            piVar7 = piVar7 + 1;
          } while (uVar9 != 0);
          plVar5 = (long *)*plVar5;
          plVar6 = plVar5 + -1;
        } while (plVar6 != param_1 + -1);
      }
      else {
        do {
          lVar8 = param_2;
          piVar7 = local_38;
          uVar9 = uVar10;
          do {
            if ((int)plVar5[-1] == *piVar7) {
              uVar1 = 0;
              if (*(ushort *)((long)plVar6 + 4) != 999) {
                uVar1 = (uint)*(ushort *)((long)plVar6 + 4);
              }
              uVar3 = 1 << (ulong)(uVar1 & 0x1f);
              uVar2 = *(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4);
              if ((uVar3 & uVar2) != 0) {
                if (uVar1 < 0x400) {
                  *(uint *)(lVar8 + ((ulong)(uVar1 >> 3) & 0x1ffc)) = uVar2 & (uVar3 ^ 0xffffffff);
                  return;
                }
                return;
              }
            }
            uVar9 = uVar9 - 1;
            lVar8 = lVar8 + 0x80;
            piVar7 = piVar7 + 1;
          } while (uVar9 != 0);
          plVar5 = (long *)*plVar5;
          plVar6 = plVar5 + -1;
        } while (plVar6 != param_1 + -1);
      }
    }
  }
  return;
}

