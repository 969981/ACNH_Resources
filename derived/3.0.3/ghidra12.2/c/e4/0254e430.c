
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0254e430(byte *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  short *psVar11;
  undefined8 *puVar12;
  
  if (7 < (ulong)*param_1) {
    return 0;
  }
  lVar1 = DAT_054f5738 + (ulong)*param_1 * 0x80;
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar7 = 0;
    puVar10 = DAT_055c1b60;
    do {
      if (*(int *)(puVar10 + -1) == *(int *)(puVar12 + 7)) {
        if (sVar7 != -1) goto LAB_0254e534;
        break;
      }
      puVar10 = (undefined8 *)puVar10[1];
      sVar7 = sVar7 + 1;
    } while (puVar10 != &DAT_055c1b58);
  }
  sVar7 = 0;
LAB_0254e534:
  if (*(short *)(lVar1 + 0x2e9) == sVar7) {
    if ((DAT_054f5738 == 0) || (uVar9 = (ulong)*param_1, 7 < uVar9)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar11 = &DAT_054f0c08;
        if (iVar5 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar11 = &DAT_054f0c08;
      }
    }
    else {
      psVar11 = (short *)(DAT_054f5738 + uVar9 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar9 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((((char)psVar11[0x32] == '\0') || (*psVar11 != DAT_04c487d4)) ||
       (uVar8 = *(uint *)(psVar11 + 2), 0x148 < uVar8)) {
      uVar8 = 0;
    }
    puVar6 = (uint *)FUN_0251d928(uVar8);
    puVar4 = (uint *)((long)puVar6 - (ulong)*puVar6);
    if (((*puVar6 != 0) && (puVar4 != (uint *)0x0)) &&
       ((*puVar4 != 0 && ((uVar8 = puVar4[1], uVar8 != 0 && ((ulong)(ushort)puVar4[2] != 0)))))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar4 + lVar2 + (ulong)(ushort)puVar4[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar8 != 0) {
          uVar3 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar8);
        }
        if (*puVar4 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_05490140) && (*(short *)(DAT_05490148 + (long)(int)uVar3 * 2) == 1)) {
          return 0;
        }
      }
    }
    if ((*(byte *)(lVar1 + 0x2fd) & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

