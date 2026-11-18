
uint FUN_03614c88(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,long param_5,
                 undefined8 param_6)

{
  char *__s;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  __s = "";
  if (param_4 != (char *)0x0) {
    __s = param_4;
  }
  local_68 = *(undefined8 *)PTR_DAT_04bdf328;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  local_70 = 0x1e;
  sVar4 = strlen(__s);
  local_60 = local_60 & 0xffffffffffffff00;
  local_78 = 0;
  iVar2 = FUN_03605e64(&local_78,0,__s,sVar4);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0x8002,0x3614da0);
    (*pcVar1)();
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x30) = local_78;
  *(undefined8 *)(param_1 + 0x38) = local_70;
  *(undefined8 *)(param_1 + 0x50) = uStack_58;
  *(undefined8 *)(param_1 + 0x40) = local_68;
  *(ulong *)(param_1 + 0x48) = local_60;
  uVar3 = FUN_0360217c(param_1 + 0xec0,param_2,param_3);
  if ((uVar3 & 1) != 0) {
    FUN_03612b18(param_1);
    if (param_5 != 0) {
      FUN_03614da4(param_1,param_5,param_6);
    }
    *(undefined4 *)(param_1 + 0x18) = 3;
  }
  return uVar3 & 1;
}

