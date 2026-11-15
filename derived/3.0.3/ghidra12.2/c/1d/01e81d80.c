
undefined8 FUN_01e81d80(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  char cVar10;
  int *piVar11;
  int local_268 [26];
  undefined1 local_1ff;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_17c;
  undefined1 auStack_c0 [76];
  undefined4 local_74;
  
  uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if (((9 < uVar9) || ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] == '\0')) ||
     (local_268[0] = (&DAT_053fe830)[(ulong)uVar9 * 0x2e8], local_268[0] == 0)) {
    uVar9 = (uint)*(undefined8 *)(param_1 + 0xad58);
    if ((uVar9 >> 0x12 & 1) == 0) {
      if ((uVar9 >> 0x11 & 1) != 0) {
        return 0;
      }
      if ((*(ushort *)(param_1 + 0x12570) & 1) == 0) {
        return 0;
      }
      uVar7 = FUN_0212ef10(param_1 + 0xaa50);
      puVar4 = PTR_DAT_04bb3968;
      if ((uVar7 & 1) == 0) {
        if ((*(long *)PTR_DAT_04bb3968 == 0) ||
           (puVar8 = (uint *)FUN_020045e4(*(long *)PTR_DAT_04bb3968 + 0x16ae0,
                                          *(undefined4 *)(param_1 + 0xafc4)), puVar8 == (uint *)0x0)
           ) {
          puVar8 = (uint *)PTR_DAT_04bc2820;
        }
        puVar6 = PTR_DAT_04bc1578;
        puVar5 = PTR_DAT_04bc1570;
        if (*puVar8 != 0) {
          cVar10 = *PTR_DAT_04bc1570;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
              *(undefined4 *)(puVar6 + 0x68) = 0xffffffff;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar9 = *(uint *)(puVar6 + 0x2c);
              if (-1 < (int)uVar9) {
                if (((char *)((ulong)uVar9 + (long)puVar8) != (char *)0x0) &&
                   (*(char *)((ulong)uVar9 + (long)puVar8) == '\x02')) {
                  return 0;
                }
                break;
              }
              if (uVar9 != 0xffffffff) break;
            }
            lVar3 = (long)puVar8 - (ulong)*puVar8;
            if ((*puVar8 == 0) || (lVar3 == 0)) break;
            lVar2 = 0xc;
            if (*(char *)(lVar3 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar3 == 0) break;
            uVar7 = (ulong)*(ushort *)(lVar3 + 8);
            *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
            if (uVar7 == 0) break;
            piVar11 = (int *)(lVar2 + lVar3 + 4);
            while (piVar11[-1] != -0x2947dcfb) {
              piVar11 = piVar11 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_01e81f4c;
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar6 + 0x2c) = iVar1;
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_01e81f4c:
        if ((((*(int *)(param_1 + 0xafc0) < 0x1c) && (*(int *)(param_1 + 0x77f4) != 0x4f)) &&
            (*(int *)(param_1 + 0x77b0) != 0x4f)) &&
           ((uVar7 = FUN_012e2100(*(long *)puVar4 + 0x2e08,
                                  *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278),
            (uVar7 & 1) == 0 && (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0)))) {
          piVar11 = (int *)(param_1 + 0xef10);
          FUN_01e26938(auStack_c0);
          local_268[0] = 3;
          FUN_01e26d20(auStack_c0,local_268);
          local_74 = *param_3;
          FUN_0209bf8c(param_1 + 0xaf38,auStack_c0);
          FUN_02194660(param_1 + 0xef00);
          FUN_01e63f1c(local_268);
          local_268[0] = 0;
          local_1fc = 0xf;
          local_1ff = 1;
          if (*piVar11 < *(int *)(param_1 + 0xef14)) {
            FUN_021920b0(piVar11,local_268);
          }
          FUN_01e63f1c(local_268);
          local_268[0] = 0x49;
          local_17c = *param_4;
          local_1f8 = *param_2;
          local_1ff = 1;
          if (*piVar11 < *(int *)(param_1 + 0xef14)) {
            FUN_021920b0(piVar11,local_268);
          }
          FUN_0219281c(param_1 + 0xef00);
          return 1;
        }
      }
    }
  }
  return 0;
}

