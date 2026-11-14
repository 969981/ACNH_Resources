
undefined8
FUN_01d9dfc0(long param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,byte param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  byte local_24 [4];
  
  if (((DAT_05378a78 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05378a78), iVar5 != 0)) {
    DAT_05378a38 = &LAB_01d9e1c4;
    DAT_05378a40 = 0;
    DAT_05378a48 = &LAB_01d9a6d8;
    DAT_05378a50 = 0;
    DAT_05378a58 = &LAB_01d9e260;
    DAT_05378a60 = 0;
    DAT_05378a68 = 0;
    DAT_05378a70 = 0;
    __cxa_guard_release(&DAT_05378a78);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar3 = *(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20);
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28);
  uVar1 = DAT_05378520;
  if (uVar3 <= DAT_05378520) {
    uVar1 = 0;
  }
  if (*(char *)(lVar8 + (long)(int)uVar1 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  uVar1 = DAT_05378520;
  if (uVar3 <= DAT_05378520) {
    uVar1 = 0;
  }
  *(byte *)(lVar8 + (long)(int)uVar1 * 0x38 + 0x30) = param_5 & 1;
  *(undefined1 ***)(param_1 + 0x50) = &DAT_05378a38;
  if (*param_2 < 8) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      iVar5 = FUN_02582d8c(param_2,2);
      if (-1 < iVar5) goto LAB_01d9e0dc;
    }
    else {
      local_24[0] = *param_2;
      uVar6 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,local_24);
      if ((uVar6 & 1) != 0) {
LAB_01d9e0dc:
        bVar7 = *param_2;
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        goto LAB_01d9e0ec;
      }
    }
  }
  bVar7 = 0xff;
LAB_01d9e0ec:
  *(byte *)(param_1 + 0xd4) = bVar7;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_03ebb160(param_1 + 8,1);
  lVar8 = *(long *)PTR_DAT_04bb21d0;
  *(undefined8 *)(lVar8 + 0x248) = *param_3;
  *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined1 *)(param_3 + 6);
  uVar9 = param_3[4];
  uVar2 = param_3[5];
  *(undefined8 *)(lVar8 + 0x260) = param_3[3];
  *(undefined8 *)(lVar8 + 0x268) = uVar9;
  *(undefined8 *)(lVar8 + 0x270) = uVar2;
  *(undefined1 *)(lVar8 + 0x278) = uVar4;
  uVar9 = param_3[2];
  *(undefined1 *)(lVar8 + 0x240) = 1;
  *(undefined8 *)(lVar8 + 600) = uVar9;
  if (param_4 == (undefined8 *)0x0) {
    return 1;
  }
  plVar10 = (long *)(param_1 + 0x58);
  *plVar10 = (long)param_4;
  *param_4 = plVar10;
  lVar8 = *plVar10;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  return 1;
}

