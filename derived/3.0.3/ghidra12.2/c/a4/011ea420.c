
void FUN_011ea420(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return;
  }
  if (DAT_050dfb28 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != DAT_050dfb28)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x011ea51c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011ea51c;
    }
  }
  uVar10 = 0;
joined_r0x011ea51c:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if ((((uVar7 & 1) != 0) && (uVar1 != 0)) && (iVar5 = (int)plVar9[0x49ef], 0 < iVar5)) {
      lVar8 = 0;
      do {
        if (((((*(ushort *)((long)plVar9 + lVar8 + 0x2e0) >> 3 & 1) != 0) &&
             (*(char *)((long)plVar9 + lVar8 + 0x2e6) < '\0')) &&
            (*(int *)(param_1 + 8) == *(int *)((long)plVar9 + lVar8 + 0x290))) &&
           (*(int *)(param_1 + 0xc) == *(int *)((long)plVar9 + lVar8 + 0x294))) {
          puVar2 = (undefined4 *)((long)plVar9 + lVar8 + 0x2a8);
          if (param_3 != (undefined4 *)0x0) {
            puVar2 = param_3 + 2;
          }
          local_44 = *puVar2;
          puVar2 = (undefined4 *)((long)plVar9 + lVar8 + 0x2a4);
          puVar3 = (undefined4 *)((long)plVar9 + lVar8 + 0x2a0);
          if (param_3 != (undefined4 *)0x0) {
            puVar2 = param_3 + 1;
            puVar3 = param_3;
          }
          uStack_48 = *puVar2;
          local_4c = *puVar3;
          local_54 = *(undefined4 *)((long)plVar9 + lVar8 + 0x278);
          uStack_50 = *(undefined4 *)((long)plVar9 + lVar8 + 0x27c);
          FUN_011ea808(0,plVar9,&local_54,&local_4c,param_2);
          return;
        }
        iVar5 = iVar5 + -1;
        lVar8 = lVar8 + 0x78;
      } while (iVar5 != 0);
    }
  }
  return;
}

