
long * FUN_01bbfb84(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar2 = *(ushort *)(param_1 + 0xe);
  if (uVar1 < 0x8c) {
    if (uVar1 == 0x6e) {
      if (uVar2 == 0xe) {
switchD_01bbfc5c_caseD_9:
        if ((DAT_0533b148 & 1) != 0) {
          return &DAT_0533b130;
        }
        iVar3 = __cxa_guard_acquire(&DAT_0533b148);
        plVar6 = &DAT_0533b130;
        if (iVar3 == 0) {
          return plVar6;
        }
        puVar4 = &DAT_041780a4;
        puVar5 = &DAT_0533b148;
        goto LAB_01bbfda8;
      }
      if (uVar2 == 5) {
        if (**(uint **)PTR_DAT_04bb3448 < 0x10 &&
            (1 << (ulong)(**(uint **)PTR_DAT_04bb3448 & 0x1f) & 0xe001U) != 0) {
          if ((DAT_0533b0a8 & 1) != 0) {
            return &DAT_0533b090;
          }
          iVar3 = __cxa_guard_acquire(&DAT_0533b0a8);
          plVar6 = &DAT_0533b090;
          if (iVar3 == 0) {
            return plVar6;
          }
          puVar4 = &DAT_04178054;
          puVar5 = &DAT_0533b0a8;
        }
        else {
          if ((DAT_0533b0c8 & 1) != 0) {
            return &DAT_0533b0b0;
          }
          iVar3 = __cxa_guard_acquire(&DAT_0533b0c8);
          plVar6 = &DAT_0533b0b0;
          if (iVar3 == 0) {
            return plVar6;
          }
          puVar4 = &DAT_04178064;
          puVar5 = &DAT_0533b0c8;
        }
        goto LAB_01bbfda8;
      }
    }
    else if (uVar1 == 0x73) {
      if ((uVar2 == 3) || (uVar2 == 6)) goto switchD_01bbfc5c_caseD_9;
    }
    else {
LAB_01bbfc7c:
      if ((uVar1 == 0xc6) && (uVar2 == 3)) goto switchD_01bbfc5c_caseD_16;
    }
  }
  else if (uVar1 == 0x8c) {
    switch((uint)uVar2) {
    case 9:
    case 0xd:
      goto switchD_01bbfc5c_caseD_9;
    case 0x16:
switchD_01bbfc5c_caseD_16:
      if ((DAT_0533b108 & 1) != 0) {
        return &DAT_0533b0f0;
      }
      iVar3 = __cxa_guard_acquire(&DAT_0533b108);
      plVar6 = &DAT_0533b0f0;
      if (iVar3 == 0) {
        return plVar6;
      }
      puVar4 = &DAT_04178084;
      puVar5 = &DAT_0533b108;
      goto LAB_01bbfda8;
    case 0x18:
      if ((DAT_0533b128 & 1) != 0) {
        return &DAT_0533b110;
      }
      iVar3 = __cxa_guard_acquire(&DAT_0533b128);
      plVar6 = &DAT_0533b110;
      if (iVar3 == 0) {
        return plVar6;
      }
      puVar4 = &DAT_04178094;
      puVar5 = &DAT_0533b128;
      goto LAB_01bbfda8;
    }
  }
  else {
    if (uVar1 != 0x96) goto LAB_01bbfc7c;
    if (uVar2 - 3 < 2) goto switchD_01bbfc5c_caseD_16;
  }
  if ((DAT_0533b0e8 & 1) != 0) {
    return &DAT_0533b0d0;
  }
  iVar3 = __cxa_guard_acquire(&DAT_0533b0e8);
  plVar6 = &DAT_0533b0d0;
  if (iVar3 == 0) {
    return plVar6;
  }
  puVar4 = &DAT_04178074;
  puVar5 = &DAT_0533b0e8;
LAB_01bbfda8:
  *plVar6 = (long)(PTR_DAT_04bb2de8 + 0x10);
  plVar6[1] = (long)puVar4;
  *(undefined4 *)(plVar6 + 2) = 8;
  FUN_001001d0(PTR_LAB_04bb2d98,plVar6,&__DT_FINI_ARRAY);
  __cxa_guard_release(puVar5);
  return plVar6;
}

