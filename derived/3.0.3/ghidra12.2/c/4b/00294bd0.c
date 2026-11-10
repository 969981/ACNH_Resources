
void FUN_00294bd0(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar1 = *(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58);
  uVar8 = (ulong)uVar1;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar8 * 0x18,uVar3);
  if (uVar1 != 0 && lVar4 != 0) {
    uVar5 = uVar8 * 3 & 3;
    if (uVar1 < 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      do {
        lVar6 = lVar6 + -4;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 4;
      } while (-lVar6 != (uVar8 * 3 & 0x3fffc));
      lVar6 = -lVar6;
    }
    if (uVar5 != 0) {
      puVar7 = (undefined8 *)(lVar4 + lVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    *(long *)(param_1 + 0xe8) = lVar4;
    if (uVar1 != 0 && lVar4 != 0) {
      lVar6 = 0;
      *(uint *)(param_1 + 0xe0) = (uint)uVar1;
      *(long *)(param_1 + 0xd8) = lVar4;
      do {
        iVar2 = *(int *)(param_1 + 0xd4);
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd8) + lVar6);
        *puVar7 = 0;
        puVar7[1] = 0;
        FUN_002236bc(param_1 + 0xc0,param_1 + 0xc0,(long)puVar7 + (long)iVar2);
        lVar6 = lVar6 + 0x18;
      } while (uVar8 * 0x18 != lVar6);
    }
    return;
  }
  *(long *)(param_1 + 0xe8) = lVar4;
  return;
}

