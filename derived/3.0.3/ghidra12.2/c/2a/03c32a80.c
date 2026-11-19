
long FUN_03c32a80(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auStack_aa [106];
  uint local_28;
  uint local_24;
  
  if (param_3 < 9) {
    return -0x1e;
  }
  uVar6 = FUN_03c33d30(param_1 + 0x2818,param_2 + 8,param_3 - 8,param_1);
  if (uVar6 < 0xffffffffffffff89) {
    puVar2 = (uint *)(param_2 + param_3);
    lVar3 = param_2 + 8 + uVar6;
    local_24 = 0x1f;
    uVar6 = FUN_03c35b90(auStack_aa,&local_24,&local_28,lVar3,(long)puVar2 - lVar3);
    if (((uVar6 < 0xffffffffffffff89) && (local_24 < 0x20)) && (local_28 < 9)) {
      FUN_03c32910(param_1 + 0x1008,auStack_aa,local_24,&DAT_041e89ac,&DAT_041e8a2c);
      lVar3 = lVar3 + uVar6;
      local_24 = 0x34;
      uVar6 = FUN_03c35b90(auStack_aa,&local_24,&local_28,lVar3,(long)puVar2 - lVar3);
      if (((uVar6 < 0xffffffffffffff89) && (local_24 < 0x35)) && (local_28 < 10)) {
        FUN_03c32910(param_1 + 0x1810,auStack_aa,local_24,&DAT_041e8bb4,&DAT_041e8c88);
        lVar3 = lVar3 + uVar6;
        local_24 = 0x23;
        uVar6 = FUN_03c35b90(auStack_aa,&local_24,&local_28,lVar3,(long)puVar2 - lVar3);
        if (((uVar6 < 0xffffffffffffff89) && (local_24 < 0x24)) && (local_28 < 10)) {
          FUN_03c32910(param_1,auStack_aa,local_24,&DAT_041e8684,&DAT_041e8714);
          puVar4 = (uint *)(lVar3 + uVar6);
          puVar1 = puVar4 + 3;
          if (puVar1 <= puVar2) {
            uVar5 = *puVar4;
            if (uVar5 == 0) {
              return -0x1e;
            }
            uVar6 = (long)puVar2 - (long)puVar1;
            if (uVar6 <= uVar5) {
              return -0x1e;
            }
            *(uint *)(param_1 + 0x681c) = uVar5;
            uVar5 = puVar4[1];
            if (uVar5 == 0) {
              return -0x1e;
            }
            if (uVar6 <= uVar5) {
              return -0x1e;
            }
            *(uint *)(param_1 + 0x6820) = uVar5;
            uVar5 = puVar4[2];
            if (uVar5 == 0) {
              return -0x1e;
            }
            if (uVar5 < uVar6) {
              *(uint *)(param_1 + 0x6824) = uVar5;
              return (long)puVar1 - param_2;
            }
            return -0x1e;
          }
        }
      }
    }
  }
  return -0x1e;
}

