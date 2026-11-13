
void FUN_00e88cd0(long param_1,uint *param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined *local_50;
  char *local_48;
  undefined4 local_24;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_00e88d90;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00e88d90:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar9 = plVar10[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
  uVar3 = 0;
  if ((int)lVar9 == 1) {
    uVar3 = uVar11;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "tkk";
  (**(code **)(plVar10[0x7c] + 0x18))(plVar10 + 0x7c);
  lVar9 = 0;
  do {
    if (*(char *)(plVar10[0x7d] + lVar9) == '\0') {
LAB_00e88e50:
      iVar6 = (int)lVar9;
joined_r0x00e88e54:
      if (2 < iVar6) {
        uVar8 = 0;
        goto LAB_00e88e80;
      }
      break;
    }
    lVar1 = plVar10[0x7d] + lVar9;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_00e88e50;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar6 = (int)lVar9 + 2;
      goto joined_r0x00e88e54;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
LAB_00e88ee4:
  local_24 = 0;
  lVar9 = plVar10[0x76];
  uVar4 = **(undefined4 **)(param_1 + 8);
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  FUN_01e5a930(0x40000000,lVar9,0xc,PTR_DAT_04bb2150,&local_50,&local_24,PTR_DAT_04bc1600,6);
  *(undefined4 *)(lVar9 + 0x3ac) = uVar4;
  *(undefined1 *)(plVar10[0x77] + 0x7d0e) = 1;
  return;
  while (uVar8 = uVar8 + 1, iVar6 - 2 != uVar8) {
LAB_00e88e80:
    pcVar2 = (char *)(plVar10[0x7d] + uVar8);
    (**(code **)(local_50 + 0x18))(&local_50);
    if ((pcVar2 == local_48) ||
       ((*pcVar2 == *local_48 &&
        ((*pcVar2 == '\0' ||
         ((pcVar2[1] == local_48[1] && ((pcVar2[1] == '\0' || (pcVar2[2] == local_48[2])))))))))) {
      if ((int)uVar8 != -1) {
        return;
      }
      break;
    }
  }
  goto LAB_00e88ee4;
}

