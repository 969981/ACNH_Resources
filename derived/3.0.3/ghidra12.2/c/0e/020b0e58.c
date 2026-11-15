
void FUN_020b0e58(long param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  FUN_01e27f80(param_1 + 0xda0);
  if (DAT_04c487d4 == -1) {
LAB_020b0fd4:
    iVar10 = 0;
    iVar12 = 0;
    *(undefined4 *)(param_1 + 0x2e18) = 0;
    *(undefined4 *)(param_1 + 0x2e28) = 0;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar3 >> 3 & 1) == 0) || (DAT_05574040 == 0)) goto LAB_020b0fd4;
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
      if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
         (lVar8 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar8 != 0)) goto LAB_020b0f28;
      goto LAB_020b0fd4;
    }
    lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar8 == 0) goto LAB_020b0fd4;
    lVar8 = lVar8 + 0x70;
LAB_020b0f28:
    if ((*(long **)(lVar8 + 0x1bf260) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar8 + 0x1bf260), puVar11 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar11)();
      uVar7 = uVar7 ^ 1;
    }
    uVar9 = FUN_028d53e4(*(long *)(lVar8 + 0x1bf248) + *(long *)(lVar8 + 0x1bf240));
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x1bf260) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x1bf260) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    if ((uVar9 & 1) == 0) goto LAB_020b0fd4;
    iVar4 = *(int *)(DAT_050d57c8 + 0x28) + -4;
    iVar10 = *(int *)(DAT_050d57c8 + 0x38) + 4;
    iVar12 = *(int *)(DAT_050d57c8 + 0x2c) + -4;
    iVar1 = *(int *)(DAT_050d57c8 + 0x3c) + 4;
    iVar2 = iVar4;
    if (iVar10 <= iVar4) {
      iVar2 = iVar10;
    }
    if (iVar4 <= iVar10) {
      iVar4 = iVar10;
    }
    *(int *)(param_1 + 0x2e18) = iVar2;
    *(int *)(param_1 + 0x2e28) = iVar4;
    iVar10 = iVar12;
    if (iVar1 <= iVar12) {
      iVar10 = iVar1;
    }
    if (iVar12 <= iVar1) {
      iVar12 = iVar1;
    }
  }
  *(int *)(param_1 + 0x2e1c) = iVar10;
  sVar5 = DAT_04c487d4;
  bVar6 = DAT_04c487d4 != -1;
  *(int *)(param_1 + 0x2e2c) = iVar12;
  if (bVar6) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 3 & 1) != 0) {
      FUN_020b1130(param_1);
    }
  }
  if (*(long *)(param_1 + 0x175a0) != 0) {
    if (DAT_04c487d4 != -1) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x15 & 1) != 0) {
LAB_020b10c8:
        FUN_02115c50();
        return;
      }
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x17 & 1) != 0) goto LAB_020b10c8;
    }
    uVar9 = FUN_0290d828();
    if (((uVar9 & 1) == 0) && ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
      (**(code **)(**(long **)(param_1 + 0x17598) + 0x38))
                (*(long **)(param_1 + 0x17598),*(undefined8 *)(param_1 + 0x175a0));
      *(undefined8 *)(param_1 + 0x175a0) = 0;
    }
  }
  return;
}

