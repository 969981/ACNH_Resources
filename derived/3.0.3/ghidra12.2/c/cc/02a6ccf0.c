
void FUN_02a6ccf0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 != 0) {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if ((((*(long *)(DAT_05635578 + 0xd0) == 0) ||
           (puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar6 == (uint *)0x0)) ||
          ((uVar3 < *(uint *)(DAT_05635578 + 0xe8) &&
           (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar3) == '\0')))) ||
         (((*puVar6 <= uVar3 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0))))
      goto switchD_02a6cdf4_caseD_0;
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * uVar3 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(DAT_05635578 + 0x1e0) <= uVar3) goto switchD_02a6cdf4_caseD_0;
      if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar3) {
        uVar3 = 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar3 * 8);
    }
    if ((puVar6 != (uint *)0x0) && (uVar3 = *puVar6, uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3))
    {
      puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
      if ((*puVar9 != 0) && ((uVar3 = puVar9[1], uVar3 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_0560bad8) &&
             (uVar5 = *(ushort *)(DAT_0560bae0 + (long)(int)uVar2 * 2), uVar5 < 5)) {
            switch(uVar5) {
            case 0:
              break;
            case 1:
              *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
              *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
              *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
              *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
              *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
              *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
              *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
              *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
              *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
              *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
              *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
              *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
              *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
              return;
            case 2:
              *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
              *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
              uVar7 = *(undefined8 *)(param_2 + 0x18);
              *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
              *(undefined8 *)(param_1 + 0x18) = uVar7;
              return;
            case 3:
              *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
              return;
            case 4:
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
              *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
            default:
              return;
            }
          }
        }
      }
    }
  }
switchD_02a6cdf4_caseD_0:
  uVar4 = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x14) = uVar4;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return;
}

