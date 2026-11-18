
void FUN_0372da60(float *param_1,long param_2)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ushort *puVar8;
  long *plVar9;
  uint uVar10;
  short sVar11;
  undefined8 *puVar12;
  uint uVar13;
  short sVar14;
  long lVar15;
  
  *param_1 = NAN;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  puVar2 = PTR_DAT_04bc3a48;
  iVar3 = *(int *)(puVar12 + 7);
  uVar13 = *(uint *)PTR_DAT_04bb3238;
  if ((iVar3 == -0x7975b8e8 || iVar3 == -0x17df00c3) || iVar3 == -0x3e092032) {
    lVar7 = *(long *)PTR_DAT_04bb27f8;
    if (lVar7 != 0) {
      if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar15 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar15 == 0)) {
        sVar11 = *(short *)(lVar7 + 0x2a);
LAB_0372dbc8:
        puVar8 = *(ushort **)puVar2;
        if (puVar8 != (ushort *)0x0) goto LAB_0372dbd0;
LAB_0372dcbc:
        sVar14 = *(short *)(lVar7 + 0x2c);
        if ((*(ushort *)(lVar7 + 0x28) & 0x80) != 0) {
          sVar14 = -1;
        }
        iVar3 = *(int *)(param_2 + 0xe0);
      }
      else {
        if ((*(long **)(lVar15 + 0x60) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar15 + 0x60), puVar12 == (undefined8 *)0x0)) {
          sVar11 = *(short *)(*(long *)(lVar15 + 0x48) + *(long *)(lVar15 + 0x40) + 2);
          puVar8 = *(ushort **)PTR_DAT_04bc3a48;
        }
        else {
          uVar5 = (**(code **)*puVar12)();
          sVar11 = *(short *)(*(long *)(lVar15 + 0x48) + *(long *)(lVar15 + 0x40) + 2);
          if ((((uVar5 & 1) == 0) || (*(long *)(lVar15 + 0x60) == 0)) ||
             (puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x60) + 8), puVar12 == (undefined8 *)0x0
             )) goto LAB_0372dbc8;
          (**(code **)*puVar12)();
          puVar8 = *(ushort **)puVar2;
        }
        if (puVar8 == (ushort *)0x0) goto LAB_0372dcbc;
LAB_0372dbd0:
        if (((*puVar8 & 1) == 0) || (*(long *)PTR_DAT_04bc1530 == 0)) goto LAB_0372dcbc;
        lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
        if ((*(long **)(lVar7 + 0x11b0) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar7 + 0x11b0), puVar12 == (undefined8 *)0x0)) {
          sVar14 = *(short *)(*(long *)(lVar7 + 0x1198) + *(long *)(lVar7 + 0x1190) + 2);
LAB_0372dc9c:
          iVar3 = *(int *)(param_2 + 0xe0);
        }
        else {
          uVar5 = (**(code **)*puVar12)();
          sVar14 = *(short *)(*(long *)(lVar7 + 0x1198) + *(long *)(lVar7 + 0x1190) + 2);
          if ((((uVar5 & 1) == 0) || (*(long *)(lVar7 + 0x11b0) == 0)) ||
             (puVar12 = *(undefined8 **)(*(long *)(lVar7 + 0x11b0) + 8),
             puVar12 == (undefined8 *)0x0)) goto LAB_0372dc9c;
          (**(code **)*puVar12)();
          iVar3 = *(int *)(param_2 + 0xe0);
        }
      }
      if (iVar3 != 0) {
        plVar9 = *(long **)(param_2 + 0xe8);
        lVar7 = (long)iVar3 << 3;
        do {
          uVar10 = *(uint *)(*plVar9 + 8);
          if (uVar10 != 0) {
            sVar1 = *(short *)(*plVar9 + 0x38);
            if (sVar1 == sVar11) {
              uVar13 = uVar10;
              goto LAB_0372de24;
            }
            if (sVar1 != sVar14) {
              uVar10 = uVar13;
            }
            uVar13 = uVar10;
          }
          plVar9 = plVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
  else {
    if (DAT_05ac0a90 == iVar3) {
      lVar7 = 0;
    }
    else if (DAT_05ac0aa0 == iVar3) {
      lVar7 = 1;
    }
    else if (DAT_05ac0ab0 == iVar3) {
      lVar7 = 2;
    }
    else if (DAT_05ac0ac0 == iVar3) {
      lVar7 = 3;
    }
    else if (DAT_05ac0ad0 == iVar3) {
      lVar7 = 4;
    }
    else if (DAT_05ac0ae0 == iVar3) {
      lVar7 = 5;
    }
    else if (DAT_05ac0af0 == iVar3) {
      lVar7 = 6;
    }
    else if (DAT_05ac0b00 == iVar3) {
      lVar7 = 7;
    }
    else if (DAT_05ac0b10 == iVar3) {
      lVar7 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar3) {
        return;
      }
      lVar7 = 9;
    }
    if (*(int *)(param_2 + 0xe0) != 0) {
      plVar9 = *(long **)(param_2 + 0xe8);
      lVar15 = (long)*(int *)(param_2 + 0xe0) << 3;
      uVar10 = 0x16;
      do {
        if ((&DAT_05ac0a98)[lVar7 * 4] == *(int *)(*plVar9 + 0xe8) && 0x15 < uVar10) {
          uVar13 = *(uint *)(*plVar9 + 8);
          uVar10 = 0x15;
        }
        plVar9 = plVar9 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
  }
  if (uVar13 == 0) goto LAB_0372df50;
LAB_0372de24:
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar13 >> 0x14) * 8);
    if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar9 + 0x46) != uVar13)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar6 + 0x60))();
      if (iVar3 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0372debc;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0372debc:
      uVar13 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[0x2a];
      uVar10 = *(uint *)(plVar9 + 0x49);
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
      if (((((int)lVar7 == 1) && ((uVar4 & uVar13) != 0)) && ((uVar10 >> 4 & 1) != 0)) &&
         (lVar7 = plVar9[0xd], lVar7 != 0)) {
        param_1[2] = *(float *)(lVar7 + 0x280);
        *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + 0x278);
      }
    }
  }
  if (!NAN(*param_1)) {
    return;
  }
LAB_0372df50:
  if (((byte)(&DAT_00001230)[param_2] >> 4 & 1) != 0) {
    param_1[2] = *(float *)(param_2 + 0x1178);
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x1170);
  }
  return;
}

