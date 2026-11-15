
void FUN_023d8d20(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar6 = &DAT_05240280;
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    uVar7 = FUN_0170a6d0(puVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x70);
      if ((lVar5 == 0) || (local_40 = *(float *)(lVar5 + 0x288), local_40 != 4.45613e-43)) {
        uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar7 & 1) == 0) {
          local_38 = 0.0;
          local_40 = 8.40779e-45;
          local_3c = (float)CONCAT31(local_3c._1_3_,1);
          FUN_02374e74(param_1,&local_40);
        }
      }
      else {
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
        FUN_03ebb160(lVar5 + 0x278,0x13e);
      }
    }
  }
  else {
    local_3c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_40 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_38 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar6 + 0x4f,&local_40);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_34 = 10;
      local_40 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar4 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar8 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar8 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar4 = -0x10000000;
      if (0 < iVar8) {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar8;
      if (iVar3 <= iVar8) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar8) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar4;
  }
  return;
}

