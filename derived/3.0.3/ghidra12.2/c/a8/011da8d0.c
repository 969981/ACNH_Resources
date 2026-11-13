
void FUN_011da8d0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
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
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
      goto joined_r0x011da9d4;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011da9d4;
    }
  }
  uVar4 = 0;
joined_r0x011da9d4:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbbb08);
    puVar2 = PTR_DAT_04bbbc68;
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar4;
    }
    if ((((uVar7 & 1) != 0) && (uVar1 != 0)) && (0 < (int)plVar9[0x49ef])) {
      lVar8 = 0;
      iVar3 = 0;
      do {
        if (*(int *)((long)plVar9 + lVar8 + 0x290) == *(int *)(param_1 + 8) &&
            *(int *)((long)plVar9 + lVar8 + 0x294) == *(int *)(param_1 + 0xc)) {
          local_48 = *(undefined2 *)((long)plVar9 + lVar8 + 0x278);
          lVar10 = *(long *)puVar2;
          local_46 = *(undefined1 *)((long)plVar9 + lVar8 + 0x27a);
          local_45 = *(undefined1 *)((long)plVar9 + lVar8 + 0x27b);
          local_44 = *(undefined4 *)((long)plVar9 + lVar8 + 0x27c);
          if (((((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) &&
               (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
              ((*(long *)(lVar10 + 0x488) != 0 && (*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0))))
             && ((*(long *)(lVar10 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0))
                )) {
            uVar4 = FUN_0277d6c4(&local_48);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              FUN_0124c030(auStack_78,&local_48);
              iVar5 = FUN_0123db50(auStack_70,local_68);
              if ((iVar5 == 0x2e) && (*(short *)((long)plVar9 + lVar8 + 0x2e2) != 0)) {
                return;
              }
            }
          }
          *(ushort *)((long)plVar9 + lVar8 + 0x2e0) =
               *(ushort *)((long)plVar9 + lVar8 + 0x2e0) & 0xfffb;
        }
        iVar3 = iVar3 + 1;
        lVar8 = lVar8 + 0x78;
      } while (iVar3 < (int)plVar9[0x49ef]);
    }
  }
  return;
}

