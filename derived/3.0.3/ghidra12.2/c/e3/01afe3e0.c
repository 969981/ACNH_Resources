
void FUN_01afe3e0(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  undefined4 local_e8;
  undefined4 uStack_e4;
  char *local_e0;
  undefined *local_d8;
  char *local_d0;
  int local_c8;
  char acStack_c4 [127];
  undefined1 local_45;
  
  iVar2 = FUN_01ad7260();
  if (iVar2 == 0) {
    **(undefined1 **)(param_2 + 8) = 0;
    return;
  }
  FUN_01adf970(&local_e8,param_1);
  local_c8 = 0x80;
  local_45 = 0;
  local_d8 = PTR_DAT_04bb2e90 + 0x10;
  local_d0 = acStack_c4;
  (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x18))(&local_e8);
  pcVar5 = local_e0;
  if (acStack_c4 != local_e0) {
    (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x18))(&local_e8);
    lVar7 = 0;
    do {
      if (local_e0[lVar7] == '\0') goto LAB_01afe4bc;
      if (local_e0[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01afe4bc;
      }
      if (local_e0[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01afe4bc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01afe4bc:
    iVar2 = (int)lVar7;
    if (local_c8 <= (int)lVar7) {
      iVar2 = local_c8 + -1;
    }
    memcpy(acStack_c4,pcVar5,(long)iVar2);
    acStack_c4[iVar2] = '\0';
  }
  local_d8 = PTR_DAT_04bb2d88 + 0x10;
  local_e8 = 0x74;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar6 = *puVar8;
    uVar9 = 0;
    if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar7 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar9 < 0xbd)) goto LAB_01afe598;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01afe598:
  if (uVar9 != 0x74) goto LAB_01afe6a4;
  if ((*(byte *)(param_1 + 10) >> 3 & 1) == 0) {
    if (((DAT_0532a970 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0532a970), iVar2 != 0)) {
      DAT_0532a960 = PTR_DAT_04bb2020 + 0x10;
      DAT_0532a968 = "FtrBromideFrame";
      __cxa_guard_release(&DAT_0532a970);
    }
    if (local_d0 == DAT_0532a968) goto LAB_01afe6a4;
    lVar7 = 0;
    do {
      pcVar5 = DAT_0532a968;
      if (DAT_0532a968[lVar7] == '\0') goto LAB_01afe67c;
      if (DAT_0532a968[lVar7 + 1] == '\0') goto LAB_01afe670;
      if (DAT_0532a968[lVar7 + 2] == '\0') goto LAB_01afe678;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  else {
    if (((DAT_0532a988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0532a988), iVar2 != 0)) {
      DAT_0532a978 = PTR_DAT_04bb2020 + 0x10;
      DAT_0532a980 = "FtrBromideFrameWall";
      __cxa_guard_release(&DAT_0532a988);
    }
    if (local_d0 == DAT_0532a980) goto LAB_01afe6a4;
    lVar7 = 0;
    do {
      pcVar5 = DAT_0532a980;
      if (DAT_0532a980[lVar7] == '\0') goto LAB_01afe67c;
      if (DAT_0532a980[lVar7 + 1] == '\0') goto LAB_01afe670;
      if (DAT_0532a980[lVar7 + 2] == '\0') goto LAB_01afe678;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  lVar7 = 0;
LAB_01afe67c:
  pcVar1 = local_d0;
  iVar2 = (int)lVar7;
  if (local_c8 <= (int)lVar7) {
    iVar2 = local_c8 + -1;
  }
  memcpy(local_d0,pcVar5,(long)iVar2);
  pcVar1[iVar2] = '\0';
LAB_01afe6a4:
  (**(code **)(local_d8 + 0x18))(&local_d8);
  pcVar5 = local_d0;
  iVar2 = FUN_01ad7260(param_1);
  if ((iVar2 == 0) || (puVar4 = (ushort *)FUN_01afd600(param_1), puVar4 == (ushort *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar4 & 7;
    uVar3 = FUN_01ad7260(param_1);
    if (uVar3 <= uVar6) {
      uVar6 = 0;
    }
  }
  FUN_038d1270(param_2,"%sReBody%d",pcVar5,uVar6);
  return;
LAB_01afe670:
  lVar7 = lVar7 + 1;
  goto LAB_01afe67c;
LAB_01afe678:
  lVar7 = lVar7 + 2;
  goto LAB_01afe67c;
}

