
void FUN_00250b1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_a0 [128];
  
  puVar1 = PTR_DAT_04bc1510;
  if ((*(long *)PTR_DAT_04bc1510 != 0) && (lVar2 = FUN_002ba788(), lVar2 != 0)) {
    FUN_002b3fa8(auStack_a0);
    plVar3 = (long *)FUN_002ba788(*(undefined8 *)puVar1);
    (**(code **)(*plVar3 + 0x58))(plVar3,auStack_a0);
    FUN_002b4104(auStack_a0);
  }
  FUN_002593d0(*(undefined8 *)(param_1 + 0x18));
  return;
}

