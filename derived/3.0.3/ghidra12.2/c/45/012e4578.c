
void FUN_012e4578(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  uVar1 = *(uint *)(param_3 + 8);
  uVar2 = *(uint *)(param_3 + 0xc);
  plVar7 = (long *)(*(code *)**(undefined8 **)(param_2 + 0x28))();
  uVar5 = (**(code **)(*plVar7 + 0x18))();
  uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
  param_1[1] = (long)plVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  if ((long *)plVar7[5] == (long *)0x0) {
    bVar4 = 0;
  }
  else {
    puVar8 = *(undefined8 **)plVar7[5];
    bVar4 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      bVar4 = (**(code **)*puVar8)();
    }
  }
  puVar3 = PTR_DAT_04bb4c28;
  *(byte *)((long)param_1 + 0x11) = bVar4 & 1;
  if (uVar6 <= uVar2) {
    uVar2 = 0;
  }
  *param_1 = (long)(puVar3 + 0x10);
  if (uVar5 <= uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 3) = uVar2;
  return;
}

