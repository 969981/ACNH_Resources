
undefined8 FUN_01f9de30(long *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  long lVar9;
  undefined4 local_1f8 [8];
  long *local_1d8;
  undefined4 local_194;
  int local_170;
  int iStack_16c;
  int local_160;
  int iStack_15c;
  float local_158;
  float local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_120;
  undefined1 local_34 [4];
  
  if (*(int *)(param_1[1] + 0x750) == 3) {
    FUN_01fa09e0(param_1);
    return 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x608))(param_1);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_05ab5ea8 + 0x14) == 7) {
      uVar4 = FUN_01fae650(param_1);
      lVar9 = DAT_05ab5ea8;
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (DAT_05ab5ea8 != 0) {
        sVar3 = FUN_0376baa0(param_1[1] + 0x3e0);
        if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
            ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) {
          sVar8 = *(short *)(lVar9 + 0x2c);
          if ((*(ushort *)(lVar9 + 0x28) & 0x80) != 0) {
            sVar8 = -1;
          }
        }
        else {
          lVar9 = *(long *)(DAT_05ab7608 + 0x10);
          if ((*(long **)(lVar9 + 0x11b0) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar9 + 0x11b0), puVar5 == (undefined8 *)0x0)) {
            sVar8 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
          }
          else {
            uVar4 = (**(code **)*puVar5)();
            sVar8 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
            if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x11b0) != 0)) &&
               (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x11b0) + 8),
               puVar5 != (undefined8 *)0x0)) {
              (**(code **)*puVar5)();
            }
          }
        }
        if ((sVar8 != -1) && (sVar8 == sVar3)) {
          return 0;
        }
      }
    }
    local_1f8[0] = *(undefined4 *)(param_1[1] + 0x230);
    FUN_021e8490(local_1f8,*(long *)(param_1[1] + 0x68) + 0x278,param_1 + 0x31,1,0);
    local_34[0] = 0;
    uVar1 = *(int *)(param_3 + 0x24) + 1;
    uVar6 = *(uint *)(param_3 + 0x14);
    if (uVar1 != uVar6) {
      uVar2 = *(uint *)(param_3 + 0x10);
      uVar7 = uVar2;
      do {
        if (((uVar6 < 0x100) && (uVar7 < 0x120)) &&
           ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar7 + uVar6 * 0x120 >> 5) * 4 + 8) >>
             (ulong)(uVar7 & 0x1f) & 1) != 0)) {
          return 0;
        }
        if ((int)uVar7 < *(int *)(param_3 + 0x20)) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar6 = uVar6 + 1;
          uVar7 = uVar2;
        }
      } while ((uVar2 != uVar7) || (uVar1 != uVar6));
    }
    uVar4 = FUN_021f4650(param_2,param_3,param_1 + 0x31,local_34);
    if ((uVar4 & 1) != 0) {
      FUN_01e63f1c(local_1f8);
      local_160 = *(int *)(param_3 + 0x20);
      iStack_15c = *(int *)(param_3 + 0x24);
      local_170 = *(int *)(param_3 + 0x10);
      iStack_16c = *(int *)(param_3 + 0x14);
      local_1f8[0] = 0x42;
      local_148 = *param_2;
      uStack_144 = param_2[1];
      local_1d8 = param_1 + 0x243f;
      param_1[0x2440] = (long)param_1;
      param_1[0x2441] = (long)FUN_01fa09e0;
      local_120 = local_34[0];
      local_194 = 1;
      param_1[0x2442] = 0;
      local_158 = ((float)local_170 * 5.0 + (float)local_160 * 5.0 + 5.0) * 0.5;
      local_150 = ((float)iStack_16c * 5.0 + (float)iStack_15c * 5.0 + 5.0) * 0.5;
      FUN_01fb1020(param_1,local_1f8,0x1e);
      return 1;
    }
  }
  return 0;
}

