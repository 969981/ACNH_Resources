
undefined8 FUN_02eece00(void)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531 ||
      *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x4e4af961) goto LAB_02eece34;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
  if (*(int *)(lVar7 + 0xaa0) != 3) {
    uVar5 = 1;
    switch(*(undefined4 *)(lVar7 + 0x380)) {
    case 0xf:
      goto switchD_02eed094_caseD_f;
    case 0x18:
    case 0x22:
      if (*(int *)(PTR_DAT_04bc3a88 + 0x38) != 0x1ca0c3e6) {
        return 1;
      }
      break;
    case 0x25:
    case 0x26:
      if (*(int *)(lVar7 + 0x3e4) == 2) {
        return 1;
      }
    }
  }
  uVar2 = *(ushort *)PTR_DAT_04bc39f0;
  if (uVar2 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8);
    if (0xff < (uint)(int)(short)uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) == 0) goto LAB_02eecef4;
    uVar3 = *(ushort *)PTR_DAT_04bb6298;
    if ((long)(short)uVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
      if (0xff < uVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x17 & 1) != 0) goto LAB_02eecef4;
    }
    goto LAB_02eece34;
  }
LAB_02eecef4:
  sVar4 = *(short *)PTR_DAT_04bb6298;
  uVar8 = (uint)(short)uVar2;
  if (sVar4 == -1) {
LAB_02eecf74:
    if (uVar2 != 0xffff) {
code_r0x02eecf90:
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
      if (0xff < uVar8) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x11 & 1) != 0) goto LAB_02eece34;
    }
    uVar8 = (uint)sVar4;
    if (uVar8 != 0xffffffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
      if (0xff < uVar8) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x11 & 1) != 0) goto LAB_02eece34;
    }
    local_4 = 0x1b;
    uVar6 = FUN_02917388(&local_4);
    if ((uVar6 & 1) == 0) {
      local_4 = 0x1b;
      uVar6 = FUN_0290cbcc(&local_4);
      if ((uVar6 & 1) == 0) {
        local_4 = 0x19;
        uVar6 = FUN_02917388(&local_4);
        if ((uVar6 & 1) != 0) {
          local_8 = 0x19;
          uVar6 = FUN_0290cbcc(&local_8);
          if ((uVar6 & 1) == 0) goto LAB_02eece34;
        }
        local_4 = 0x19;
        uVar6 = FUN_0290cbcc(&local_4);
        if ((uVar6 & 1) != 0) {
          local_8 = 0x19;
          uVar6 = FUN_02917388(&local_8);
          if ((uVar6 & 1) == 0) goto LAB_02eece34;
        }
      }
    }
    uVar5 = 0;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) == 0) goto LAB_02eecf74;
    if (uVar8 != 0xffffffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
      if (0xff < uVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x17 & 1) == 0) goto LAB_02eece34;
      goto code_r0x02eecf90;
    }
LAB_02eece34:
    uVar5 = 1;
  }
switchD_02eed094_caseD_f:
  return uVar5;
}

