
bool FUN_0313c450(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x2b980);
  bVar4 = false;
  uVar5 = 0;
  do {
    uVar1 = uVar5;
    if (*(uint *)(param_1 + 0x2b978) <= uVar5) {
      uVar1 = 0;
    }
    if ((-1 < DAT_04c4a030) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
      uVar3 = 0;
      do {
        if (*(int *)(*(long *)(lVar6 + (ulong)uVar1 * 0x38 + 0x28) + uVar3 * 4) == DAT_04c4a030) {
          lVar7 = lVar6 + (ulong)uVar1 * 0x38;
          if (*(uint *)(lVar7 + 0x10) <= (uint)uVar3) {
            uVar3 = 0;
          }
          uVar2 = *(uint *)(*(long *)(lVar7 + 0x18) + uVar3 * 0x30 + 0x28);
          if ((uVar2 < 0x10e) && (*(int *)(param_1 + 0xfa28 + (ulong)uVar2 * 0x1a8 + 0x1a0) != 2)) {
            return bVar4;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    if ((-1 < DAT_04c4a034) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
      uVar3 = 0;
      do {
        if (*(int *)(*(long *)(lVar6 + (ulong)uVar1 * 0x38 + 0x28) + uVar3 * 4) == DAT_04c4a034) {
          lVar7 = lVar6 + (ulong)uVar1 * 0x38;
          if (*(uint *)(lVar7 + 0x10) <= (uint)uVar3) {
            uVar3 = 0;
          }
          uVar1 = *(uint *)(*(long *)(lVar7 + 0x18) + uVar3 * 0x30 + 0x28);
          if ((uVar1 < 0x10e) && (*(int *)(param_1 + 0xfa28 + (ulong)uVar1 * 0x1a8 + 0x1a0) != 2)) {
            return bVar4;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    uVar1 = uVar5 + 1;
    bVar4 = 0x2f < uVar5;
    uVar5 = uVar1;
    if (uVar1 == 0x31) {
      return bVar4;
    }
  } while( true );
}

