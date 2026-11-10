
void FUN_0019d6e8(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (*PTR_DAT_04bcb908 == '\0') {
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar2;
  }
  puVar1 = PTR_DAT_04bcc088;
  *param_1 = (long)(PTR_DAT_04bcc140 + 0x10);
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1);
  *(undefined1 *)(param_1 + 3) = 0;
  uVar3 = FUN_0019c4dc(PTR_DAT_04bcb900,param_1,param_2,uVar4);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((long)param_1 + 0xc) = param_2;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  *param_1 = (long)(PTR_DAT_04bcc1c0 + 0x10);
  return;
}

