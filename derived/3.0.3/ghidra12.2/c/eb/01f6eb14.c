
void FUN_01f6eb14(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(param_1 + 8) != '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(*(long *)(lVar9 + 8) + 0x230);
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 0;
      goto joined_r0x01f6ec0c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01f6ec0c;
    }
  }
  uVar10 = 1;
joined_r0x01f6ec0c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if (((((int)lVar7 == 1) && (uVar10 == 0 && ((uVar4 ^ 1) & 1) == 0)) &&
        ((uVar1 != *param_2 && ((int)plVar8[0xa0] == 0)))) &&
       (((*(char *)(param_1 + 0x14) == '\0' ||
         (uVar6 = FUN_021b8f60(&DAT_053fe348,plVar8 + 0xa1,0), (uVar6 & 1) == 0)) &&
        (uVar6 = FUN_02087ce0(*(undefined8 *)(lVar9 + 0x18),param_2,0), (uVar6 & 1) != 0)))) {
      **(undefined1 **)(param_1 + 8) = 1;
    }
  }
  return;
}

