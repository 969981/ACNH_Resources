
bool FUN_022e3bbc(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined **local_68;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  float local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  uVar3 = FUN_022e3c80();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_48 = 0;
    local_68 = &PTR_LAB_04a7eea8;
    fVar5 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
    fVar4 = (float)*(int *)(param_2 + 8) * 10.0 + 5.0;
    FUN_007ef010(&uStack_40,PTR_DAT_04bb3170);
    local_44 = *(undefined4 *)(param_2 + 0x10);
    uStack_40 = *(undefined4 *)(param_2 + 0x14);
    local_5c = 0;
    local_50 = 0;
    local_3c = 1;
    local_38 = *(undefined4 *)(param_2 + 0x18);
    local_60 = fVar4;
    local_58 = fVar5;
    fStack_54 = fVar4;
    local_4c = fVar5;
    iVar2 = FUN_022e2e54(param_1,&local_68);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

