
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0251e380(float param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  short *psVar8;
  short *psVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar4 = (ulong)*param_2;
  if (7 < uVar4) {
    return (undefined4 *)0x0;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar8 = &DAT_054f0c08;
      if (iVar3 != 0) {
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
      psVar8 = &DAT_054f0c08;
    }
  }
  else {
    psVar8 = (short *)(DAT_054f5738 + uVar4 * 0xd0 +
                       (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar8[0x32] != '\0') && (*psVar8 == DAT_04c487d4)) {
    uVar4 = FUN_0231f070(*(undefined4 *)(psVar8 + 2),param_3 & 1);
    if ((uVar4 & 1) == 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          puVar5 = &DAT_054f0958;
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
            puVar5 = &DAT_054f0958;
          }
        }
        else {
          puVar5 = &DAT_054f0958;
        }
      }
      else {
        puVar5 = (undefined8 *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar5 = puVar5 + *param_2;
        }
      }
      if ((*(uint *)((long)puVar5 + 4) >> 0xf & 1) == 0) {
        return (undefined4 *)0x0;
      }
    }
    uVar4 = (ulong)*param_2;
    if (uVar4 < 8) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar9 = &DAT_054f0c08;
          if (iVar3 != 0) {
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
          psVar9 = &DAT_054f0c08;
        }
      }
      else {
        psVar9 = (short *)(DAT_054f5738 + uVar4 * 0xd0 +
                           (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
      }
      if ((((char)psVar9[0x32] != '\0') && (*psVar9 == DAT_04c487d4)) &&
         ((uVar4 = FUN_0231f070(*(undefined4 *)(psVar9 + 2),param_3 & 1), (uVar4 & 1) != 0 ||
          (uVar4 = FUN_0251b2f8(param_2), (uVar4 & 1) != 0)))) {
        if (((DAT_054f0940 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_054f0940), iVar3 != 0)) {
          __cxa_guard_release(&DAT_054f0940);
        }
        uVar4 = (ulong)(*(uint *)(psVar9 + 0x22) >> 0x14) & 0xff0;
        fVar10 = (float)(*(uint *)(psVar9 + 0x22) & 0xffffff) * 5.9604645e-08;
        fVar11 = *(float *)((long)&DAT_04199798 + uVar4) +
                 fVar10 * *(float *)((long)&DAT_0419979c + uVar4);
        bVar1 = *param_2;
        bVar2 = 7 < bVar1;
        fVar10 = *(float *)((long)&DAT_041997a0 + uVar4) +
                 fVar10 * *(float *)((long)&DAT_041997a4 + uVar4);
        if (bVar2) {
          bVar1 = 0xff;
        }
        pfVar6 = (float *)(&DAT_054f08e0 + (ulong)(uint)(int)(char)bVar1 * 3);
        fVar13 = fVar11 * 0.0;
        if (bVar2) {
          pfVar6 = (float *)&DAT_054f08e0;
        }
        fVar12 = *(float *)(psVar8 + 8);
        fVar14 = *(float *)(psVar8 + 10);
        *pfVar6 = *(float *)(psVar8 + 6) + fVar13 * 0.0 + fVar10 * 0.0 + param_1 * (fVar11 + 0.0);
        pfVar6[1] = fVar12 + (fVar13 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0 + param_1 * fVar13;
        pfVar6[2] = fVar14 + (fVar10 * 0.0 * 0.0 - fVar11 * 0.0) + param_1 * fVar10;
        bVar1 = *param_2;
        bVar2 = 7 < bVar1;
        if (bVar2) {
          bVar1 = 0xff;
        }
        puVar7 = &DAT_054f08e0 + (ulong)(uint)(int)(char)bVar1 * 3;
        if (bVar2) {
          puVar7 = &DAT_054f08e0;
        }
        return puVar7;
      }
    }
  }
  return (undefined4 *)0x0;
}

