
void FUN_01e28ebc(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_04bb27d0;
  lVar6 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar3)) {
      return;
    }
  }
  uVar5 = FUN_01e28188();
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar5 = FUN_02640eb0();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x578) < 0x1e) {
    *(int *)(param_1 + 0x578) = *(int *)(param_1 + 0x578) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x578) = 0;
    if (DAT_04c487d4 != -1) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0xe & 1) != 0) goto LAB_01e28fbc;
    }
    if (*(byte *)(**(long **)puVar4 + 0x476) < 2) {
      FUN_01e28ff8(param_1);
    }
    FUN_01e29070(param_1);
    FUN_0208fcb0(param_1 + 0x580);
  }
LAB_01e28fbc:
  if (*(byte *)(**(long **)puVar4 + 0x476) < 2) {
    return;
  }
  FUN_01e2a2b0(param_1,0);
  return;
}

