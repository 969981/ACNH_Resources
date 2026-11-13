
void FUN_00e89020(undefined8 param_1,uint *param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_48;
  char *local_40;
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_00e890d8;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00e890d8:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar8 = plVar9[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
  uVar3 = 0;
  if ((int)lVar8 == 1) {
    uVar3 = uVar10;
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "tkk";
  (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
  lVar8 = 0;
  do {
    if (*(char *)(plVar9[0x7d] + lVar8) == '\0') {
LAB_00e89194:
      iVar5 = (int)lVar8;
joined_r0x00e89198:
      if (2 < iVar5) {
        uVar7 = 0;
        goto LAB_00e891cc;
      }
      break;
    }
    lVar1 = plVar9[0x7d] + lVar8;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_00e89194;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar5 = (int)lVar8 + 2;
      goto joined_r0x00e89198;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
LAB_00e89230:
  local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
  lVar8 = plVar9[0x76];
  local_34 = 0;
  FUN_01e5a930(0x40000000,lVar8,0xc,PTR_DAT_04bb2150,&local_48,&local_34,PTR_DAT_04bc1600,6);
  *(undefined4 *)(lVar8 + 0x3ac) = 0;
  return;
  while (uVar7 = uVar7 + 1, iVar5 - 2 != uVar7) {
LAB_00e891cc:
    pcVar2 = (char *)(plVar9[0x7d] + uVar7);
    (**(code **)(local_48 + 0x18))(&local_48);
    if ((pcVar2 == local_40) ||
       ((*pcVar2 == *local_40 &&
        ((*pcVar2 == '\0' ||
         ((pcVar2[1] == local_40[1] && ((pcVar2[1] == '\0' || (pcVar2[2] == local_40[2])))))))))) {
      if ((int)uVar7 != -1) {
        return;
      }
      break;
    }
  }
  goto LAB_00e89230;
}

