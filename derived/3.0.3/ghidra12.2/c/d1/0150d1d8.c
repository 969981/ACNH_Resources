
void FUN_0150d1d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_04bb5b10 + 8;
  memcpy(PTR_DAT_04bb5b10 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bb5dd0 + 8;
  memcpy(PTR_DAT_04bb5dd0 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bb5dc8 + 8;
  memcpy(PTR_DAT_04bb5dc8 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbd3c8 + 8;
  memcpy(PTR_DAT_04bbd3c8 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bb5b18 + 8;
  memcpy(PTR_DAT_04bb5b18 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  puVar1 = PTR_DAT_04bbd3d0 + 8;
  memcpy(PTR_DAT_04bbd3d0 + 0x2410,puVar1,0x2400);
  memset(puVar1,0,0x2400);
  if (*(int *)(param_1 + 0x253c) != 0) {
    if (*(int *)(param_1 + 0x253c) == 2) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)*(byte *)(param_1 + 0x2538) * 0x740;
      if (7 < *(byte *)(param_1 + 0x2538)) {
        lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined4 *)(lVar2 + 0x5b4) = 2;
      iVar4 = FUN_01392d64(lVar2 + 0x658);
      *(int *)(lVar2 + 0x5b0) = iVar4;
      *(int *)(lVar2 + 0x650) = *(int *)(lVar2 + 0x650) + 1;
      if (iVar4 != 2) {
        if (iVar4 != 1) goto LAB_0150d38c;
        *(undefined4 *)(lVar2 + 0x5b4) = 3;
        FUN_01393458(lVar2 + 0x658);
      }
      *(undefined4 *)(param_1 + 0x253c) = 0;
    }
  }
LAB_0150d38c:
  if (DAT_04c487d4 != -1) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x12 & 1) != 0) goto LAB_0150d3e4;
  }
  FUN_0150d400(param_1);
LAB_0150d3e4:
  FUN_0150d894(param_1);
  return;
}

