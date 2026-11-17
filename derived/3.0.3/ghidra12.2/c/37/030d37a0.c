
void FUN_030d37a0(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
                 long param_5)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
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
  
  lVar5 = *(long *)(param_4 + 8);
  if (*(int *)(param_5 + 0xc) != 0) {
    if (((*(int *)(param_5 + 0xc) != 0) && (*(int *)(param_5 + 0xc) == 0x1a)) &&
       ((*(byte *)(param_5 + 8) & 1) == 0)) {
      if ((*(char *)(lVar5 + 0x958) == '\0') && (lVar10 = *(long *)(lVar5 + 0x2b8), lVar10 != 0)) {
        lVar5 = lVar5 + 0x950;
      }
      else if ((*(char *)(lVar5 + 0x9d0) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2c0), lVar10 != 0)) {
        lVar5 = lVar5 + 0x9c8;
      }
      else if ((*(char *)(lVar5 + 0xa48) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2c8), lVar10 != 0)) {
        lVar5 = lVar5 + 0xa40;
      }
      else if ((*(char *)(lVar5 + 0xac0) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2d0), lVar10 != 0)) {
        lVar5 = lVar5 + 0xab8;
      }
      else if ((*(char *)(lVar5 + 0xb38) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2d8), lVar10 != 0)) {
        lVar5 = lVar5 + 0xb30;
      }
      else if ((*(char *)(lVar5 + 0xbb0) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2e0), lVar10 != 0)) {
        lVar5 = lVar5 + 0xba8;
      }
      else if ((*(char *)(lVar5 + 0xc28) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2e8), lVar10 != 0)) {
        lVar5 = lVar5 + 0xc20;
      }
      else if ((*(char *)(lVar5 + 0xca0) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2f0), lVar10 != 0)) {
        lVar5 = lVar5 + 0xc98;
      }
      else if ((*(char *)(lVar5 + 0xd18) == '\0') &&
              (lVar10 = *(long *)(lVar5 + 0x2f8), lVar10 != 0)) {
        lVar5 = lVar5 + 0xd10;
      }
      else {
        if (*(char *)(lVar5 + 0xd90) != '\0') {
          return;
        }
        lVar10 = *(long *)(lVar5 + 0x300);
        if (lVar10 == 0) {
          return;
        }
        lVar5 = lVar5 + 0xd88;
      }
      local_48 = *(undefined4 *)(param_5 + 0x18);
      uStack_44 = *(undefined4 *)(param_5 + 0x1c);
      local_50 = PTR_DAT_04bb2010 + 0x10;
      uVar4 = *(undefined2 *)(param_5 + 0x24);
      local_14 = *(int *)(param_5 + 0x20);
      if (*(int *)(param_5 + 0xc) != 0x1a) {
        uVar4 = 0;
      }
      fVar12 = (float)local_14 * 90.0 * 11930465.0;
      local_18 = (undefined4)(long)fVar12;
      uVar11 = FUN_02b61250(&local_50,uVar4,&local_18);
      iVar2 = *(int *)(param_5 + 0x20);
      puVar8 = *(undefined8 **)(lVar10 + 0x230);
      uVar4 = *(undefined2 *)(param_5 + 0x24);
      if (*(int *)(param_5 + 0xc) != 0x1a) {
        uVar4 = 0;
      }
      bVar3 = *(byte *)(param_5 + 8);
      lVar1 = 0x18;
      if (*(uint *)(lVar10 + 0x228) < 4) {
        lVar1 = 0;
      }
      uVar6 = puVar8[(ulong)(2 < *(uint *)(lVar10 + 0x228)) * 2];
      uVar7 = *(undefined8 *)((long)puVar8 + lVar1);
      uVar9 = *puVar8;
      *(undefined2 *)(lVar5 + 0x58) = uVar4;
      *(undefined4 *)(lVar5 + 0xc) = uVar11;
      *(float *)(lVar5 + 0x10) = fVar12;
      *(undefined4 *)(lVar5 + 0x14) = param_3;
      *(byte *)(lVar5 + 0x60) = bVar3 >> 1 & 1;
      *(long *)(lVar5 + 0x18) = lVar10;
      *(undefined8 *)(lVar5 + 0x68) = uVar6;
      *(undefined8 *)(lVar5 + 0x70) = uVar7;
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      *(int *)(lVar5 + 0x5c) = (int)(long)((float)iVar2 * 90.0 * 11930465.0);
      *(undefined1 *)(lVar5 + 8) = 1;
    }
  }
  return;
}

