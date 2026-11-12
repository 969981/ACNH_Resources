
void FUN_00821350(void)

{
  void *pvVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined *local_58;
  undefined8 local_38;
  
  if ((DAT_05574040 != 0) && (DAT_04ca9180 != 0)) {
    if (*(long *)(DAT_04ca9180 + 0x140) != 0 || *(long *)(DAT_04ca9180 + 0x148) != 0) {
      bVar3 = *(long *)(DAT_04ca9180 + 0x140) == *(long *)(DAT_05574040 + 0x4c8) &&
              *(long *)(DAT_04ca9180 + 0x148) == *(long *)(DAT_05574040 + 0x4d0);
      goto LAB_008213b8;
    }
  }
  bVar3 = false;
LAB_008213b8:
  if (DAT_054ee400 != 0) {
    FUN_02509b80();
  }
  if (bVar3) {
    if (DAT_05574040 != 0) {
      FUN_026f0450();
    }
    if (DAT_055a1b78 != 0) {
      local_80 = 0;
      local_38 = 0xffffffff;
      local_78 = PTR_DAT_04bc3880 + 0x10;
      local_88 = 6;
      local_58 = local_78;
      FUN_0283d404(DAT_055a1b78,&local_88);
      if ((DAT_055a1b78 != 0) && (DAT_04ca9180 != 0)) {
        if (*(long *)(DAT_04ca9180 + 0x140) != 0 || *(long *)(DAT_04ca9180 + 0x148) != 0) {
          DAT_055a1b58 = *(long *)(DAT_04ca9180 + 0x140);
          DAT_055a1b60 = *(long *)(DAT_04ca9180 + 0x148);
        }
      }
    }
    if ((DAT_054ee400 != 0) && (FUN_0250a6b0(DAT_054ee400,2,0,1), DAT_055021a0 != 0)) {
      pvVar1 = (void *)(DAT_055021a0 + 0x3a20);
      memset(pvVar1,0,0x37ad0);
      FUN_027ee494(pvVar1);
      pvVar1 = (void *)(DAT_055021a0 + 0x1c10a0);
      memset(pvVar1,0,0x3ce60);
      FUN_028119e0(pvVar1);
    }
  }
  else {
    if ((DAT_054ee400 != 0) && (FUN_0250a6b0(DAT_054ee400,2,0,1), DAT_055021a0 != 0)) {
      pvVar1 = (void *)(DAT_055021a0 + 0x3a20);
      memset(pvVar1,0,0x37ad0);
      FUN_027ee494(pvVar1);
      pvVar1 = (void *)(DAT_055021a0 + 0x1c10a0);
      memset(pvVar1,0,0x3ce60);
      FUN_028119e0(pvVar1);
    }
    FUN_0082158c();
  }
  lVar4 = 1;
  uVar2 = (ulong)local_88 >> 0x10;
  local_88 = CONCAT62((uint6)uVar2 & 0xffff,1);
  FUN_01384940(&local_88);
  do {
    FUN_0154c780(lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x39);
  FUN_0285f270();
  return;
}

