
bool FUN_031836fc(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_031837a8:
    if (DAT_055cdb30 != -0x10e0fba8) {
      if (DAT_05abff60 == 0) {
        return false;
      }
      if (DAT_05aed670 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar6 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar11 + 7) != -0x6efba09b) {
        return false;
      }
    }
  }
  else {
    puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar8 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar8 >> 3 & 1) == 0) {
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar8 >> 0x11 & 1) == 0) goto LAB_031837a8;
    }
  }
  puVar8 = *(uint **)(*param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar3 = *puVar8;
    if (uVar3 != 0 && puVar8 != (uint *)(ulong)uVar3) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar9 = 0;
      if (*puVar10 == 0) goto LAB_031838ec;
      uVar3 = puVar10[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
          goto LAB_031838ec;
        }
      }
    }
    uVar9 = 0;
  }
LAB_031838ec:
  bVar5 = false;
  if ((uVar9 != 0x51) && (uVar9 != 0x57)) {
    uVar7 = FUN_01b14e50();
    bVar5 = false;
    if (((uVar7 & 1) != 0) && (DAT_055cdb30 != -0x10e0fba8)) {
      if (DAT_05abff60 == 0) {
        bVar5 = true;
      }
      else {
        if (DAT_05aed670 == 0) {
          puVar11 = &DAT_055c04a0;
        }
        else {
          puVar11 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar6 = FUN_006bd550(*puVar11,0);
            puVar11 = &DAT_055cdaf8;
            if (iVar6 != 0x758f7eaf) {
              puVar11 = &DAT_055c04a0;
            }
          }
        }
        bVar5 = *(int *)(puVar11 + 7) != -0x6efba09b;
      }
    }
  }
  return bVar5;
}

