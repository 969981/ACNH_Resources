
void FUN_03762d84(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar7 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar7 + 0x28) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 8);
    uStack_30 = *(undefined8 *)(lVar7 + 0x10);
    local_28 = 0x40;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
  }
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(*(long *)(param_2 + 8) + 8));
  puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
  uVar4 = puVar1[7];
  uVar3 = puVar1[4];
  uVar5 = puVar1[5];
  puVar2[6] = puVar1[6];
  puVar2[7] = uVar4;
  puVar2[4] = uVar3;
  puVar2[5] = uVar5;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[3];
  puVar2[2] = puVar1[2];
  puVar2[3] = uVar5;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  return;
}

