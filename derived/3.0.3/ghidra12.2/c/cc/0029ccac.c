
undefined8 FUN_0029ccac(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [128];
  
  FUN_002b3fa8(auStack_b0);
  FUN_0026bfe0(DAT_04c603c8);
  lVar2 = FUN_002ba790(DAT_04c61168);
  uVar5 = *(undefined8 *)(lVar2 + 0x98);
  plVar3 = (long *)FUN_002ba788(DAT_04c61168);
  (**(code **)(*plVar3 + 0x20))(auStack_c0,plVar3,uVar5,auStack_b0);
  lVar2 = FUN_002b43ec(auStack_b0);
  if (lVar2 != 0) {
    uVar5 = FUN_002b43ec(auStack_b0);
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar1 = FUN_0026be6c(DAT_04c603c8);
    plVar3 = (long *)FUN_002ba790(DAT_04c61168);
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar1);
    plVar3 = (long *)FUN_002ba788(DAT_04c61168);
    (**(code **)(*plVar3 + 0x20))(auStack_c0,plVar3,uVar5,auStack_b0);
    lVar2 = FUN_002b43ec(auStack_b0);
    if (lVar2 != 0) {
      uVar4 = FUN_002b43ec(auStack_b0);
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      if (*(int *)(param_1 + 0xd4) != 4) {
        uVar5 = 1;
        *(undefined8 *)(param_1 + 0xf8) = uVar4;
      }
      goto LAB_0029cda4;
    }
  }
  uVar5 = 0;
LAB_0029cda4:
  FUN_002b4104(auStack_b0);
  return uVar5;
}

