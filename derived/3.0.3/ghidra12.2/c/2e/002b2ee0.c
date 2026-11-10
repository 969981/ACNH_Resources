
void FUN_002b2ee0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    FUN_00285e00(lVar3);
    FUN_00285dc0(lVar3);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar2 = PTR_DAT_04bce128;
  puVar1 = PTR_DAT_04bce120;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined2 *)puVar1 = 0;
  *(undefined2 *)puVar2 = 0;
  FUN_002282f0(param_1 + 0x58);
  return;
}

