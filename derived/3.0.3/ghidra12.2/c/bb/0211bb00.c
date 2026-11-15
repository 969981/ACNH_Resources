
void FUN_0211bb00(long param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  undefined2 local_40 [2];
  undefined8 local_3c;
  undefined1 local_34;
  undefined2 local_32;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  if ((char *)param_3[1] != "NpcPlayer") {
    uVar8 = 0;
    bVar3 = true;
    while( true ) {
      cVar1 = ((char *)param_3[1])[uVar8];
      if (cVar1 != "NpcPlayer"[uVar8]) {
        return;
      }
      if (cVar1 == '\0') break;
      bVar3 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
      if (uVar8 == 0x80001) {
        return;
      }
    }
    if (!bVar3) {
      return;
    }
  }
  iVar4 = FUN_0211b8d0(param_1,param_3,param_4);
  puVar2 = PTR_DAT_04bb27c0;
  if (iVar4 == -1) {
    return;
  }
  if (iVar4 == -2) {
    uVar10 = *(uint *)(param_1 + 0xf0);
  }
  else {
    uVar10 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1f0) + (long)iVar4 * 8) + 0xe8);
  }
  if (uVar10 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0211bc90;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211bc90;
    }
  }
  uVar10 = 0;
joined_r0x0211bc90:
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    if (((uVar10 & uVar5) == 1) && (lVar7 = plVar9[0x53], lVar7 != 0)) {
      local_3c = *(undefined8 *)(lVar7 + 0xc1a8);
      local_34 = *(undefined1 *)(lVar7 + 0xc1b0);
      FUN_007ef010(local_40,param_2);
      local_32 = local_40[0];
      FUN_02346fe0(lVar7,&local_3c);
    }
  }
  return;
}

