
void FUN_0023b3d8(undefined4 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long local_40;
  undefined4 local_34;
  
  FUN_00220f24(param_2 + 0x1318);
  FUN_00220f24(param_2 + 0x1358);
  FUN_00220f24(param_2 + 0x12a8);
  *(undefined4 *)(param_2 + 0x12d8) = 0;
  FUN_00220f24(param_2 + 0x12e0);
  *(undefined4 *)(param_2 + 0x1310) = 0;
  plVar1 = (long *)FUN_00228380();
  lVar2 = *plVar1;
  local_40 = 0;
  FUN_002282f0(&local_40);
  *(undefined1 *)(param_2 + 0x6b0) = 0;
  *(undefined1 *)(param_2 + 0x1350) = 1;
  *(undefined1 *)(param_2 + 0x1390) = 1;
  *(long *)(param_2 + 0x1398) = local_40 + lVar2 * 2000;
  memset((void *)(param_2 + 0xc94),0,0x5dc);
  *(undefined8 *)(param_2 + 0x1270) = 0;
  FUN_00227284(param_2 + 0x1278);
  *param_1 = 0;
  *(undefined2 *)(param_2 + 0x12a0) = 0;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_34);
  return;
}

