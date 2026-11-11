
undefined8
FUN_003b7fb0(uint *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [24];
  char local_70;
  undefined4 local_64 [2];
  char local_5c;
  undefined1 auStack_58 [24];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0xffffffff;
  *param_2 = '\0';
  FUN_003c91bc(auStack_58,param_3);
  puVar1 = (uint *)FUN_003c94ac(auStack_58);
  if (puVar1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (*puVar1 == 0) {
    return 1;
  }
  lVar2 = FUN_003d21f4(param_5,puVar1[1]);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    local_5c = '\0';
    local_64[0] = 0xffffffff;
    FUN_003b8858(param_4,puVar1[1],local_64);
    uVar4 = puVar1[1];
    *(long *)(param_1 + 2) = lVar2;
    *param_1 = uVar4;
    *param_2 = local_5c;
    if ((local_5c != '\0') && (FUN_003c8dd4(auStack_88,lVar2,1), *puVar1 != 0)) {
      uVar4 = 0;
      do {
        if ((local_70 == '\0') || (lVar2 = FUN_003c8fec(auStack_88,puVar1[2]), lVar2 == 0)) {
          return 2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *puVar1);
    }
    uVar3 = 0;
  }
  return uVar3;
}

