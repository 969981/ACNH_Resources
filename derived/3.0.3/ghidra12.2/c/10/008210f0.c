
void FUN_008210f0(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined *local_68;
  undefined8 local_48;
  
  if (DAT_05574040 != 0) {
    if (DAT_04ca9180 != 0) {
      lVar2 = *(long *)(DAT_04ca9180 + 0x140);
      lVar3 = *(long *)(DAT_04ca9180 + 0x148);
      if (lVar2 != 0 || lVar3 != 0) {
        lVar4 = *(long *)(DAT_05574040 + 0x4c8);
        lVar5 = *(long *)(DAT_05574040 + 0x4d0);
        FUN_026f7430();
        if (lVar2 == lVar4 && lVar3 == lVar5) {
          if (DAT_05574040 != 0) {
            FUN_026f0450();
          }
          if (DAT_055a1b78 != 0) {
            local_90 = 0;
            local_48 = 0xffffffff;
            local_88 = PTR_DAT_04bc3880 + 0x10;
            local_98 = 6;
            local_68 = local_88;
            FUN_0283d404(DAT_055a1b78,&local_98);
            if ((DAT_055a1b78 != 0) && (DAT_04ca9180 != 0)) {
              if (*(long *)(DAT_04ca9180 + 0x140) != 0 || *(long *)(DAT_04ca9180 + 0x148) != 0) {
                DAT_055a1b58 = *(long *)(DAT_04ca9180 + 0x140);
                DAT_055a1b60 = *(long *)(DAT_04ca9180 + 0x148);
              }
            }
          }
          if (((DAT_054ee400 != 0) && (FUN_02509b80(), DAT_054ee400 != 0)) &&
             (FUN_0250a6b0(DAT_054ee400,2,0,1), DAT_055021a0 != 0)) {
            pvVar1 = (void *)(DAT_055021a0 + 0x3a20);
            memset(pvVar1,0,0x37ad0);
            FUN_027ee494(pvVar1);
            pvVar1 = (void *)(DAT_055021a0 + 0x1c10a0);
            memset(pvVar1,0,0x3ce60);
            FUN_028119e0(pvVar1);
          }
          if (DAT_05574040 != 0) {
            FUN_026f8c3c();
          }
          goto LAB_008211fc;
        }
        goto LAB_00821164;
      }
    }
    FUN_026f7430();
  }
LAB_00821164:
  if (((DAT_054ee400 != 0) && (FUN_02509b80(), DAT_054ee400 != 0)) &&
     (FUN_0250a6b0(DAT_054ee400,2,0,1), DAT_055021a0 != 0)) {
    pvVar1 = (void *)(DAT_055021a0 + 0x3a20);
    memset(pvVar1,0,0x37ad0);
    FUN_027ee494(pvVar1);
    pvVar1 = (void *)(DAT_055021a0 + 0x1c10a0);
    memset(pvVar1,0,0x3ce60);
    FUN_028119e0(pvVar1);
  }
  if (DAT_05574040 != 0) {
    FUN_026f8c3c();
  }
  FUN_0082158c();
LAB_008211fc:
  FUN_0285ec20();
  *(uint *)(*(long *)PTR_DAT_04bb27a8 + 0x4758) = *(uint *)(*(long *)PTR_DAT_04bb27a8 + 0x4758) | 1;
  return;
}

