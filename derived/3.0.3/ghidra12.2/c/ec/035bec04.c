
void FUN_035bec04(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_035c57e0(param_1 + 0x60,0x10);
  if (iVar2 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  iVar2 = FUN_035c5900(param_1 + 0x28,0x60);
  if (iVar2 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  puVar1 = PTR_DAT_04bdf328;
  uVar3 = (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))(*(long **)PTR_DAT_04bdf328,0x40,0);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  uVar3 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0x40,0);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0x5a00,0x40);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  uVar3 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0xb400,0x40);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  return;
}

