
undefined8 FUN_0149f9a0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return 0;
  }
  uVar15 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar16 = 1;
      uVar15 = 1;
      goto joined_r0x0149fa94;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar16 = 0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3);
      uVar15 = (uint)uVar16;
      goto joined_r0x0149fa94;
    }
  }
  uVar16 = 0;
  uVar15 = 0;
joined_r0x0149fa94:
  if (plVar14 == (long *)0x0) {
    uVar10 = 0;
    bVar5 = false;
    plVar8 = (long *)PTR_DAT_04bb2720;
  }
  else {
    bVar5 = (int)plVar14[0x2a] == 1;
    uVar10 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar16 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb7d50);
    uVar10 = uVar10 >> 4 & 1;
    if ((uVar16 & 1) == 0) {
      uVar15 = 0;
    }
    uVar16 = (ulong)uVar15;
    plVar8 = (long *)PTR_DAT_04bb2720;
  }
  PTR_DAT_04bb2720 = (undefined *)plVar8;
  if ((((plVar14 != (long *)0x0) && (bVar5)) &&
      (((uVar16 & 0xff) != 0 &&
       (((uVar10 != 0 && (*(long *)PTR_DAT_04bb5ce0 != 0)) && (lVar11 = *plVar8, lVar11 != 0))))))
     && (*(long *)(lVar11 + 0x330) != 0)) {
    puVar9 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
    iVar6 = FUN_006bd550(*puVar9,0);
    puVar4 = PTR_DAT_04bbce88;
    puVar3 = PTR_DAT_04bbce80;
    if (iVar6 != 0x758f7eaf) {
      return 0;
    }
    if (((*plVar8 != 0) && (lVar11 = *(long *)(*plVar8 + 0x330), lVar11 != 0)) &&
       (*(int *)(lVar11 + 0x244) != 0)) {
      if ((long *)plVar14[0x16] != plVar14 + 0x15) {
        lVar11 = (long)*(int *)((long)plVar14 + 0xbc);
        plVar8 = (long *)(plVar14[0x16] - lVar11);
        puVar1 = PTR_DAT_04bbce90 + 0x10;
        while( true ) {
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar8 != (long *)0x0) &&
             (uVar16 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar16 & 1) != 0)) break;
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar11 + 8) - lVar11);
          if (plVar8 == (long *)((long)(plVar14 + 0x15) - lVar11)) {
            return 0;
          }
        }
        uVar10 = *(uint *)(param_1 + 0x10);
        uVar15 = *(int *)(param_1 + 0x24) + 1;
        iVar6 = 2;
        do {
          if (uVar15 != *(uint *)(param_1 + 0x14)) {
            uVar13 = uVar10;
            uVar7 = *(uint *)(param_1 + 0x14);
            do {
              plVar14 = plVar8 + 0x50 + (ulong)uVar13 * 0x600;
              if (0x3f < uVar13) {
                plVar14 = plVar8 + 0x50;
              }
              plVar2 = plVar14 + (ulong)uVar7 * 0x18;
              if (0x3f < uVar7) {
                plVar2 = plVar14;
              }
              if (((((int)uVar7 < 0x40) && ((int)uVar13 < 0x40)) && (-1 < (int)(uVar13 | uVar7))) &&
                 (((((char)*plVar2 != '\0' && (1 < *(byte *)((long)plVar2 + 1))) ||
                   (((char)plVar2[3] != '\0' && (1 < *(byte *)((long)plVar2 + 0x19))))) ||
                  (((char)plVar2[6] != '\0' && (1 < *(byte *)((long)plVar2 + 0x31))))))) {
                return 1;
              }
              if ((int)uVar13 < *(int *)(param_1 + 0x20)) {
                uVar13 = uVar13 + 1;
              }
              else {
                uVar7 = uVar7 + 1;
                uVar13 = uVar10;
              }
            } while ((uVar10 != uVar13) || (uVar15 != uVar7));
          }
          iVar12 = 8;
          if (iVar6 < 8) {
            iVar12 = iVar6 + 1;
          }
          iVar6 = iVar12;
          if (iVar12 == 6) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}

