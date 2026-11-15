
void FUN_0222b7d0(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  
  *(char *)(param_1 + 0x299) = (char)param_2;
  puVar5 = PTR_DAT_04bc2ca8;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  bVar9 = 0;
  if ((param_2 & 1) == 0) {
    bVar9 = 0x40;
  }
  lVar12 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      uVar13 = *(uint *)(param_1 + 0x2cc + lVar12);
      if ((((uVar13 == 0) ||
           (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
          ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar13)) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar10 = *(long *)puVar3;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar13 = 1;
        }
        else {
          uVar13 = *(uint *)(lVar10 + 0x5e8);
          if (4 < uVar13) goto LAB_0222b8e0;
          uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
        }
      }
      else {
LAB_0222b8e0:
        uVar13 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*PTR_DAT_04bc2cb0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc2cb0), iVar6 != 0)) {
          *(undefined **)puVar5 = puVar1;
          __cxa_guard_release(PTR_DAT_04bc2cb0);
        }
        uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
        uVar2 = 0;
        if ((int)lVar10 == 1) {
          uVar2 = uVar13;
        }
        if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
          *(uint *)(plVar11[0xc] + 0x11a0) =
               *(uint *)(plVar11[0xc] + 0x11a0) & 0xfffffffe | param_2 & 1;
          *(byte *)(plVar11 + 0x65) = *(byte *)(plVar11 + 0x65) & 0xbf | bVar9;
        }
      }
    }
    lVar12 = lVar12 + 4;
    if (lVar12 == 0x1c) {
      return;
    }
  } while( true );
}

