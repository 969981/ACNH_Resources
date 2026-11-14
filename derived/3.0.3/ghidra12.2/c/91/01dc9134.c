
void FUN_01dc9134(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined *local_40;
  char *pcStack_38;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))(),
     lVar7 == 0)) {
    uVar11 = 0;
  }
  else if ((*(long **)(lVar7 + 0x276f40) == (long *)0x0) ||
          (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x276f40), puVar8 == (undefined8 *)0x0)) {
    uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x276f28) + *(long *)(lVar7 + 0x276f20));
  }
  else {
    uVar9 = (**(code **)*puVar8)();
    uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x276f28) + *(long *)(lVar7 + 0x276f20));
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x276f40) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x276f40) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  *(undefined8 *)(param_1 + 0x260) = uVar11;
  uVar11 = FUN_02658fd0();
  *(undefined8 *)(param_1 + 0x268) = uVar11;
  uVar6 = FUN_02b60520();
  puVar3 = PTR_DAT_04bb30a0;
  *(undefined4 *)(param_1 + 0x270) = uVar6;
  uVar2 = *(uint *)(*(long *)puVar3 + 0x65204);
  if (1 < uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x274) = uVar2;
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_01dc926c:
    if (7 < *pbVar10) {
LAB_01dc9278:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar5 = *pbVar10;
        bVar4 = bVar5 < 8;
        if (!bVar4) {
          bVar5 = 0xff;
        }
        local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar5);
        if (bVar4) goto LAB_01dc92f8;
      }
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01dc926c;
      }
      goto LAB_01dc9278;
    }
  }
  bVar5 = *pbVar10;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar5);
LAB_01dc92f8:
  bVar5 = FUN_02b5f280(&local_40);
  local_40 = PTR_DAT_04bb2020;
  *(byte *)(param_1 + 0x278) = bVar5 & 1;
  local_40 = local_40 + 0x10;
  pcStack_38 = "EnableMyDream";
  bVar5 = FUN_0273f0a0(&local_40);
  *(byte *)(param_1 + 0x279) = bVar5 & 1;
  return;
}

