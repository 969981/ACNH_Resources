
void FUN_03b336f0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  short sVar8;
  undefined2 uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  
  lVar6 = FUN_0037e610(param_3,"FrameBufferUse");
  piVar1 = (int *)(lVar6 + (ulong)*(uint *)(lVar6 + 4));
  uVar4 = *(ushort *)(lVar6 + 8);
  iVar3 = *piVar1;
  bVar5 = (**(code **)(*param_3 + 0x50))(param_3);
  uVar12 = 0;
  if (bVar5 != 0) {
    uVar11 = 0;
    do {
      lVar6 = (**(code **)(*param_3 + 0x58))(param_3,uVar11);
      uVar11 = uVar11 + 1;
      uVar2 = *(uint *)(lVar6 + 0x14) & 3;
      if (uVar12 <= uVar2) {
        uVar12 = uVar2;
      }
    } while (bVar5 != uVar11);
  }
  if ((-1 < iVar3) && (iVar3 < (int)uVar12)) {
    *(char *)(param_1 + 0x15e) = (char)iVar3;
    if (uVar4 < 2) {
      sVar8 = 0;
      sVar10 = 0;
    }
    else {
      sVar8 = (short)piVar1[1] << 1;
      if (uVar4 == 2) {
        sVar10 = 0;
      }
      else {
        sVar10 = (short)piVar1[2] << 1;
      }
    }
    *(short *)(param_1 + 0x158) = sVar8;
    *(short *)(param_1 + 0x15a) = sVar10;
    uVar7 = FUN_03b14760(param_2,param_3,param_4);
    *(undefined8 *)(param_1 + 8) = uVar7;
  }
  *(long *)(param_1 + 0x30) = param_1 + 0x78;
  lVar6 = FUN_0037e610(param_3,"FrameBufferAlpha");
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + (ulong)*(uint *)(lVar6 + 4));
    uVar9 = 0;
    if (iVar3 != 0) {
      if (iVar3 != 0xff) {
        return;
      }
      uVar9 = 1;
    }
    *(undefined2 *)(param_1 + 0x15c) = uVar9;
  }
  return;
}

