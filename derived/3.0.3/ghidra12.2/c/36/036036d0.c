
undefined8
FUN_036036d0(long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,long param_6)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  char *__s;
  ulong uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  *(undefined4 *)(param_1 + 0x18) = 3;
  if (*(char *)(param_1 + 0x138) != '\0') {
    uVar6 = 0;
    do {
      lVar5 = uVar6 * 8;
      uVar3 = FUN_03614c88(*(undefined8 *)(param_1 + 0x140 + lVar5),*(undefined8 *)(param_2 + lVar5)
                           ,*(undefined8 *)(param_3 + lVar5),param_4[uVar6],
                           *(undefined8 *)(param_5 + lVar5),*(undefined8 *)(param_6 + lVar5));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x138));
  }
  __s = (char *)*param_4;
  local_60 = 0;
  local_68 = *(undefined8 *)PTR_DAT_04bdf328;
  local_70 = 0x1e;
  sVar4 = strlen(__s);
  local_60 = local_60 & 0xffffffffffffff00;
  local_78 = 0;
  iVar2 = FUN_03605e64(&local_78,0,__s,sVar4);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0x8002,0x36037f8);
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
  return 1;
}

