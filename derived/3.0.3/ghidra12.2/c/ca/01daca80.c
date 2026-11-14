
void FUN_01daca80(void)

{
  int iVar1;
  ulong uVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (*(int *)(DAT_0537d558[2] + 0xaa0) != 3) {
    uVar2 = FUN_020d4530(DAT_053e23d0);
    if ((uVar2 & 1) == 0) {
      local_30[0] = *PTR_DAT_04bb5018;
      FUN_020d46c0(DAT_053e23d0,local_30);
      iVar1 = FUN_020f0020();
    }
    else {
      FUN_020d3880();
      iVar1 = FUN_020f0020();
    }
    if (-1 < iVar1) {
      local_2c[0] = (undefined1)iVar1;
      local_28 = 0;
      local_22 = 0;
      local_24 = 0xff00;
      if (-1 < DAT_053d10a0) {
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_053d10a0,&local_28,local_2c,1,0);
      }
    }
  }
  return;
}

