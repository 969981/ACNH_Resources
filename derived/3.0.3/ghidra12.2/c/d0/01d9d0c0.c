
undefined8
FUN_01d9d0c0(long param_1,byte *param_2,undefined8 param_3,long *param_4,undefined8 *param_5,
            byte param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  void *__dest;
  byte local_44 [4];
  
  if (((DAT_053788c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053788c8), iVar3 != 0)) {
    DAT_05378888 = &LAB_01d9cea8;
    DAT_05378890 = 0;
    DAT_05378898 = &LAB_01d9d044;
    DAT_053788a0 = 0;
    DAT_053788a8 = &LAB_01d9d060;
    DAT_053788b0 = 0;
    DAT_053788b8 = &LAB_01d9d09c;
    DAT_053788c0 = 0;
    __cxa_guard_release(&DAT_053788c8);
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
  *(undefined1 ***)(param_1 + 0x50) = &DAT_05378888;
  if (*param_2 < 8) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      iVar3 = FUN_02582d8c(param_2,2);
      if (-1 < iVar3) goto LAB_01d9d1c8;
    }
    else {
      local_44[0] = *param_2;
      uVar4 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,local_44);
      if ((uVar4 & 1) != 0) {
LAB_01d9d1c8:
        bVar5 = *param_2;
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        goto LAB_01d9d1d8;
      }
    }
  }
  bVar5 = 0xff;
LAB_01d9d1d8:
  *(byte *)(param_1 + 0xd4) = bVar5;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_03ebb160(param_1 + 8,1);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  __dest = *(void **)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x70) = 1;
  (**(code **)(*param_4 + 0x18))(param_4);
  if (__dest != (void *)param_4[1]) {
    uVar1 = 0xb;
    if (*(int *)(param_1 + 0x88) < 0xc) {
      uVar1 = *(int *)(param_1 + 0x88) - 1;
    }
    uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
    memcpy(__dest,(void *)param_4[1],uVar4);
    *(undefined2 *)((long)__dest + uVar4) = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = (long)param_5;
    *param_5 = plVar7;
    lVar6 = *plVar7;
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
  }
  return 1;
}

