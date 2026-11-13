
void FUN_00d8b1e0(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_24 [4];
  
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  local_24[0] = *pbVar1;
  uVar8 = *(undefined8 *)(*(long *)PTR_DAT_04bb7bc0 + 0x2e8);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar3 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar3 == 0) goto LAB_00d8b394;
  plVar6 = (long *)(lVar3 + 0x18418);
  lVar7 = *(long *)(lVar3 + 0x18438);
  if (lVar7 == 0) {
    *(undefined8 *)(*(long *)(lVar3 + 0x18420) + *plVar6 + 8) = uVar8;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 1;
      plVar4 = *(long **)(lVar7 + 0x20);
joined_r0x00d8b3b8:
      if (plVar4 != (long *)0x0) {
        local_58 = *plVar6;
        local_50 = *(undefined8 *)(lVar3 + 0x18420);
        uStack_48 = 0x10;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar2 = uVar2 ^ 1;
      if (*(long *)(lVar3 + 0x18438) != 0) {
        plVar4 = *(long **)(*(long *)(lVar3 + 0x18438) + 0x20);
        goto joined_r0x00d8b3b8;
      }
    }
    *(undefined8 *)(*(long *)(lVar3 + 0x18420) + *plVar6 + 8) = uVar8;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x18438) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x18438) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  lVar7 = *(long *)(lVar3 + 0x184e0);
  if (lVar7 == 0) {
    *(undefined8 *)(*(long *)(lVar3 + 0x184c8) + *(long *)(lVar3 + 0x184c0) + 0x23110) = uVar8;
    goto LAB_00d8b394;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar6 = *(long **)(lVar7 + 0x20);
joined_r0x00d8b3c8:
    if (plVar6 != (long *)0x0) {
      local_58 = *(long *)(lVar3 + 0x184c0);
      local_50 = *(undefined8 *)(lVar3 + 0x184c8);
      uStack_48 = 0x234d0;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar3 + 0x184e0) != 0) {
      plVar6 = *(long **)(*(long *)(lVar3 + 0x184e0) + 0x20);
      goto joined_r0x00d8b3c8;
    }
  }
  *(undefined8 *)(*(long *)(lVar3 + 0x184c8) + *(long *)(lVar3 + 0x184c0) + 0x23110) = uVar8;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x184e0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x184e0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_00d8b394:
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}

