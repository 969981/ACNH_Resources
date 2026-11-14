
undefined8
FUN_01d9d794(long param_1,byte *param_2,undefined8 param_3,undefined4 *param_4,undefined8 *param_5,
            byte param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  byte local_44 [4];
  
  if (((DAT_053789a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053789a0), iVar3 != 0)) {
    DAT_05378960 = &LAB_01d9d964;
    DAT_05378968 = 0;
    DAT_05378970 = &LAB_01d9da28;
    DAT_05378978 = 0;
    DAT_05378980 = &LAB_01d9da44;
    DAT_05378988 = 0;
    DAT_05378990 = 0;
    DAT_05378998 = 0;
    __cxa_guard_release(&DAT_053789a0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20);
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28);
  uVar1 = DAT_05378520;
  if (uVar2 <= DAT_05378520) {
    uVar1 = 0;
  }
  if (*(char *)(lVar6 + (long)(int)uVar1 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  uVar1 = DAT_05378520;
  if (uVar2 <= DAT_05378520) {
    uVar1 = 0;
  }
  *(byte *)(lVar6 + (long)(int)uVar1 * 0x38 + 0x30) = param_6 & 1;
  *(undefined1 ***)(param_1 + 0x50) = &DAT_05378960;
  if (*param_2 < 8) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      iVar3 = FUN_02582d8c(param_2,2);
      if (-1 < iVar3) goto LAB_01d9d8b4;
    }
    else {
      local_44[0] = *param_2;
      uVar4 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,local_44);
      if ((uVar4 & 1) != 0) {
LAB_01d9d8b4:
        bVar5 = *param_2;
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        goto LAB_01d9d8c4;
      }
    }
  }
  bVar5 = 0xff;
LAB_01d9d8c4:
  *(byte *)(param_1 + 0xd4) = bVar5;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_03ebb160(param_1 + 8,1);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  *(undefined4 *)(param_1 + 0x70) = *param_4;
  if (param_5 == (undefined8 *)0x0) {
    return 1;
  }
  plVar7 = (long *)(param_1 + 0x58);
  *plVar7 = (long)param_5;
  *param_5 = plVar7;
  lVar6 = *plVar7;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  return 1;
}

