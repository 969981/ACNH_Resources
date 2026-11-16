
void FUN_0251a33c(byte *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  int local_34 [2];
  undefined1 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((DAT_054f5738 != 0) && ((ulong)*param_1 < 8)) {
    lVar9 = DAT_054f5738 + (ulong)*param_1 * 0xc;
    uVar1 = *(undefined4 *)PTR_DAT_04bb37e0;
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined2 *)(lVar9 + 0x28c) = 0;
    *(undefined4 *)(lVar9 + 0x284) = uVar1;
    *(undefined4 *)(lVar9 + 0x288) = uVar2;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  piVar8 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar8 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_34[0] = *piVar8;
  if (local_34[0] == 0) {
    return;
  }
  FUN_0071c8d0(&local_48,local_34,PTR_DAT_04bb3238,0);
  plVar4 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_3f = '\0';
    }
  }
  if (local_48 == (long *)0x0) {
    return;
  }
  if (local_40 == '\0') {
    return;
  }
  if (local_3f == '\0') {
    return;
  }
  if (local_3e == '\0') {
    return;
  }
  FUN_0252d8f0(auStack_50,param_1);
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(auStack_50);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_0251a49c;
  }
  FUN_02472404(0,local_48);
LAB_0251a49c:
  local_2c = 1;
  local_34[1] = 0;
  local_28 = 6;
  local_22 = 0;
  local_24 = 0;
  FUN_02321e44(auStack_58,local_48,local_34 + 1);
  return;
}

