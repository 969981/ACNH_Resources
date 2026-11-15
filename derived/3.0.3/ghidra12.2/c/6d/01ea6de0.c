
void FUN_01ea6de0(long *param_1)

{
  ulong *puVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  puVar1 = (ulong *)(param_1 + 0x15ab);
  if ((char)param_1[0x15cc] == '\0') {
    FUN_02087b00(param_1[3],2);
  }
  *(undefined1 *)((long)param_1 + 0x7d09) = 0;
  FUN_03ebb160(param_1 + 0xf96,0);
  if (((byte)*puVar1 >> 1 & 1) == 0) {
    lVar4 = param_1[3];
    piVar2 = (int *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar4 + 0x294)) {
      piVar2 = (int *)(lVar4 + 0x10);
    }
    if (*piVar2 - 1U < 2) {
      FUN_02085a50(lVar4,0,0);
    }
  }
  else {
    lVar7 = param_1[3];
    uVar3 = *(undefined4 *)(lVar7 + 0x294);
    *(undefined4 *)(lVar7 + 0x294) = 2;
    lVar4 = FUN_0251b3b0(param_1 + 0xfad,0);
    if (((lVar4 == 0) || (uVar5 = (ulong)*(byte *)(param_1 + 0xfad), 7 < uVar5)) ||
       (DAT_054f5738 == 0)) {
      puVar6 = &DAT_04c9a0c8;
    }
    else {
      puVar6 = (undefined4 *)(DAT_054f5738 + uVar5 * 4 + 0xde8);
    }
    FUN_02085e20(param_1[3],0,*puVar6,PTR_DAT_04bb6928,0);
    *(undefined4 *)(lVar7 + 0x294) = uVar3;
  }
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x548) == 0) {
    *(undefined4 *)(lVar4 + 0x590) = 0;
  }
  *(undefined1 *)(lVar4 + 0x68d) = 1;
  (**(code **)(*param_1 + 0x48))(param_1);
  *puVar1 = *puVar1 & 0xfffffffffffe7fff;
  lVar4 = *(long *)(param_1[1] + 0x3d0);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x260) = 0;
    *(undefined8 *)(lVar4 + 600) = 0;
  }
  *(undefined1 *)(param_1 + 0x15cc) = 1;
  return;
}

