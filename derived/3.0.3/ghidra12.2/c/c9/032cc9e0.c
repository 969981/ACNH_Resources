
undefined1 FUN_032cc9e0(long param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ushort *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined *local_18d0;
  ushort *puStack_18c8;
  undefined *local_18c0;
  short *local_18b8;
  undefined4 local_18b0;
  short local_18ac [31];
  undefined2 local_186e;
  undefined *local_1868;
  ushort *local_1860;
  int local_1858;
  ushort local_1854 [3071];
  undefined2 local_56;
  
  lVar15 = *(long *)(param_1 + 0x28);
  plVar14 = (long *)(lVar15 + -8);
  puVar9 = (undefined *)(**(code **)(*plVar14 + 0x10))(plVar14);
  puVar4 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar8 != 0))
  {
    *(undefined8 *)puVar4 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar6 = PTR_DAT_04bc9198;
  puVar5 = PTR_DAT_04bc6338;
  if (puVar9 == puVar4) {
    plVar14 = (long *)(*(long *)(lVar15 + 0x20) + -8);
  }
  local_56 = 0;
  local_1860 = local_1854;
  local_1858 = 0xc00;
  local_1854[0] = 0;
  local_1868 = &DAT_04b1b4c0;
  plVar3 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar3 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  (**(code **)(*plVar3 + 0x10))();
  for (puVar12 = param_2; 1 < *puVar12 - 0xe; puVar12 = puVar12 + 1) {
    if (*puVar12 == 0) goto LAB_032ccc5c;
  }
  local_186e = 0;
  local_18b0 = 0x20;
  local_18b8 = local_18ac;
  local_18ac[0] = 0;
  local_18c0 = PTR_DAT_04bc0840 + 0x10;
  plVar13 = *(long **)(*(long *)puVar5 + 0x88);
  plVar3 = *(long **)puVar6;
  if (plVar13 != (long *)0x0) {
    plVar3 = plVar13;
  }
  (**(code **)(*plVar3 + 0x10))();
  local_18d0 = PTR_DAT_04bb8610 + 0x10;
  puStack_18c8 = param_2;
  FUN_032e01b0(&local_1868,&local_18c0,&local_18d0);
  puVar12 = local_1860;
  if ((*local_1860 == 0) && (*local_18b8 == 0)) {
    uVar7 = 2;
  }
  else {
    (**(code **)(local_1868 + 0x18))(&local_1868);
    lVar15 = 0;
    do {
      if (local_1860[lVar15] == 0) goto LAB_032ccb9c;
      if (local_1860[lVar15 + 1] == 0) {
        lVar15 = lVar15 + 1;
        goto LAB_032ccb9c;
      }
      if (local_1860[lVar15 + 2] == 0) {
        lVar15 = lVar15 + 2;
        goto LAB_032ccb9c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_032ccb9c:
    uVar1 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_18c0 + 0x18))(&local_18c0);
    lVar15 = 0;
    do {
      if (local_18b8[lVar15] == 0) goto LAB_032ccbfc;
      if (local_18b8[lVar15 + 1] == 0) {
        lVar15 = lVar15 + 1;
        goto LAB_032ccbfc;
      }
      if (local_18b8[lVar15 + 2] == 0) {
        lVar15 = lVar15 + 2;
        goto LAB_032ccbfc;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_032ccbfc:
    uVar2 = (uint)lVar15;
    if ((int)(local_1858 - uVar1) <= (int)(uint)lVar15) {
      uVar2 = local_1858 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      (**(code **)(local_18c0 + 0x18))(&local_18c0);
      memcpy(puVar12 + uVar1,local_18b8,(ulong)uVar2 << 1);
      puVar12[(int)(uVar2 + uVar1)] = 0;
    }
    (**(code **)(local_1868 + 0x18))(&local_1868);
    param_2 = local_1860;
LAB_032ccc5c:
    plVar14 = (long *)FUN_0038a89c(plVar14);
    iVar8 = (**(code **)(*plVar14 + 0x48))();
    puVar4 = PTR_DAT_04bc0888;
    if (iVar8 == 2) {
      if ((*PTR_DAT_04bc0890 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04bc0890);
        puVar9 = PTR_DAT_04bc0898;
        if (iVar8 != 0) {
          if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar8 != 0)) {
            *(undefined8 *)puVar9 = 0;
            __cxa_guard_release(PTR_DAT_04bc08a0);
          }
          *(undefined **)puVar4 = puVar9;
          __cxa_guard_release(PTR_DAT_04bc0890);
        }
      }
      puVar10 = (undefined8 *)(**(code **)*plVar14)(plVar14);
      if (puVar10 != (undefined8 *)puVar4) {
        do {
          puVar10 = (undefined8 *)*puVar10;
        } while (puVar10 != (undefined8 *)puVar4 && puVar10 != (undefined8 *)0x0);
        if (puVar10 == (undefined8 *)0x0) {
          plVar14 = (long *)0x0;
        }
      }
      plVar13 = *(long **)(*(long *)puVar5 + 0x70);
      plVar3 = *(long **)PTR_DAT_04bc9498;
      if (plVar13 != (long *)0x0) {
        plVar3 = plVar13;
      }
      uVar11 = (**(code **)(*plVar3 + 0x50))();
      if ((uVar11 & 1) == 0) {
        iVar8 = FUN_003563e0(plVar14[2],param_2,0xffffffff,(int)plVar14[3],
                             *(undefined2 *)((long)plVar14 + 0x32));
      }
      else {
        iVar8 = FUN_00355230(plVar14[2],param_2,0xffffffff,(int)plVar14[3],
                             *(undefined2 *)((long)plVar14 + 0x32),0xffffffff,(char)plVar14[6]);
      }
      uVar7 = iVar8 != 0;
    }
    else {
      uVar7 = 3;
    }
  }
  return uVar7;
}

