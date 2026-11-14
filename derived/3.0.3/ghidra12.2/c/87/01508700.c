
void FUN_01508700(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  uint local_54;
  
  uVar5 = *param_1;
  if ((((uVar5 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar5)) {
    plVar12 = (long *)0x0;
  }
  iVar6 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
  if (iVar6 == 1 || iVar6 == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    (**(code **)(*plVar8 + 0x60))();
  }
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb5920);
  puVar3 = PTR_DAT_04bb43c0;
  uStack_64 = *(undefined4 *)((long)plVar12 + 0x28c);
  local_60 = (uint *)0x0;
  local_68 = (undefined4)plVar12[0x51];
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(plVar12 + 0x51);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 != (uint *)0x0)) {
        uVar5 = *puVar10;
        local_54 = 0;
        local_60 = puVar10;
        if ((uVar5 == 0) || (puVar10 == (uint *)(ulong)uVar5)) goto LAB_015088f8;
        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        local_54 = 0;
        if (*puVar11 == 0) goto LAB_015088f8;
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
               (local_54 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2)
               , local_54 < 0x52)) goto LAB_015088f8;
          }
        }
      }
    }
  }
  local_54 = 0;
LAB_015088f8:
  puVar4 = PTR_DAT_04bbccc8;
  puVar3 = PTR_DAT_04bbccc0;
  if (local_54 - 0x1e < 4) {
    if ((long *)plVar12[0x16] != plVar12 + 0x15) {
      lVar13 = (long)*(int *)((long)plVar12 + 0xbc);
      plVar8 = (long *)(plVar12[0x16] - lVar13);
      puVar1 = PTR_DAT_04bb65f0 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar9 & 1) != 0)) {
          local_54 = *param_2 ^ 0x80000000;
          uVar7 = FUN_014421b4(plVar8,&local_54);
          *(undefined4 *)(plVar8 + 0xa8) = uVar7;
          return;
        }
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar13 + 8) - lVar13);
      } while (plVar8 != (long *)((long)(plVar12 + 0x15) - lVar13));
    }
  }
  return;
}

