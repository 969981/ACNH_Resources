
void FUN_00812ef0(long param_1,char *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte local_28 [4];
  byte local_24 [4];
  
  if (((*param_2 == '\0') && (DAT_05574040 != 0)) &&
     (lVar8 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar8 != 0))
  {
    if ((*(long **)(lVar8 + 0x276e98) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x276e98), puVar4 == (undefined8 *)0x0)) {
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x276e80) + *(long *)(lVar8 + 0x276e78));
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x276e80) + *(long *)(lVar8 + 0x276e78));
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x276e98) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x276e98) + 8), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)();
      }
    }
  }
  else {
    uVar9 = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  puVar4 = DAT_04ccc690;
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (*(char *)(DAT_04ccc690 + 1) == '\0') {
    uVar9 = nn::oe::GetProgramTotalActiveTime();
    *puVar4 = uVar9;
    *(undefined1 *)(puVar4 + 1) = 1;
  }
  else {
    uVar9 = *DAT_04ccc690;
  }
  *puVar10 = uVar9;
  if (param_2[1] == '\0') {
    if (DAT_04cd19d8 == 0) {
      pbVar6 = &DAT_0548e140;
LAB_008131f0:
      if (*pbVar6 < 8) goto LAB_00813268;
LAB_008131fc:
      if (DAT_0537d558 == (long *)0x0) {
LAB_00813260:
        pbVar6 = &DAT_0548e168;
        goto LAB_00813268;
      }
      lVar8 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar8 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar8 + 0x471);
        }
      }
      local_24[0] = *pbVar6;
      if (7 < local_24[0]) goto LAB_00813260;
    }
    else {
      pbVar6 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_008131f0;
        }
        goto LAB_008131fc;
      }
LAB_00813268:
      local_24[0] = *pbVar6;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
    }
    lVar8 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar8 == 0) goto LAB_00812fd4;
    lVar7 = lVar8 + 0x194b0;
    if (*(long *)(lVar8 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar7 + 0x2a6f0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x2a6f0), puVar4 == (undefined8 *)0x0)) {
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x2a6d8) + *(long *)(lVar7 + 0x2a6d0));
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x2a6d8) + *(long *)(lVar7 + 0x2a6d0));
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2a6f0) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2a6f0) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  else {
LAB_00812fd4:
    uVar9 = 0;
  }
  puVar4 = DAT_04ccc690;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  if (*(char *)(puVar4 + 1) == '\0') {
    uVar9 = nn::oe::GetProgramTotalActiveTime();
    *puVar4 = uVar9;
    *(undefined1 *)(puVar4 + 1) = 1;
  }
  else {
    uVar9 = *puVar4;
  }
  *puVar10 = uVar9;
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_008130b0:
    if (7 < *pbVar6) {
LAB_008130bc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_28[0] = *pbVar6;
        if (local_28[0] < 8) goto LAB_0081313c;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008130b0;
      }
      goto LAB_008130bc;
    }
  }
  local_28[0] = *pbVar6;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
LAB_0081313c:
  FUN_02582a24(local_28);
  uVar3 = FUN_02582d8c(local_28,1);
  if (((uVar3 < 8) &&
      (lVar8 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0, *(char *)(lVar8 + 0x13d4) != '\0')
      ) && (*(int *)(lVar8 + 0x13d0) == 0)) {
    uVar3 = (uint)*(byte *)(lVar8 + 0x13d5);
  }
  else {
    uVar3 = 0xffffffff;
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x48);
    do {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x40) + lVar8 * 8);
      lVar8 = lVar8 + 1;
      *puVar10 = puVar4;
      *(undefined8 **)(param_1 + 0x48) = puVar10;
      puVar4 = puVar10;
    } while (lVar8 < *(int *)(param_1 + 0x38));
    uVar3 = *(uint *)(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00813330(param_1,uVar3);
  return;
}

