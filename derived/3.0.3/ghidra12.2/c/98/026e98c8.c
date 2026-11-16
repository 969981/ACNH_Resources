
int FUN_026e98c8(undefined2 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar1;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_0277d6c4(param_1);
      if (*(long *)puVar1 == 0) {
        puVar10 = &DAT_05586008;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        puVar10 = (undefined2 *)PTR_DAT_04bb37e0;
        if ((uVar2 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          puVar10 = param_1;
        }
      }
      uVar3 = FUN_0277d7b4(puVar10,param_2);
      uVar9 = FUN_0277d7b4(param_1 + 0x458,param_2);
      uVar2 = 1;
      if ((uVar3 & 1) != 0) {
        uVar2 = 2;
      }
      if ((uVar9 & 1) == 0) {
        uVar2 = uVar3 & 1;
      }
      uVar3 = FUN_0277d7b4(param_1 + 0x45c,param_2);
      lVar11 = *(long *)puVar1;
      uVar4 = FUN_0277d6c4(param_1 + 0x460);
      if (*(long *)puVar1 == 0) {
        puVar10 = &DAT_05586008;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        puVar10 = (undefined2 *)PTR_DAT_04bb37e0;
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          puVar10 = param_1 + 0x460;
        }
      }
      uVar4 = FUN_0277d7b4(puVar10,param_2);
      uVar5 = FUN_0277d7b4(param_1 + 0x8b8,param_2);
      uVar6 = FUN_0277d7b4(param_1 + 0x8bc,param_2);
      uVar7 = FUN_0277d7b4(param_1 + 0x8c0,param_2);
      uVar8 = FUN_0277d7b4(param_1 + 0x8c4,param_2);
      return uVar2 + (uVar3 & 1) + (uVar4 & 1) + (uVar5 & 1) + (uVar6 & 1) + (uVar7 & 1) +
             (uVar8 & 1);
    }
  }
  return 0;
}

