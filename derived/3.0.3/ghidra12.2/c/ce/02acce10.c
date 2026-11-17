
bool FUN_02acce10(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  char cVar12;
  uint *puVar13;
  
  puVar6 = PTR_DAT_04bc4618;
  puVar5 = PTR_DAT_04bc4610;
  puVar10 = *(uint **)(param_1 + 8);
  if (puVar10 == (uint *)0x0) {
    return false;
  }
  uVar3 = *puVar10;
  if (uVar3 != 0) {
    cVar12 = *PTR_DAT_04bc4610;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
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
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        uVar3 = *puVar10;
      }
      else {
        uVar4 = *(uint *)puVar6;
        if (-1 < (int)uVar4) {
          if ((int *)((ulong)uVar4 + (long)puVar10) != (int *)0x0) {
            iVar7 = *(int *)((ulong)uVar4 + (long)puVar10);
            goto LAB_02accf48;
          }
          break;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar13 = (uint *)(ulong)uVar3;
      iVar7 = 0;
      if ((puVar13 == (uint *)0x0) || (iVar7 = 0, puVar10 == puVar13)) goto LAB_02accf48;
      lVar2 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar10 + (lVar2 - (long)puVar13);
      iVar7 = 0;
      if (lVar2 == 0) goto LAB_02accf48;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
      *(undefined4 *)puVar6 = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar8 = (int *)(lVar2 + 4);
      while (piVar8[-1] != -0x181e3933) {
        piVar8 = piVar8 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_02accf44;
      }
      iVar7 = 0;
      if (*piVar8 != -1) {
        iVar7 = *piVar8;
      }
      *(int *)puVar6 = iVar7;
      uVar3 = *puVar10;
      if (uVar3 == 0) break;
    } while( true );
  }
LAB_02accf44:
  iVar7 = 0;
LAB_02accf48:
  puVar6 = PTR_DAT_04bc4618;
  puVar5 = PTR_DAT_04bc4610;
  if (iVar7 != param_2) {
    puVar10 = *(uint **)(param_1 + 8);
    iVar9 = 0x244db4da;
    iVar7 = iVar9;
    if (puVar10 != (uint *)0x0) {
      if (*puVar10 != 0) {
        cVar12 = *PTR_DAT_04bc4610;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
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
            *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar3) {
              if ((int *)((ulong)uVar3 + (long)puVar10) == (int *)0x0) break;
              iVar7 = *(int *)((ulong)uVar3 + (long)puVar10);
              goto LAB_02acd070;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar10;
          iVar7 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_02acd070;
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + (lVar2 - (long)puVar13);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          iVar7 = 0;
          if (uVar11 == 0) goto LAB_02acd070;
          piVar8 = (int *)(lVar2 + 4);
          while (piVar8[-1] != -0xf365df3) {
            piVar8 = piVar8 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              iVar7 = 0;
              goto LAB_02acd070;
            }
          }
          iVar7 = 0;
          iVar1 = 0;
          if (*piVar8 != -1) {
            iVar1 = *piVar8;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*puVar10 == 0) goto LAB_02acd070;
        } while( true );
      }
      iVar7 = 0;
    }
LAB_02acd070:
    puVar6 = PTR_DAT_04bc4618;
    puVar5 = PTR_DAT_04bc4610;
    if (iVar7 != param_2) {
      puVar10 = *(uint **)(param_1 + 8);
      iVar7 = iVar9;
      if (puVar10 != (uint *)0x0) {
        if (*puVar10 != 0) {
          cVar12 = *PTR_DAT_04bc4610;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
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
              *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
            }
            else {
              uVar3 = *(uint *)(puVar6 + 0x24);
              if (-1 < (int)uVar3) {
                if ((int *)((ulong)uVar3 + (long)puVar10) == (int *)0x0) break;
                iVar7 = *(int *)((ulong)uVar3 + (long)puVar10);
                goto LAB_02acd190;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar13 = (uint *)(ulong)*puVar10;
            iVar7 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_02acd190;
            lVar2 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar10 + (lVar2 - (long)puVar13);
            if (lVar2 == 0) break;
            uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
            *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
            iVar7 = 0;
            if (uVar11 == 0) goto LAB_02acd190;
            piVar8 = (int *)(lVar2 + 4);
            while (piVar8[-1] != -0x364ef0b3) {
              piVar8 = piVar8 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                iVar7 = 0;
                goto LAB_02acd190;
              }
            }
            iVar7 = 0;
            iVar1 = 0;
            if (*piVar8 != -1) {
              iVar1 = *piVar8;
            }
            *(int *)(puVar6 + 0x24) = iVar1;
            if (*puVar10 == 0) goto LAB_02acd190;
          } while( true );
        }
        iVar7 = 0;
      }
LAB_02acd190:
      puVar6 = PTR_DAT_04bc4618;
      puVar5 = PTR_DAT_04bc4610;
      if (iVar7 != param_2) {
        puVar10 = *(uint **)(param_1 + 8);
        iVar7 = iVar9;
        if (puVar10 != (uint *)0x0) {
          if (*puVar10 != 0) {
            cVar12 = *PTR_DAT_04bc4610;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
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
                *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0x28);
                if (-1 < (int)uVar3) {
                  if ((int *)((ulong)uVar3 + (long)puVar10) == (int *)0x0) break;
                  iVar7 = *(int *)((ulong)uVar3 + (long)puVar10);
                  goto LAB_02acd2b0;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar10;
              iVar7 = 0;
              if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_02acd2b0;
              lVar2 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar10 + (lVar2 - (long)puVar13);
              if (lVar2 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
              *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
              iVar7 = 0;
              if (uVar11 == 0) goto LAB_02acd2b0;
              piVar8 = (int *)(lVar2 + 4);
              while (piVar8[-1] != -0x21669473) {
                piVar8 = piVar8 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) {
                  iVar7 = 0;
                  goto LAB_02acd2b0;
                }
              }
              iVar7 = 0;
              iVar1 = 0;
              if (*piVar8 != -1) {
                iVar1 = *piVar8;
              }
              *(int *)(puVar6 + 0x28) = iVar1;
              if (*puVar10 == 0) goto LAB_02acd2b0;
            } while( true );
          }
          iVar7 = 0;
        }
LAB_02acd2b0:
        puVar6 = PTR_DAT_04bc4618;
        puVar5 = PTR_DAT_04bc4610;
        if (iVar7 != param_2) {
          puVar10 = *(uint **)(param_1 + 8);
          if ((puVar10 != (uint *)0x0) && (iVar9 = 0, *puVar10 != 0)) {
            cVar12 = *PTR_DAT_04bc4610;
            while (cVar12 == '\0') {
              cVar12 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
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
              *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
LAB_02acd338:
              puVar13 = (uint *)(ulong)*puVar10;
              iVar9 = 0;
              if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_02acd3c4;
              lVar2 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar10 + (lVar2 - (long)puVar13);
              if (lVar2 == 0) goto LAB_02acd3b0;
              uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
              *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
              iVar9 = 0;
              if (uVar11 == 0) goto LAB_02acd3c4;
              piVar8 = (int *)(lVar2 + 4);
              while (piVar8[-1] != -0x44bfaa33) {
                piVar8 = piVar8 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) {
                  iVar9 = 0;
                  goto LAB_02acd3c4;
                }
              }
              iVar9 = 0;
              iVar7 = 0;
              if (*piVar8 != -1) {
                iVar7 = *piVar8;
              }
              *(int *)(puVar6 + 0x2c) = iVar7;
              if (*puVar10 == 0) goto LAB_02acd3c4;
            }
            uVar3 = *(uint *)(puVar6 + 0x2c);
            if ((int)uVar3 < 0) {
              if (uVar3 == 0xffffffff) goto LAB_02acd338;
LAB_02acd3b0:
              iVar9 = 0;
            }
            else {
              iVar9 = 0;
              if ((int *)((ulong)uVar3 + (long)puVar10) != (int *)0x0) {
                iVar9 = *(int *)((ulong)uVar3 + (long)puVar10);
              }
            }
          }
LAB_02acd3c4:
          if (((((iVar9 != param_2) && (iVar7 = FUN_02acbe80(param_1), iVar7 != param_2)) &&
               (iVar7 = FUN_02acbfb0(param_1), iVar7 != param_2)) &&
              ((((iVar7 = FUN_02acc0e0(param_1), iVar7 != param_2 &&
                 (iVar7 = FUN_02acc210(param_1), iVar7 != param_2)) &&
                ((iVar7 = FUN_02acc340(param_1), iVar7 != param_2 &&
                 ((iVar7 = FUN_02acc470(param_1), iVar7 != param_2 &&
                  (iVar7 = FUN_02acc5a0(param_1), iVar7 != param_2)))))) &&
               (iVar7 = FUN_02acc6d0(param_1), iVar7 != param_2)))) &&
             (((iVar7 = FUN_02acc800(param_1), iVar7 != param_2 &&
               (iVar7 = FUN_02acc930(param_1), iVar7 != param_2)) &&
              (iVar7 = FUN_02acca60(param_1), iVar7 != param_2)))) {
            iVar7 = FUN_02accb90(param_1);
            return iVar7 == param_2;
          }
        }
      }
    }
  }
  return true;
}

