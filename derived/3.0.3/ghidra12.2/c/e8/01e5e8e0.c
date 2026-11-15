
void FUN_01e5e8e0(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  long *plVar13;
  long lVar14;
  
  puVar6 = PTR_DAT_04bb30c8;
  puVar5 = PTR_DAT_04bb30c0;
  lVar10 = *(long *)(param_1 + 0x358);
  if (*(long *)(lVar10 + 0xb0) != lVar10 + 0xa8) {
    lVar14 = (long)*(int *)(lVar10 + 0xbc);
    plVar13 = (long *)(*(long *)(lVar10 + 0xb0) - lVar14);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    while( true ) {
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        *(undefined **)puVar5 = puVar1;
        __cxa_guard_release(puVar6);
      }
      if ((plVar13 != (long *)0x0) &&
         (uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar5), (uVar9 & 1) != 0)) break;
      plVar13 = (long *)(*(long *)((long)plVar13 + lVar14 + 8) - lVar14);
      if (plVar13 == (long *)((lVar10 + 0xa8) - lVar14)) {
        return;
      }
    }
    lVar10 = plVar13[0x51];
    if (lVar10 != 0) {
      *(byte *)((long)plVar13 + 0x339) = param_2 & 1;
      uVar3 = *(uint *)(lVar10 + 0x10);
      if (0 < (int)uVar3) {
        if ((*(char *)((long)plVar13 + 0x33a) == '\0') && ((param_2 & 1) != 0)) {
          uVar11 = 0;
          do {
            uVar2 = uVar11;
            if (*(uint *)(lVar10 + 0x10) <= uVar11) {
              uVar2 = 0;
            }
            puVar12 = (uint *)(*(long *)(lVar10 + 0x18) + (ulong)uVar2 * 0x48 + 0x18);
            uVar2 = *puVar12;
            if ((uVar2 >> 3 & 1) == 0) {
              *puVar12 = uVar2 | 1;
              uVar2 = uVar11;
              if (*(uint *)(lVar10 + 0x10) <= uVar11) {
                uVar2 = 0;
              }
              lVar14 = *(long *)(lVar10 + 0x18) + (ulong)uVar2 * 0x48;
              *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | 2;
            }
            else {
              *puVar12 = uVar2 & 0xfffffffe;
            }
            uVar11 = uVar11 + 1;
          } while (uVar3 != uVar11);
        }
        else {
          uVar11 = 0;
          do {
            uVar2 = uVar11;
            if (*(uint *)(lVar10 + 0x10) <= uVar11) {
              uVar2 = 0;
            }
            uVar11 = uVar11 + 1;
            lVar14 = *(long *)(lVar10 + 0x18) + (ulong)uVar2 * 0x48;
            *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) & 0xfffffffe;
          } while (uVar3 != uVar11);
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x358);
    (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
    (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
    if (*(undefined1 **)(lVar10 + 1000) == &DAT_040aaf55) {
LAB_01e5eaf0:
      FUN_01e5eca0(param_1,param_2 & 1);
      return;
    }
    uVar9 = 0;
    bVar7 = true;
    do {
      cVar4 = (*(undefined1 **)(lVar10 + 1000))[uVar9];
      if (cVar4 != (&DAT_040aaf55)[uVar9]) {
        return;
      }
      if (cVar4 == '\0') {
        if (!bVar7) {
          return;
        }
        goto LAB_01e5eaf0;
      }
      bVar7 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
  }
  return;
}

