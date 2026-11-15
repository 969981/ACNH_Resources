
undefined8 FUN_02326130(byte *param_1,short *param_2,ulong param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined4 local_74;
  undefined4 uStack_70;
  byte local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_6c[0] = *param_1;
  if (7 < local_6c[0]) {
    return 0;
  }
  lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
  puVar1 = PTR_DAT_04bb43c0;
  if (lVar5 == 0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  bVar2 = false;
  if (*(long *)puVar1 == 0) {
LAB_023261d8:
    if (!bVar2) goto LAB_023261e8;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (uVar3 < *(uint *)(lVar11 + 0x1d8)) {
      bVar2 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0;
      goto LAB_023261d8;
    }
LAB_023261e8:
    if (*param_2 != -2) {
      return 0;
    }
  }
  if ((*(long **)(lVar5 + 0x1aa0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1aa0), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  puVar8 = (undefined4 *)FUN_02816430(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80));
  local_74 = *puVar8;
  uStack_70 = puVar8[1];
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x1aa0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1aa0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar11 = *(long *)puVar1;
  uVar3 = FUN_0277d6c4(&local_74);
  if (*(long *)puVar1 == 0) {
    return 0;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  plVar9 = *(long **)(lVar5 + 0x1aa0);
  if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
    bVar2 = *(char *)(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80) + 0x8b0) != '\0';
LAB_02326334:
    if (plVar9 == (long *)0x0) goto LAB_02326384;
LAB_02326338:
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_02326384;
    uVar7 = (*(code *)**(undefined8 **)*plVar9)();
    iVar10 = (int)*(char *)(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80) + 0x8b1);
    plVar9 = *(long **)(lVar5 + 0x1aa0);
    if ((uVar7 & 1) == 0) goto LAB_02326394;
    if (plVar9 != (long *)0x0) {
      if ((undefined8 *)plVar9[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar9[1])();
        plVar9 = *(long **)(lVar5 + 0x1aa0);
        goto LAB_02326394;
      }
      goto LAB_02326398;
    }
LAB_023263b4:
    uVar3 = 1;
  }
  else {
    uVar7 = (*(code *)**(undefined8 **)*plVar9)();
    plVar9 = *(long **)(lVar5 + 0x1aa0);
    bVar2 = *(char *)(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80) + 0x8b0) != '\0';
    if ((uVar7 & 1) == 0) goto LAB_02326334;
    if (plVar9 != (long *)0x0) {
      if ((undefined8 *)plVar9[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar9[1])();
        plVar9 = *(long **)(lVar5 + 0x1aa0);
        goto LAB_02326334;
      }
      goto LAB_02326338;
    }
LAB_02326384:
    iVar10 = (int)*(char *)(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80) + 0x8b1);
LAB_02326394:
    if (plVar9 == (long *)0x0) goto LAB_023263b4;
LAB_02326398:
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_023263b4;
    uVar3 = (*(code *)**(undefined8 **)*plVar9)();
    uVar3 = uVar3 ^ 1;
  }
  uVar4 = FUN_028169a0(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80));
  lVar11 = *(long *)(lVar5 + 0x1aa0);
  if ((uVar3 & 1) == 0) {
    if (lVar11 == 0) goto LAB_02326418;
    if (*(undefined8 **)(lVar11 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar11 + 8))();
      lVar11 = *(long *)(lVar5 + 0x1aa0);
      goto LAB_023263f0;
    }
  }
  else {
LAB_023263f0:
    if (lVar11 == 0) {
LAB_02326418:
      FUN_028166e0(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80),param_2,bVar2,iVar10);
      goto LAB_023264a4;
    }
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar7 = 0;
LAB_0232643c:
    plVar9 = *(long **)(lVar11 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar5 + 0x1a80);
      uStack_60 = *(undefined8 *)(lVar5 + 0x1a88);
      local_58 = 0x8b8;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_68);
    }
  }
  else {
    uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    lVar11 = *(long *)(lVar5 + 0x1aa0);
    uVar7 = uVar7 & 0xffffffff;
    if (lVar11 != 0) goto LAB_0232643c;
  }
  FUN_028166e0(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80),param_2,bVar2,iVar10);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x1aa0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1aa0) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_023264a4:
  if ((param_3 & 1) == 0) {
    return 1;
  }
  if (7 < *param_1) {
    return 1;
  }
  uVar3 = FUN_02582d8c(param_1,1);
  if (7 < uVar3) {
    return 1;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0') {
    if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0') {
      return 1;
    }
    if (0x27 < uVar4) {
      return 1;
    }
    if (*param_2 == -2) {
      FUN_02675b70();
    }
    else {
      FUN_02674700(param_1,uVar4,param_2,2,0);
    }
  }
  return 1;
}

