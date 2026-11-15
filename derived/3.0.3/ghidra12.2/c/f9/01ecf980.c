
undefined8
FUN_01ecf980(long param_1,uint *param_2,uint *param_3,float *param_4,undefined8 param_5,
            uint *param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  
  puVar7 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_5);
  if (*(long *)puVar7 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if (((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
       (iVar9 = FUN_02076ca0(param_5,param_8,param_9), iVar9 < 0x17)) {
      uVar13 = 0;
      bVar15 = false;
      uVar8 = 0;
      uVar1 = *param_6;
      iVar9 = (int)((float)(int)*param_4 / 5.0) - (uint)(*param_4 < 0.0);
      uVar5 = iVar9 - 2;
      iVar6 = (int)((float)(int)param_4[2] / 5.0) - (uint)(param_4[2] < 0.0);
      uVar12 = iVar6 - 2;
      uVar14 = uVar5;
      do {
        uVar3 = (ushort)*param_6;
        if (((((uint)uVar3 <= (uVar14 & 0xffff)) &&
             ((uVar14 & 0xffff) <= (((uint)uVar3 + (uint)(ushort)param_6[3]) - 1 & 0xffff))) &&
            ((uVar4 = *(ushort *)((long)param_6 + 2), (uint)uVar4 <= (uVar12 & 0xffff) &&
             (((uVar12 & 0xffff) <= (((uint)uVar4 + (uint)(ushort)param_6[4]) - 1 & 0xffff) &&
              (uVar11 = (uVar14 - uVar3) +
                        *(int *)(*(long *)(param_6 + 0x10) + 0x1c) * (uVar12 - uVar4),
              (*(uint *)(*(long *)(*(long *)(param_6 + 0x10) + 0x10) + (long)((int)uVar11 >> 5) * 4)
               >> (ulong)(uVar11 & 0x1f) & 1) != 0)))))) &&
           (uVar11 = (uVar14 - (uVar1 & 0xffff)) +
                     *(int *)(param_7 + 0x1c) * (uVar12 - (uVar1 >> 0x10)),
           (*(uint *)(*(long *)(param_7 + 0x10) + (long)((int)uVar11 >> 5) * 4) >>
            (ulong)(uVar11 & 0x1f) & 1) == 0)) {
          if (bVar15) {
            uVar16 = *param_3;
            uVar17 = param_3[1];
            uVar10 = param_3[2];
            uVar11 = param_3[3];
          }
          else {
            uVar2 = *param_2;
            *param_2 = uVar2 + 1;
            uVar16 = param_3[1];
            uVar11 = *param_3 ^ *param_3 << 0xb;
            uVar17 = param_3[2];
            uVar10 = param_3[3];
            *param_3 = uVar16;
            param_3[1] = uVar17;
            uVar11 = uVar11 >> 8 ^ uVar10 >> 0x13 ^ uVar11 ^ uVar10;
            param_3[2] = uVar10;
            param_3[3] = uVar11;
            if (((ulong)uVar11 * (ulong)(uVar2 + 1) & 0xffffffff00000000) != 0) {
              return 0;
            }
            uVar13 = 1;
          }
          uVar16 = uVar16 ^ uVar16 << 0xb;
          *param_3 = uVar17;
          param_3[1] = uVar10;
          uVar8 = uVar8 + 1;
          uVar16 = uVar16 >> 8 ^ uVar11 >> 0x13 ^ uVar16 ^ uVar11;
          param_3[2] = uVar11;
          param_3[3] = uVar16;
          if (((ulong)uVar16 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
            bVar15 = true;
            *(uint *)(param_1 + 8) = uVar14;
            *(uint *)(param_1 + 0xc) = uVar12;
          }
          else {
            bVar15 = true;
          }
        }
        if ((int)uVar14 < iVar9 + 2) {
          uVar14 = uVar14 + 1;
        }
        else {
          uVar12 = uVar12 + 1;
          uVar14 = uVar5;
        }
      } while ((uVar5 != uVar14) || (iVar6 + 3U != uVar12));
      return uVar13;
    }
  }
  return 0;
}

