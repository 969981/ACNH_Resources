
undefined8 FUN_00263408(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  piVar3 = *(int **)(param_1 + 0x58);
  if (2 < *piVar3 - 2U) {
    local_44 = 0x6c65;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_44);
    FUN_00220ff8(piVar3,auStack_34);
  }
  uVar2 = FUN_0026c550(DAT_04c603c8);
  if ((uVar2 & 1) == 0) {
    local_44 = 0x6c65;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    puVar1 = PTR_DAT_04bccf00;
    *(undefined4 *)(PTR_DAT_04bccf00 + 0x11c) = local_44;
    *(undefined4 *)(puVar1 + 300) = *(undefined4 *)(param_1 + 0xb4);
  }
  FUN_0026c264(DAT_04c603c8);
  return 1;
}

