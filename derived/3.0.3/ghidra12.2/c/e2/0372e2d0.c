
undefined8 FUN_0372e2d0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  undefined *local_70;
  char *pcStack_68;
  
  puVar6 = PTR_DAT_04bb2720;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar7 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  iVar7 = *(int *)(puVar14 + 7);
  if (((((((iVar7 == -0x7975b8e8 || iVar7 == -0x3e092032) || iVar7 == -0x17df00c3) ||
         (DAT_05ac0a90 == iVar7)) || (DAT_05ac0aa0 == iVar7)) ||
       ((DAT_05ac0ab0 == iVar7 || (DAT_05ac0ac0 == iVar7)))) || (DAT_05ac0ad0 == iVar7)) ||
     (((DAT_05ac0ae0 == iVar7 || (DAT_05ac0af0 == iVar7)) ||
      ((DAT_05ac0b00 == iVar7 || ((DAT_05ac0b10 == iVar7 || (DAT_05ac0b20 == iVar7)))))))) {
    if (((iVar7 == -0x7975b8e8) || ((iVar7 == -0x17df00c3 || (iVar7 == -0x3e092032)))) &&
       (((param_2 == 0 && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
        ((iVar7 == -0x3e092032 || (iVar7 == -0x7975b8e8)))))) {
      lVar12 = *(long *)puVar6;
      if (lVar12 == 0) {
        puVar14 = &DAT_055c04a0;
      }
      else {
        puVar14 = &DAT_055c04a0;
        if (*(long *)(lVar12 + 0x330) != 0) {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar8 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
      }
      if (((*(int *)(puVar14 + 7) == -0x3e092032) || (*(int *)(puVar14 + 7) == -0x7975b8e8)) &&
         (-1 < *(char *)(param_1 + 0x1231))) {
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "SeqFirstEditOngoing";
        uVar9 = FUN_02758850(&local_70);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
      }
    }
    puVar6 = PTR_DAT_04bb27c0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      lVar12 = (long)*(int *)(param_1 + 0xe0) << 3;
      plVar15 = *(long **)(param_1 + 0xe8);
      puVar1 = PTR_DAT_04bb3750 + 0x10;
      puVar2 = PTR_DAT_04bb6718 + 0x10;
      puVar3 = PTR_DAT_04bb6d20 + 0x10;
      do {
        uVar5 = *(ushort *)(*plVar15 + 0x114);
        if (((((uVar5 & 1) == 0) && (((uVar5 >> 5 & 1) == 0 || (param_2 != 1)))) &&
            ((uVar5 & 0x20) != 0 || param_2 != 0)) &&
           ((uVar17 = *(uint *)(*plVar15 + 8), uVar17 != 0 &&
            (lVar13 = *(long *)puVar6, lVar13 != 0)))) {
          plVar16 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8));
          if ((plVar16 == (long *)0x0) ||
             (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar17))))
          {
            plVar16 = (long *)0x0;
          }
          if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
            plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar13 = *(long *)puVar6;
            iVar8 = (**(code **)(*plVar10 + 0x60))();
            if (iVar8 < 0x11) {
              uVar17 = 1;
            }
            else {
              uVar17 = *(uint *)(lVar13 + 0x5e8);
              if (4 < uVar17) goto LAB_0372e648;
              uVar17 = 0x1aU >> (ulong)(uVar17 & 0x1f) & 1;
            }
          }
          else {
LAB_0372e648:
            uVar17 = 0;
          }
          if (plVar16 != (long *)0x0) {
            lVar13 = plVar16[0x2a];
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
            uVar4 = 0;
            if ((int)lVar13 == 1) {
              uVar4 = uVar17;
            }
            if (((uVar11 & 1) != 0) && (uVar4 != 0)) {
              puVar14 = (undefined8 *)plVar16[0x77];
              if (((*PTR_DAT_04bb6710 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0)) {
                *(undefined **)PTR_DAT_04bb6708 = puVar2;
                __cxa_guard_release(PTR_DAT_04bb6710);
              }
              if ((puVar14 == (undefined8 *)0x0) ||
                 (uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb6708), (uVar11 & 1) == 0)) {
                puVar14 = (undefined8 *)plVar16[0x77];
                if (((*PTR_DAT_04bc2458 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc2458), iVar8 != 0)) {
                  *(undefined **)PTR_DAT_04bc2450 = PTR_DAT_04bb6718 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bc2458);
                }
                if (((puVar14 != (undefined8 *)0x0) &&
                    (uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc2450), (uVar11 & 1) != 0))
                   && ((*(uint *)(puVar14 + 0xef6) & 0xfffffffe) == 0x3e)) goto LAB_0372e4ac;
              }
              else if (*(int *)(puVar14 + 0xef6) - 0x4bU < 2) goto LAB_0372e4ac;
              if (iVar7 == -0x17df00c3) {
                puVar14 = (undefined8 *)plVar16[0x77];
                if (((*PTR_DAT_04bb7f40 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb7f40), iVar8 != 0)) {
                  *(undefined **)PTR_DAT_04bb7f38 = puVar3;
                  __cxa_guard_release(PTR_DAT_04bb7f40);
                }
                if (((puVar14 != (undefined8 *)0x0) &&
                    (uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb7f38), (uVar11 & 1) != 0))
                   && (*(int *)(puVar14 + 0xef6) == 0x56)) goto LAB_0372e4ac;
              }
            }
          }
        }
        plVar15 = plVar15 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    uVar9 = 1;
  }
  else {
LAB_0372e4ac:
    uVar9 = 0;
  }
  return uVar9;
}

