
/* WARNING: Removing unreachable block (ram,0x03c839c0) */

undefined8 FUN_03c83810(long *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_a0;
  int iStack_98;
  int aiStack_94 [17];
  
  if ((char)param_1[4] != '\0') {
    return 0;
  }
  if ((*(int *)((long)param_1 + 0x24) != (int)param_1[5]) &&
     (uVar4 = (**(code **)(*param_1 + 0x88))(param_1), (uVar4 & 1) != 0)) {
    iVar1 = *(int *)((long)param_1 + 0x24);
    lVar2 = param_1[5];
    iVar6 = *(int *)((long)param_1 + 0x2c);
    iStack_98 = 0;
    local_a0 = 0x10;
    iVar9 = iVar1;
    iVar8 = (int)lVar2;
    if ((char)param_1[4] == '\0') goto LAB_03c838b0;
    iVar7 = iVar6;
    iVar8 = iVar1;
    while (iVar7 != -0x80000000) {
      iVar3 = (**(code **)(*param_1 + 0x68))(param_1,iVar8,iVar7);
      iVar6 = iVar7;
      iVar9 = iVar8;
      do {
        iVar8 = iVar3;
        if ((iVar9 == (int)lVar2) && (iVar8 == iVar1)) {
          return 1;
        }
        if (0xf < iStack_98) {
          return 0;
        }
        iVar7 = 0;
        if (0xf < iStack_98) {
          iVar7 = local_a0;
        }
        aiStack_94[iStack_98 - iVar7] = iVar9;
        iStack_98 = iStack_98 + 1;
LAB_03c838b0:
        uVar4 = (**(code **)(*param_1 + 0x58))(param_1,iVar9,iVar8);
        if ((uVar4 & 1) == 0) {
          iStack_98 = 0;
        }
        else if (1 < iStack_98) {
          lVar5 = 0;
          do {
            iVar7 = 0;
            if (0xf < (int)lVar5) {
              iVar7 = local_a0;
            }
            if (aiStack_94[lVar5 - iVar7] == iVar9) {
              return 0;
            }
            lVar5 = lVar5 + 1;
          } while (iStack_98 + -1 != (int)lVar5);
        }
        iVar7 = -0x80000000;
        if (iVar6 != iVar8) {
          iVar7 = iVar6;
        }
        iVar3 = (**(code **)(*param_1 + 0x60))(param_1,iVar9,iVar8,iVar7);
        iVar6 = iVar7;
        iVar9 = iVar8;
      } while (iVar3 != -0x80000000);
    }
  }
  return 0;
}

