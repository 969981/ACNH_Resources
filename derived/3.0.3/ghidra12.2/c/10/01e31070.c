
/* WARNING: Removing unreachable block (ram,0x01e312ac) */
/* WARNING: Removing unreachable block (ram,0x01e313b4) */
/* WARNING: Removing unreachable block (ram,0x01e3126c) */
/* WARNING: Removing unreachable block (ram,0x01e31294) */
/* WARNING: Removing unreachable block (ram,0x01e312d4) */
/* WARNING: Removing unreachable block (ram,0x01e312ec) */
/* WARNING: Removing unreachable block (ram,0x01e31314) */
/* WARNING: Removing unreachable block (ram,0x01e31330) */
/* WARNING: Removing unreachable block (ram,0x01e31358) */
/* WARNING: Removing unreachable block (ram,0x01e31374) */
/* WARNING: Removing unreachable block (ram,0x01e3139c) */
/* WARNING: Removing unreachable block (ram,0x01e313dc) */

void FUN_01e31070(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined *local_78;
  char *pcStack_70;
  byte local_68 [4];
  int local_64;
  
  lVar13 = *(long *)PTR_DAT_04bb3350;
  lVar12 = *(long *)PTR_DAT_04bb2268;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar13 + 0x68));
  if ((*(long *)(lVar13 + 0x60) != lVar7) &&
     (uVar8 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar8 & 1) == 0)) {
    *(undefined1 *)(lVar12 + 0xb1) = 1;
  }
  puVar5 = PTR_DAT_04bb46b0;
  puVar4 = PTR_DAT_04bb32e0;
  iVar11 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*(long *)puVar5 != 0) {
      local_64 = iVar11;
      lVar7 = FUN_026eec4c(*(long *)puVar5,iVar11);
      if (lVar7 != 0) {
        lVar7 = *(long *)PTR_DAT_04bb39b0;
        pbVar10 = puVar4;
        if (lVar7 == 0) {
          if (7 < (byte)*puVar4) goto LAB_01e311b0;
LAB_01e31230:
          local_68[0] = *pbVar10;
          if (7 < local_68[0]) {
            local_68[0] = 0xff;
          }
        }
        else {
          if (*(int *)(lVar7 + 0x15c) != 0) {
            pbVar10 = (byte *)(lVar7 + 0x158);
          }
          if ((*pbVar10 < 8) ||
             (((*(int *)(lVar7 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8))))
          goto LAB_01e31230;
LAB_01e311b0:
          pbVar10 = PTR_DAT_04bb5038;
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01e31230;
          lVar7 = **(long **)PTR_DAT_04bb27d0;
          bVar3 = *(byte *)(lVar7 + 0x473);
          pbVar9 = PTR_DAT_04bb5038;
          if ((long)(char)bVar3 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
            if (7 < bVar3) {
              puVar2 = (uint *)(lVar7 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar9 = (byte *)(lVar7 + 0x471);
            }
          }
          local_68[0] = *pbVar9;
          if (7 < local_68[0]) goto LAB_01e31230;
        }
        pcStack_70 = "ValidatePlayerSaveFlag";
        local_78 = puVar1;
        iVar6 = FUN_0274bce0(local_68,&local_78);
        if (iVar6 != 0) {
          uVar8 = (ulong)local_78 >> 0x20;
          local_78 = (undefined *)(uVar8 << 0x20);
          if (*DAT_0538de60 != '\0') {
            local_78 = (undefined *)(uVar8 << 0x20);
            FUN_0274d104(&local_64,&DAT_0538de58,0);
          }
          if (*DAT_0538de70 != '\0') {
            local_78._0_4_ = 1;
            FUN_0274d104(&local_64,&DAT_0538de68,0);
          }
          if (*DAT_0538de80 != '\0') {
            local_78._0_4_ = 2;
            FUN_0274d104(&local_64,&DAT_0538de78,0);
          }
          if (*DAT_0538de90 != '\0') {
            local_78._0_4_ = 3;
            FUN_0274d104(&local_64,&DAT_0538de88,0);
          }
          if (*DAT_0538dea0 != '\0') {
            local_78._0_4_ = 4;
            FUN_0274d104(&local_64,&DAT_0538de98,0);
          }
          local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
          if (*DAT_0538deb0 != '\0') {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
            FUN_0274d104(&local_64,&DAT_0538dea8,0);
          }
          lVar12 = *(long *)PTR_DAT_04bb2268;
          lVar13 = *(long *)PTR_DAT_04bb3350;
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar13 + 0x68));
          if ((*(long *)(lVar13 + 0x60) != lVar7) &&
             (uVar8 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar8 & 1) == 0)) {
            *(undefined1 *)(lVar12 + 0xb1) = 1;
          }
        }
      }
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 8) {
      return;
    }
  } while( true );
}

