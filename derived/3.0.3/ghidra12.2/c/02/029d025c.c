
void FUN_029d025c(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  plVar8 = DAT_0537d558;
  if (1 < *(uint *)(DAT_0537d558 + 0x10)) {
    lVar10 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar10 + 0x473);
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar10 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar10 + 0x472) != bVar7)) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x28));
        if (*(char *)(param_1 + 0xa9) != '\0') {
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x60);
          *(undefined2 *)(param_1 + 0xa8) = 1;
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
        return;
      }
    }
    bVar7 = *(byte *)(param_1 + 0xaa);
    if ((bVar7 & 0x3f) == 0) {
      uVar2 = *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x98) << 0xb;
      uVar6 = *(uint *)(param_1 + 0xa4);
      uVar3 = uVar6 ^ uVar6 << 0xb;
      uVar2 = uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar2 ^ uVar6;
      puVar9 = (uint *)(param_1 + 0x48);
      *puVar9 = uVar2;
      *(uint *)(param_1 + 0x98) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(param_1 + 0x9c) << 0xb;
      uVar4 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0xa0) << 0xb;
      uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
      uVar4 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar4 ^ uVar6;
      *(uint *)(param_1 + 0x4c) = uVar6;
      *(uint *)(param_1 + 0x50) = uVar4;
      *(uint *)(param_1 + 0x9c) = uVar6;
      *(uint *)(param_1 + 0xa0) = uVar4;
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
      uVar5 = uVar3 ^ uVar4;
      *(uint *)(param_1 + 0xa4) = uVar5;
      *(uint *)(param_1 + 0x54) = uVar5;
      if ((uVar2 == 0) && (uVar6 == 0 && (uVar3 == 0 && uVar4 == 0))) {
        *puVar9 = 1;
      }
      local_28 = 0;
      local_22 = 0;
      local_24 = 0xff00;
      if (-1 < *(int *)(param_1 + 0x70)) {
        FUN_01db1df0(*plVar8 + 0x480,*(int *)(param_1 + 0x70),&local_28,puVar9,0x10,0);
      }
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
    *(byte *)(param_1 + 0xaa) = (bVar7 & 0x3f) + 1;
  }
  return;
}

