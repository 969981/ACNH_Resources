
void FUN_02149a2c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  
  puVar4 = PTR_DAT_04bb27c0;
  uVar12 = *param_2;
  if (uVar12 == *(uint *)(param_1 + 0x10) || uVar12 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02149b00;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02149b00:
    uVar12 = 0;
  }
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar3 = 0;
    if ((int)lVar9 == 1) {
      uVar3 = uVar12;
    }
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (uVar3 == 0) {
      return;
    }
    if (*(char *)((long)plVar11 + 0x779) != '\0') {
      return;
    }
    lVar9 = plVar11[0xd];
    if (lVar9 == 0) {
      return;
    }
    lVar10 = plVar11[0x76];
    if (lVar10 == 0) {
      return;
    }
    if (*(int *)(lVar10 + 0x360) == 0x13) {
      return;
    }
    fVar16 = *(float *)(lVar9 + 0x278) + -2.5;
    fVar17 = *(float *)(lVar9 + 0x280) + -2.5;
    iVar5 = *(int *)(lVar10 + 0x56c);
    puVar13 = *(ushort **)(param_1 + 8);
    uVar12 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0) & 0xffff;
    uVar3 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0) & 0xffff;
    if (*(long *)(param_1 + 0x18) == 0) {
      if (iVar5 != 0x11) {
        FUN_035a4bec(puVar13,uVar12,uVar3);
      }
      else {
        iVar14 = -1;
        iVar15 = -1;
        do {
          uVar1 = iVar15 + uVar12;
          if (((uint)*puVar13 <= (uVar1 & 0xffff)) &&
             ((uVar1 & 0xffff) <= (((uint)*puVar13 + (uint)puVar13[6]) - 1 & 0xffff))) {
            uVar2 = iVar14 + uVar3;
            if (((uint)puVar13[1] <= (uVar2 & 0xffff)) &&
               ((uVar2 & 0xffff) <= (((uint)puVar13[1] + (uint)puVar13[8]) - 1 & 0xffff))) {
              if (iVar15 == 2) {
                if (iVar14 == -1) {
                  lVar9 = 3;
                }
                else {
                  lVar9 = (ulong)(iVar14 == 2) << 2;
                }
              }
              else if (iVar15 == -1) {
                if (iVar14 == -1) {
                  lVar9 = 1;
                }
                else {
                  lVar9 = (ulong)(iVar14 == 2) << 1;
                }
              }
              else {
                lVar9 = 0;
              }
              FUN_035a4360(puVar13,uVar1 & 0xffff,uVar2 & 0xffff,lVar9);
            }
          }
          if (iVar15 < 2) {
            iVar15 = iVar15 + 1;
          }
          else {
            iVar14 = iVar14 + 1;
            iVar15 = -1;
          }
        } while ((iVar15 != -1) || (iVar14 != 3));
      }
    }
    else {
      if (iVar5 == 0x11) {
        FUN_035a5020();
        lVar9 = *(long *)(param_1 + 8);
        if (*(int *)(*(long *)(lVar9 + 0x40) + 0x18) < 0) {
          return;
        }
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        goto LAB_02149d50;
      }
      FUN_035a4dd4(puVar13,uVar12,uVar3);
    }
    lVar9 = *(long *)(param_1 + 8);
    if (-1 < *(int *)(*(long *)(lVar9 + 0x40) + 0x18)) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      if (iVar5 != 0x11) {
        FUN_035a9090(lVar9,uVar12,uVar3,uVar8);
        return;
      }
LAB_02149d50:
      FUN_035a95d0(lVar9,uVar12,uVar3,uVar8);
      return;
    }
  }
  return;
}

