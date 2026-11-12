
void FUN_0096e7b0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar1 != uVar10) {
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar5 = uVar2;
    do {
      if (((((-1 < (int)uVar5) && (-1 < (int)uVar10)) && (uVar5 < *(uint *)(param_1 + 0x38))) &&
          ((uVar10 < *(uint *)(param_1 + 0x3c) && (lVar6 = *(long *)(param_1 + 0x60), lVar6 != 0))))
         && (uVar4 = uVar5 + *(uint *)(param_1 + 0x38) * uVar10, uVar4 < *(uint *)(param_1 + 0x58)))
      {
        puVar9 = (undefined8 *)(lVar6 + (long)(int)uVar4 * 0x34);
        pcVar7 = (char *)(lVar6 + (long)(int)uVar4 * 0x34 + 0x30);
        if (((*pcVar7 == '\a') &&
            (pcVar11 = (char *)(lVar6 + (long)(int)uVar4 * 0x34 + 0x31), *pcVar11 == '\a')) &&
           (pcVar12 = (char *)(lVar6 + (long)(int)uVar4 * 0x34 + 0x32), *pcVar12 == '\a')) {
          lVar6 = lVar6 + (long)(int)uVar4 * 0x34;
          *puVar9 = 0xc3fa0000c3fa0000;
          cVar3 = *(char *)(lVar6 + 0x33);
          *(undefined4 *)(puVar9 + 1) = 0xc3fa0000;
          *(undefined8 *)(lVar6 + 0xc) = 0xc3fa0000c3fa0000;
          *(undefined8 *)(lVar6 + 0x14) = 0xc3fa0000c3fa0000;
          *(undefined8 *)(lVar6 + 0x1c) = 0xc3fa0000c3fa0000;
          *(undefined8 *)(lVar6 + 0x24) = 0xc3fa0000c3fa0000;
          *(undefined4 *)(lVar6 + 0x2c) = 0xc3fa0000;
          *pcVar7 = '\a';
          *pcVar11 = '\a';
          *pcVar12 = '\a';
          *(undefined1 *)(lVar6 + 0x33) = 7;
          if (cVar3 == '\a') goto LAB_0096e810;
        }
        else {
          lVar6 = lVar6 + (long)(int)uVar4 * 0x34;
          *puVar9 = 0xc3fa0000c3fa0000;
          *(undefined4 *)(puVar9 + 1) = 0xc3fa0000;
          *(undefined8 *)(lVar6 + 0xc) = 0xc3fa0000c3fa0000;
          *(undefined8 *)(lVar6 + 0x14) = 0xc3fa0000c3fa0000;
          *(undefined8 *)(lVar6 + 0x1c) = 0xc3fa0000c3fa0000;
          *(undefined8 *)(lVar6 + 0x24) = 0xc3fa0000c3fa0000;
          *(undefined4 *)(lVar6 + 0x2c) = 0xc3fa0000;
          *pcVar7 = '\a';
          *(undefined1 *)(lVar6 + 0x31) = 7;
          *(undefined1 *)(lVar6 + 0x32) = 7;
          *(undefined1 *)(lVar6 + 0x33) = 7;
        }
        if ((uVar5 < *(uint *)(param_1 + 0x38)) && (uVar10 < *(uint *)(param_1 + 0x3c))) {
          uVar4 = uVar5 + *(uint *)(param_1 + 0x38) * uVar10;
          if ((uVar4 < *(uint *)(param_1 + 0x68)) && (lVar6 = *(long *)(param_1 + 0x70), lVar6 != 0)
             ) {
            uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
            *(uint *)(lVar6 + uVar8) = *(uint *)(lVar6 + uVar8) & 0xfffffff7;
            *(uint *)(lVar6 + uVar8) = *(uint *)(lVar6 + uVar8) & 0xfffffffb;
            *(uint *)(lVar6 + uVar8) = *(uint *)(lVar6 + uVar8) & 0xffffffdf;
            *(uint *)(lVar6 + uVar8) = *(uint *)(lVar6 + uVar8) & 0xffff7fff;
          }
        }
      }
LAB_0096e810:
      if ((int)uVar5 < *(int *)(param_2 + 0x20)) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
        uVar5 = *(uint *)(param_2 + 0x10);
      }
    } while (uVar2 != uVar5 || uVar1 != uVar10);
  }
  FUN_0096e9e0();
  return;
}

