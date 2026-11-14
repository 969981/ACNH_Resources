
void FUN_01d69690(long param_1)

{
  int iVar1;
  short *psVar2;
  uint *puVar3;
  short sVar4;
  byte bVar5;
  short *psVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  short sVar12;
  
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    nn::os::SignalEvent((EventType *)(param_1 + 0x90));
    *(undefined1 *)(param_1 + 0x1fa) = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  uVar7 = 0;
  psVar2 = (short *)(param_1 + 0x108);
  puVar8 = &LAB_01010000;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  sVar12 = -1;
  iVar9 = 0;
  do {
    psVar6 = psVar2 + (long)iVar9 * 6;
    if (((char)psVar6[5] != '\0') && (*psVar6 == sVar4)) {
      puVar8 = *(undefined1 **)(psVar2 + (long)iVar9 * 6 + 1);
      uVar7 = 1;
      sVar12 = sVar4;
    }
    iVar1 = iVar9 + 1;
    *psVar6 = -1;
    *(char *)(psVar6 + 5) = '\0';
    psVar2[(long)iVar9 * 6 + 1] = 0;
    (psVar2 + (long)iVar9 * 6 + 2)[0] = 0x101;
    (psVar2 + (long)iVar9 * 6 + 2)[1] = 0;
    *(undefined1 *)(psVar2 + (long)iVar9 * 6 + 4) = 0;
    iVar9 = iVar1;
  } while (iVar1 != 0xc);
  if (sVar12 == sVar4) {
    lVar11 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar11 + 0x473);
    pcVar10 = PTR_DAT_04bc1220;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar3 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pcVar10 = (char *)(lVar11 + 0x473);
      }
    }
    psVar6 = psVar2 + (ulong)(uint)(int)*pcVar10 * 6;
    if (0xb < (uint)(int)*pcVar10) {
      psVar6 = psVar2;
    }
    *psVar6 = sVar4;
    *(undefined1 **)(psVar6 + 1) = puVar8;
    *(undefined1 *)(psVar6 + 5) = uVar7;
  }
  *(undefined2 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined2 *)(param_1 + 0x1e0) = 0xffff;
  *(undefined1 *)(param_1 + 0x1e2) = 0xff;
  *(undefined2 *)(param_1 + 0x1e4) = 0xffff;
  *(undefined1 *)(param_1 + 0x1e6) = 0xff;
  *(undefined4 *)(param_1 + 0x1ea) = 0x101;
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined2 *)(param_1 + 0x1f8) = 0xff;
  FUN_03ebb160(param_1 + 0xb8,0);
  return;
}

