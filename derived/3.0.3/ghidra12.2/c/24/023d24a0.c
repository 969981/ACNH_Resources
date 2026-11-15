
void FUN_023d24a0(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_5c;
  float fStack_58;
  float local_54;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar14 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar14 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar12 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar11 + 0x2ec) = uVar12;
    *(undefined1 *)((long)puVar11 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    fStack_58 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_5c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_54 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar11 + 0x4f,&local_5c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_5c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar5 = (**(code **)(*plVar2 + 0x148))();
      iVar3 = iVar4 - *(int *)(lVar5 + 4);
      if (0xb60b5e < iVar3 + 0x5b05afU) {
        iVar10 = (int)((float)iVar3 * 0.1666667);
        iVar3 = 0x10000000;
        if (iVar10 < 1) {
          iVar3 = -0x5b05b0;
        }
        iVar4 = -0x10000000;
        if (0 < iVar10) {
          iVar4 = 0x5b05b0;
        }
        iVar1 = iVar10;
        if (iVar3 <= iVar10) {
          iVar1 = iVar3;
        }
        if (iVar4 <= iVar10) {
          iVar4 = iVar1;
        }
        iVar4 = iVar4 + *(int *)(lVar5 + 4);
      }
      *(int *)(lVar5 + 4) = iVar4;
    }
  }
  uVar6 = FUN_02545954((byte *)(param_1 + 0x1ee8));
  if ((uVar6 & 1) != 0) {
    if (DAT_05467d70 == 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          puVar11 = &DAT_054f0958;
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar11 = &DAT_054f0958;
        }
      }
      else {
        uVar6 = (ulong)*(byte *)(param_1 + 0x1ee8);
        puVar11 = (undefined8 *)(DAT_054f5738 + 0x204);
        if (uVar6 < 8) {
          puVar11 = puVar11 + uVar6;
        }
      }
      local_5c = 7.42688e-44;
      if ((*(uint *)((long)puVar11 + 4) >> 0x15 & 1) == 0) {
        return;
      }
    }
    pfVar7 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar7 = (float *)(param_1 + 0xeec);
    }
    fVar14 = SQRT(pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
    lVar5 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar5 + 0x120) + 0xf0))(lVar5 + 0x120);
    if (*pfVar7 <= fVar14) {
      lVar5 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar5 + 0x120) + 0xf0))(lVar5 + 0x120);
      fVar13 = *pfVar7;
      lVar5 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar5 + 0x120) + 0xf0))(lVar5 + 0x120);
      fVar13 = (fVar14 - *pfVar7) / (1.0 - fVar13);
      fVar14 = 0.9999;
      if (fVar13 <= 0.9999) {
        fVar14 = fVar13;
      }
      if ((0.0 <= fVar13) && (0.0 < fVar14)) {
        if (DAT_05467d24 != '\0') {
          FUN_0237432c(param_1,6);
          return;
        }
        lVar8 = *(long *)(param_1 + 0x70);
        uVar9 = 0;
        lVar5 = 0;
        if (lVar8 != 0) {
          uVar9 = 0;
          if (*(uint *)(lVar8 + 0x280) < 0x149) {
            uVar9 = *(uint *)(lVar8 + 0x280);
          }
          lVar5 = lVar8 + 0x278;
        }
        if (uVar9 != 0xc) {
          local_5c = 1.68156e-44;
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
          FUN_03ebb160(lVar5,0xc);
        }
      }
    }
  }
  return;
}

