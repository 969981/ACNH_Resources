
int FUN_00157b2c(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 local_40 [16];
  
  uVar8 = *(ulong *)(param_1 + 0x7a8);
  bVar6 = 0 < (long)uVar8;
  if ((param_3 & 1) != 0) {
    bVar3 = bVar6 | 2;
    if (*(long *)(param_1 + 0x7b0) < 1) {
      bVar3 = bVar6;
    }
    bVar6 = bVar3;
  }
  if (bVar6 == 3) {
    uVar7 = (uint)*(long *)(param_1 + 0x7b0);
    if ((long)uVar8 < *(long *)(param_1 + 0x7b0)) {
      uVar7 = (uint)uVar8;
    }
    uVar8 = (ulong)uVar7;
  }
  else if (bVar6 == 2) {
    uVar8 = (ulong)*(uint *)(param_1 + 0x7b0);
  }
  else if (bVar6 != 1) {
    if ((param_3 & 1) == 0) {
      return 0;
    }
    uVar8 = 300000;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar9 = ZEXT816(0);
  if (param_2 == (undefined8 *)0x0) {
    auVar9 = FUN_00147178();
    local_40 = auVar9;
    param_2 = (undefined8 *)local_40;
  }
  bVar4 = (param_3 & 1) == 0;
  lVar1 = 0x1028;
  if (bVar4) {
    lVar1 = 0x1038;
  }
  lVar2 = 0x1030;
  if (bVar4) {
    lVar2 = 0x1040;
  }
  local_40 = auVar9;
  iVar5 = FUN_001471a8(*param_2,param_2[1],*(undefined8 *)(param_1 + lVar1),
                       *(undefined8 *)(param_1 + lVar2));
  iVar5 = (int)uVar8 - iVar5;
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  return iVar5;
}

