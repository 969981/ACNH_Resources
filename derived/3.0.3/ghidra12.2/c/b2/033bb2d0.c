
bool FUN_033bb2d0(long param_1,int *param_2,uint param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  
  *param_2 = -1;
  if (param_3 < 0x14) {
    lVar7 = param_1 + 0xa10;
    plVar1 = (long *)(param_1 + 2000);
    lVar12 = lVar7 + (ulong)param_3 * 0x60;
    if (0x13 < param_3) {
      lVar12 = lVar7;
    }
    lVar2 = lVar7 + (ulong)param_3 * 0x60;
    if (0x13 < param_3) {
      lVar2 = lVar7;
    }
    lVar7 = FUN_0160cc10(plVar1,*(undefined4 *)(lVar12 + 0x58),lVar2,0);
    if (lVar7 == 0) {
      iVar5 = (**(code **)(*plVar1 + 0x168))(plVar1);
      if (0 < iVar5) {
        iVar14 = 0;
        do {
          iVar6 = (**(code **)(*plVar1 + 0x168))(plVar1);
          if (((iVar14 < iVar6) &&
              (lVar7 = (**(code **)(*plVar1 + 0x158))(plVar1,iVar14), lVar7 != 0)) &&
             (puVar9 = (uint *)(**(code **)(*(long *)(lVar7 + 0x210) + 0xf0))(lVar7 + 0x210),
             param_3 == *puVar9)) goto LAB_033bb358;
          iVar14 = iVar14 + 1;
        } while (iVar5 != iVar14);
      }
    }
    else {
LAB_033bb358:
      uVar3 = *(uint *)(lVar7 + 0x2b8);
      if (0 < (int)uVar3) {
        uVar13 = 0;
        do {
          if (uVar13 < *(uint *)(lVar7 + 0x298)) {
            lVar12 = *(long *)(*(long *)(lVar7 + 0x2a0) + uVar13 * 8);
          }
          else {
            lVar12 = 0;
          }
          piVar8 = (int *)(**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
          if (*piVar8 == param_4) {
            if ((uint)uVar13 < *(uint *)(lVar7 + 0x298)) {
              lVar12 = *(long *)(*(long *)(lVar7 + 0x2a0) + uVar13 * 8);
            }
            else {
              lVar12 = 0;
            }
            puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x188) + 0xf0))(lVar12 + 0x188);
            uVar4 = *puVar10;
            if ((uint)uVar13 < *(uint *)(lVar7 + 0x298)) {
              lVar7 = *(long *)(*(long *)(lVar7 + 0x2a0) + uVar13 * 8);
            }
            else {
              lVar7 = 0;
            }
            uVar11 = (**(code **)(*(long *)(lVar7 + 0x1b8) + 0xf0))(lVar7 + 0x1b8);
            FUN_0160cc10(param_1 + 0xf0,uVar4,uVar11,param_2);
            return *param_2 != -1;
          }
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
      }
    }
  }
  return false;
}

