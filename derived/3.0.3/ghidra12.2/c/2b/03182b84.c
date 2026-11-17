
void FUN_03182b84(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ushort *puVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_04bb6298;
  uVar7 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar7 == 0xffffffffffffffff) {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
LAB_03182c6c:
      if (DAT_05abff60 == 0) {
        return;
      }
      if (DAT_05aed670 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar4 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar12 + 7) != -0x6efba09b) {
        return;
      }
      uVar7 = *(ushort *)puVar3;
    }
    if (uVar7 == 0xffff) goto LAB_03182d4c;
  }
  else {
    puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
    if (0xff < uVar7) {
      puVar8 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar8 >> 3 & 1) == 0) {
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
      if (0xff < uVar7) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar8 >> 0x11 & 1) == 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8))
      goto LAB_03182c6c;
    }
  }
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
  if (0xff < uVar7) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 >> 0x19 & 1) != 0) {
    return;
  }
LAB_03182d4c:
  lVar10 = *param_2;
  iVar4 = FUN_01afcfa0(lVar10);
  if ((((iVar4 == 0) || (puVar5 = (ushort *)FUN_01afd600(lVar10), puVar5 == (ushort *)0x0)) ||
      ((*puVar5 & 0x18) != 0x10)) && (uVar6 = FUN_01b14e50(*param_2), (uVar6 & 1) == 0)) {
    plVar11 = (long *)(param_1 + 8);
    uVar6 = (**(code **)(*plVar11 + 8))(plVar11);
    if ((((uVar6 & 1) == 0) || (uVar6 = (**(code **)*plVar11)(plVar11), (uVar6 & 1) == 0)) &&
       (uVar6 = FUN_01b14bf0(*param_2), (uVar6 & 1) != 0)) {
      puVar8 = *(uint **)(*param_2 + 0x10);
      if (((puVar8 != (uint *)0x0) && (uVar2 = *puVar8, uVar2 != 0)) &&
         (puVar8 != (uint *)(ulong)uVar2)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
        if (((*puVar9 != 0) && (uVar2 = puVar9[1], uVar2 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar2 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar2);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0x5c))
            {
              return;
            }
          }
        }
      }
      if (((*param_1 != 7) && (param_1[1] != 7)) &&
         ((param_1[2] != 7 &&
          ((((param_1[3] != 7 && (param_1[4] != 7)) && (param_1[5] != 7)) && (param_1[6] != 7))))))
      {
        uVar2 = param_1[7];
        uVar6 = (ulong)uVar2;
        param_1[7] = uVar2 + 1;
        if (6 < uVar2) {
          uVar6 = 0;
        }
        param_1[uVar6] = 7;
      }
    }
  }
  return;
}

