
void FUN_03a6c6ac(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_448 [1048];
  
  FUN_03955650();
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *param_1 = &PTR_FUN_04b704e8;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0x40000000bf800000;
  *(undefined8 *)((long)param_1 + 500) = 0xc080000040400000;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0x3dcccccd3b656042;
  *(undefined4 *)((long)param_1 + 0x204) = 0x40800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x3f800000;
  lVar1 = DAT_05ae9300;
  param_1[0x47] = 0xbf800000;
  if ((lVar1 == 0) || (*(long *)(DAT_05ae92f0 + 0x58) == 0)) {
    uVar2 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar1 + 8) + 0x18))((long *)(lVar1 + 8));
    FUN_006e9454(auStack_448,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar1 + 0x10));
    uVar2 = *(uint *)((long)param_1 + 0x1e4) | 1;
  }
  *(uint *)((long)param_1 + 0x1e4) = uVar2;
  return;
}

