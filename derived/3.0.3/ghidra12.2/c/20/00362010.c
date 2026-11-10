
undefined8
FUN_00362010(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  char local_130 [4];
  int iStack_12c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  
  local_15 = (undefined1)param_3;
  local_18 = (undefined1)((ulong)param_3 >> 0x18);
  local_17 = (undefined1)((ulong)param_3 >> 0x10);
  local_16 = (undefined1)((ulong)param_3 >> 8);
  local_14 = 0;
  if ((*param_2 == '.') && (param_2[1] == '\0')) {
    nn::util::SNPrintf(local_130,0xff,"%s/%s",&local_18,param_4);
    iVar1 = FUN_003640a0(param_1 + 8,local_130);
  }
  else {
    nn::util::SNPrintf(local_130,0xff,"%s/%s/%s",param_2,&local_18);
    iVar1 = FUN_003640a0(param_1 + 8,local_130);
  }
  if (iVar1 == -1) {
    return 0;
  }
  _local_130 = 0;
  uVar2 = FUN_00364024(param_1 + 8,local_130,iVar1);
  if (param_5 != (long *)0x0) {
    *param_5 = (long)iStack_12c;
  }
  return uVar2;
}

