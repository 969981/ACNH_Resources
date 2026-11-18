
uint FUN_03671abc(long *param_1,long param_2,long param_3,char *param_4,long param_5,
                 undefined8 param_6)

{
  char *__s;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  long local_68;
  long local_60;
  long local_58;
  ulong local_50;
  long lStack_48;
  
  local_50 = 0;
  __s = "";
  if (param_4 != (char *)0x0) {
    __s = param_4;
  }
  local_58 = *(long *)PTR_DAT_04bdf328;
  param_1[4] = param_2;
  param_1[5] = param_3;
  local_60 = 0x1e;
  sVar4 = strlen(__s);
  local_50 = local_50 & 0xffffffffffffff00;
  local_68 = 0;
  iVar2 = FUN_03605e64(&local_68,0,__s,sVar4);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0x8002,0x3671bc8);
    (*pcVar1)();
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[9]);
  }
  param_1[6] = local_68;
  param_1[7] = local_60;
  param_1[10] = lStack_48;
  param_1[8] = local_58;
  param_1[9] = local_50;
  uVar3 = FUN_03671bd0(param_1,1);
  if ((uVar3 & 1) != 0) {
    if (param_5 != 0) {
      (**(code **)(*param_1 + 0x40))(param_1,param_5,param_6);
    }
    *(undefined4 *)(param_1 + 0x19) = 0x20002000;
    *(undefined4 *)(param_1 + 3) = 3;
  }
  return uVar3 & 1;
}

