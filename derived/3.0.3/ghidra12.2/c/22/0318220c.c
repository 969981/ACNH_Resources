
void FUN_0318220c(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  puVar4 = PTR_DAT_04bb59d8;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_031822bc:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
      if (*(long *)PTR_DAT_04bb59d8 != 0) {
        lVar8 = *(long *)PTR_DAT_04bb2720;
        if (lVar8 == 0) {
          puVar10 = &DAT_055c04a0;
        }
        else {
          puVar10 = &DAT_055c04a0;
          if (*(long *)(lVar8 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
            iVar5 = FUN_006bd550(*puVar10,0);
            puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar5 != 0x758f7eaf) {
              puVar10 = &DAT_055c04a0;
            }
          }
        }
        if (*(int *)(puVar10 + 7) == -0x6efba09b) goto LAB_03182360;
      }
      uVar7 = FUN_02915598(param_2[1]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar7 = FUN_01ae59b0(*param_2);
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_03182404;
    }
  }
  else {
    local_3c = 3;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      local_3c = 0x11;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x11 & 1) == 0) goto LAB_031822bc;
    }
  }
LAB_03182360:
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar5 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar10 + 7) == -0x6efba09b) {
      return;
    }
  }
LAB_03182404:
  lVar8 = *param_2;
  iVar5 = FUN_01afcfa0(lVar8);
  if (((iVar5 == 0) || (puVar6 = (ushort *)FUN_01afd600(lVar8), puVar6 == (ushort *)0x0)) ||
     ((*puVar6 & 0x18) != 0x10)) {
    plVar9 = (long *)(param_1 + 8);
    uVar7 = (**(code **)(*plVar9 + 8))(plVar9);
    if (((uVar7 & 1) == 0) || (uVar7 = (**(code **)*plVar9)(plVar9), (uVar7 & 1) == 0)) {
      local_3c = *(undefined4 *)(*param_2 + 8);
      uStack_38 = *(undefined4 *)(*param_2 + 0xc);
      uVar7 = FUN_0277e688(&local_3c);
      if ((((uVar7 & 1) != 0) && ((*param_1 != 0xd && (param_1[1] != 0xd)))) &&
         ((param_1[2] != 0xd &&
          ((((param_1[3] != 0xd && (param_1[4] != 0xd)) && (param_1[5] != 0xd)) &&
           (param_1[6] != 0xd)))))) {
        uVar2 = param_1[7];
        uVar7 = (ulong)uVar2;
        if (6 < uVar2) {
          uVar7 = 0;
        }
        param_1[7] = uVar2 + 1;
        param_1[uVar7] = 0xd;
      }
    }
  }
  return;
}

