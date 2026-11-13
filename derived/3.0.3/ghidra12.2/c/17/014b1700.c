
void FUN_014b1700(long param_1,char *param_2)

{
  int iVar1;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined1 local_298;
  undefined8 local_294;
  undefined8 local_28c;
  undefined5 local_284;
  undefined3 uStack_27f;
  undefined5 uStack_27c;
  undefined1 local_277;
  undefined2 local_276;
  undefined1 auStack_270 [560];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_2f0 = 0xfffe;
  FUN_0277d4ac(&local_2f0);
  local_2a4 = 0;
  local_298 = 2;
  local_29c = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2ac = 0;
  uStack_2a8 = 0;
  local_294 = 0;
  local_28c = 0;
  local_284 = 0;
  uStack_27f = 0;
  uStack_27c = 0;
  local_277 = 0xee;
  local_276 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  memset(auStack_270,0,0x230);
  local_2f0 = *(undefined8 *)(param_1 + 0x40);
  FUN_027c1640(&local_2e8,param_1 + 0x48);
  if (*param_2 == -1) {
    iVar1 = *(int *)(*(long *)(*(long *)PTR_DAT_04bbced8 + 0x18) + 8);
    local_24 = 0xff00;
  }
  else {
    iVar1 = *(int *)(*(long *)(*(long *)PTR_DAT_04bbced8 + 0x18) + 8);
    local_24 = CONCAT11(*param_2,4);
  }
  if (-1 < iVar1) {
    local_22 = 0;
    local_28 = 0;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar1,&local_28,&local_2f0,0x2b0,0);
  }
  return;
}

