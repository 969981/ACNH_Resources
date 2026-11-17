
void FUN_02deee5c(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined4 local_30;
  undefined8 local_2c;
  byte local_24;
  
  if (*(uint *)(param_1 + 0x570ec) < 2) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)*(uint *)(param_1 + 0x570ec) * 8 + 0x580);
    if (lVar6 != 0) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x570e4);
      local_30 = 0;
      local_3a = 1;
      puVar1 = (undefined4 *)(param_1 + 0x1c1f8);
      local_2c = 0x60000000c;
      local_24 = *(byte *)(param_1 + 0x1f8);
      if (4 < *(uint *)(param_1 + 0x570e4)) {
        uVar5 = 0;
      }
      local_3c = 0;
      local_50 = PTR_DAT_04bc9c78 + 0x10;
      local_48 = *puVar1;
      uStack_44 = puVar1[uVar5 + 0x10];
      local_40 = puVar1[uVar5 + 1];
      if (7 < local_24) {
        local_24 = 0xff;
      }
      FUN_03864290(lVar6,&local_50);
      bVar2 = *(int *)(lVar6 + 0x2f8) == 0;
      bVar3 = *(int *)(lVar6 + 0x208) == 0;
      if ((param_2 & 1) == 0) {
        if (bVar2 || bVar3) {
          return;
        }
        if (*(long *)(lVar6 + 0x270) == 0) {
          return;
        }
        if (*(long *)(*(long *)(lVar6 + 0x270) + 8) == 0) {
          return;
        }
        if ((*(long *)(lVar6 + 0x480) != 0) && (*(int *)(*(long *)(lVar6 + 0x480) + 0x14) == -1)) {
          return;
        }
        if (*(long *)(lVar6 + 0x2d8) == 0) {
          return;
        }
        if (*(int *)(lVar6 + 0x3d8) < 1) {
          return;
        }
        if (*(int *)(lVar6 + 0x3d4) == 0) {
          return;
        }
        if (1 < *(uint *)(lVar6 + 0x298)) {
          return;
        }
        *(undefined4 *)(lVar6 + 0x2e4) = 1;
        uVar4 = 3;
      }
      else {
        if (bVar2 || bVar3) {
          return;
        }
        if (*(long *)(lVar6 + 0x270) == 0) {
          return;
        }
        if (*(long *)(*(long *)(lVar6 + 0x270) + 8) == 0) {
          return;
        }
        if ((*(long *)(lVar6 + 0x480) != 0) && (*(int *)(*(long *)(lVar6 + 0x480) + 0x14) == -1)) {
          return;
        }
        if (*(long *)(lVar6 + 0x2d8) == 0) {
          return;
        }
        if (*(int *)(lVar6 + 0x3d8) < 1) {
          return;
        }
        if (*(int *)(lVar6 + 0x3d4) == 0) {
          return;
        }
        if (*(int *)(lVar6 + 0x298) == 2) {
          return;
        }
        uVar4 = 2;
      }
      FUN_03ebb160(lVar6 + 0x290,uVar4);
    }
  }
  return;
}

