
/* WARNING: Removing unreachable block (ram,0x026e3750) */

void FUN_026e36d0(long param_1)

{
  uint *puVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  undefined1 uStack_31;
  undefined1 local_30 [16];
  undefined1 *local_8;
  
  local_30._0_4_ = local_30._0_4_ & 0xffff0000;
  local_30._4_4_ = 1;
  FUN_01384940(local_30);
  FUN_01327770(0x32,param_1 + 0xfc);
  local_30 = FUN_02642d30();
  uVar3 = local_30._8_8_ & 0xffffffff;
  if (uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_8 = &uStack_31;
  (*(code *)(&PTR_LAB_04a893d0)[uVar3])(&local_8,local_30);
  local_30._0_4_ = 0x32;
  FUN_01388630();
  FUN_01388cf0(0x32);
  FUN_026e3530();
  FUN_026e38f0();
  FUN_014b09c0(DAT_051e6d68);
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_026e37f0:
    if (7 < *pbVar4) {
LAB_026e37fc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar6 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar5 = *pbVar4;
        bVar2 = bVar5 < 8;
        if (!bVar2) {
          bVar5 = 0xff;
        }
        local_30[0] = bVar5;
        if (bVar2) goto LAB_026e387c;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026e37f0;
      }
      goto LAB_026e37fc;
    }
  }
  bVar5 = *pbVar4;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_30[0] = bVar5;
LAB_026e387c:
  FUN_014afe60(DAT_051e6d68,local_30,DAT_051e6d68 + 0x40,DAT_051e6d68 + 0x48);
  FUN_014b0df0(DAT_051e6d68);
  lVar6 = *(long *)PTR_DAT_04bb4c80;
  FUN_014b4dd0(lVar6 + 0x2868,0x32,0xffffffff,10,10);
  FUN_014b3e18(lVar6 + 0x2868);
  *(undefined1 *)(DAT_052cc470 + 0x64c) = 0;
  return;
}

