
bool FUN_018aa6d0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  
  puVar7 = PTR_DAT_04bb3ff0;
  puVar6 = PTR_DAT_04bb3fe8;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  uVar16 = *(uint *)(param_1 + 0x2a0);
  if (*(uint *)(param_1 + 0x288) <= uVar16) {
    uVar16 = 0;
  }
  lVar11 = *(long *)(param_1 + 0x290) + (long)(int)uVar16 * 0x30;
  iVar3 = *(int *)(lVar11 + 0x10);
  if (iVar3 == 0) {
    iVar14 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x18);
    iVar14 = 0;
    uVar15 = 0;
    puVar1 = PTR_DAT_04bb3fd0 + 0x10;
    do {
      lVar12 = *(long *)puVar4;
      if (lVar12 != 0) {
        uVar16 = *(uint *)(lVar11 + (-(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2));
        if ((((uVar16 == 0) ||
             (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                  ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
            ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar16)) {
          plVar13 = (long *)0x0;
        }
        if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
          lVar12 = *(long *)puVar4;
          iVar8 = (**(code **)(*plVar10 + 0x60))();
          if (iVar8 < 0x11) {
            uVar16 = 1;
          }
          else {
            uVar16 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar16) goto LAB_018aa800;
            uVar16 = 0x1aU >> (ulong)(uVar16 & 0x1f) & 1;
          }
        }
        else {
LAB_018aa800:
          uVar16 = 0;
        }
        if (plVar13 != (long *)0x0) {
          if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,puVar6);
          if (((uVar16 & uVar9) == 1) && ((int)plVar13[0x57] == 0x250)) {
            iVar14 = iVar14 + 1;
          }
        }
      }
      uVar2 = uVar15 + 1;
      uVar15 = uVar2 & 0xffffffff;
    } while (iVar3 != (int)uVar2);
  }
  return iVar14 < 3;
}

