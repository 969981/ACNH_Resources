
void FUN_0219c5c0(long *param_1,long param_2,long *param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  int local_60 [4];
  
  piVar9 = local_60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  if (param_4 != 0) {
    iVar6 = 0;
    lVar8 = param_2;
    uVar10 = (ulong)param_4;
    do {
      if (*(char *)param_3[1] != '\0') {
        (**(code **)(*param_3 + 0x18))(param_3);
        uVar4 = FUN_006bd550(param_3[1],0);
        *piVar9 = uVar4;
        iVar5 = FUN_00b3a3f8(lVar8);
        iVar6 = iVar5 + iVar6;
      }
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0x80;
      piVar9 = piVar9 + 1;
      param_3 = param_3 + 7;
    } while (uVar10 != 0);
    iVar6 = (int)((float)iVar6 * 0.5);
    if (0 < iVar6) {
      plVar7 = param_1 + -1;
      do {
        param_1 = (long *)*param_1;
        if (param_1 + -1 == plVar7) {
          return;
        }
        lVar8 = param_2;
        piVar9 = local_60;
        uVar10 = (ulong)param_4;
        do {
          if ((int)param_1[-1] == *piVar9) {
            uVar2 = *(ushort *)((long)param_1 + -4);
            uVar3 = 1 << (ulong)(uVar2 & 0x1f);
            uVar1 = *(uint *)(lVar8 + ((ulong)(uVar2 >> 3) & 0x1ffc));
            if ((uVar3 & uVar1) != 0) {
              if (uVar2 < 0x400) {
                *(uint *)(lVar8 + ((ulong)(uVar2 >> 3) & 0x1ffc)) = uVar1 & (uVar3 ^ 0xffffffff);
              }
              iVar6 = iVar6 + -1;
              break;
            }
          }
          uVar10 = uVar10 - 1;
          lVar8 = lVar8 + 0x80;
          piVar9 = piVar9 + 1;
        } while (uVar10 != 0);
      } while (iVar6 != 0);
    }
  }
  return;
}

