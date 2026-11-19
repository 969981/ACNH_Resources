
void FUN_039b1460(long *param_1,long param_2,uint *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  if (0 < *(int *)(param_2 + 0x30)) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    do {
      puVar13 = (undefined8 *)(*(long *)(param_3 + 2) + uVar14 * 0x80);
      if (*param_3 <= uVar14) {
        puVar13 = (undefined8 *)0x0;
      }
      puVar13[0xe] = 0xffffffffffffffff;
      puVar13[0xf] = 0xffffffffffffffff;
      puVar13[0xc] = 0xffffffffffffffff;
      puVar13[0xd] = 0xffffffffffffffff;
      puVar13[10] = 0xffffffffffffffff;
      puVar13[0xb] = 0xffffffffffffffff;
      puVar13[8] = 0xffffffffffffffff;
      puVar13[9] = 0xffffffffffffffff;
      puVar13[6] = 0xffffffffffffffff;
      puVar13[7] = 0xffffffffffffffff;
      puVar13[4] = 0xffffffffffffffff;
      puVar13[5] = 0xffffffffffffffff;
      puVar13[2] = 0xffffffffffffffff;
      puVar13[3] = 0xffffffffffffffff;
      *puVar13 = 0xffffffffffffffff;
      puVar13[1] = 0xffffffffffffffff;
      puVar13 = (undefined8 *)**(long **)(*(long *)(param_2 + 0x38) + uVar14 * 8);
      if (((*PTR_DAT_04bb3490 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3488 = puVar1;
        __cxa_guard_release(PTR_DAT_04bb3490);
      }
      uVar5 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bb3488);
      if ((uVar5 & 1) == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      uVar2 = *(uint *)(param_1 + 1);
      if ((uint)*(ushort *)((long)param_1 + 0x1c) <= *(uint *)(param_1 + 1)) {
        uVar2 = (uint)*(ushort *)((long)param_1 + 0x1c);
      }
      if (uVar2 != 0) {
        puVar13 = (undefined8 *)puVar13[0x22];
        uVar5 = 0;
        uVar11 = 0;
        lVar10 = param_1[2];
        do {
          psVar6 = (short *)(**(code **)(*param_1 + 0x20))(param_1,uVar5);
          if (uVar14 == ((long)*psVar6 & 0xffffffffU)) {
            uVar12 = (uint)psVar6[1];
            if (*(char *)(lVar10 + (int)uVar11) < '\0') {
              uVar3 = FUN_003a1b00(*puVar13,uVar12);
              if ((int)uVar3 <= (int)uVar12) goto LAB_039b1564;
            }
            else {
              uVar3 = uVar12 + 1;
            }
            do {
              if ((*(byte *)(lVar10 + (int)uVar11) >> 1 & 1) == 0) {
                if (uVar12 < 0x400) {
                  lVar9 = (ulong)(uVar12 >> 5) * 4;
                  lVar7 = *(long *)(param_3 + 2) + uVar14 * 0x80;
                  if (*param_3 <= uVar14) {
                    lVar7 = 0;
                  }
                  uVar8 = *(uint *)(lVar7 + lVar9) | 1 << (ulong)(uVar12 & 0x1f);
LAB_039b15c4:
                  *(uint *)(lVar7 + lVar9) = uVar8;
                }
              }
              else if (uVar12 < 0x400) {
                lVar9 = (ulong)(uVar12 >> 5) * 4;
                lVar7 = *(long *)(param_3 + 2) + uVar14 * 0x80;
                if (*param_3 <= uVar14) {
                  lVar7 = 0;
                }
                uVar8 = *(uint *)(lVar7 + lVar9) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
                goto LAB_039b15c4;
              }
              uVar12 = uVar12 + 1;
            } while (uVar3 != uVar12);
          }
LAB_039b1564:
          uVar5 = uVar11 + 1;
          uVar11 = uVar5 & 0xffffffff;
        } while (uVar2 != (uint)uVar5);
      }
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)*(int *)(param_2 + 0x30));
  }
  return;
}

