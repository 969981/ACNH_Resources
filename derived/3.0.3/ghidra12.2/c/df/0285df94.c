
void FUN_0285df94(long param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_04bb43c0;
  psVar1 = (short *)(param_1 + 0x24);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(psVar1);
  lVar8 = *(long *)puVar4;
  if (lVar8 == 0) {
LAB_0285e004:
    uVar6 = FUN_0277d7b4(psVar1,param_2);
    if ((uVar6 & 1) != 0) {
      return;
    }
    lVar8 = *(long *)puVar4;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0285e004;
  }
  psVar2 = (short *)(param_1 + 0x2c);
  uVar5 = FUN_0277d6c4(psVar2);
  lVar7 = *(long *)puVar4;
  if (lVar7 == 0) {
LAB_0285e05c:
    uVar6 = FUN_0277d7b4(psVar2,param_2);
    if ((uVar6 & 1) != 0) {
      return;
    }
    lVar7 = *(long *)puVar4;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0285e05c;
  }
  psVar3 = (short *)(param_1 + 0x34);
  uVar5 = FUN_0277d6c4(psVar3);
  if (*(long *)puVar4 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_0285e0c4;
  }
  uVar6 = FUN_0277d7b4(psVar3,param_2);
  if ((uVar6 & 1) != 0) {
    return;
  }
LAB_0285e0c4:
  if (*psVar1 == -2) {
    lVar7 = 0;
  }
  else if (*psVar2 == -2) {
    lVar7 = 1;
  }
  else {
    if (*psVar3 != -2) {
      return;
    }
    lVar7 = 2;
  }
  psVar1 = psVar1 + lVar7 * 4;
  *psVar1 = *param_2;
  *(char *)(psVar1 + 1) = (char)param_2[1];
  *(undefined1 *)((long)psVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(psVar1 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}

