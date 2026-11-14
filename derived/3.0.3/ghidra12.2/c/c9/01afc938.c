
undefined8 FUN_01afc938(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  if ((puVar6 != (uint *)0x0) && (uVar5 = *puVar6, uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5)) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
    if ((*puVar7 != 0) && ((uVar5 = puVar7[1], uVar5 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar5 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (((uVar2 < DAT_05326fd0) &&
            (uVar3 = *(ushort *)(DAT_05326fd8 + (long)(int)uVar2 * 2), uVar5 = (uint)uVar3,
            uVar3 < 0x24)) && (uVar5 != 0)) {
          if (uVar5 < 0x24) {
            puVar4 = (undefined8 *)(&PTR_DAT_04a36a20)[uVar5];
          }
          else {
            puVar4 = &DAT_0407ebb1;
          }
          FUN_038d1270(param_2,&DAT_0409e973,puVar4);
          return 1;
        }
      }
    }
  }
  FUN_038d1270(param_2,&DAT_0409e973,PTR_DAT_04bc01c8 + 5);
  return 0;
}

