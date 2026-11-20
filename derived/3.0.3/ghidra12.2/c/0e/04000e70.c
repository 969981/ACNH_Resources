
void FUN_04000e70(long param_1,char *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  undefined8 *puVar7;
  
  *(undefined1 *)(param_1 + 0x80) = 1;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = "cwd:";
  }
  sVar5 = strlen(param_2);
  puVar7 = (undefined8 *)(param_1 + 0x48);
  puVar1 = puVar7;
  if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
    puVar1 = (undefined8 *)*puVar7;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar4 = FUN_03605e64(param_1 + 0x30,0,param_2,sVar5);
  if (iVar4 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x48);
  }
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if ((*(ulong *)(param_1 + 0x60) & 1) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar4 = FUN_03605e64((undefined8 *)(param_1 + 0x58),0,puVar7,uVar2);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0x8002,0x4000fa8);
    (*pcVar3)();
  }
  *(long *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 != 0) {
    lVar6 = (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))(*(long **)PTR_DAT_04bdf328,param_3,0);
    *(long *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
  }
  *(undefined2 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

