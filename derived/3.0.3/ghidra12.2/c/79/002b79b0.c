
void FUN_002b79b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_04bce178 + 0x10);
  if (param_1[4] != 0) {
    FUN_002b8c90();
    plVar2 = (long *)param_1[4];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_00285dc0(plVar2);
    }
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_002b7d14();
    plVar2 = (long *)param_1[3];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_00285dc0(plVar2);
    }
    param_1[3] = 0;
  }
  puVar1 = PTR_DAT_04bc1510;
  if (param_1[2] != 0) {
    plVar2 = (long *)FUN_002ba640(*(undefined8 *)PTR_DAT_04bc1510);
    (**(code **)(*plVar2 + 0x88))(plVar2,param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    plVar2 = (long *)FUN_002ba640(*(undefined8 *)puVar1);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_1[1]);
    param_1[1] = 0;
  }
  return;
}

