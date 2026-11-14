
void FUN_01c0ccc0(long *param_1,uint *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  undefined *puVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  long lStack_28;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x80;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  param_1[0x11] = (long)(puVar1 + 0x10);
  param_1[0x12] = (long)param_1 + 0x9c;
  puVar1 = PTR_DAT_04bb6b38 + 0x10;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 0x1c);
  plVar4 = param_1 + 0x3c;
  if (param_1 + 0x3c <= (long *)((long)param_1 + 0xe2U)) {
    plVar4 = (long *)((long)param_1 + 0xe2U);
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 0x1c,0,((long)plVar4 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  puVar6 = PTR_DAT_04bc06e8;
  puVar1 = PTR_DAT_04bc06e0;
  if (*param_2 != 0) {
    cVar7 = *PTR_DAT_04bc06e0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar6 + 0x48);
        if (-1 < (int)uVar5) {
          lVar9 = (ulong)uVar5 + (long)param_2;
          goto LAB_01c0ce8c;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*param_2;
      lVar9 = 0;
      if ((*param_2 == 0) || (param_2 == puVar10)) goto LAB_01c0ce8c;
      lVar9 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar10)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar9 - (long)puVar10);
      if (lVar2 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
      lVar9 = 0;
      if (uVar8 == 0) goto LAB_01c0ce8c;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != 0x4b9c4229) {
        piVar11 = piVar11 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          lVar9 = 0;
          goto LAB_01c0ce8c;
        }
      }
      iVar3 = 0;
      if (*piVar11 != -1) {
        iVar3 = *piVar11;
      }
      *(int *)(puVar6 + 0x48) = iVar3;
    } while (*param_2 != 0);
  }
  lVar9 = 0;
LAB_01c0ce8c:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "STR_MailDesign";
  lStack_28 = *(long *)PTR_PTR_04bc0700;
  if (lVar9 != 0) {
    lStack_28 = lVar9;
  }
  local_30 = local_40;
  FUN_006f50a0(param_1,&local_40,&local_30,0);
  return;
}

