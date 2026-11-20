
uint FUN_03ef8040(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  char *local_68;
  
  puVar4 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = ":";
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar12 = 0;
  uVar11 = 0xffffffffffffffff;
  do {
    if (*(char *)(param_2[1] + uVar12) == '\0') {
LAB_03ef80d4:
      iVar9 = (int)uVar12;
joined_r0x03ef80d8:
      if (0 < iVar9) {
        uVar11 = (ulong)((int)uVar12 - 1);
        goto LAB_03ef80e4;
      }
      uVar11 = 0xffffffffffffffff;
      break;
    }
    lVar10 = param_2[1] + uVar12;
    if (*(char *)(lVar10 + 1) == '\0') {
      uVar12 = uVar12 + 1;
      goto LAB_03ef80d4;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      uVar12 = uVar12 + 2;
      iVar9 = (int)uVar12;
      goto joined_r0x03ef80d8;
    }
    uVar12 = uVar12 + 3;
  } while (uVar12 != 0x80001);
  goto LAB_03ef813c;
  while( true ) {
    uVar11 = uVar11 - 1;
    iVar9 = (int)uVar12;
    uVar3 = iVar9 - 1;
    uVar12 = (ulong)uVar3;
    if (uVar3 == 0 || iVar9 < 1) break;
LAB_03ef80e4:
    lVar10 = param_2[1];
    (**(code **)(local_70 + 0x18))(&local_70);
    if (((char *)(lVar10 + uVar11) == local_68) || (*(char *)(lVar10 + uVar11) == *local_68))
    goto LAB_03ef813c;
  }
  uVar11 = 0xffffffffffffffff;
LAB_03ef813c:
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04bb3490;
  puVar5 = PTR_DAT_04bb3488;
  uVar3 = *(uint *)(param_1 + 8);
  local_78 = (char *)(param_2[1] + (long)(int)uVar11 + 1);
  if (0 < (int)uVar3) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    local_80 = puVar4 + 0x10;
    do {
      plVar13 = (long *)**(undefined8 **)
                          (*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                          (long)*(short *)(param_1 + 0x30) * 8);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        *(undefined **)puVar5 = puVar1;
        __cxa_guard_release(puVar6);
      }
      uVar12 = (**(code **)*plVar13)(plVar13,puVar5);
      if ((uVar12 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
      uVar2 = uVar14;
      if (*(uint *)(param_1 + 8) <= uVar14) {
        uVar2 = 0;
      }
      (**(code **)(*plVar13 + 0x40))
                (&local_70,plVar13,(long)*(short *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 2));
      (**(code **)(local_70 + 0x18))(&local_70);
      local_88 = local_68;
      local_90 = puVar4 + 0x10;
      (**(code **)(local_80 + 0x18))(&local_80);
      (**(code **)(local_80 + 0x18))(&local_80);
      pcVar7 = local_78;
      (**(code **)(local_90 + 0x18))(&local_90);
      if (pcVar7 == local_88) {
LAB_03ef82fc:
        uVar3 = uVar14;
        if (*(uint *)(param_1 + 8) <= uVar14) {
          uVar3 = 0;
        }
        return (uint)*(ushort *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 2) | uVar14 << 0x10;
      }
      uVar12 = 0;
      bVar8 = true;
      do {
        if (local_78[uVar12] != local_88[uVar12]) break;
        if (local_78[uVar12] == '\0') {
          if (bVar8) goto LAB_03ef82fc;
          break;
        }
        if (local_78[uVar12 + 1] != local_88[uVar12 + 1]) break;
        if (local_78[uVar12 + 1] == '\0') goto LAB_03ef82fc;
        if (local_78[uVar12 + 2] != local_88[uVar12 + 2]) break;
        if (local_78[uVar12 + 2] == '\0') goto LAB_03ef82fc;
        bVar8 = uVar12 < 0x7fffe;
        uVar12 = uVar12 + 3;
      } while (uVar12 != 0x80001);
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar3);
  }
  return 0xffffffff;
}

