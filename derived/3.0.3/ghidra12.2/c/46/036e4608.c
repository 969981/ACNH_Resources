
void FUN_036e4608(long *param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 auStack_e8 [88];
  undefined1 auStack_90 [92];
  byte local_34 [4];
  
  if (((DAT_05ab5e88 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05ab5e88), iVar6 != 0)) {
    DAT_05ab5e78 = PTR_DAT_04bb2020 + 0x10;
    DAT_05ab5e80 = "WHEREAREN_";
    __cxa_guard_release(&DAT_05ab5e88);
  }
  if (((DAT_05ab5ea0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05ab5ea0), iVar6 != 0)) {
    DAT_05ab5e90 = PTR_DAT_04bb2020 + 0x10;
    DAT_05ab5e98 = "Prev_";
    __cxa_guard_release(&DAT_05ab5ea0);
  }
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_036e46b0:
    if (7 < *pbVar7) {
LAB_036e46bc:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_34[0] = *pbVar7;
        if (local_34[0] < 8) goto LAB_036e473c;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_036e46b0;
      }
      goto LAB_036e46bc;
    }
  }
  local_34[0] = *pbVar7;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_036e473c:
  (**(code **)(DAT_05ab5e78 + 0x18))(&DAT_05ab5e78);
  pcVar3 = DAT_05ab5e80;
  (**(code **)(DAT_05ab5e90 + 0x18))(&DAT_05ab5e90);
  pcVar4 = DAT_05ab5e98;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_0071b954(auStack_90,"%s%s%s",pcVar3,pcVar4,param_1[1]);
  (**(code **)(DAT_05ab5e78 + 0x18))(&DAT_05ab5e78);
  pcVar3 = DAT_05ab5e80;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_0071b954(auStack_e8,&DAT_0406a3d7,pcVar3,param_1[1]);
  uVar5 = FUN_0274bce0(local_34,auStack_e8);
  FUN_0274bfe8(local_34,auStack_90,uVar5);
  return;
}

