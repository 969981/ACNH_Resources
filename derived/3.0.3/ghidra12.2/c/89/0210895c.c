
void FUN_0210895c(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
LAB_021089cc:
    lVar9 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar9 = 0;
      if (lVar6 != 0) {
        lVar9 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar10 == (undefined8 *)0x0) goto LAB_021089cc;
      lVar9 = 0;
      if ((long *)puVar10[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      }
    }
  }
  lVar6 = *(long *)(lVar9 + 0x1b9028);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar9 + 0x1b9028) == 0) goto LAB_02108a44;
      plVar8 = *(long **)(*(long *)(lVar9 + 0x1b9028) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_48 = *(long *)(lVar9 + 0x1b9008);
      local_40 = *(undefined8 *)(lVar9 + 0x1b9010);
      uStack_38 = 0x1ac;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_02108a44:
  lVar6 = *(long *)(lVar9 + 0x1b9010) + *(long *)(lVar9 + 0x1b9008);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_48 = param_1[7];
  uVar5 = FUN_02871140(lVar6,&local_48);
  pcVar1 = (char *)(lVar6 + 0x30) + uVar5;
  pcVar2 = pcVar1;
  if (5 < uVar5) {
    pcVar2 = (char *)(lVar6 + 0x30);
  }
  if ((uVar5 < 4) && (*pcVar2 == '\0')) {
    *pcVar1 = '\x01';
    lVar6 = lVar6 + (ulong)uVar5 * 0x38;
    uVar3 = *param_1;
    uVar11 = param_1[2];
    *(undefined8 *)(lVar6 + 0x40) = param_1[1];
    *(undefined8 *)(lVar6 + 0x48) = uVar11;
    *(undefined8 *)(lVar6 + 0x38) = uVar3;
    uVar3 = param_1[3];
    uVar11 = param_1[4];
    uVar4 = param_1[6];
    *(undefined8 *)(lVar6 + 0x60) = param_1[5];
    *(undefined8 *)(lVar6 + 0x68) = uVar4;
    *(undefined8 *)(lVar6 + 0x50) = uVar3;
    *(undefined8 *)(lVar6 + 0x58) = uVar11;
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x1b9028) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1b9028) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  return;
}

