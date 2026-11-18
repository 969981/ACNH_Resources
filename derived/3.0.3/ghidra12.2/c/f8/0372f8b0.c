
undefined8 FUN_0372f8b0(long param_1,int param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb2720;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar7 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  iVar7 = *(int *)(puVar13 + 7);
  if (((((iVar7 == -0x7975b8e8 || iVar7 == -0x17df00c3) || iVar7 == -0x3e092032) && (param_2 == 0))
      && (*(long *)PTR_DAT_04bb27f8 != 0)) && ((iVar7 == -0x3e092032 || (iVar7 == -0x7975b8e8)))) {
    lVar11 = *(long *)puVar3;
    if (lVar11 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar7 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
    if (((*(int *)(puVar13 + 7) == -0x3e092032) || (*(int *)(puVar13 + 7) == -0x7975b8e8)) &&
       (-1 < *(char *)(param_1 + 0x1231))) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "SeqFirstEditOngoing";
      uVar8 = FUN_02758850(&local_70);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
    }
  }
  puVar6 = PTR_DAT_04bb37d8;
  puVar5 = PTR_DAT_04bb37d0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar15 = *(long **)(param_1 + 0xe8);
    lVar11 = (long)*(int *)(param_1 + 0xe0) << 3;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      uVar2 = *(ushort *)(*plVar15 + 0x114);
      if ((((uVar2 & 1) == 0) &&
          ((((uVar2 >> 5 & 1) == 0 || (param_2 != 1)) && ((uVar2 & 0x20) != 0 || param_2 != 0)))) &&
         ((uVar16 = *(uint *)(*plVar15 + 8), uVar16 != 0 && (lVar12 = *(long *)puVar3, lVar12 != 0))
         )) {
        plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8));
        if ((plVar14 == (long *)0x0) ||
           (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar16)))) {
          plVar14 = (long *)0x0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
          lVar12 = *(long *)puVar3;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          if (iVar7 < 0x11) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar16) goto LAB_0372fb80;
            uVar16 = 5U >> (ulong)(uVar16 & 0x1f) & 1;
          }
        }
        else {
LAB_0372fb80:
          uVar16 = 1;
        }
        if (plVar14 != (long *)0x0) {
          lVar12 = plVar14[0x2a];
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar5);
          if ((int)lVar12 != 1) {
            uVar16 = 1;
          }
          if (((uVar10 & 1) != 0) && (uVar16 == 0)) {
            return 1;
          }
        }
      }
      plVar15 = plVar15 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  return 0;
}

