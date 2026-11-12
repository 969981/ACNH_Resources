
void FUN_007e1a80(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_28;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar6 == 0) {
    return;
  }
  if ((*(long *)(lVar6 + 0x184e0) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x184e0) + 0x10), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
    lVar9 = *(long *)puVar3;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
    lVar9 = *(long *)puVar3;
  }
  if (lVar9 != 0) {
    puVar7 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar9 == 0) goto LAB_007e1c7c;
      lVar9 = lVar9 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar9 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar9 == 0)) goto LAB_007e1c7c;
    if ((*(long **)(lVar9 + 0x1c24e8) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x1c24e8), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    local_24 = 0;
    local_28 = (uint)*(ushort *)(*(long *)(lVar9 + 0x1c24d0) + *(long *)(lVar9 + 0x1c24c8) + 0x900);
    FUN_0277d4ac(&local_28);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x1c24e8) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x1c24e8) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((*(long **)(lVar9 + 0xe7290) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0xe7290), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
      lVar10 = *(long *)(lVar6 + 0x184e0);
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
      lVar10 = *(long *)(lVar6 + 0x184e0);
    }
    if ((lVar10 != 0) && (plVar8 = *(long **)(lVar10 + 0x20), plVar8 != (long *)0x0)) {
      local_58 = *(long *)(lVar6 + 0x184c0);
      local_50 = *(undefined8 *)(lVar6 + 0x184c8);
      uStack_48 = 0x234d0;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
    puVar7 = (undefined8 *)(*(long *)(lVar9 + 0xe7278) + *(long *)(lVar9 + 0xe7270));
    lVar10 = *(long *)(lVar6 + 0x184c8) + *(long *)(lVar6 + 0x184c0);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar11 = puVar7[2];
    *(undefined4 *)(lVar10 + 0x23038) = *(undefined4 *)(puVar7 + 3);
    *(undefined8 *)(lVar10 + 0x23028) = uVar2;
    *(undefined8 *)(lVar10 + 0x23030) = uVar11;
    *(undefined8 *)(lVar10 + 0x23020) = uVar1;
    *(uint *)(lVar10 + 0x2305c) = local_28;
    *(undefined4 *)(lVar10 + 0x23060) = local_24;
    FUN_02842f30();
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0xe7290) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0xe7290) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
LAB_007e1c7c:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x184e0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x184e0) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

