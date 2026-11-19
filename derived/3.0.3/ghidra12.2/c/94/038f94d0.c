
void FUN_038f94d0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  uint uStack_24;
  
  (**(code **)PTR_DAT_04bcf9f0)(param_2,&uStack_24,local_28);
  *(undefined1 *)(param_1 + 0x1c) = local_28[0];
  uVar2 = 1;
  if ((uStack_24 & 0xfffffffe) != 2) {
    uVar2 = 2;
  }
  *(bool *)(param_1 + 0x1d) = (uStack_24 & 0xfffffffd) != 0 && uStack_24 != 4;
  uVar1 = 0;
  if (1 < uStack_24) {
    uVar1 = uVar2;
  }
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  (*DAT_04c624c8)(param_2,local_2c,local_30,local_34);
  *(undefined1 *)(param_1 + 0x1f) = local_2c[0];
  *(undefined1 *)(param_1 + 0x20) = local_30[0];
  *(undefined1 *)(param_1 + 0x21) = local_34[0];
  (*DAT_04c624d0)(param_2,param_1 + 0x10,param_1 + 0x14);
  uVar3 = (**(code **)PTR_DAT_04bcfa08)(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  (**(code **)PTR_DAT_04bcfa10)(param_2,&local_38,local_3c);
  *(ushort *)(param_1 + 0x26) = (ushort)(local_38 == 1);
  *(undefined1 *)(param_1 + 0x23) = local_3c[0];
  (*DAT_04c624e8)(param_2,param_1);
  fVar4 = (float)(**(code **)PTR_DAT_04bcfa30)(param_2);
  *(char *)(param_1 + 0x22) = (char)(int)fVar4;
  uVar2 = (*DAT_04c62508)(param_2);
  *(undefined1 *)(param_1 + 0x24) = uVar2;
  return;
}

