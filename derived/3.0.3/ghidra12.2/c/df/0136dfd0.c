
bool FUN_0136dfd0(long param_1,ulong param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  byte local_68 [4];
  byte local_64 [4];
  
  lVar5 = nn::os::GetSystemTick();
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (lVar13 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_0136e060:
    if (*pbVar10 < 8) goto LAB_0136e0d8;
LAB_0136e06c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0136e0d0:
      pbVar10 = &DAT_0548e168;
      goto LAB_0136e0d8;
    }
    lVar13 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar13 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar13 + 0x471);
      }
    }
    local_68[0] = *pbVar10;
    if (7 < local_68[0]) goto LAB_0136e0d0;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0136e060;
      }
      goto LAB_0136e06c;
    }
LAB_0136e0d8:
    local_68[0] = *pbVar10;
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
  }
  local_64[0] = local_68[0];
  if (7 < local_68[0]) {
    local_64[0] = 0xff;
  }
  lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
  if (lVar13 == 0) {
    uVar14 = 0;
    goto LAB_0136e1b4;
  }
  lVar15 = lVar13 + 0x194b0;
  if (*(long *)(lVar13 + 0x194b8) == 0) {
    lVar15 = *(long *)(DAT_05574040 + 0x20);
    plVar11 = *(long **)(lVar15 + 0x178);
    if (plVar11 != (long *)0x0) goto LAB_0136e154;
LAB_0136e170:
    uVar4 = 1;
  }
  else {
    plVar11 = *(long **)(lVar13 + 0x19628);
    if (plVar11 == (long *)0x0) goto LAB_0136e170;
LAB_0136e154:
    if ((undefined8 *)*plVar11 == (undefined8 *)0x0) goto LAB_0136e170;
    uVar4 = (*(code *)**(undefined8 **)*plVar11)();
    uVar4 = uVar4 ^ 1;
  }
  uVar14 = *(uint *)(*(long *)(lVar15 + 0x160) + *(long *)(lVar15 + 0x158) + 72000);
  if (8999 < uVar14) {
    uVar14 = 9000;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar15 + 0x178) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar15 + 0x178) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_0136e1b4:
  puVar3 = PTR_DAT_04bb37e0;
  lVar13 = param_1 + 0x90;
  lVar15 = *(long *)PTR_DAT_04bb29d0;
  if ((param_2 & 1) == 0) {
    do {
      if ((int)uVar14 <= *(int *)(param_1 + 0x10)) break;
      uVar7 = FUN_0267ce80(local_68);
      uVar8 = FUN_01372490(lVar13,uVar7);
      if ((uVar8 & 1) != 0) {
        FUN_0267c820(local_68,*(undefined4 *)(param_1 + 0x10),puVar3,0);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      lVar9 = nn::os::GetSystemTick();
      lVar9 = lVar9 - lVar5;
      if (lVar9 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
        lVar12 = 0;
        if (lVar15 != 0) {
          lVar12 = (lVar9 * 1000000) / lVar15;
        }
      }
      else if (lVar9 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar12 = 0;
        if (lVar15 != 0) {
          lVar12 = (lVar9 * 1000) / lVar15;
        }
        lVar12 = lVar12 * 1000;
      }
      else {
        lVar12 = 0;
        if (lVar15 != 0) {
          lVar12 = lVar9 / lVar15;
        }
        lVar12 = lVar12 * 1000000;
      }
    } while (lVar12 < 0xfa1);
  }
  else {
    do {
      if ((int)uVar14 <= *(int *)(param_1 + 0x10)) break;
      uVar7 = FUN_0267ce80(local_68);
      uVar8 = FUN_01372490(lVar13,uVar7);
      if ((uVar8 & 1) != 0) {
        FUN_01372240(lVar13,uVar7);
        FUN_0267c820(local_68,*(undefined4 *)(param_1 + 0x10),puVar3,0);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      lVar9 = nn::os::GetSystemTick();
      lVar9 = lVar9 - lVar5;
      if (lVar9 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
        lVar12 = 0;
        if (lVar15 != 0) {
          lVar12 = (lVar9 * 1000000) / lVar15;
        }
      }
      else if (lVar9 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar12 = 0;
        if (lVar15 != 0) {
          lVar12 = (lVar9 * 1000) / lVar15;
        }
        lVar12 = lVar12 * 1000;
      }
      else {
        lVar12 = 0;
        if (lVar15 != 0) {
          lVar12 = lVar9 / lVar15;
        }
        lVar12 = lVar12 * 1000000;
      }
    } while (lVar12 < 0xfa1);
  }
  return (int)uVar14 <= *(int *)(param_1 + 0x10);
}

