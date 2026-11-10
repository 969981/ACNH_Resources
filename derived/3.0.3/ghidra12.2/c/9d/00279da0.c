
void FUN_00279da0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int local_b0 [4];
  undefined1 auStack_a0 [128];
  
  *(char *)(param_1 + 0xb3) = (char)param_2;
  puVar1 = PTR_DAT_04bc1510;
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
  if (lVar3 != 0) {
    FUN_002b3fa8(auStack_a0);
    plVar2 = (long *)FUN_002ba788(*(undefined8 *)puVar1);
    (**(code **)(*plVar2 + 0x20))(local_b0,plVar2,lVar3,auStack_a0);
    if (local_b0[0] == 0) {
      uVar4 = FUN_002b43ec(auStack_a0);
      *(undefined8 *)(param_1 + 0xb8) = uVar4;
    }
    FUN_002b4104(auStack_a0);
  }
  return;
}

