
/* WARNING: Removing unreachable block (ram,0x026e3348) */
/* WARNING: Removing unreachable block (ram,0x026e3338) */
/* WARNING: Removing unreachable block (ram,0x026e3340) */

void FUN_026e3250(long param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long local_a8;
  long *local_a0;
  long local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_88 [6] [16];
  undefined4 local_24;
  
  local_88[0] = FUN_02642d30();
  uVar6 = local_88[0]._8_8_ & 0xffffffff;
  local_a8 = param_1;
  if (uVar6 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_a0 = &local_a8;
  (*(code *)(&PTR_LAB_04a893b0)[uVar6])(&local_a0,local_88);
  local_88[0]._0_4_ = local_88[0]._0_4_ & 0xffff0000;
  local_88[0]._4_4_ = 1;
  FUN_01384940(local_88);
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_02703058(local_88);
    uVar6 = 0;
    if (local_88[0][4] != '\0') {
      uVar6 = local_88[0]._0_8_ & 0xffffffff;
    }
  }
  uVar5 = FUN_0092ddf4();
  FUN_01327870(local_88,uVar6,uVar5);
  local_8e = 0;
  local_90 = 0;
  local_24 = 0x32;
  local_a8 = CONCAT44(local_a8._4_4_,0x32);
  local_98 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0);
  if ((((*(long *)PTR_DAT_04bb2720 != 0) &&
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar9 != 0)) &&
      (local_a0 = *(long **)(lVar9 + 0xd0), local_a0 != (long *)0x0)) && (local_98 != 0)) {
    FUN_01327a80(local_88,&local_a0);
    FUN_01328340(local_88,&local_a0);
    FUN_013285b0(local_88,&local_a0);
  }
  FUN_01384d80();
  FUN_01327524(0x32);
  FUN_01327770(0x32,param_1 + 0xfc);
  FUN_026e3530();
  lVar10 = *(long *)PTR_DAT_04bb2698;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar1 = (undefined8 *)(lVar10 + 8);
  if (lVar9 != 0) {
    puVar1 = (undefined8 *)(lVar9 + 0xa8);
  }
  FUN_007fe600(*puVar1);
  puVar3 = PTR_DAT_04bb4770;
  FUN_014b09c0(*(undefined8 *)PTR_DAT_04bb4770);
  lVar9 = *(long *)puVar3;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_026e346c:
    if (7 < *pbVar7) {
LAB_026e3478:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar10 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar10 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar2 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar7 = (byte *)(lVar10 + 0x471);
          }
        }
        bVar8 = *pbVar7;
        bVar4 = bVar8 < 8;
        if (!bVar4) {
          bVar8 = 0xff;
        }
        local_88[0][0] = bVar8;
        if (bVar4) goto LAB_026e34f8;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_026e346c;
      }
      goto LAB_026e3478;
    }
  }
  bVar8 = *pbVar7;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_88[0][0] = bVar8;
LAB_026e34f8:
  FUN_014afe60(lVar9,local_88,lVar9 + 0x40,lVar9 + 0x48);
  *(undefined1 *)(*(long *)PTR_DAT_04bb47e0 + 0x64c) = 0;
  return;
}

