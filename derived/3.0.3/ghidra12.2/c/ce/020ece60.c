
void FUN_020ece60(char *param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_44 [4];
  
  local_44[0] = param_1[1];
  cVar5 = *param_1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  uVar7 = FUN_02669430(local_44);
  if ((uVar7 & 1) == 0) {
    bVar13 = param_1[1];
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_78 = CONCAT71(local_78._1_7_,bVar13);
    lVar8 = FUN_025830c0(DAT_055021a0,&local_78,1);
    if (lVar8 == 0) {
      return;
    }
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 ^ 1;
    }
    lVar10 = FUN_0265cc60((int)cVar5,*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0xc154);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    if (lVar10 == 0) {
      return;
    }
    lVar8 = *(long *)(lVar10 + 0x28);
    if (lVar8 == 0) {
      uVar7 = 0;
    }
    else {
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar10 + 0x28);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar8 == 0) goto LAB_020ed12c;
      }
      plVar11 = *(long **)(lVar8 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_78 = *(undefined8 *)(lVar10 + 8);
        uStack_70 = *(undefined8 *)(lVar10 + 0x10);
        local_68 = 0x158;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
    }
LAB_020ed12c:
    uVar4 = *(ushort *)(param_1 + 2);
    bVar13 = param_1[4];
    bVar3 = param_1[5];
    lVar2 = *(long *)(lVar10 + 8);
    lVar8 = *(long *)(lVar10 + 0x10);
    nn::time::IsValidDate((uint)uVar4,(uint)bVar13,(uint)bVar3);
    uVar14 = (uint)uVar4;
    uVar15 = (uint)bVar13;
    uVar16 = (uint)bVar3;
    uVar12 = nn::time::IsValidDate((uint)uVar4,(uint)bVar13,(uint)bVar3);
    uVar6 = uVar14;
    if ((uVar12 & 1) == 0) {
      uVar6 = 2000;
    }
    uVar12 = nn::time::IsValidDate(uVar14,uVar15,uVar16);
    uVar1 = uVar15;
    if ((uVar12 & 1) == 0) {
      uVar1 = 1;
    }
    uVar12 = nn::time::IsValidDate(uVar14,uVar15,uVar16);
    if ((uVar12 & 1) == 0) {
      uVar16 = 1;
    }
    uVar12 = nn::time::IsValidDate(uVar6,uVar1,uVar16);
    if ((uVar12 & 1) != 0) {
      lVar8 = lVar8 + lVar2;
      *(short *)(lVar8 + 0x138) = (short)uVar6;
      *(char *)(lVar8 + 0x13a) = (char)uVar1;
      *(char *)(lVar8 + 0x13b) = (char)uVar16;
    }
    goto LAB_020ed1bc;
  }
  bVar13 = param_1[1];
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar13);
  lVar8 = FUN_025830c0(DAT_055021a0,&local_78,1);
  if (lVar8 == 0) {
    return;
  }
  if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar9)();
    uVar6 = uVar6 ^ 1;
  }
  lVar10 = FUN_0265ca50((int)cVar5,*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0xc154);
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if (lVar10 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar10 + 0x28);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar10 + 0x28);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar8 == 0) goto LAB_020ed06c;
    }
    plVar11 = *(long **)(lVar8 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar10 + 8);
      uStack_70 = *(undefined8 *)(lVar10 + 0x10);
      local_68 = 0x5f0;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
    }
  }
LAB_020ed06c:
  uVar4 = *(ushort *)(param_1 + 2);
  bVar13 = param_1[4];
  bVar3 = param_1[5];
  lVar2 = *(long *)(lVar10 + 8);
  lVar8 = *(long *)(lVar10 + 0x10);
  nn::time::IsValidDate((uint)uVar4,(uint)bVar13,(uint)bVar3);
  uVar14 = (uint)uVar4;
  uVar15 = (uint)bVar13;
  uVar16 = (uint)bVar3;
  uVar12 = nn::time::IsValidDate((uint)uVar4,(uint)bVar13,(uint)bVar3);
  uVar6 = uVar14;
  if ((uVar12 & 1) == 0) {
    uVar6 = 2000;
  }
  uVar12 = nn::time::IsValidDate(uVar14,uVar15,uVar16);
  uVar1 = uVar15;
  if ((uVar12 & 1) == 0) {
    uVar1 = 1;
  }
  uVar12 = nn::time::IsValidDate(uVar14,uVar15,uVar16);
  if ((uVar12 & 1) == 0) {
    uVar16 = 1;
  }
  uVar12 = nn::time::IsValidDate(uVar6,uVar1,uVar16);
  if ((uVar12 & 1) != 0) {
    lVar8 = lVar8 + lVar2;
    *(short *)(lVar8 + 0x5c0) = (short)uVar6;
    *(char *)(lVar8 + 0x5c2) = (char)uVar1;
    *(char *)(lVar8 + 0x5c3) = (char)uVar16;
  }
LAB_020ed1bc:
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

