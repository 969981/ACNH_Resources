
void FUN_030fccf8(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
                 long param_5)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_18;
  int local_14;
  
  lVar4 = *(long *)(param_4 + 8);
  if (*(int *)(param_5 + 0xc) != 0) {
    if (((*(int *)(param_5 + 0xc) != 0) && (*(int *)(param_5 + 0xc) == 0x1a)) &&
       ((*(byte *)(param_5 + 8) & 1) == 0)) {
      if ((*(char *)(lVar4 + 0x1710) == '\0') && (lVar10 = *(long *)(lVar4 + 0x380), lVar10 != 0)) {
        lVar5 = 0x1708;
      }
      else if ((*(char *)(lVar4 + 0x1788) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x388), lVar10 != 0)) {
        lVar5 = 0x1780;
      }
      else if ((*(char *)(lVar4 + 0x1800) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x390), lVar10 != 0)) {
        lVar5 = 0x17f8;
      }
      else if ((*(char *)(lVar4 + 0x1878) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x398), lVar10 != 0)) {
        lVar5 = 0x1870;
      }
      else if ((*(char *)(lVar4 + 0x18f0) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x3a0), lVar10 != 0)) {
        lVar5 = 0x18e8;
      }
      else if ((*(char *)(lVar4 + 0x1968) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x3a8), lVar10 != 0)) {
        lVar5 = 0x1960;
      }
      else if ((*(char *)(lVar4 + 0x19e0) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x3b0), lVar10 != 0)) {
        lVar5 = 0x19d8;
      }
      else if ((*(char *)(lVar4 + 0x1a58) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x3b8), lVar10 != 0)) {
        lVar5 = 0x1a50;
      }
      else if ((*(char *)(lVar4 + 0x1ad0) == '\0') &&
              (lVar10 = *(long *)(lVar4 + 0x3c0), lVar10 != 0)) {
        lVar5 = 0x1ac8;
      }
      else {
        if (*(char *)(lVar4 + 0x1b48) != '\0') {
          return;
        }
        lVar10 = *(long *)(lVar4 + 0x3c8);
        if (lVar10 == 0) {
          return;
        }
        lVar5 = 0x1b40;
      }
      lVar4 = lVar4 + lVar5;
      local_48 = *(undefined4 *)(param_5 + 0x18);
      uStack_44 = *(undefined4 *)(param_5 + 0x1c);
      local_50 = PTR_DAT_04bb2010 + 0x10;
      uVar3 = *(undefined2 *)(param_5 + 0x24);
      local_14 = *(int *)(param_5 + 0x20);
      if (*(int *)(param_5 + 0xc) != 0x1a) {
        uVar3 = 0;
      }
      fVar12 = (float)local_14 * 90.0 * 11930465.0;
      local_18 = (undefined4)(long)fVar12;
      uVar11 = FUN_02b61250(&local_50,uVar3,&local_18);
      iVar1 = *(int *)(param_5 + 0x20);
      puVar8 = *(undefined8 **)(lVar10 + 0x230);
      uVar3 = *(undefined2 *)(param_5 + 0x24);
      if (*(int *)(param_5 + 0xc) != 0x1a) {
        uVar3 = 0;
      }
      bVar2 = *(byte *)(param_5 + 8);
      lVar5 = 0x18;
      if (*(uint *)(lVar10 + 0x228) < 4) {
        lVar5 = 0;
      }
      uVar6 = puVar8[(ulong)(2 < *(uint *)(lVar10 + 0x228)) * 2];
      uVar7 = *(undefined8 *)((long)puVar8 + lVar5);
      uVar9 = *puVar8;
      *(undefined2 *)(lVar4 + 0x58) = uVar3;
      *(undefined4 *)(lVar4 + 0xc) = uVar11;
      *(float *)(lVar4 + 0x10) = fVar12;
      *(undefined4 *)(lVar4 + 0x14) = param_3;
      *(byte *)(lVar4 + 0x60) = bVar2 >> 1 & 1;
      *(long *)(lVar4 + 0x18) = lVar10;
      *(undefined8 *)(lVar4 + 0x68) = uVar6;
      *(undefined8 *)(lVar4 + 0x70) = uVar7;
      *(undefined8 *)(lVar4 + 0x28) = uVar9;
      *(int *)(lVar4 + 0x5c) = (int)(long)((float)iVar1 * 90.0 * 11930465.0);
      *(undefined1 *)(lVar4 + 8) = 1;
    }
  }
  return;
}

