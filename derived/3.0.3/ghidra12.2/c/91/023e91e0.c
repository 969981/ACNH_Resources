
void FUN_023e91e0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = param_1 + 0x1ee8;
    lVar7 = FUN_00a77090(lVar6);
    if ((lVar7 != 0) || (lVar7 = FUN_00a76ee4(lVar6), lVar7 != 0)) {
      if (-1 < (int)DAT_04c47dc0) {
        uVar8 = 0;
        piVar11 = (int *)PTR_DAT_04bb6258;
        do {
          piVar4 = piVar11;
          if (999 < uVar8) {
            piVar4 = (int *)PTR_DAT_04bb6258;
          }
          if ((*piVar4 != 0) && (*(long *)(piVar4 + 2) == *(long *)(lVar7 + 8))) {
            if ((uint)uVar8 != 0xffffffff) {
              if (999 < (uint)uVar8) {
                piVar11 = (int *)PTR_DAT_04bb6258;
              }
              iVar10 = *piVar11;
              goto LAB_023e940c;
            }
            break;
          }
          uVar8 = uVar8 + 1;
          piVar11 = piVar11 + 4;
        } while ((ulong)DAT_04c47dc0 + 1 != uVar8);
      }
    }
    iVar10 = 0;
LAB_023e940c:
    iVar5 = *(int *)(param_1 + 0x834);
    lVar6 = FUN_00a77090(lVar6);
    if ((lVar6 != 0) && (-1 < (int)DAT_04c47dc0)) {
      uVar8 = 0;
      piVar11 = (int *)PTR_DAT_04bb6258;
      do {
        piVar4 = piVar11;
        if (999 < uVar8) {
          piVar4 = (int *)PTR_DAT_04bb6258;
        }
        if ((*piVar4 != 0) && (*(long *)(piVar4 + 2) == *(long *)(lVar6 + 0x10))) {
          if ((uint)uVar8 != 0xffffffff) {
            if (999 < (uint)uVar8) {
              piVar11 = (int *)PTR_DAT_04bb6258;
            }
            iVar9 = *piVar11;
            if (iVar10 == iVar5) {
              return;
            }
            goto LAB_023e9498;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 4;
      } while ((ulong)DAT_04c47dc0 + 1 != uVar8);
    }
    iVar9 = 0;
    if (iVar10 != iVar5) {
LAB_023e9498:
      if (iVar9 != *(int *)(param_1 + 0x834)) {
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
        *(byte *)(param_1 + 0x1980) = (byte)(*(uint *)(param_1 + 0x17d0) >> 6) & 1;
        local_50 = 1.26117e-43;
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
        lVar6 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar6 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar6,0x5a);
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffffffbf;
      }
    }
  }
  else {
    fStack_4c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_50 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_50);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_44 = 10;
      local_50 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar10 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar3 + 0x148))();
    iVar5 = iVar10 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar5 + 0x5b05afU) {
      iVar9 = (int)((float)iVar5 * 0.1666667);
      iVar5 = 0x10000000;
      if (iVar9 < 1) {
        iVar5 = -0x5b05b0;
      }
      iVar10 = -0x10000000;
      if (0 < iVar9) {
        iVar10 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar5 <= iVar9) {
        iVar1 = iVar5;
      }
      if (iVar10 <= iVar9) {
        iVar10 = iVar1;
      }
      iVar10 = iVar10 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar10;
  }
  return;
}

