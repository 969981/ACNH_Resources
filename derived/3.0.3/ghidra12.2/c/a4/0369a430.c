
void FUN_0369a430(int param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  ushort uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 local_7d8;
  undefined4 local_7d4 [476];
  ushort local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  ushort local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  int local_54;
  
  local_54 = param_1;
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_0369a4b0:
    if (*pbVar7 < 8) goto LAB_0369a528;
LAB_0369a4bc:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0369a520:
      pbVar7 = &DAT_0548e168;
      goto LAB_0369a528;
    }
    lVar9 = *DAT_0537d558;
    bVar8 = *(byte *)(lVar9 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x471);
      }
    }
    bVar8 = *pbVar7;
    bVar4 = 7 < bVar8;
    if (bVar4) {
      bVar8 = 0xff;
    }
    local_7d8 = CONCAT31(local_7d8._1_3_,bVar8);
    if (bVar4) goto LAB_0369a520;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0369a4b0;
      }
      goto LAB_0369a4bc;
    }
LAB_0369a528:
    bVar2 = *pbVar7;
    bVar8 = bVar2;
    if (7 < bVar2) {
      bVar8 = 0xff;
    }
    local_7d8 = CONCAT31(local_7d8._1_3_,bVar8);
    if (7 < bVar2) goto LAB_0369a6dc;
  }
  uVar5 = FUN_02582d8c(&local_7d8,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if ((((7 < uVar5) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0')) ||
     ((uVar5 = FUN_02582d8c(&local_7d8,1), 7 < uVar5 ||
      (*(char *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')))) goto LAB_0369a6dc;
  lVar9 = *(long *)puVar3 + (ulong)uVar5 * 0x13f0;
  local_7d8 = 1;
  FUN_007ef010(local_7d4,PTR_DAT_04bb3170);
  *(uint *)(lVar9 + 0x13a0) = local_7d8;
  *(undefined2 *)(lVar9 + 0x13a6) = 0;
  *(undefined2 *)(lVar9 + 0x13a4) = (undefined2)local_7d4[0];
  local_5c = DAT_05586008;
  local_5a = DAT_0558600a;
  local_59 = DAT_0558600b;
  local_58 = DAT_0558600c;
  uVar10 = DAT_05586008;
  uVar11 = DAT_0558600a;
  uVar12 = DAT_0558600b;
  uVar13 = DAT_0558600c;
  if (*(long *)PTR_DAT_04bb27f8 != 0) {
    FUN_0369a770(&local_7d8,*(long *)PTR_DAT_04bb27f8 + 0x3b0);
    uVar10 = (ushort)local_7d8;
    uVar11 = local_7d8._2_1_;
    uVar12 = local_7d8._3_1_;
    uVar13 = local_7d4[0];
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  local_5c = uVar10;
  local_5a = uVar11;
  local_59 = uVar12;
  local_58 = uVar13;
  uVar5 = FUN_0277d6c4(&local_5c);
  if (*(long *)puVar3 == 0) {
LAB_0369a6a8:
    FUN_02686600(&local_7d8);
    FUN_0369a770(&local_64,&local_7d8);
    uVar10 = local_64;
    uVar11 = local_62;
    uVar12 = local_61;
    uVar13 = local_60;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar5) goto LAB_0369a6a8;
    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_0369a6a8;
  }
  *(ushort *)(lVar9 + 0x13a8) = uVar10;
  *(undefined1 *)(lVar9 + 0x13aa) = uVar11;
  *(undefined1 *)(lVar9 + 0x13ab) = uVar12;
  *(undefined4 *)(lVar9 + 0x13ac) = uVar13;
LAB_0369a6dc:
  if (local_54 == 1) {
    FUN_02687700();
  }
  puVar3 = PTR_DAT_04bb30a0;
  *(undefined4 *)(*(long *)PTR_DAT_04bb30a0 + 0x65446) = 0x1ffffff;
  if (local_54 == 1) {
    local_7d8 = local_7d8 & 0xffffff00;
    local_5c = local_5c & 0xff00;
    uVar6 = FUN_037848b0(&local_7d8,&local_5c);
    if ((uVar6 & 1) != 0) {
      lVar9 = *(long *)puVar3;
      *(undefined1 *)(lVar9 + 0x65446) = (undefined1)local_7d8;
      *(undefined1 *)(lVar9 + 0x65447) = (undefined1)local_5c;
      *(undefined2 *)(lVar9 + 0x65448) = 0x100;
    }
  }
  return;
}

