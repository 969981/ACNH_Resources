
bool FUN_0137616c(int *param_1,ulong param_2,int *param_3,int *param_4,uint *param_5)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  byte local_48 [4];
  byte local_44 [4];
  
  iVar10 = param_1[1];
  if ((param_2 & 1) == 0) {
    iVar10 = 0;
  }
  iVar10 = iVar10 + *param_1;
  if (*(long *)(param_1 + 2) != 0) {
    iVar3 = FUN_01372630();
    iVar10 = iVar3 + iVar10;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_01376210:
    if (*pbVar6 < 8) goto LAB_01376288;
LAB_0137621c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01376280:
      pbVar6 = &DAT_0548e168;
      goto LAB_01376288;
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
    local_48[0] = *pbVar6;
    if (7 < local_48[0]) goto LAB_01376280;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01376210;
      }
      goto LAB_0137621c;
    }
LAB_01376288:
    local_48[0] = *pbVar6;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
  }
  local_44[0] = local_48[0];
  if (7 < local_48[0]) {
    local_44[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  if (lVar8 == 0) {
    uVar9 = 0;
    goto LAB_01376364;
  }
  lVar11 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar7 = *(long **)(lVar11 + 0x178);
    if (plVar7 != (long *)0x0) goto LAB_01376304;
LAB_01376320:
    uVar4 = 1;
  }
  else {
    plVar7 = *(long **)(lVar8 + 0x19628);
    if (plVar7 == (long *)0x0) goto LAB_01376320;
LAB_01376304:
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) goto LAB_01376320;
    uVar4 = (*(code *)**(undefined8 **)*plVar7)();
    uVar4 = uVar4 ^ 1;
  }
  uVar9 = *(uint *)(*(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158) + 72000);
  if (8999 < uVar9) {
    uVar9 = 9000;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar11 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_01376364:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar10;
  }
  if (param_4 != (int *)0x0) {
    iVar3 = FUN_0267c4d0(local_48);
    *param_4 = iVar10 - iVar3;
  }
  uVar9 = iVar10 - uVar9;
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  }
  return (int)uVar9 < 1;
}

