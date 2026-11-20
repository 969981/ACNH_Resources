
void FUN_03fc5434(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  byte bVar6;
  uint uVar7;
  undefined1 uVar8;
  
  if ((*(char *)(*(long *)(param_1 + 0x45940) + 0x34710) == '\0') ||
     ((uint)(byte)(&LAB_00316aa0)[param_1] != (param_2 & 0xff))) {
    bVar4 = *(byte *)(param_1 + 0x316a9e);
    puVar2 = (undefined8 *)(param_1 + 0x3170f8);
    (&LAB_00316aa0)[param_1] = (char)param_2;
    iVar1 = (param_2 >> 4 & 0xf) + 1;
    *(char *)(param_1 + 0x316aa1) = (char)iVar1;
    if ((0x94U >> (ulong)(bVar4 & 0x1f) & 1) == 0) {
      uVar7 = (uint)*(byte *)(param_1 + 0x316a9f);
      if (*(byte *)(param_1 + 0x316a9f) == 2) {
        *puVar2 = &LAB_03fcbe70;
        *(undefined1 *)(param_1 + 0x317100) = 1;
        uVar7 = 2;
      }
      else {
        if ((((*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0) &&
             (*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0)) && ((param_2 & 0xff) < 0x10)) &&
           (*(char *)(param_1 + 0x3170e8) == '\0')) {
          *puVar2 = &LAB_03fcb350;
          uVar8 = 4;
        }
        else {
          *puVar2 = &LAB_03fcbe70;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 0x317100) = uVar8;
      }
    }
    else {
      *puVar2 = &LAB_03fcbe70;
      *(undefined1 *)(param_1 + 0x317100) = 1;
      uVar7 = (uint)*(byte *)(param_1 + 0x316a9f);
    }
    uVar3 = 0;
    if (uVar7 * iVar1 != 1) {
      uVar3 = param_2;
    }
    bVar4 = *(byte *)(param_1 + 0x45a1c) & 0xe0 |
            *(byte *)(param_1 + 0x45a1c) & 0xf | (byte)((uVar3 & 1) << 4);
    bVar6 = *(byte *)(param_1 + 0x45a1d) & 0xe0 |
            *(byte *)(param_1 + 0x45a1d) & 0xf | (byte)((uVar3 >> 1 & 1) << 4);
    *(byte *)(param_1 + 0x45a1c) = bVar4;
    *(byte *)(param_1 + 0x4596c) = bVar4;
    *(byte *)(param_1 + 0x45a1d) = bVar6;
    *(byte *)(param_1 + 0x4596d) = bVar6;
    bVar4 = *(byte *)(param_1 + 0x45a1e) & 0xe0 |
            *(byte *)(param_1 + 0x45a1e) & 0xf | (byte)((uVar3 >> 2 & 1) << 4);
    bVar6 = *(byte *)(param_1 + 0x45a1f) & 0xe0 |
            *(byte *)(param_1 + 0x45a1f) & 0xf | (byte)((uVar3 >> 3 & 1) << 4);
    *(byte *)(param_1 + 0x45a1e) = bVar4;
    *(byte *)(param_1 + 0x4596e) = bVar4;
    *(byte *)(param_1 + 0x45a1f) = bVar6;
    *(byte *)(param_1 + 0x4596f) = bVar6;
    FUN_03fc3830();
    if (*(int *)(*(long *)(param_1 + 0x45e68) + 0x5c) != 0) {
      sVar5 = *(short *)(*(long *)(param_1 + 0x45940) + 0x34e122);
      if ((int)(uint)*(ushort *)(param_1 + 0x4594c) <= (int)sVar5) {
        sVar5 = 0;
      }
      *(char *)(param_1 + 0x316aa2) = (char)sVar5;
    }
  }
  return;
}

