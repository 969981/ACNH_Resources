
bool FUN_01efa050(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  int *piVar10;
  
  if (((uint)param_1[0x15ab] >> 0x12 & 1) == 0) {
    if (((uint)param_1[0x15ab] >> 0x11 & 1) != 0) {
      return false;
    }
    if ((*(uint *)((long)param_1 + 0xaf3c) & 1) == 0) {
      return false;
    }
    uVar6 = FUN_0212ef10(param_1 + 0x154a);
    if ((uVar6 & 1) == 0) {
      lVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
      if (*(int *)(lVar7 + 0xdc) == 1) {
        lVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
        if ((*(long *)PTR_DAT_04bb3968 == 0) ||
           (puVar8 = (uint *)FUN_020045e4(*(long *)PTR_DAT_04bb3968 + 0x16ae0,
                                          *(undefined4 *)(lVar7 + 0x84)), puVar8 == (uint *)0x0)) {
          puVar8 = (uint *)PTR_DAT_04bc2820;
        }
        puVar5 = PTR_DAT_04bc1578;
        puVar4 = PTR_DAT_04bc1570;
        if (*puVar8 != 0) {
          cVar9 = *PTR_DAT_04bc1570;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x68) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar3 = *(uint *)(puVar5 + 0x2c);
              if (-1 < (int)uVar3) {
                if (((char *)((ulong)uVar3 + (long)puVar8) != (char *)0x0) &&
                   (*(char *)((ulong)uVar3 + (long)puVar8) == '\x02')) {
                  return false;
                }
                break;
              }
              if (uVar3 != 0xffffffff) break;
            }
            lVar7 = (long)puVar8 - (ulong)*puVar8;
            if ((*puVar8 == 0) || (lVar7 == 0)) break;
            lVar2 = 0xc;
            if (*(char *)(lVar7 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar7 == 0) break;
            uVar6 = (ulong)*(ushort *)(lVar7 + 8);
            *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar10 = (int *)(lVar2 + lVar7 + 4);
            while (piVar10[-1] != -0x2947dcfb) {
              piVar10 = piVar10 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_01efa20c;
            }
            iVar1 = 0;
            if (*piVar10 != -1) {
              iVar1 = *piVar10;
            }
            *(int *)(puVar5 + 0x2c) = iVar1;
            if (*puVar8 == 0) break;
          } while( true );
        }
      }
LAB_01efa20c:
      return *(int *)((long)param_1 + 0x77f4) != 0x3e && (int)param_1[0xef6] != 0x3e;
    }
  }
  return false;
}

