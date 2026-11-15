
void FUN_024cf228(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float local_4c;
  float fStack_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    fStack_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_4c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_4c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar8 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar5 = (**(code **)(*plVar2 + 0x148))();
      iVar4 = iVar8 - *(int *)(lVar5 + 4);
      if (0xb60b5e < iVar4 + 0x5b05afU) {
        iVar6 = (int)((float)iVar4 * 0.1666667);
        iVar4 = 0x10000000;
        if (iVar6 < 1) {
          iVar4 = -0x5b05b0;
        }
        iVar8 = -0x10000000;
        if (0 < iVar6) {
          iVar8 = 0x5b05b0;
        }
        iVar1 = iVar6;
        if (iVar4 <= iVar6) {
          iVar1 = iVar4;
        }
        if (iVar8 <= iVar6) {
          iVar8 = iVar1;
        }
        iVar8 = iVar8 + *(int *)(lVar5 + 4);
      }
      *(int *)(lVar5 + 4) = iVar8;
    }
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar8 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar8) {
      iVar8 = 0x7fff;
    }
    if (iVar8 < -0x7fff) {
      iVar8 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar8;
    fVar9 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar9 * 999.99994);
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar10 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar10;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  }
  if (*(char *)(param_1 + 0x865) != '\0') {
    uVar10 = (**(code **)(*(long *)(param_1 + 0x850) + (ulong)*(byte *)(param_1 + 0x864) * 8))
                       (param_1 + 0x850);
    *(undefined4 *)(param_1 + 0x858) = uVar10;
  }
  if ((*(int *)(param_1 + 0x178) == 0) &&
     ((((undefined1 *)(*(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) & 0xffffffff0000) !=
        &LAB_01010000 || ('\x11' < (char)(*(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x30)))
      || ((*(char *)(param_1 + 0x865) != '\0' &&
          (*(int *)(param_1 + 0x860) <= *(int *)(param_1 + 0x858))))))) {
    local_4c = 3.1249e-43;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,0xdf);
  }
  return;
}

