
undefined8 FUN_01fc75fc(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar11 = *param_2;
  if (uVar11 == **(uint **)(param_1 + 8)) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  if ((((uVar11 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01fc76c8;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fc76c8;
    }
  }
  uVar11 = 0;
joined_r0x01fc76c8:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if ((((uVar6 & 1) != 0) && (uVar1 != 0)) &&
       (((int)plVar9[0xa0] != 2 &&
        (lVar8 = *(long *)(param_1 + 0x10), fVar12 = *(float *)(plVar9[0xd] + 0x278) + -2.5,
        fVar13 = *(float *)(plVar9[0xd] + 0x280) + -2.5,
        iVar4 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0),
        iVar2 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
        ((iVar4 <= *(int *)(lVar8 + 0x20) && *(int *)(lVar8 + 0x10) <= iVar4 + 1) &&
        iVar2 <= *(int *)(lVar8 + 0x24)) && *(int *)(lVar8 + 0x14) <= iVar2 + 1)))) {
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) {
        uVar7 = FUN_01fa2040(puVar10,*(undefined8 *)(param_1 + 8));
        return uVar7;
      }
    }
  }
  return 0;
}

