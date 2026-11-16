
void FUN_026b3d30(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_2 < 0x20) {
    if (param_2 != 0x1f) {
      lVar2 = (ulong)param_2 * 0x2c;
      do {
        lVar1 = param_1 + 0x10d97 + lVar2;
        *(undefined2 *)(lVar1 + -0x2b) = *(undefined2 *)(lVar1 + 1);
        *(undefined1 *)(lVar1 + -0x29) = *(undefined1 *)(lVar1 + 3);
        *(undefined1 *)(lVar1 + -0x28) = *(undefined1 *)(lVar1 + 4);
        *(undefined4 *)(lVar1 + -0x27) = *(undefined4 *)(lVar1 + 5);
        if (*(int *)(lVar1 + 9) == 0) {
          *(undefined4 *)(lVar1 + -0xb) = 0;
          *(undefined8 *)(lVar1 + -0x23) = 0;
          *(undefined8 *)(lVar1 + -0x1b) = 0;
          *(undefined8 *)(lVar1 + -0x13) = 0;
        }
        else {
          *(undefined8 *)(lVar1 + -0x23) = *(undefined8 *)(lVar1 + 9);
          *(undefined8 *)(lVar1 + -0x1b) = *(undefined8 *)(lVar1 + 0x11);
          *(undefined8 *)(lVar1 + -0x13) = *(undefined8 *)(lVar1 + 0x19);
          *(undefined4 *)(lVar1 + -0xb) = *(undefined4 *)(lVar1 + 0x21);
        }
        *(undefined1 *)(param_1 + 0x10d97 + lVar2) = *(undefined1 *)(lVar1 + 0x2c);
        lVar2 = lVar2 + 0x2c;
        *(undefined4 *)(lVar1 + -7) = *(undefined4 *)(lVar1 + 0x25);
        *(undefined1 *)(lVar1 + -3) = *(undefined1 *)(lVar1 + 0x29);
        *(undefined1 *)(lVar1 + -2) = *(undefined1 *)(lVar1 + 0x2a);
      } while (lVar2 != 0x554);
    }
    *(undefined8 *)(param_1 + 0x112d8) = 0;
    *(undefined8 *)(param_1 + 0x112e0) = 0;
    *(undefined4 *)(param_1 + 0x112e8) = 0;
    *(undefined8 *)(param_1 + 0x112c8) = 0;
    *(undefined8 *)(param_1 + 0x112d0) = 0;
    *(undefined8 *)(param_1 + 0x112c0) = 0xfffe;
    FUN_0277d4ac();
    *(undefined4 *)(param_1 + 0x112e8) = 0;
    *(undefined8 *)(param_1 + 0x112d8) = 0;
    *(undefined8 *)(param_1 + 0x112e0) = 0;
    *(undefined8 *)(param_1 + 0x112c8) = 0;
    *(undefined8 *)(param_1 + 0x112d0) = 0;
    if ((param_3 & 1) != 0) {
      local_44 = FUN_021d7d60(param_1);
      local_42 = 1;
      local_43 = (undefined1)param_2;
      local_28 = 0;
      local_22 = 0;
      local_24 = 0xff00;
      if (-1 < DAT_053d0c20) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0c20,&local_28,&local_44,3,0);
      }
    }
  }
  return;
}

