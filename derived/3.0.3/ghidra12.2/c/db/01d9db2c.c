
undefined8
FUN_01d9db2c(long param_1,byte *param_2,undefined8 param_3,undefined8 *param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  byte local_24 [4];
  
  if (((DAT_053789e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053789e8), iVar3 != 0)) {
    DAT_053789a8 = &LAB_01d9dcf0;
    DAT_053789b0 = 0;
    DAT_053789b8 = &LAB_01d9dd4c;
    DAT_053789c0 = 0;
    DAT_053789c8 = &LAB_01d9dd68;
    DAT_053789d0 = 0;
    DAT_053789d8 = 0;
    DAT_053789e0 = 0;
    __cxa_guard_release(&DAT_053789e8);
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
  *(byte *)(lVar6 + (long)(int)uVar1 * 0x38 + 0x30) = param_5 & 1;
  *(undefined1 ***)(param_1 + 0x50) = &DAT_053789a8;
  if (*param_2 < 8) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      iVar3 = FUN_02582d8c(param_2,2);
      if (-1 < iVar3) goto LAB_01d9dc48;
    }
    else {
      local_24[0] = *param_2;
      uVar4 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,local_24);
      if ((uVar4 & 1) != 0) {
LAB_01d9dc48:
        bVar5 = *param_2;
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        goto LAB_01d9dc58;
      }
    }
  }
  bVar5 = 0xff;
LAB_01d9dc58:
  *(byte *)(param_1 + 0xd4) = bVar5;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_03ebb160(param_1 + 8,1);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  if (param_4 == (undefined8 *)0x0) {
    return 1;
  }
  plVar7 = (long *)(param_1 + 0x58);
  *plVar7 = (long)param_4;
  *param_4 = plVar7;
  lVar6 = *plVar7;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  return 1;
}

