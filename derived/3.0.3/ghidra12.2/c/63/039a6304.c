
undefined8
FUN_039a6304(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
            undefined4 param_9)

{
  int iVar1;
  long lVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    lVar4 = *(long *)PTR_DAT_04bbd510;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar2 == 0) {
      iVar1 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar1 = (int)lVar2 + -1;
    }
    uVar3 = FUN_03948e10(lVar4,param_2,lVar4 + (long)iVar1 * 0x290 + 0x10,param_3,param_4,1,param_5,
                         param_6,param_7,0,1,param_8,1,param_9,0,0);
    FUN_039a61b0(param_1,uVar3);
  }
  else if (*(int *)(param_1 + 0x10) < 1) {
    uVar3 = 0;
  }
  else {
    __dest = *(undefined8 **)(param_1 + 0x18);
    uVar3 = *__dest;
    memmove(__dest,__dest + 1,(long)(*(int *)(param_1 + 0x10) * 8 + -8));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return uVar3;
}

