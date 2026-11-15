
void FUN_021b3934(long param_1,byte *param_2)

{
  short *psVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  undefined *local_68;
  char *local_60;
  undefined8 uStack_58;
  
  if (7 < (ulong)*param_2) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x55dcc + (ulong)*param_2 * 4);
  if ((int)uVar6 < 0) {
    return;
  }
  psVar1 = (short *)(param_1 + 0x55d8c) + (ulong)uVar6 * 4;
  if (7 < uVar6) {
    psVar1 = (short *)(param_1 + 0x55d8c);
  }
  if (*psVar1 == 0) {
    return;
  }
  lVar7 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((DAT_05574040 == 0) ||
     (lVar8 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar8 == 0))
  goto LAB_021b3c00;
  lVar13 = *(long *)(lVar8 + 0x276cd8);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar8 + 0x276cd8);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar13 == 0) goto LAB_021b3a3c;
    }
    plVar10 = *(long **)(lVar13 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_68 = *(undefined **)(lVar8 + 0x276cb8);
      local_60 = *(char **)(lVar8 + 0x276cc0);
      uStack_58 = 0x3fd140;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
LAB_021b3a3c:
  puVar4 = PTR_DAT_04bb27d0;
  lVar13 = *(long *)(lVar8 + 0x276cb8);
  lVar3 = *(long *)(lVar8 + 0x276cc0);
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  if (lVar15 == 0) {
    pbVar14 = &DAT_0548e140;
LAB_021b3aa8:
    if (*pbVar14 < 8) goto LAB_021b3b0c;
LAB_021b3ab4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_021b3b04:
      pbVar14 = &DAT_0548e168;
      goto LAB_021b3b0c;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar12 = *(byte *)(lVar15 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar2 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar14 = (byte *)(lVar15 + 0x471);
      }
    }
    bVar12 = *pbVar14;
    if (7 < bVar12) goto LAB_021b3b04;
  }
  else {
    pbVar14 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar14 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_021b3aa8;
      }
      goto LAB_021b3ab4;
    }
LAB_021b3b0c:
    bVar12 = *pbVar14;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
  }
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar12);
  uVar6 = FUN_02582fe0(&local_68);
  lVar15 = **(long **)puVar4;
  bVar12 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar12 == 0xffffffffffffffff) {
LAB_021b3b64:
    bVar5 = true;
  }
  else {
    pbVar14 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x80;
    if (7 < bVar12) {
      pbVar14 = (byte *)(lVar15 + 0x48);
    }
    if ((*pbVar14 >> 3 & 1) == 0) goto LAB_021b3b64;
    bVar5 = *(byte *)(lVar15 + 0x472) == bVar12;
  }
  if ((uVar6 < 8) && (bVar5)) {
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "PlayTime";
    FUN_027f27fc(&LAB_003c6040 + lVar3 + lVar13 + (ulong)uVar6 * 0x6c0,param_2,&local_68,
                 (int)(SUB168(SEXT816(lVar7) * ZEXT816(0x8888888888888889),8) >> 5) -
                 (SUB164(SEXT816(lVar7) * ZEXT816(0x8888888888888889),0xc) >> 0x1f));
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x276cd8) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x276cd8) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
LAB_021b3c00:
  uVar9 = (long)(char)*param_2 & 0xffffffff;
  if (7 < *param_2) {
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0x55dcc + uVar9 * 4) = 0xffffffff;
  return;
}

