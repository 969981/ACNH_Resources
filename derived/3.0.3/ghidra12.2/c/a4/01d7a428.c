
uint FUN_01d7a428(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint extraout_w8;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_858;
  long lStack_850;
  undefined *local_848;
  undefined2 *local_840;
  undefined4 local_838;
  undefined2 local_834 [1023];
  undefined2 local_36;
  
  puVar2 = (undefined8 *)FUN_01dff648(*(undefined8 *)PTR_DAT_04bb7bc0,param_1);
  uVar5 = extraout_w8;
  if (puVar2 == (undefined8 *)0x0) goto LAB_01d7a5a4;
  *(undefined8 *)(param_2 + 0x10) = *puVar2;
  uVar3 = puVar2[0xf];
  uVar1 = puVar2[0x10];
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(puVar2 + 0x11);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(ulong *)(param_2 + 0x2c) = (ulong)*(uint7 *)(puVar2[0x1f5] + 0x541);
  *(undefined8 *)(param_2 + 0x38) = puVar2[0xd];
  lStack_850 = puVar2[0x1f5];
  if (*(char *)(lStack_850 + 0x2c) == '\0') {
    local_36 = 0;
    lStack_850 = lStack_850 + 0x2d;
    local_840 = local_834;
    local_834[0] = 0;
    local_838 = 0x400;
    local_848 = PTR_DAT_04bb62a0 + 0x10;
    local_858 = PTR_DAT_04bb2020 + 0x10;
    uVar3 = FUN_01d78a78();
    uVar4 = FUN_01df33d0(&local_848,&local_858,uVar3);
    if ((uVar4 & 1) == 0) goto LAB_01d7a5a0;
    plVar7 = (long *)(param_2 + 0x40);
    lVar6 = *plVar7;
  }
  else {
    local_36 = 0;
    lStack_850 = lStack_850 + 0x73;
    local_840 = local_834;
    local_834[0] = 0;
    local_838 = 0x400;
    local_848 = PTR_DAT_04bb62a0 + 0x10;
    local_858 = PTR_DAT_04bb2020 + 0x10;
    uVar3 = FUN_01d78a78();
    uVar4 = FUN_01df33d0(&local_848,&local_858,uVar3);
    if ((uVar4 & 1) == 0) {
LAB_01d7a5a0:
      uVar5 = 0;
      goto LAB_01d7a5a4;
    }
    plVar7 = (long *)(param_2 + 0xb8);
    lVar6 = *plVar7;
  }
  (**(code **)(lVar6 + 0x18))(plVar7);
  lVar8 = plVar7[1];
  lVar6 = plVar7[2];
  (**(code **)(local_848 + 0x18))(&local_848);
  FUN_038d4e80(lVar8,(int)lVar6,local_840,0xffffffff);
  uVar5 = 1;
LAB_01d7a5a4:
  return puVar2 != (undefined8 *)0x0 & uVar5;
}

