
undefined4 FUN_0093b024(long param_1,undefined8 param_2,int *param_3)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_28 [4];
  int local_24;
  
  local_28[0] = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
    if (param_3 != (int *)0x0) {
      if (DAT_04c487d4 == -1) {
        iVar3 = 7;
      }
      else {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        iVar3 = 7;
        if ((*puVar1 & 2) != 0) {
          iVar3 = 5;
        }
      }
      *param_3 = iVar3;
    }
    uVar4 = 0xc3fa0000;
  }
  else {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
      local_24 = 7;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_24 = 7;
      if ((*puVar1 & 2) != 0) {
        local_24 = 5;
      }
    }
    uVar4 = FUN_00962700(*(long *)(param_1 + 0x80),param_2,&local_24,1,local_28);
    if (param_3 != (int *)0x0) {
      *param_3 = local_24;
      iVar3 = FUN_0097a980(param_2);
      if (iVar3 != 7) {
        *param_3 = iVar3;
      }
    }
  }
  return uVar4;
}

