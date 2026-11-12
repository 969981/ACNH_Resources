
void FUN_00a7c9f4(void)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  undefined4 local_28;
  undefined1 local_24;
  char local_23;
  undefined1 local_22;
  
  lVar3 = DAT_04da56d0;
  plVar4 = *(long **)PTR_DAT_04bb27d0;
  if (DAT_04da56d0 == 0 || plVar4 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar4;
  bVar2 = *(byte *)(lVar6 + 0x473);
  if (DAT_04da5710 != -1) {
    pcVar7 = PTR_DAT_04bc1220;
    if (bVar2 != 0xff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar7 = (char *)(lVar6 + 0x473);
      }
    }
    if (*pcVar7 != DAT_04da5710) {
      local_28 = 0;
      DAT_04da5708 = 2;
      local_22 = 0;
      local_24 = 4;
      local_23 = DAT_04da5710;
      if (-1 < DAT_04da56e0) {
        FUN_01db1df0(*plVar4 + 0x480,DAT_04da56e0,&local_28,&DAT_04da5708,1,0);
        lVar3 = DAT_04da56d0;
      }
      goto LAB_00a7cb24;
    }
  }
  pbVar5 = PTR_DAT_04bc1220;
  if (bVar2 != 0xff) {
    puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar6 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x473);
    }
  }
  if (*pbVar5 < 8) {
    *(uint *)(DAT_04da56d0 + 0x3e0) = *(uint *)(DAT_04da56d0 + 0x3e0) | 1 << (ulong)(*pbVar5 & 0x1f)
    ;
  }
LAB_00a7cb24:
  *(undefined1 *)(lVar3 + 0x3e4) = 2;
  DAT_04da5710 = 0xff;
  return;
}

