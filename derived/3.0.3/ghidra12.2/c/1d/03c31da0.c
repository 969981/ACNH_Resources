
/* WARNING: Type propagation algorithm not settling */

ulong FUN_03c31da0(long *param_1,void *param_2,long param_3,uint *param_4,ulong param_5,int *param_6
                  ,ulong param_7,long param_8)

{
  long *plVar1;
  long *plVar2;
  byte *__src;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ulong __n;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  void *pvVar13;
  ulong __n_00;
  void *pvVar14;
  byte bVar15;
  
  if (param_8 != 0) {
    param_6 = *(int **)(param_8 + 8);
    param_7 = *(ulong *)(param_8 + 0x10);
  }
  pvVar14 = param_2;
  if (4 < param_5) {
    puVar3 = (undefined8 *)((long)param_1 + 0x683c);
    plVar1 = param_1 + 4;
    bVar15 = 0;
    do {
      if (*param_4 >> 4 != 0x184d2a5) {
        if (param_8 == 0) {
          piVar9 = (int *)0x0;
          param_1[0xe15] = 0;
          *(undefined4 *)((long)param_1 + 0x70a4) = 0;
          param_1[0xe13] = 0;
          *(undefined4 *)(param_1 + 0xe2d) = 0;
          lVar4 = 5;
          if ((int)param_1[0xe22] == 1) {
            lVar4 = 1;
          }
          param_1[0xe0d] = lVar4;
          param_1[0xe09] = 0;
          param_1[0xe0a] = 0;
          param_1[0xe0b] = 0;
          param_1[0xe0c] = 0;
          *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
          *puVar3 = 0x400000001;
          *(undefined4 *)((long)param_1 + 0x6844) = 8;
          *param_1 = (long)plVar1;
          param_1[1] = (long)(param_1 + 0x306);
          param_1[2] = (long)(param_1 + 0x205);
          param_1[3] = (long)(param_1 + 0x507);
          pvVar13 = (void *)0x0;
          if (param_7 != 0 && param_6 != (int *)0x0) {
            piVar9 = param_6;
            piVar12 = param_6;
            if ((7 < param_7) && (*param_6 == -0x13cf5bc9)) {
              *(int *)(param_1 + 0xe2d) = param_6[1];
              uVar10 = FUN_03c32a80(plVar1,param_6,param_7);
              if (0xffffffffffffff88 < uVar10) {
                return 0xffffffffffffffe2;
              }
              param_1[0xe15] = 0x100000001;
              piVar9 = (int *)((long)param_6 + uVar10);
              param_1[0xe0c] = param_1[0xe09];
              piVar12 = (int *)((long)piVar9 + (param_1[0xe0a] - param_1[0xe09]));
            }
            param_1[0xe0b] = (long)piVar12;
            param_1[0xe0a] = (long)piVar9;
            param_1[0xe09] = (long)((long)param_6 + param_7);
            pvVar13 = (void *)((long)param_6 + param_7);
          }
        }
        else {
          lVar4 = *(long *)(param_8 + 8);
          lVar5 = *(long *)(param_8 + 0x10);
          *(undefined4 *)((long)param_1 + 0x70a4) = 0;
          param_1[0xe13] = 0;
          *(undefined4 *)(param_1 + 0xe2d) = 0;
          plVar2 = param_1 + 0xe15;
          *plVar2 = 0;
          *(uint *)((long)param_1 + 0x716c) = (uint)(param_1[0xe0c] != lVar4 + lVar5);
          lVar4 = 5;
          if ((int)param_1[0xe22] == 1) {
            lVar4 = 1;
          }
          param_1[0xe0d] = lVar4;
          param_1[0xe09] = 0;
          param_1[0xe0a] = 0;
          param_1[0xe0b] = 0;
          param_1[0xe0c] = 0;
          *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
          *puVar3 = 0x400000001;
          *(undefined4 *)((long)param_1 + 0x6844) = 8;
          *param_1 = (long)plVar1;
          param_1[1] = (long)(param_1 + 0x306);
          param_1[2] = (long)(param_1 + 0x205);
          param_1[3] = (long)(param_1 + 0x507);
          *(undefined4 *)(param_1 + 0xe2d) = *(undefined4 *)(param_8 + 0x6840);
          piVar9 = *(int **)(param_8 + 8);
          param_1[0xe0a] = (long)piVar9;
          param_1[0xe0b] = *(long *)(param_8 + 8);
          pvVar13 = (void *)(*(long *)(param_8 + 8) + *(long *)(param_8 + 0x10));
          param_1[0xe0c] = (long)pvVar13;
          param_1[0xe09] = (long)pvVar13;
          if (*(int *)(param_8 + 0x6844) == 0) {
            *plVar2 = 0;
          }
          else {
            *plVar2 = 0x100000001;
            *param_1 = param_8 + 0x18;
            param_1[1] = param_8 + 0x1828;
            param_1[2] = param_8 + 0x1020;
            param_1[3] = param_8 + 0x2830;
            *(undefined4 *)puVar3 = *(undefined4 *)(param_8 + 0x6834);
            *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_8 + 0x6838);
            *(undefined4 *)((long)param_1 + 0x6844) = *(undefined4 *)(param_8 + 0x683c);
          }
        }
        if (pvVar13 != pvVar14) {
          param_1[0xe0c] = (long)pvVar13;
          param_1[0xe0a] = (long)pvVar14;
          param_1[0xe09] = (long)pvVar14;
          param_1[0xe0b] = (long)pvVar14 + ((long)piVar9 - (long)pvVar13);
        }
        if (8 < param_5) {
          bVar6 = (byte)param_4[1];
          lVar4 = *(long *)(&DAT_04057b20 + ((ulong)bVar6 & 3) * 8) +
                  *(long *)(&DAT_040587a0 + ((ulong)(bVar6 >> 3) & 0x18));
          if ((bVar6 & 0x20) == 0) {
            lVar4 = lVar4 + 1;
          }
          lVar4 = lVar4 + (ulong)((uint)(bVar6 < 0x40) & (bVar6 & 0x20) >> 5);
          uVar10 = lVar4 + 5;
          __n = uVar10;
          if (0xffffffffffffff87 < uVar10 && lVar4 != -0x7d) goto LAB_03c32434;
          if (lVar4 + 8U <= param_5) {
            __n = FUN_03c2fb70(param_1 + 0xe0e,param_4,uVar10,(int)param_1[0xe22]);
            if (0xffffffffffffff88 < __n) goto LAB_03c32434;
            if (__n == 0) {
              if ((*(int *)((long)param_1 + 0x708c) != 0) &&
                 ((int)param_1[0xe2d] != *(int *)((long)param_1 + 0x708c))) {
                __n = 0xffffffffffffffe0;
                goto LAB_03c32434;
              }
              if ((int)param_1[0xe12] != 0) {
                param_1[0xe16] = 0;
                param_1[0xe19] = 0;
                param_1[0xe17] = 0x60ea27eeadc0b5d6;
                param_1[0xe18] = -0x3d4d51c2d82b14b1;
                param_1[0xe1a] = 0x61c8864e7a143579;
                param_1[0xe1b] = 0;
                param_1[0xe1c] = 0;
                param_1[0xe1f] = 0;
                param_1[0xe1d] = 0;
                param_1[0xe1e] = 0;
              }
              param_4 = (uint *)((long)param_4 + uVar10);
              param_5 = param_5 - uVar10;
              pvVar13 = pvVar14;
              do {
                uVar10 = param_5 - 3;
                if (param_5 < 3) {
LAB_03c32408:
                  __n = 0xffffffffffffffb8;
                  goto LAB_03c32434;
                }
                uVar8 = *param_4;
                __n_00 = (ulong)(ushort)((ushort)uVar8 >> 1) & 3;
                iVar11 = (int)__n_00;
                __n = (ulong)(uint3)((uint3)*param_4 >> 3);
                if (iVar11 != 1) {
                  if (iVar11 == 3) goto LAB_03c32410;
                  __n_00 = __n;
                }
                param_5 = uVar10 - __n_00;
                if (uVar10 < __n_00) goto LAB_03c32408;
                __src = (byte *)((long)param_4 + 3);
                if (iVar11 == 2) {
                  __n = FUN_03c2ff60(param_1,pvVar13,(long)pvVar14 + (param_3 - (long)pvVar13),__src
                                     ,__n_00);
                  if (0xffffffffffffff88 < __n) goto LAB_03c32434;
                  iVar11 = (int)param_1[0xe12];
                }
                else if (iVar11 == 1) {
                  if ((ulong)((long)pvVar14 + (param_3 - (long)pvVar13)) < __n) {
                    __n = 0xffffffffffffffba;
                    goto LAB_03c32434;
                  }
                  memset(pvVar13,(uint)*__src,__n);
                  iVar11 = (int)param_1[0xe12];
                }
                else {
                  __n = 0xffffffffffffffba;
                  if (iVar11 != 0) goto LAB_03c32410;
                  if ((pvVar13 == (void *)0x0) ||
                     ((ulong)((long)pvVar14 + (param_3 - (long)pvVar13)) < __n_00))
                  goto LAB_03c32434;
                  memcpy(pvVar13,__src,__n_00);
                  iVar11 = (int)param_1[0xe12];
                  __n = __n_00;
                }
                if (iVar11 != 0) {
                  FUN_03c36a70(param_1 + 0xe16,pvVar13,__n);
                }
                pvVar13 = (void *)((long)pvVar13 + __n);
                param_4 = (uint *)(__src + __n_00);
              } while (((ushort)uVar8 & 1) == 0);
              __n = (long)pvVar13 - (long)pvVar14;
              uVar10 = param_1[0xe0e];
              if ((uVar10 != 0xffffffffffffffff) && (__n != uVar10)) {
LAB_03c32410:
                __n = 0xffffffffffffffec;
                goto LAB_03c32434;
              }
              if ((int)param_1[0xe12] != 0) {
                uVar8 = FUN_03c36c10(param_1 + 0xe16);
                bVar7 = param_5 < 4;
                param_5 = param_5 - 4;
                if (bVar7) {
                  __n = 0xffffffffffffffea;
                  goto LAB_03c32434;
                }
                if (*param_4 != uVar8) {
                  __n = 0xffffffffffffffea;
                  goto LAB_03c32434;
                }
                param_4 = param_4 + 1;
              }
              if (0xffffffffffffff88 < __n) goto LAB_03c32434;
              pvVar14 = (void *)((long)pvVar14 + __n);
              param_3 = param_3 - __n;
              bVar15 = 1;
              goto joined_r0x03c31edc;
            }
          }
        }
        __n = 0xffffffffffffffb8;
LAB_03c32434:
        uVar10 = 0xffffffffffffffb8;
        if (!(bool)(bVar15 & (int)__n == -10)) {
          uVar10 = __n;
        }
        return uVar10;
      }
      if (param_5 < 8) {
        return 0xffffffffffffffb8;
      }
      uVar10 = (ulong)param_4[1] + 8;
      bVar7 = param_5 < uVar10;
      param_5 = param_5 - uVar10;
      if (bVar7) {
        return 0xffffffffffffffb8;
      }
      param_4 = (uint *)((long)param_4 + uVar10);
joined_r0x03c31edc:
    } while (4 < param_5);
  }
  uVar10 = 0xffffffffffffffb8;
  if (param_5 == 0) {
    uVar10 = (long)pvVar14 - (long)param_2;
  }
  return uVar10;
}

