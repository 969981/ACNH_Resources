
void FUN_026f8c3c(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  
  puVar2 = PTR_DAT_04bb21a8;
  if ((*(long **)(param_1 + 0x10) != (long *)0x0) &&
     (plVar3 = (long *)**(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) {
    lVar4 = (**(code **)(*plVar3 + 0x10))();
    if (lVar4 != 0) {
      puVar5 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x10))();
      *puVar5 = 0xa0002;
      puVar5[1] = 0xa0028;
      puVar5[0x10] = 0xa0002;
      puVar5[0x11] = 0xa0028;
      uVar1 = *(undefined2 *)puVar2;
      puVar5[2] = 2;
      *(undefined2 *)(puVar5 + 3) = 2;
      puVar5[0x12] = 2;
      *(undefined2 *)(puVar5 + 0x13) = 2;
      *(undefined2 *)((long)puVar5 + 0xe) = uVar1;
      *(undefined2 *)((long)puVar5 + 0x4e) = uVar1;
      FUN_02783bcc(puVar5 + 0x44);
    }
    lVar4 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x20))();
    if (lVar4 != 0) {
      puVar5 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x20))();
      *puVar5 = 0xa0002;
      puVar5[1] = 0xa0028;
      puVar5[0x10] = 0xa0002;
      puVar5[0x11] = 0xa0028;
      uVar1 = *(undefined2 *)puVar2;
      puVar5[2] = 2;
      *(undefined2 *)(puVar5 + 3) = 2;
      puVar5[0x12] = 2;
      *(undefined2 *)(puVar5 + 0x13) = 2;
      *(undefined2 *)((long)puVar5 + 0xe) = uVar1;
      *(undefined2 *)((long)puVar5 + 0x4e) = uVar1;
      FUN_02783bcc(puVar5 + 0x44);
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 0x50);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xa0002;
    puVar5[1] = 0xa0028;
    puVar5[2] = 2;
    uVar1 = *(undefined2 *)puVar2;
    *(undefined2 *)(puVar5 + 3) = 2;
    puVar5[0x10] = 0xa0002;
    puVar5[0x11] = 0xa0028;
    puVar5[0x12] = 2;
    *(undefined2 *)(puVar5 + 0x13) = 2;
    *(undefined2 *)((long)puVar5 + 0xe) = uVar1;
    *(undefined2 *)((long)puVar5 + 0x4e) = uVar1;
  }
  return;
}

