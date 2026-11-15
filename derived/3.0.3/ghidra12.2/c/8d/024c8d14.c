
void FUN_024c8d14(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_34 = 10;
    local_40 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) {
      local_40 = 1.4013e-44;
      plVar3 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x4c8);
      }
      lVar5 = (**(code **)(*plVar3 + 0x148))();
      iVar11 = *(int *)(lVar5 + 4);
      iVar4 = -0x80000000;
      if (-0x7fa4fa51 < iVar11) {
        iVar10 = (int)((float)(-0x80000000 - iVar11) * 0.3);
        iVar4 = 0x5b05b0;
        if (iVar10 < 1) {
          iVar4 = -0x15555560;
        }
        iVar1 = 0x15555560;
        if (iVar10 < 1) {
          iVar1 = -0x5b05b0;
        }
        iVar2 = iVar10;
        if (iVar1 <= iVar10) {
          iVar2 = iVar1;
        }
        if (iVar4 <= iVar10) {
          iVar4 = iVar2;
        }
        iVar4 = iVar4 + iVar11;
      }
      *(int *)(lVar5 + 4) = iVar4;
    }
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
    if (((uVar7 & 1) != 0) &&
       ((*(char *)(param_1 + 0x17ac) != '\0' || ((*(uint *)(param_1 + 0xec8) & 1) == 0)))) {
      local_34 = 0xa1;
      lVar9 = *(long *)(param_1 + 0x70);
      uVar8 = 0;
      lVar5 = 0;
      if (lVar9 != 0) {
        uVar8 = 0;
        if (*(uint *)(lVar9 + 0x280) < 0x149) {
          uVar8 = *(uint *)(lVar9 + 0x280);
        }
        lVar5 = lVar9 + 0x278;
      }
      if (uVar8 != 0xa1) {
        local_40 = 2.25609e-43;
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
        FUN_03ebb160(lVar5,0xa1);
      }
    }
  }
  else {
    fStack_3c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
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
    iVar11 = 0x5b05b0;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar3 + 0x148))();
    iVar10 = iVar4 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar10 = (int)((float)iVar10 * 0.1666667);
      iVar4 = 0x10000000;
      if (iVar10 < 1) {
        iVar11 = -0x10000000;
        iVar4 = -0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar11 <= iVar10) {
        iVar11 = iVar1;
      }
      iVar4 = iVar11 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar4;
  }
  return;
}

