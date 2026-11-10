
bool FUN_0029cbf0(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [128];
  
  if (*(int *)(param_1 + 0x180) == 0) {
    return false;
  }
  FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_002b3fa8(auStack_a0);
  lVar2 = FUN_002ba790(DAT_04c61168);
  uVar4 = *(undefined8 *)(lVar2 + 0x98);
  plVar3 = (long *)FUN_002ba788(DAT_04c61168);
  (**(code **)(*plVar3 + 0x20))(auStack_b0,plVar3,uVar4,auStack_a0);
  lVar2 = FUN_002b43ec(auStack_a0);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    *(long *)(param_1 + 0xf0) = lVar2;
    *(long *)(param_1 + 0xf8) = lVar2;
    bVar1 = *(int *)(param_1 + 0xd4) == 2;
  }
  FUN_002b4104(auStack_a0);
  return bVar1;
}

