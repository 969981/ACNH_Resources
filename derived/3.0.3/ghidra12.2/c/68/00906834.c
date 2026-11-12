
uint FUN_00906834(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  puVar6 = PTR_DAT_04bb27c0;
  bVar4 = *(byte *)(param_1 + 0x2ce);
  puVar12 = (undefined4 *)PTR_DAT_04bb3238;
  if ((bVar4 & 1) == 0) {
    local_5c = *(undefined4 *)(param_1 + 0x280);
    local_54 = *(undefined4 *)(param_1 + 0x288);
    uStack_58 = *(undefined4 *)(param_1 + 0x284);
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb39b0;
    if (lVar13 == 0) {
      uVar15 = (ulong)(byte)*PTR_DAT_04bb32e0;
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_009068e8;
LAB_00906954:
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        puVar12 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar15 * 4 + 0xde8);
      }
    }
    else {
      pbVar16 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar13 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar13 + 0x158);
      }
      uVar15 = (ulong)*pbVar16;
      if ((*pbVar16 < 8) ||
         (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (bVar5 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar15 = (ulong)bVar5, bVar5 < 8))
         )) goto LAB_00906954;
LAB_009068e8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar13 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar16 = (byte *)(lVar13 + 0x471);
          }
        }
        uVar15 = (ulong)*pbVar16;
        if (*pbVar16 < 8) goto LAB_00906954;
      }
      uVar15 = (ulong)(byte)*PTR_DAT_04bb5038;
      if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_00906954;
    }
    local_5c = 0x7fc00000;
    local_54 = 0x7fc00000;
    uStack_58 = local_5c;
  }
  uVar2 = *puVar12;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 != 0) {
    uVar20 = *(uint *)PTR_DAT_04bb32f8;
    if (((uVar20 == 0) ||
        (plVar19 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                             ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
       (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar20)))) {
      plVar19 = (long *)0x0;
    }
    if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar6;
      iVar7 = (**(code **)(*plVar11 + 0x60))();
      if (iVar7 < 0x11) {
        uVar20 = 1;
      }
      else {
        if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_00906a40;
        uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00906a40:
      uVar20 = 0;
    }
    if (plVar19 != (long *)0x0) {
      lVar13 = plVar19[0x2a];
      uVar3 = *(uint *)(plVar19 + 0x49);
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar8 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb3278);
      uVar10 = 0;
      if ((((int)lVar13 == 1) && ((uVar8 & uVar20) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
        if (*(char *)(param_1 + 0x2cd) != '\0') {
          (**(code **)(DAT_04cef2c8 + 0x18))(&DAT_04cef2c8);
          uVar9 = FUN_006bd550(DAT_04cef2d0,0);
          lVar13 = *(long *)PTR_DAT_04bb26a8;
          plVar11 = (long *)(lVar13 + 0xb3b78);
          nn::os::LockMutex((MutexType *)(lVar13 + 0xb3b58));
          if (*(int *)(lVar13 + 0xb3b88) < *(int *)(lVar13 + 0xb3ba0)) {
            puVar14 = *(undefined8 **)(lVar13 + 0xb3b90);
            if (puVar14 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar13 + 0xb3b90) = *puVar14;
            }
            *(undefined2 *)puVar14 = 0;
            plVar17 = puVar14 + 2;
            *plVar17 = 0;
            *(undefined1 *)((long)puVar14 + 2) = 0;
            *(undefined4 *)((long)puVar14 + 4) = uVar9;
            *(undefined4 *)(puVar14 + 1) = 0x3f800000;
            puVar14[3] = 0;
            lVar18 = *plVar11;
            *plVar11 = (long)plVar17;
            puVar14[3] = plVar11;
            *plVar17 = lVar18;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 8) = plVar17;
            }
            *(int *)(lVar13 + 0xb3b88) = *(int *)(lVar13 + 0xb3b88) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0xb3b58));
        }
        uVar10 = FUN_008ffb30(plVar19,&local_5c,uVar2,*(undefined4 *)(param_1 + 0x230),
                              param_1 + 0x188,bVar4 >> 3 & 1);
      }
      goto LAB_00906b7c;
    }
  }
  uVar10 = 0;
LAB_00906b7c:
  return uVar10 & 1;
}

