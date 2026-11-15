
void FUN_0230ba28(long param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar12 = *param_2;
  if (uVar12 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x0230bae8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0230bae8;
    }
  }
  uVar12 = 0;
joined_r0x0230bae8:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar12;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      puVar11 = (undefined8 *)plVar10[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar11 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) {
        local_40 = 0;
        local_38 = 0;
        local_4c = 0;
        local_44 = 0;
        lVar9 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar9 == 0) {
          local_34 = 0;
          bVar1 = false;
          bVar4 = true;
        }
        else {
          iVar5 = *(int *)(lVar9 + 0xed0);
          if ((*(ushort *)(lVar9 + 0xf6c) & 2) != 0) {
            iVar5 = 0;
          }
          bVar1 = iVar5 != 0;
          if (bVar1) {
            local_40 = *(undefined8 *)(lVar9 + 0xf28);
            local_38 = *(undefined4 *)(lVar9 + 0xf30);
          }
          local_34 = *(int *)(lVar9 + 0xecc);
          if ((*(ushort *)(lVar9 + 0xf6c) & 2) != 0) {
            local_34 = 0;
          }
          bVar4 = local_34 == 0;
          if ((lVar9 != 0) && (local_34 != 0)) {
            local_44 = *(undefined4 *)(lVar9 + 0xf3c);
            bVar4 = false;
            local_4c = *(undefined8 *)(lVar9 + 0xf34);
          }
        }
        if ((bVar1) && (**(char **)(param_1 + 8) != '\0')) {
          puVar8 = &local_40;
        }
        else {
          if (bVar4) {
            return;
          }
          if (**(char **)(param_1 + 8) != '\0') {
            return;
          }
          puVar8 = &local_4c;
        }
        FUN_01fa41d8(puVar11,puVar8);
      }
    }
  }
  return;
}

