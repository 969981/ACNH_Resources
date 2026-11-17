
void FUN_03182518(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
  puVar4 = PTR_DAT_04bb59d8;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_031825e4:
    iVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar6 == -0x10e0fba8 || *(long *)PTR_DAT_04bb59d8 == 0) {
      return;
    }
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        iVar6 = *(int *)((long)puVar10 + 0x38);
        if (iVar5 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
        puVar7 = puVar10;
      }
    }
    if (*(int *)(puVar7 + 7) != -0x6efba09b) {
      return;
    }
  }
  else {
    local_4c = 3;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      local_4c = 0x11;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x11 & 1) == 0) goto LAB_031825e4;
    }
    iVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  }
  if (iVar6 != -0x10e0fba8) {
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
          iVar6 = FUN_006bd550(*puVar10,0);
          puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar10 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar10 + 7) == -0x17df00c3) {
        return;
      }
    }
    local_4c = *(undefined4 *)(*param_2 + 8);
    uStack_48 = *(undefined4 *)(*param_2 + 0xc);
    iVar6 = FUN_0277d6c4(&local_4c);
    if (iVar6 == 0x281) {
      iVar6 = 0x2a;
    }
    else {
      iVar6 = 0x29;
    }
    if ((((*param_1 != iVar6) && (param_1[1] != iVar6)) && (param_1[2] != iVar6)) &&
       (((param_1[3] != iVar6 && (param_1[4] != iVar6)) &&
        ((param_1[5] != iVar6 && (param_1[6] != iVar6)))))) {
      uVar2 = param_1[7];
      uVar9 = (ulong)uVar2;
      if (6 < uVar2) {
        uVar9 = 0;
      }
      param_1[7] = uVar2 + 1;
      param_1[uVar9] = iVar6;
    }
  }
  return;
}

