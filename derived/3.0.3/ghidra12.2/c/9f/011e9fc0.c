
void FUN_011e9fc0(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined2 local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return;
  }
  if (DAT_050dfb28 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != DAT_050dfb28)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x011ea0b8;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011ea0b8;
    }
  }
  uVar9 = 0;
joined_r0x011ea0b8:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) && (iVar3 = (int)plVar8[0x49ef], 0 < iVar3)) {
      plVar4 = plVar8 + 0x52;
      do {
        if (((((*(ushort *)(plVar4 + 10) >> 3 & 1) != 0) && (*(char *)((long)plVar4 + 0x56) < '\0'))
            && (*(int *)(param_2 + 8) == (int)*plVar4)) &&
           (*(int *)(param_2 + 0xc) == *(int *)((long)plVar4 + 4))) {
          local_58 = 0;
          local_44 = 0xff00;
          local_60 = 1;
          local_5c = FUN_011e7c30(param_1);
          local_50 = (int)plVar4[2];
          local_4c = *(int *)((long)plVar4 + 0x14);
          local_48 = (int)plVar4[3];
          uVar7 = *(undefined8 *)(plVar8[0x3c44] + 0x18);
          if ((*(byte *)(plVar8[0x3c44] + 8) & 10) != 2) {
            uVar7 = 0;
          }
          FUN_03817890(uVar7,&local_60);
          return;
        }
        iVar3 = iVar3 + -1;
        plVar4 = plVar4 + 0xf;
      } while (iVar3 != 0);
    }
  }
  return;
}

