
void FUN_0244fc18(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 local_34;
  
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 == 1) {
    fStack_3c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_40 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_38 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_40);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_34 = 10;
      local_40 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0244fdb0;
    }
    iVar7 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar3 + 0x148))();
    iVar4 = iVar7 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar4 + 0x5b05afU) {
      iVar6 = (int)((float)iVar4 * 0.1666667);
      iVar4 = 0x10000000;
      if (iVar6 < 1) {
        iVar4 = -0x5b05b0;
      }
      iVar7 = -0x10000000;
      if (0 < iVar6) {
        iVar7 = 0x5b05b0;
      }
      iVar1 = iVar6;
      if (iVar4 <= iVar6) {
        iVar1 = iVar4;
      }
      if (iVar7 <= iVar6) {
        iVar7 = iVar1;
      }
      iVar7 = iVar7 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar7;
    iVar7 = *(int *)(param_1 + 0x178);
  }
  if (iVar7 != 0) {
    return;
  }
LAB_0244fdb0:
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  local_40 = 4.52619e-43;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar5,0x143);
  return;
}

