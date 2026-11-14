
void FUN_014f2400(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined **local_70;
  float local_68;
  float fStack_64;
  float local_60;
  uint local_5c;
  uint local_58;
  
  local_5c = *(uint *)(param_2 + 0x14);
  local_58 = *(uint *)(param_2 + 0x18);
  local_70 = &PTR_LAB_04987060;
  if (*(long *)(param_1 + 0x270) != param_1 + 0x268) {
    lVar3 = (long)*(int *)(param_1 + 0x27c);
    lVar2 = *(long *)(param_1 + 0x270) - lVar3;
    do {
      fStack_64 = *(float *)(param_2 + 0xc) + *(float *)(lVar2 + 0x6c);
      local_68 = *(float *)(param_2 + 8) + *(float *)(lVar2 + 0x68);
      local_60 = *(float *)(param_2 + 0x10) + *(float *)(lVar2 + 0x70);
      if (local_58 < 8) {
        uVar1 = 1 << (ulong)(local_58 & 0x1f);
        if ((uVar1 & 0x3c) == 0) {
          if ((uVar1 & 0x43) == 0) {
            local_5c = *(uint *)(lVar2 + 0x34);
            local_58 = *(uint *)(param_2 + 0x18);
          }
          else {
            local_5c = *(uint *)(lVar2 + 0x34);
            local_58 = *(uint *)(lVar2 + 0x38);
          }
        }
        else {
          local_58 = *(uint *)(param_2 + 0x18);
          local_5c = local_58 << 0x1e ^ 0x80000000;
        }
      }
      FUN_014e9e50(lVar2,&local_70);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (param_1 + 0x268) - lVar3);
  }
  return;
}

