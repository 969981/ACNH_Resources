
void FUN_02258244(byte param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long lVar12;
  undefined *local_78 [4];
  int local_54;
  undefined8 local_50;
  char *local_48;
  byte local_24 [4];
  
  if ((param_1 & 1) != 0) goto LAB_02258518;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_022582c4:
    if (*pbVar11 < 8) goto LAB_0225833c;
LAB_022582d0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02258334:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_0225833c;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar12 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar11 = (byte *)(lVar12 + 0x471);
      }
    }
    local_24[0] = *pbVar11;
    if (7 < local_24[0]) goto LAB_02258334;
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_022582c4;
      }
      goto LAB_022582d0;
    }
LAB_0225833c:
    local_24[0] = *pbVar11;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "wherearen_tkk_fes";
  FUN_025ffac8(local_78,&local_50,local_24);
  puVar4 = PTR_DAT_04bc3528;
  puVar3 = PTR_DAT_04bb2230;
  local_78[0] = PTR_DAT_04bc3528 + 0x10;
  local_50 = (undefined *)CONCAT71(local_50._1_7_,DAT_05467d70 == 0);
  puVar8 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x69,PTR_DAT_04bb32e0);
  puVar5 = PTR_DAT_04bc9f20;
  if (puVar8 == (undefined8 *)0x0) {
LAB_02258400:
    bVar6 = false;
  }
  else {
    if (((*PTR_DAT_04bc9f20 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc9f20), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc9f18 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc9f20);
    }
    uVar9 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc9f18);
    if ((uVar9 & 1) == 0) goto LAB_02258400;
    bVar6 = *(char *)((long)puVar8 + 0x2b5) != '\0';
  }
  local_50._0_2_ = CONCAT11(bVar6,(undefined1)local_50);
  puVar8 = (undefined8 *)FUN_0339be20(*(undefined8 *)(*(long *)puVar3 + 0x10),0x69,PTR_DAT_04bb32e0)
  ;
  if (puVar8 == (undefined8 *)0x0) {
LAB_02258460:
    iVar7 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc9f20), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc9f18 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc9f20);
    }
    uVar9 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc9f18);
    if ((uVar9 & 1) == 0) goto LAB_02258460;
    iVar7 = *(int *)(puVar8[0x53] + 8) + *(int *)(puVar8[0x53] + 0xfb8) * 2;
  }
  local_50 = (undefined *)CONCAT44(iVar7,(undefined4)local_50);
  puVar8 = (undefined8 *)FUN_0339be20(*(undefined8 *)(*(long *)puVar3 + 0x10),0x69,PTR_DAT_04bb32e0)
  ;
  if (puVar8 == (undefined8 *)0x0) {
LAB_022584b4:
    uVar10 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc9f20), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc9f18 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc9f20);
    }
    uVar9 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc9f18);
    if ((uVar9 & 1) == 0) goto LAB_022584b4;
    uVar10 = *(undefined4 *)((long)puVar8 + 0x28c);
  }
  local_48 = (char *)CONCAT44(local_48._4_4_,uVar10);
  FUN_025fbd5c(local_78,&local_50);
  local_78[0] = puVar4 + 0x10;
  iVar7 = FUN_025fbf6c(local_78);
  if (iVar7 == -1) {
LAB_02258500:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    iVar7 = (**(code **)(local_78[0] + 0x20))(local_78);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar7);
    if (0xc < iVar7) goto LAB_02258500;
  }
  FUN_02601530(local_78);
LAB_02258518:
  DAT_05467d24 = param_1 & 1;
  return;
}

