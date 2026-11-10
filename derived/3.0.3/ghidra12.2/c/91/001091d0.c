
undefined8 FUN_001091d0(undefined8 param_1,long param_2,undefined2 *param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *__src;
  ushort *puVar16;
  short local_44 [2];
  
  puVar2 = (ushort *)(param_2 + 0xb996);
  uVar4 = *puVar2;
  __src = (void *)(param_2 + 0x2b8 + (ulong)uVar4 * 0x88);
  puVar16 = (ushort *)((long)__src + 0x80);
  *(undefined1 *)puVar16 = 0x31;
  *param_3 = 0xffff;
  uVar7 = *puVar2;
  sVar5 = FUN_00131950(param_1,param_2 + 0x2b8 + (ulong)uVar7 * 0x88,
                       *(undefined2 *)(param_2 + 0xb994),local_44);
  if (-1 < sVar5) {
    if (sVar5 != 1) {
      *(short *)(param_2 + (ulong)uVar7 * 2 + 0xb738) = local_44[0];
      uVar7 = *puVar2;
LAB_00109294:
      *puVar2 = uVar7 + 1;
      uVar6 = FUN_001093b0(param_2);
      *param_3 = uVar6;
      if (300 < *puVar2) {
        *puVar2 = 300;
      }
      return 1;
    }
    uVar7 = *puVar2;
    if ((ulong)uVar7 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        if (*(short *)(param_2 + 0xb738 + uVar9 * 2) == local_44[0]) {
          if (((uint)uVar9 & 0xffff) == 0xfffe) {
            return 0;
          }
          if (-1 < (short)uVar9) {
            lVar10 = param_2 + (lVar8 >> 0x30) * 0x88;
            iVar1 = (int)*(short *)(lVar10 + 0x330) + (int)*(short *)(lVar10 + 0x2c0);
            iVar14 = iVar1;
            if (399 < iVar1) {
              iVar14 = 400;
            }
            iVar15 = 100;
            if (99 < iVar1) {
              iVar15 = iVar14;
            }
            lVar12 = param_2 + (ulong)uVar4 * 0x88;
            iVar1 = (int)*(short *)(lVar10 + 0x2c0);
            if (((int)*(short *)(lVar10 + 0x330) & 0x80000000U) != 0) {
              iVar1 = iVar15;
            }
            iVar13 = (int)*(short *)(lVar12 + 0x2c0);
            uVar11 = (uint)*(short *)(lVar12 + 0x330);
            iVar14 = uVar11 + iVar13;
            iVar15 = iVar14;
            if (399 < iVar14) {
              iVar15 = 400;
            }
            iVar3 = 100;
            if (99 < iVar14) {
              iVar3 = iVar15;
            }
            if ((uVar11 & 0x80000000) != 0) {
              iVar13 = iVar3;
            }
            if (iVar1 < iVar13) {
              *puVar16 = *puVar16 & 0xf7ff |
                         *(ushort *)(param_2 + (lVar8 >> 0x30) * 0x88 + 0x338) & 0x800;
              memcpy((void *)(lVar10 + 0x2b8),__src,0x88);
              uVar6 = FUN_001093b0(param_2,(int)(short)uVar9);
              *param_3 = uVar6;
              return 0;
            }
            return 0;
          }
          goto LAB_00109294;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x1000000000000;
      } while (uVar9 < uVar7);
    }
  }
  return 0;
}

