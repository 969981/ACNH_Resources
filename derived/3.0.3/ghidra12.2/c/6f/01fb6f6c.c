
void FUN_01fb6f6c(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 local_1e8 [25];
  undefined4 local_184;
  undefined1 local_180;
  undefined1 local_17f;
  undefined4 local_178;
  int local_fc;
  char *local_d0;
  int local_c8;
  
  *(undefined4 *)(param_1 + 0xaf8c) = 0x12;
  FUN_01e63f1c(local_1e8);
  local_184 = 1;
  local_180 = 1;
  if (local_d0 != "NpcWatchInsect") {
    iVar1 = 0xe;
    if (local_c8 < 0xf) {
      iVar1 = local_c8 + -1;
    }
    memcpy(local_d0,"NpcWatchInsect",(long)iVar1);
    local_d0[iVar1] = '\0';
  }
  lVar5 = *(long *)(param_1 + 8);
  local_178 = *param_2;
  local_17f = 1;
  uVar2 = *(uint *)(lVar5 + 0x288);
  uVar3 = *(uint *)(lVar5 + 0x294);
  *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
  uVar4 = *(undefined4 *)(lVar5 + 0x290);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(uint *)(lVar5 + 0x290) = uVar3;
  *(undefined4 *)(lVar5 + 0x28c) = uVar4;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(lVar5 + 0x294) = uVar2;
  local_fc = (int)((ulong)uVar2 * 300 >> 0x20) + 900;
  local_1e8[0] = 0x51;
  FUN_01fb1020(param_1,local_1e8,0x1e);
  return;
}

