
void FUN_035bea70(long *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  FUN_035c7310(param_1 + 0x12e,0x20,100,*(undefined8 *)PTR_DAT_04bdf328);
  FUN_035bec04(param_1 + 10);
  FUN_035bec04(param_1 + 0x21);
  FUN_035bec04(param_1 + 0x38);
  FUN_035bec04(param_1 + 0x4f);
  FUN_035bec04(param_1 + 0x66);
  FUN_035bec04(param_1 + 0x7d);
  FUN_035bec04(param_1 + 0x94);
  FUN_035bec04(param_1 + 0xab);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xcc] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 7) = *param_2;
  *(undefined2 *)((long)param_1 + 0x3c) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 6);
  puVar1 = &LAB_00cccccc;
  if (*(char *)(*param_1 + 0xd5) == '\0' && *(char *)(*param_1 + 0xd2) != '\x03') {
    puVar1 = (undefined1 *)0x555555;
  }
  param_1[6] = (long)puVar1;
  FUN_035b7e80();
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[6];
  param_1[0xd4] = (long)param_1;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xd8] = 0;
  iVar3 = FUN_035c5b00(param_1 + 0xda,0x20);
  if (iVar3 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  uStack_3c = 0x7fffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = uVar2;
  local_38 = uVar4;
  iVar3 = FUN_04002aec(param_1 + 0xdf,&LAB_035c5d30,param_1 + 0xd0,&local_50,0);
  if (iVar3 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  nn::os::StartThread((ThreadType *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 299) = 2;
  return;
}

