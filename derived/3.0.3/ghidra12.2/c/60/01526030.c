
void FUN_01526030(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  long *plVar17;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  
  local_80 = 0;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar6 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar15 + 7);
  local_78 = FUN_017baf44();
  puVar5 = PTR_DAT_04bbcd98;
  puVar4 = PTR_DAT_04bbcd90;
  puVar3 = PTR_DAT_04bb27c0;
  local_78 = local_78 & 1;
  local_68[0] = 0;
  local_88 = PTR_DAT_04bb3140 + 0x10;
  local_70[0] = 1;
  puVar1 = PTR_DAT_04bb3290 + 0x10;
  puVar2 = PTR_DAT_04bb6608 + 0x10;
  iVar6 = 0;
  do {
    puVar9 = (uint *)FUN_014fbd50(&local_88,iVar6,param_2 + 2);
    lVar12 = *(long *)puVar3;
    if (lVar12 != 0) {
      uVar16 = *puVar9;
      if ((((uVar16 == 0) ||
           (plVar17 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
          ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar16)) {
        plVar17 = (long *)0x0;
      }
      if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
        plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar10 + 0x60))();
        if (iVar7 < 0x11) {
          uVar16 = 1;
        }
        else {
          uVar16 = *(uint *)(lVar12 + 0x5e8);
          if (4 < uVar16) goto LAB_01526214;
          uVar16 = 0x1aU >> (ulong)(uVar16 & 0x1f) & 1;
        }
      }
      else {
LAB_01526214:
        uVar16 = 0;
      }
      if (plVar17 != (long *)0x0) {
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar8 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5920);
        if ((uVar16 & uVar8) == 1) {
          if ((long *)plVar17[0x16] != plVar17 + 0x15) {
            lVar12 = (long)*(int *)((long)plVar17 + 0xbc);
            plVar10 = (long *)(plVar17[0x16] - lVar12);
            do {
              if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                *(undefined **)puVar4 = puVar2;
                __cxa_guard_release(puVar5);
              }
              if ((plVar10 != (long *)0x0) &&
                 (uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar4), (uVar11 & 1) != 0)) {
                lVar12 = plVar10[0x5d];
                if (*param_2 == 0) {
                  puVar15 = (undefined8 *)local_68;
                  puVar13 = &DAT_051da260;
                }
                else {
                  if (*param_2 != 1) {
                    return;
                  }
                  puVar15 = (undefined8 *)local_70;
                  puVar13 = &DAT_051da2b8;
                }
                uVar14 = *puVar13;
                *puVar15 = uVar14;
                *(undefined8 *)(lVar12 + 0x9c0) = uVar14;
                return;
              }
              plVar10 = (long *)(*(long *)((long)plVar10 + lVar12 + 8) - lVar12);
            } while (plVar10 != (long *)((long)(plVar17 + 0x15) - lVar12));
          }
        }
      }
    }
    iVar7 = 8;
    if (iVar6 < 8) {
      iVar7 = iVar6 + 1;
    }
    iVar6 = iVar7;
    if (iVar7 == 2) {
      return;
    }
  } while( true );
}

