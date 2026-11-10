
void FUN_0032c8e4(float param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  float fVar3;
  ulong local_60;
  ulong uStack_58;
  undefined8 local_50;
  uint local_48;
  
  lVar2 = *(long *)(*(long *)(param_4 + 0x240) + 0x248);
  if (*(int *)(lVar2 + 0x3c) == 0) {
    local_50 = *(undefined8 *)(lVar2 + 4);
    local_48 = *(uint *)(lVar2 + 0xc);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x48);
    if (iVar1 == 0) {
      local_48 = 0;
      local_50 = 0;
    }
    else {
      if (*(int *)(lVar2 + 0x40) == 0) {
        fVar3 = param_1 / *(float *)(*(long *)(param_4 + 0xb0) + (long)(int)param_6 * 0x20 + 0xc);
      }
      else {
        fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x44));
        fVar3 = fmodf(param_1 + (float)*(int *)(lVar2 + 0x4c) *
                                *(float *)(*(long *)(param_4 + 0x1f0) +
                                          (-(ulong)(param_6 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)param_6 << 4)) * fVar3,
                      (float)*(int *)(lVar2 + 0x4c));
        iVar1 = *(int *)(lVar2 + 0x48);
        fVar3 = fVar3 / (float)*(int *)(lVar2 + 0x4c);
      }
      local_60 = local_60 & 0xffffffffffffff00;
      local_48 = 0;
      local_50 = 0;
      FUN_0032c0c0(fVar3,&local_50,&local_60,lVar2 + 0x54,iVar1,*(undefined4 *)(lVar2 + 0x50));
    }
  }
  uStack_58 = (ulong)local_48;
  local_60 = CONCAT44(*(undefined4 *)((ulong)&local_50 | 4),(undefined4)local_50);
  FUN_00330500(param_1,param_3,param_4,param_5,(ulong)param_6,&local_60);
  return;
}

