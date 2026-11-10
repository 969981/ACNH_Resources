
void FUN_00278e08(long param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int local_b0 [4];
  undefined1 auStack_a0 [128];
  
  *(undefined1 *)(param_1 + 0x86) = param_2;
  *(long *)(param_1 + 0x88) = param_3;
  puVar1 = PTR_DAT_04bc1510;
  if (param_3 != 0) {
    return;
  }
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x86));
  if (lVar3 != 0) {
    FUN_002b3fa8(auStack_a0);
    plVar2 = (long *)FUN_002ba788(*(undefined8 *)puVar1);
    (**(code **)(*plVar2 + 0x20))(local_b0,plVar2,lVar3,auStack_a0);
    if (local_b0[0] == 0) {
      uVar4 = FUN_002b43ec(auStack_a0);
      *(undefined8 *)(param_1 + 0x88) = uVar4;
    }
    FUN_002b4104(auStack_a0);
  }
  return;
}

