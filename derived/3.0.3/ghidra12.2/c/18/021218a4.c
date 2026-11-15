
void FUN_021218a4(long param_1,undefined8 param_2)

{
  long lVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_02119c7c();
  iVar4 = FUN_02119c7c(param_1,param_2);
  if (iVar4 == -1) {
    return;
  }
  if (iVar4 == -2) {
    uVar6 = *(uint *)(param_1 + 0x1cc);
    lVar13 = *(long *)PTR_DAT_04bb39b0;
    pbVar10 = &DAT_0548e140;
    if (lVar13 == 0) {
LAB_0212193c:
      if (*pbVar10 < 8) goto LAB_021219b4;
LAB_02121948:
      if (DAT_0537d558 == (long *)0x0) {
LAB_021219ac:
        pbVar10 = &DAT_0548e168;
        goto LAB_021219b4;
      }
      lVar13 = *DAT_0537d558;
      bVar12 = *(byte *)(lVar13 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar2 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar10 = (byte *)(lVar13 + 0x471);
        }
      }
      bVar12 = *pbVar10;
      bVar3 = 7 < bVar12;
      if (bVar3) {
        bVar12 = 0xff;
      }
      local_58 = CONCAT71(local_58._1_7_,bVar12);
      if (bVar3) goto LAB_021219ac;
    }
    else {
      pbVar10 = &DAT_0548e140;
      if (*(int *)(lVar13 + 0x15c) != 0) {
        pbVar10 = (byte *)(lVar13 + 0x158);
      }
      if (7 < *pbVar10) {
        if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_0212193c;
        }
        goto LAB_02121948;
      }
LAB_021219b4:
      bVar12 = *pbVar10;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_58 = CONCAT71(local_58._1_7_,bVar12);
    }
    uVar5 = FUN_02582fe0(&local_58);
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)iVar4 * 8);
    uVar6 = *(uint *)(lVar13 + 0x1c4);
    uVar5 = *(undefined4 *)(lVar13 + 0xf0);
  }
  if (DAT_04ccbb68 == 0) {
    return;
  }
  uVar14 = (ulong)uVar6;
  if (10 < uVar6) {
    uVar14 = 0;
  }
  lVar13 = *(long *)(DAT_04ccbb68 + uVar14 * 8);
  if (lVar13 == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar7 = FUN_026eec4c(DAT_05574040,uVar5);
  if (lVar7 == 0) {
    return;
  }
  if ((*(long **)(lVar7 + 0x2718) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x2718), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 ^ 1;
  }
  lVar1 = *(long *)(lVar7 + 0x2700) + *(long *)(lVar7 + 0x26f8);
  lVar11 = *(long *)(lVar13 + 0x21d8);
  if (lVar11 == 0) {
    FUN_027c1640(*(long *)(lVar13 + 0x21c0) + *(long *)(lVar13 + 0x21b8),lVar1);
    goto LAB_02121b04;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar14 = 0;
LAB_02121aa4:
    plVar9 = *(long **)(lVar11 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar13 + 0x21b8);
      uStack_50 = *(undefined8 *)(lVar13 + 0x21c0);
      local_48 = 0x2a8;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
  else {
    uVar14 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    lVar11 = *(long *)(lVar13 + 0x21d8);
    uVar14 = uVar14 & 0xffffffff;
    if (lVar11 != 0) goto LAB_02121aa4;
  }
  FUN_027c1640(*(long *)(lVar13 + 0x21c0) + *(long *)(lVar13 + 0x21b8),lVar1);
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x21d8) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x21d8) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_02121b04:
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x2718) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x2718) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

