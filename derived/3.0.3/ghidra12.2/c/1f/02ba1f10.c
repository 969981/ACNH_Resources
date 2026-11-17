
long FUN_02ba1f10(uint *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar4 = (uint *)(ulong)*param_1;
  if (*param_1 != 0) {
    uVar5 = (ulong)param_2;
    if ((DAT_05642a20 & 1) == 0) {
      DAT_05642a20 = 1;
      DAT_05642a24 = 0xffffffffffffffff;
      DAT_05642a2c = 0xffffffffffffffff;
      DAT_05642b04 = 0xffffffff;
      DAT_05642a34 = 0xffffffffffffffff;
      DAT_05642a3c = 0xffffffffffffffff;
      DAT_05642a44 = 0xffffffffffffffff;
      DAT_05642a4c = 0xffffffffffffffff;
      DAT_05642a54 = 0xffffffffffffffff;
      DAT_05642a5c = 0xffffffffffffffff;
      DAT_05642a64 = 0xffffffffffffffff;
      DAT_05642a6c = 0xffffffffffffffff;
      DAT_05642a74 = 0xffffffffffffffff;
      DAT_05642a7c = 0xffffffffffffffff;
      DAT_05642a84 = 0xffffffffffffffff;
      DAT_05642a8c = 0xffffffffffffffff;
      DAT_05642a94 = 0xffffffffffffffff;
      DAT_05642a9c = 0xffffffffffffffff;
      DAT_05642aa4 = 0xffffffffffffffff;
      DAT_05642aac = 0xffffffffffffffff;
      DAT_05642ab4 = 0xffffffffffffffff;
      DAT_05642abc = 0xffffffffffffffff;
      DAT_05642ac4 = 0xffffffffffffffff;
      DAT_05642acc = 0xffffffffffffffff;
      DAT_05642ad4 = 0xffffffffffffffff;
      DAT_05642adc = 0xffffffffffffffff;
      DAT_05642ae4 = 0xffffffffffffffff;
      DAT_05642aec = 0xffffffffffffffff;
      DAT_05642af4 = 0xffffffffffffffff;
      DAT_05642afc = 0xffffffffffffffff;
    }
    uVar2 = *(uint *)((long)&DAT_05642a24 + uVar5 * 4);
    while( true ) {
      if (-1 < (int)uVar2) {
        return (long)param_1 + (ulong)uVar2;
      }
      if ((uVar2 != 0xffffffff) || (param_1 == puVar4)) break;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar4)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar4);
      if (lVar1 == 0) {
        return 0;
      }
      uVar3 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar4));
      *(undefined4 *)((long)&DAT_05642a24 + uVar5 * 4) = 0xfffffffe;
      if (uVar3 == 0) {
        return 0;
      }
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != param_3) {
        puVar6 = puVar6 + 2;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) {
          return 0;
        }
      }
      uVar2 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar2 = *puVar6;
      }
      *(uint *)((long)&DAT_05642a24 + uVar5 * 4) = uVar2;
    }
  }
  return 0;
}

