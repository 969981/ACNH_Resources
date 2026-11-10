
void FUN_0038093c(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = FUN_0038d070(param_4,*param_3);
  *(undefined8 *)((long)param_3 + 0xcc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_3 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x1b) = uVar2;
  lVar3 = param_3[0xb];
  uVar4 = (uint)*(byte *)(lVar3 + 8);
  if (((*(byte *)(lVar3 + 8) & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x30))) {
    uVar2 = FUN_003822e0(param_3,param_4,0);
    lVar3 = param_3[0xb];
    *(undefined4 *)((long)param_3 + 0xcc) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8);
  }
  if (((uVar4 >> 1 & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x40))) {
    uVar2 = FUN_003822e0(param_3,param_4,1);
    lVar3 = param_3[0xb];
    *(undefined4 *)(param_3 + 0x1a) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8);
  }
  if (((uVar4 >> 2 & 1) == 0) || (*(float *)(lVar3 + 0x58) <= 0.0)) {
    lVar5 = *(long *)(*(long *)(param_4 + 200) + 0x38) + (ulong)*(uint *)(param_3 + 0x1b);
    bVar1 = *(byte *)(lVar3 + 8);
  }
  else {
    uVar2 = FUN_003822e0(param_3,param_4,2);
    *(undefined4 *)((long)param_3 + 0xd4) = uVar2;
    lVar5 = *(long *)(*(long *)(param_4 + 200) + 0x38) + (ulong)*(uint *)(param_3 + 0x1b);
    if (param_3[0xb] == 0) goto LAB_00380a30;
    bVar1 = *(byte *)(param_3[0xb] + 8);
  }
  if ((bVar1 >> 5 & 1) != 0) {
    param_2 = 0x437f0000;
    fVar6 = (float)NEON_ucvtf((uint)*(byte *)(*param_3 + 0x5a));
    *(float *)(lVar5 + 0xdc) = (fVar6 / 255.0) / 255.0;
  }
LAB_00380a30:
  local_18 = FUN_0037d114(*param_3);
  uStack_14 = param_2;
  FUN_00364a10(param_4,lVar5,&local_18,*param_3 + 0x50,1,&DAT_04134eb8);
  return;
}

