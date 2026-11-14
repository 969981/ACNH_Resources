
undefined8 FUN_01d76de0(uint *param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_258;
  char *pcStack_250;
  undefined **local_248;
  ushort *local_240;
  undefined4 local_238;
  ushort local_234 [2];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined8 local_168;
  undefined6 uStack_160;
  undefined2 local_15a;
  undefined6 uStack_158;
  undefined1 auStack_152 [284];
  undefined2 local_36;
  
  uVar3 = *param_1;
  if ((-1 < (int)uVar3) && (lVar6 = *(long *)(DAT_0538adc8 + 0x270), lVar6 != 0)) {
    uVar7 = (ulong)*(uint *)(lVar6 + 0x10);
    if (1 < *(uint *)(lVar6 + 0x10)) {
      uVar7 = 0;
    }
    lVar6 = *(long *)(lVar6 + uVar7 * 8);
    if ((int)uVar3 < *(int *)(lVar6 + 0x28)) {
      lVar8 = *(long *)(lVar6 + 0x18);
      if (*(uint *)(lVar6 + 0x10) <= uVar3) {
        uVar3 = 0;
      }
      if (((lVar8 != 0) && (pcVar5 = (char *)(lVar8 + (ulong)uVar3 * 0x58 + 8), *pcVar5 != '\0')) &&
         (*(long *)(lVar8 + (ulong)uVar3 * 0x58 + 0x48) == 9)) {
        local_238 = 0x100;
        local_240 = local_234;
        local_36 = 0;
        local_234[0] = 0;
        local_258 = PTR_DAT_04bb2020 + 0x10;
        local_248 = &PTR_LAB_04957198;
        for (lVar6 = 0; lVar1 = lVar8 + (ulong)uVar3 * 0x58 + lVar6, *(char *)(lVar1 + 8) != '\0';
            lVar6 = lVar6 + 2) {
          if (lVar6 == 0x28) {
            lVar6 = 0xffffffff;
            break;
          }
          if (*(char *)(lVar1 + 9) == '\0') {
            lVar6 = lVar6 + 1;
            break;
          }
        }
        pcStack_250 = pcVar5;
        uVar7 = FUN_01df33d0(&local_248,&local_258,lVar6);
        if ((uVar7 & 1) != 0) {
          (*(code *)local_248[3])(&local_248);
          uVar4 = 1;
          if (*(int *)(lVar8 + (ulong)uVar3 * 0x58 + 0x34) != 0) {
            uVar4 = 2;
          }
          uVar7 = FUN_01c120c0(param_2,local_240,local_238,uVar4);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  local_234[0] = local_234[0] & 0xff00;
  local_238 = 0xb;
  local_230 = 0xffffffff;
  uStack_228 = 0xffffffff00000000;
  puStack_210 = local_204;
  local_240 = (ushort *)&local_168;
  local_220 = 0xffffffff;
  local_208 = 0x40;
  local_1c5 = 0;
  local_204[0] = 0;
  local_218 = PTR_DAT_04bb2bc0 + 0x10;
  local_1b0 = 0x40;
  local_16d = 0;
  local_1ac[0] = 0;
  puStack_1b8 = local_1ac;
  local_248 = (undefined **)(PTR_DAT_04bb5128 + 0x10);
  uStack_158 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_15a = 0;
  puVar2 = auStack_152;
  if (auStack_152 <= (undefined1 *)((long)&local_168 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_168 + 2U);
  }
  local_1c0 = local_218;
  memset(local_240,0,(ulong)(puVar2 + (-0xe1 - (long)&local_248)) & 0xfffffffffffffffc | 2);
  (**(code **)(*param_2 + 0x28))(param_2,&local_248);
  (**(code **)(*param_2 + 0x30))(param_2,&local_248);
  return 0;
}

