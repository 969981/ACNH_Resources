
undefined8 FUN_03733360(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  puVar5 = PTR_DAT_04bb37d8;
  puVar4 = PTR_DAT_04bb37d0;
  puVar3 = PTR_DAT_04bb27c0;
  iVar6 = *(int *)(puVar11 + 7);
  if (DAT_05ac0a90 == iVar6) {
    lVar10 = 0;
  }
  else if (DAT_05ac0aa0 == iVar6) {
    lVar10 = 1;
  }
  else if (DAT_05ac0ab0 == iVar6) {
    lVar10 = 2;
  }
  else if (DAT_05ac0ac0 == iVar6) {
    lVar10 = 3;
  }
  else if (DAT_05ac0ad0 == iVar6) {
    lVar10 = 4;
  }
  else if (DAT_05ac0ae0 == iVar6) {
    lVar10 = 5;
  }
  else if (DAT_05ac0af0 == iVar6) {
    lVar10 = 6;
  }
  else if (DAT_05ac0b00 == iVar6) {
    lVar10 = 7;
  }
  else if (DAT_05ac0b10 == iVar6) {
    lVar10 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar6) {
      return 1;
    }
    lVar10 = 9;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar13 = *(long **)(param_1 + 0xe8);
    lVar14 = (long)*(int *)(param_1 + 0xe0) << 3;
    iVar6 = (&DAT_05ac0a98)[lVar10 * 4];
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      lVar10 = *plVar13;
      if ((((*(int *)(lVar10 + 0x3c) != 2) && (iVar6 == *(int *)(lVar10 + 0xe8))) &&
          (*(int *)(lVar10 + 0xd8) != 0)) && (uVar15 = *(uint *)(lVar10 + 8), uVar15 != 0)) {
        lVar10 = *(long *)puVar3;
        if (lVar10 == 0) {
          return 0;
        }
        plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8));
        if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar12 + 0x46) != uVar15)) {
          plVar12 = (long *)0x0;
        }
        if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar10 = *(long *)puVar3;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          if (iVar7 < 0x11) {
            uVar15 = 1;
          }
          else {
            uVar15 = *(uint *)(lVar10 + 0x5e8);
            if (4 < uVar15) goto LAB_03733608;
            uVar15 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
          }
        }
        else {
LAB_03733608:
          uVar15 = 0;
        }
        if (plVar12 == (long *)0x0) {
          return 0;
        }
        lVar10 = plVar12[0x2a];
        uVar2 = *(uint *)(plVar12 + 0x49);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(puVar5);
        }
        uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar4);
        if ((int)lVar10 != 1) {
          return 0;
        }
        if ((uVar8 & uVar15) == 0) {
          return 0;
        }
        if ((uVar2 >> 4 & 1) == 0) {
          return 0;
        }
      }
      plVar13 = plVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  return 1;
}

