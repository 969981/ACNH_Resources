
undefined8 FUN_01d78930(long param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_858;
  long lStack_850;
  undefined *local_848;
  undefined2 *puStack_840;
  undefined4 local_838;
  undefined2 local_834 [1023];
  undefined2 local_36;
  
  (**(code **)(*param_2 + 0x38))(param_2);
  uVar3 = FUN_01d77c78(param_1);
  if ((uVar3 & 1) == 0) {
LAB_01d789f0:
    uVar4 = 4;
  }
  else {
    uVar3 = FUN_01d77c78(param_1);
    puVar1 = PTR_DAT_04bb7bc0;
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        lVar5 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0xfb0) == '\0') {
            return 2;
          }
          if (*(char *)(lVar5 + 0xfb1) == '\0') {
            return 2;
          }
          if (*(long *)(lVar5 + 0xfa8) == 0) {
            return 1;
          }
          lVar5 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
          if (*(char *)(*(long *)(lVar5 + 0xfa8) + 0x2c) == '\0') {
            local_36 = 0;
            lStack_850 = *(long *)(lVar5 + 0xfa8) + 0x2d;
            puStack_840 = local_834;
            local_834[0] = 0;
            local_838 = 0x400;
            local_848 = PTR_DAT_04bb62a0 + 0x10;
            local_858 = PTR_DAT_04bb2020 + 0x10;
            uVar4 = FUN_01d78a78();
            uVar3 = FUN_01df35f0(param_2,&local_858,&local_848,uVar4);
            if ((uVar3 & 1) == 0) {
              return 2;
            }
            return 0;
          }
        }
        goto LAB_01d789f0;
      }
    }
    uVar4 = 3;
  }
  return uVar4;
}

