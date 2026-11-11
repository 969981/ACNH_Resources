
ulong FUN_004cf0b0(int *param_1,int *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  byte local_48 [4];
  byte local_44 [4];
  
  *param_3 = 0;
  if (*param_1 < 2) {
    uVar3 = FUN_004cd7f0(param_1,0,param_3,0);
    *param_2 = (int)uVar3;
  }
  else {
    local_48[0] = 0xff;
    plVar4 = *(long **)(param_1 + 2);
    if (*plVar4 < plVar4[1]) {
      memcpy(local_48,(void *)*plVar4,1);
      *plVar4 = *plVar4 + 1;
      bVar1 = local_48[0];
    }
    else {
      FUN_0049e700(plVar4,local_48,1);
      bVar1 = local_48[0];
    }
    uVar3 = (ulong)(bVar1 >> 1) & 0x3f;
    local_48[0] = bVar1;
    if ((char)bVar1 < '\0') {
      uVar5 = 6;
      do {
        local_44[0] = 0xff;
        plVar4 = *(long **)(param_1 + 2);
        if (*plVar4 < plVar4[1]) {
          memcpy(local_44,(void *)*plVar4,1);
          *plVar4 = *plVar4 + 1;
        }
        else {
          FUN_0049e700(plVar4,local_44,1);
        }
        uVar3 = ((ulong)local_44[0] & 0x7f) << (uVar5 & 0x3f) | uVar3;
        uVar5 = (ulong)((int)uVar5 + 7);
      } while ((char)local_44[0] < '\0');
    }
    uVar5 = -uVar3;
    if ((bVar1 & 1) == 0) {
      uVar5 = uVar3;
    }
    if ((int)uVar5 < param_1[0x18]) {
      uVar3 = -(uVar5 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar5 & 0xffffffff) << 2;
      *param_2 = *(int *)(*(long *)(param_1 + 0x16) + uVar3);
      uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 0x16) + uVar3);
    }
    else {
      uVar2 = param_1[0x22];
      if (uVar2 == (param_1[0x23] & 0x3fffffffU)) {
        FUN_00426990(PTR_DAT_048607b8,param_1 + 0x20,8);
        uVar2 = param_1[0x22];
      }
      uVar3 = 0xffffffff;
      *(int **)(*(long *)(param_1 + 0x20) + (long)(int)uVar2 * 8) = param_2;
      param_1[0x22] = uVar2 + 1;
      *param_2 = (int)uVar5;
    }
  }
  return uVar3;
}

