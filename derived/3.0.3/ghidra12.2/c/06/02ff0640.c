
void FUN_02ff0640(int param_1,int param_2,int param_3,undefined4 param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_468 [1032];
  
  memset(local_468,0,0x400);
  (**(code **)(*param_5 + 0x18))(param_5,param_1,param_2,param_4);
  uVar8 = 0;
  do {
    while( true ) {
      uVar6 = (uint)uVar8;
      uVar9 = (ulong)(uint)((int)uVar6 >> 2);
      uVar4 = uVar9;
      if (0xfff < uVar6) {
        uVar4 = 0;
      }
      uVar7 = local_468[uVar4] >> (ulong)((uVar6 & 3) << 1) & 3;
      iVar1 = *(int *)(&DAT_04102730 + (ulong)uVar7 * 4) + param_1;
      if (-1 < iVar1) break;
LAB_02ff07a0:
      if (uVar7 == 3) {
        uVar5 = uVar6 * 2;
        do {
          uVar5 = uVar5 - 2;
          uVar7 = (uint)uVar8;
          uVar6 = uVar7 - 1;
          uVar8 = (ulong)uVar6;
          if ((int)uVar7 < 1) {
            return;
          }
          uVar9 = (ulong)(uVar6 >> 2);
          uVar4 = uVar9;
          if (0x1000 < uVar7) {
            uVar4 = 0;
          }
          uVar7 = local_468[uVar4] >> (ulong)(uVar5 & 6) & 3;
          param_1 = param_1 - *(int *)(&DAT_04102730 + (ulong)uVar7 * 4);
          param_2 = param_2 - *(int *)(&DAT_04102470 + (ulong)uVar7 * 4);
        } while (uVar7 == 3);
      }
      if (0xfff < uVar6) {
        uVar9 = 0;
      }
      uVar8 = (ulong)uVar6;
      local_468[uVar9] =
           local_468[uVar9] & (&DAT_04102f40)[(ulong)uVar6 & 3] |
           (byte)(uVar7 + 1 << (ulong)(uint)((int)((ulong)uVar6 & 3) << 1));
    }
    iVar2 = *(int *)(&DAT_04102470 + (ulong)uVar7 * 4);
    iVar3 = (**(code **)*param_5)();
    if ((((iVar3 <= iVar1) || (iVar2 = iVar2 + param_2, iVar2 < 0)) ||
        (iVar3 = (**(code **)(*param_5 + 8))(), iVar3 <= iVar2)) ||
       (iVar3 = (**(code **)(*param_5 + 0x10))(param_5,iVar1,iVar2), iVar3 != param_3))
    goto LAB_02ff07a0;
    (**(code **)(*param_5 + 0x18))(param_5,iVar1,iVar2,param_4);
    uVar6 = uVar6 + 1;
    uVar8 = (ulong)uVar6;
    uVar4 = (ulong)(uint)((int)uVar6 >> 2);
    if (0xfff < uVar6) {
      uVar4 = 0;
    }
    local_468[uVar4] = local_468[uVar4] & (&DAT_04102f40)[uVar8 & 3];
    param_2 = iVar2;
    param_1 = iVar1;
  } while( true );
}

