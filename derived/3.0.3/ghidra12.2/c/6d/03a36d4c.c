
void FUN_03a36d4c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_448 [1048];
  
  *param_1 = (long)(PTR_DAT_04bd18d8 + 0x10);
  param_1[1] = 0;
  FUN_03941294(param_1 + 2);
  param_1[0x49] = 0;
  puVar1 = PTR_DAT_04bd1598;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *param_1 = (long)&PTR_FUN_04b6d8c0;
  param_1[0x4a] = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x4d) = 0x100;
  FUN_03941294(param_1 + 0x4e);
  lVar2 = *(long *)PTR_DAT_04bd1158;
  if ((lVar2 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar2 + 8) + 0x18))((long *)(lVar2 + 8));
    FUN_006e9454(auStack_448,&DAT_0406a3d7,"Icon=CLOCK",*(undefined8 *)(lVar2 + 0x10));
  }
  FUN_03a3a6b0(param_1 + 0x95);
  param_1[0x297] = 0;
  param_1[0x292] = 0x100000000;
  param_1[0x293] = 0x404000003e19999a;
  param_1[0x299] = 0;
  param_1[0x294] = 0x3d23d70a3f800000;
  *(undefined1 *)(param_1 + 0x295) = 1;
  param_1[0x29a] = 0;
  *(undefined8 *)((long)param_1 + 0x14ac) = 0x841000000;
  *(undefined4 *)((long)param_1 + 0x14b4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x298) = 0x7a;
  *(undefined1 *)((long)param_1 + 0x14c2) = 0xc;
  return;
}

