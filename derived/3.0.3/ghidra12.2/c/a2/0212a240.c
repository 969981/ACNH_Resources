
void FUN_0212a240(short *param_1,byte *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (DAT_05574040 == 0) {
    return;
  }
  lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar6 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar6 + 0x276cd8);
  if (lVar11 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar6 + 0x276cd8) == 0) goto LAB_0212a304;
      plVar8 = *(long **)(*(long *)(lVar6 + 0x276cd8) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_68 = *(long *)(lVar6 + 0x276cb8);
      local_60 = *(undefined8 *)(lVar6 + 0x276cc0);
      uStack_58 = 0x3fd140;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
LAB_0212a304:
  puVar3 = PTR_DAT_04bb27d0;
  lVar11 = *(long *)(lVar6 + 0x276cb8);
  lVar2 = *(long *)(lVar6 + 0x276cc0);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (lVar13 == 0) {
    pbVar12 = &DAT_0548e140;
LAB_0212a370:
    if (*pbVar12 < 8) goto LAB_0212a3d4;
LAB_0212a37c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0212a3cc:
      pbVar12 = &DAT_0548e168;
      goto LAB_0212a3d4;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar13 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar12 = (byte *)(lVar13 + 0x471);
      }
    }
    bVar10 = *pbVar12;
    if (7 < bVar10) goto LAB_0212a3cc;
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0212a370;
      }
      goto LAB_0212a37c;
    }
LAB_0212a3d4:
    bVar10 = *pbVar12;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_68 = CONCAT71(local_68._1_7_,bVar10);
  uVar5 = FUN_02582fe0(&local_68);
  lVar13 = **(long **)puVar3;
  bVar10 = *(byte *)(lVar13 + 0x473);
  if ((long)(char)bVar10 != 0xffffffffffffffff) {
    pbVar12 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
    if (7 < bVar10) {
      pbVar12 = (byte *)(lVar13 + 0x48);
    }
    if ((*pbVar12 >> 3 & 1) != 0) {
      bVar4 = *(byte *)(lVar13 + 0x472) == bVar10;
      goto joined_r0x0212a434;
    }
  }
  bVar4 = true;
joined_r0x0212a434:
  if ((uVar5 < 8) && (bVar4)) {
    lVar11 = lVar2 + lVar11 + (ulong)uVar5 * 0x6c0;
    uVar14 = (long)(char)*param_2 & 0xffffffff;
    if (7 < *param_2) {
      uVar14 = 0;
    }
    uVar5 = (&DAT_05454114)[uVar14];
    if ((char)param_1[2] == '\0') {
      if (uVar5 < 8) {
        FUN_02751130(&LAB_003c6040 + (ulong)uVar5 * 0xd8 + lVar11 + 0x38,(long)*param_1,param_1[1]);
      }
    }
    else if (uVar5 < 8) {
      FUN_02750d70(&LAB_003c6040 + (ulong)uVar5 * 0xd8 + lVar11 + 0x38);
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x276cd8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x276cd8) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

