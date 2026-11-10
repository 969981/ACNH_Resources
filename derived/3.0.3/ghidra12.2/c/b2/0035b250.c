
undefined8
FUN_0035b250(undefined4 *param_1,undefined2 *param_2,uint param_3,ushort *param_4,uint param_5,
            undefined8 param_6,int *param_7)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  short *psVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  uVar6 = 0;
  if (((param_3 != 0) && (param_2 != (undefined2 *)0x0)) && (param_4 != (ushort *)0x0)) {
    *param_2 = 0;
    if ((param_5 == 0) || (*param_4 == 0)) {
      uVar6 = 1;
    }
    else {
      iVar3 = *param_7;
      puVar1 = param_4 + param_5;
      iVar17 = 0;
      uVar15 = 0;
LAB_0035b2d0:
      psVar7 = (short *)FUN_0035afc0(param_4,puVar1,param_6,param_7);
      uVar14 = (uint)uVar15;
      uVar12 = 0x7c2;
      iVar10 = (int)((ulong)((long)psVar7 - (long)param_4) >> 1);
      iVar2 = iVar10 + 1;
      iVar18 = ~uVar14 + param_3;
      if (iVar2 <= iVar18) {
        iVar18 = iVar10 + 1;
      }
      lVar8 = (long)iVar18;
      uVar11 = 0;
      do {
        iVar5 = uVar12 - uVar11;
        iVar16 = iVar5;
        if ((int)uVar12 < (int)uVar11) {
          iVar16 = iVar5 + 1;
        }
        uVar13 = uVar11 + (iVar16 >> 1);
        iVar16 = iVar2;
        if (iVar5 + 1U < 3) {
          if ((uint)param_4[(long)iVar18 + -1] <=
              (uint)(byte)(&DAT_04130eb0)[(long)(int)uVar13 * 4] +
              (uint)*(ushort *)
                     (&DAT_04130eae +
                     (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2))) {
            iVar16 = iVar10;
            if ((&DAT_04130eb1)[(long)(int)uVar13 * 4] != '\'') {
              iVar16 = iVar2;
            }
            iVar18 = iVar18 - (uint)((&DAT_04130eb1)[(long)(int)uVar13 * 4] == '\'');
            lVar8 = (long)iVar18;
          }
          break;
        }
        if ((uint)param_4[(long)iVar18 + -1] <
            (uint)*(ushort *)
                   (&DAT_04130eae +
                   (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2))) {
          uVar12 = uVar13;
          uVar13 = uVar11;
        }
        uVar11 = uVar13;
      } while ((int)uVar13 < (int)uVar12);
      memcpy(param_2 + (int)uVar14,param_4,lVar8 << 1);
      uVar9 = (long)iVar18 + (long)(int)uVar14;
      param_2[uVar9] = 0;
      if (iVar16 == iVar18) {
        param_4 = (ushort *)(psVar7 + 1);
        if (param_4 == puVar1) {
LAB_0035b4c8:
          uVar6 = 1;
          goto joined_r0x0035b4d0;
        }
        iVar17 = iVar17 + 1;
        if ((0 < iVar3) && (*param_7 <= iVar17)) goto LAB_0035b4e0;
        if (*psVar7 == 10) {
          uVar15 = uVar9 & 0xffffffff;
          cVar4 = (char)param_7[1];
        }
        else {
          uVar15 = (long)(int)uVar9 + 1;
          if (param_3 <= (uint)uVar15) goto LAB_0035b4e0;
          param_2[uVar9] = 10;
          param_2[uVar15] = 0;
          cVar4 = (char)param_7[1];
        }
        if (cVar4 != '\0') {
          while( true ) {
            uVar12 = 0x7c2;
            uVar14 = 0;
            while( true ) {
              iVar18 = uVar12 - uVar14;
              iVar2 = iVar18;
              if ((int)uVar12 < (int)uVar14) {
                iVar2 = iVar18 + 1;
              }
              uVar11 = uVar14 + (iVar2 >> 1);
              if (iVar18 + 1U < 3) break;
              if ((uint)*param_4 <
                  (uint)*(ushort *)
                         (&DAT_04130eae +
                         (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2))) {
                uVar12 = uVar11;
                uVar11 = uVar14;
              }
              uVar14 = uVar11;
              if ((int)uVar12 <= (int)uVar11) goto LAB_0035b2d0;
            }
            if (((uint)(byte)(&DAT_04130eb0)[(long)(int)uVar11 * 4] +
                 (uint)*(ushort *)
                        (&DAT_04130eae +
                        (-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2)) <
                 (uint)*param_4) || ((&DAT_04130eb1)[(long)(int)uVar11 * 4] != '\'')) break;
            param_4 = param_4 + 1;
            if (param_4 == puVar1) {
              uVar12 = (int)uVar15 - 1;
              uVar9 = (ulong)uVar12;
              param_2[(int)uVar12] = 0;
              goto LAB_0035b4c8;
            }
          }
        }
        goto LAB_0035b2d0;
      }
LAB_0035b4e0:
      uVar6 = 0;
joined_r0x0035b4d0:
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = (int)uVar9;
      }
    }
  }
  return uVar6;
}

