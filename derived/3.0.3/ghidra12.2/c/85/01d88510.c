
void FUN_01d88510(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar8 = 0;
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar3 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 + 0x276cb0;
    }
  }
  plVar1 = (long *)(lVar8 + 0x8930);
  lVar3 = *(long *)(lVar8 + 0x8950);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar8 + 0x8950) == 0) goto LAB_01d885d8;
      plVar5 = *(long **)(*(long *)(lVar8 + 0x8950) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_68 = *plVar1;
      local_60 = *(undefined8 *)(lVar8 + 0x8938);
      uStack_58 = 0x280;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
    }
  }
LAB_01d885d8:
  puVar2 = (undefined1 *)(*(long *)(lVar8 + 0x8938) + *plVar1);
  *puVar2 = 0;
  puVar2[0x14] = 0;
  puVar2[0x28] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x50] = 0;
  puVar2[100] = 0;
  puVar2[0x78] = 0;
  puVar2[0x8c] = 0;
  puVar2[0xa0] = 0;
  puVar2[0xb4] = 0;
  puVar2[200] = 0;
  puVar2[0xdc] = 0;
  puVar2[0xf0] = 0;
  puVar2[0x104] = 0;
  puVar2[0x118] = 0;
  puVar2[300] = 0;
  puVar2[0x140] = 0;
  puVar2[0x154] = 0;
  puVar2[0x168] = 0;
  puVar2[0x17c] = 0;
  puVar2[400] = 0;
  puVar2[0x1a4] = 0;
  puVar2[0x1b8] = 0;
  puVar2[0x1cc] = 0;
  puVar2[0x1e0] = 0;
  puVar2[500] = 0;
  puVar2[0x208] = 0;
  puVar2[0x21c] = 0;
  puVar2[0x230] = 0;
  puVar2[0x244] = 0;
  puVar2[600] = 0;
  puVar2[0x26c] = 0;
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    lVar3 = (long)*(int *)(param_1 + 0x24);
    puVar9 = (undefined4 *)(*(long *)(param_1 + 0x18) - lVar3);
    do {
      uVar7 = (uint)*(byte *)(puVar9 + 0x26);
      if ((*(byte *)(puVar9 + 0x26) >> 2 & 1) == 0) {
        if ((*(long *)(lVar8 + 0x8950) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar8 + 0x8950) + 0x20), plVar5 != (long *)0x0)) {
          local_68 = *plVar1;
          local_60 = *(undefined8 *)(lVar8 + 0x8938);
          uStack_58 = 0x280;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
          uVar7 = (uint)*(byte *)(puVar9 + 0x26);
        }
        FUN_027c5320(*(long *)(lVar8 + 0x8938) + *plVar1,*puVar9,puVar9 + 0x18,puVar9 + 0x1f,
                     uVar7 & 1,uVar7 >> 1 & 1);
      }
      puVar9 = (undefined4 *)(*(long *)((long)puVar9 + lVar3 + 8) - lVar3);
    } while (puVar9 != (undefined4 *)((param_1 + 0x10) - lVar3));
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x8950) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x8950) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

