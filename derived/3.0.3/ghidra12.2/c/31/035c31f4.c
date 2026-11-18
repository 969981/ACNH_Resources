
void FUN_035c31f4(long param_1,short param_2,ushort param_3)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x658) & 7;
  lVar6 = param_1 + uVar5 * 0xb8;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x660) != 0) {
    uVar1 = (short)((uint)(*(int *)(param_1 + 0x668) - (int)*(long *)(param_1 + 0x660)) >> 1);
  }
  puVar7 = (ulong *)(lVar6 + 0x90);
  uVar3 = *puVar7;
  uVar4 = *(ulong *)(lVar6 + 0x98);
  if (uVar4 <= uVar3) {
    uVar4 = uVar4 + (uVar4 >> 1);
    if (uVar4 <= uVar3 + 1) {
      uVar4 = uVar3 + 1;
    }
    if (uVar4 < 5) {
      uVar4 = 4;
    }
    iVar2 = FUN_035c5900(lVar6 + 0x78,uVar4);
    if (iVar2 != 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      uVar4 = *puVar7;
      goto LAB_035c32c8;
    }
    uVar3 = *puVar7;
  }
  *(undefined2 *)(*(long *)(param_1 + uVar5 * 0xb8 + 0x88) + uVar3 * 2) = uVar1;
  uVar4 = *puVar7 + 1;
  *puVar7 = uVar4;
LAB_035c32c8:
  uVar3 = *(ulong *)(lVar6 + 0x98);
  if (uVar3 <= uVar4) {
    uVar3 = uVar3 + (uVar3 >> 1);
    if (uVar3 <= uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 5) {
      uVar3 = 4;
    }
    iVar2 = FUN_035c5900(lVar6 + 0x78,uVar3);
    if (iVar2 != 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      return;
    }
    uVar4 = *puVar7;
  }
  *(ushort *)(*(long *)(param_1 + uVar5 * 0xb8 + 0x88) + uVar4 * 2) = param_3 & 0xff | param_2 << 8;
  *puVar7 = *puVar7 + 1;
  return;
}

