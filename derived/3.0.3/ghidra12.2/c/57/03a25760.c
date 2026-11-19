
long * FUN_03a25760(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  
  puVar9 = PTR_DAT_04bd14f0;
  puVar8 = PTR_DAT_04bd14e8;
  piVar1 = (int *)(param_1 + 0x914);
  piVar4 = piVar1 + param_2;
  uVar3 = (ulong)param_2;
  if (0x7f < param_2) {
    uVar3 = 0;
    piVar4 = piVar1;
  }
  if (0 < *piVar4) {
    uVar16 = 0;
    puVar5 = (uint *)(param_1 + 0x514) + param_2;
    if (0x7f < param_2) {
      puVar5 = (uint *)(param_1 + 0x514);
    }
    puVar2 = PTR_DAT_04bb2000 + 0x10;
    do {
      lVar13 = *(long *)(param_1 + 0x300);
      uVar6 = *puVar5;
      if (*(uint *)(lVar13 + 0x18) <= uVar6) {
        uVar6 = 0;
      }
      if (uVar16 < *(ushort *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar6 * 4 + 2)) {
        plVar14 = *(long **)(*(long *)(lVar13 + 0x30) +
                            ((ulong)*(ushort *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar6 * 4) +
                            (ulong)uVar16) * 8);
      }
      else {
        plVar14 = (long *)0x0;
      }
      if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
        *(undefined **)puVar8 = puVar2;
        __cxa_guard_release(puVar9);
      }
      if ((plVar14 != (long *)0x0) &&
         (uVar12 = (**(code **)(*plVar14 + 0x48))(plVar14,puVar8), (uVar12 & 1) != 0)) {
        (**(code **)(plVar14[0x47] + 0x18))(plVar14 + 0x47);
        (**(code **)(plVar14[0x47] + 0x18))(plVar14 + 0x47);
        lVar15 = plVar14[0x48];
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar13 = param_3[1];
        if (lVar15 == lVar13) {
          return plVar14;
        }
        uVar12 = 0;
        bVar10 = true;
        do {
          lVar15 = plVar14[0x48] + 2 + uVar12;
          cVar7 = *(char *)(lVar15 + -2);
          if (cVar7 != *(char *)(lVar13 + uVar12)) break;
          if (cVar7 == '\0') {
            if (bVar10) {
              return plVar14;
            }
            break;
          }
          cVar7 = *(char *)(lVar15 + -1);
          if (cVar7 != *(char *)(lVar13 + uVar12 + 1)) break;
          if (cVar7 == '\0') {
            return plVar14;
          }
          cVar7 = *(char *)(plVar14[0x48] + 2 + uVar12);
          if (cVar7 != *(char *)(lVar13 + uVar12 + 2)) break;
          if (cVar7 == '\0') {
            return plVar14;
          }
          bVar10 = uVar12 < 0x7fffe;
          uVar12 = uVar12 + 3;
        } while (uVar12 != 0x80001);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < piVar1[uVar3]);
  }
  return (long *)0x0;
}

