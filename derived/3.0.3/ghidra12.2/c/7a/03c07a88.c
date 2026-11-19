
undefined8 FUN_03c07a88(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04bcb7d8;
  plVar11 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11);
  if (((uVar5 & 1) == 0) && (uVar5 = (**(code **)(*plVar11 + 0x18))(plVar11), (uVar5 & 1) == 0)) {
    return 0;
  }
  uVar8 = *(undefined8 *)((long)plVar11 + 0xc);
  uVar1 = *(undefined4 *)((long)plVar11 + 0x14);
  lVar9 = plVar11[3];
  lVar12 = plVar11[4];
  puVar10 = (undefined4 *)(param_1 + 0xa8);
  *puVar10 = (int)plVar11[1];
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined8 *)(param_1 + 0xac) = uVar8;
  *(long *)(param_1 + 0xb8) = lVar9;
  *(int *)(param_1 + 0xc0) = (int)lVar12;
  *(byte *)(param_1 + 0x139) = param_2 & 1;
  bVar3 = (**(code **)(*plVar11 + 0x18))(plVar11);
  *(byte *)(param_1 + 0x13b) = bVar3 & 1;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  iVar4 = nn::err::ErrorResultVariant::GetState();
  if (iVar4 != 0) {
    uVar7 = 1;
    if ((0x13 < *(uint *)(param_1 + 0xbc)) ||
       ((1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) & 0xe0200U) == 0)) goto LAB_03c07b74;
  }
  uVar7 = 0;
LAB_03c07b74:
  puVar6 = *(undefined8 **)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x138) = uVar7;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,puVar10);
  }
  lVar12 = *(long *)(param_1 + 0x60);
  plVar11 = *(long **)(*(long *)puVar2 + 0x30);
  uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11);
  if (((uVar5 & 1) != 0) || (uVar5 = (**(code **)(*plVar11 + 0x18))(plVar11), (uVar5 & 1) != 0)) {
    iVar4 = *(int *)((long)plVar11 + 0x1c);
    bVar3 = (**(code **)(*plVar11 + 0x18))(plVar11);
    *(byte *)(lVar12 + 0x5c) = bVar3 & 1;
    *(bool *)(lVar12 + 0x5d) = iVar4 == 0x15;
    uVar8 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar12 + 0x50) = uVar8;
    FUN_03ebb160(lVar12 + 8,2);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x78);
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar5 = (**(code **)*puVar6)(puVar6,puVar10), (uVar5 & 1) == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 5;
  }
  FUN_03ebb160(param_1 + 0x18,uVar8);
  return 1;
}

