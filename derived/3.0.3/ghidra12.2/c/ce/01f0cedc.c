
void FUN_01f0cedc(long *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  FUN_01ed85e0();
  if (*(int *)(param_1[1] + 0x750) != 3) {
    if ((*(ushort *)((long)param_1 + 0xaf84) >> 1 & 1) == 0) {
      piVar2 = (int *)(param_1[3] + 0x10);
      uVar5 = *(uint *)(param_1[3] + 0x294);
      piVar4 = piVar2 + (ulong)uVar5 * 0x20;
      if (4 < uVar5) {
        piVar4 = piVar2;
      }
      if (*piVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x01f0cfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x540))(param_1);
        return;
      }
    }
    else {
      lVar7 = param_1[3];
      lVar8 = *(long *)PTR_DAT_04bb9a68;
      uVar6 = FUN_02085a50(lVar7,3,0);
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(lVar7 + 0x801) = 1;
        lVar1 = lVar7 + 0x10;
        lVar3 = lVar1 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar7 + 0x294)) {
          lVar3 = lVar1;
        }
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(lVar8 + 0x58);
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar8 + 0x5c);
        *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar8 + 0x60);
        lVar8 = lVar1 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar7 + 0x294)) {
          lVar8 = lVar1;
        }
        *(undefined1 *)(lVar8 + 0x7e) = 0;
      }
    }
  }
  return;
}

