
undefined8 FUN_03838fe0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_2;
  if (*(long *)(lVar8 + 0x10) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      puVar6 = malloc(0x15a8);
    }
    else {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar7 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03839000;
      }
      puVar6 = (undefined1 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15a8,8);
    }
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 0xc) = 0;
      bVar3 = true;
      *(undefined8 *)(puVar6 + 0x14) = 0;
      *(undefined8 *)(puVar6 + 0x1c) = 0;
      puVar1 = PTR_DAT_04bdf1d8;
      *(undefined4 *)(puVar6 + 0x24) = 0;
      puVar1 = puVar1 + 0x10;
      *(undefined2 *)(puVar6 + 8) = 1;
      *(undefined8 *)(puVar6 + 0x1430) = 0;
      *(undefined8 *)(puVar6 + 0x1438) = 0;
      *(undefined **)(puVar6 + 0x1428) = puVar1;
      *(undefined8 *)(puVar6 + 0x1440) = 0;
      *(undefined1 **)(puVar6 + 0x1458) = puVar6 + 0x1464;
      *(undefined4 *)(puVar6 + 0x1460) = 0x20;
      puVar6[0x1483] = 0;
      puVar6[0x1464] = 0;
      *(undefined **)(puVar6 + 0x1450) = PTR_DAT_04bb2028 + 0x10;
      puVar2 = PTR_DAT_04bcb3e8 + 0x10;
      puVar6[0x1490] = 1;
      *(undefined8 *)(puVar6 + 0x1494) = 0;
      *(undefined8 *)(puVar6 + 0x14a0) = 0;
      *(undefined8 *)(puVar6 + 0x14a8) = 0;
      *(undefined **)(puVar6 + 0x1488) = puVar2;
      *(undefined **)(puVar6 + 0x14b0) = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bb2120;
      puVar6[0x14c0] = 0;
      *(undefined8 *)(puVar6 + 0x14c8) = 0;
      *(undefined **)(puVar6 + 0x14d0) = puVar1;
      *(undefined8 *)(puVar6 + 0x14d8) = 0;
      *(undefined8 *)(puVar6 + 0x14e0) = 0;
      *(undefined8 *)(puVar6 + 0x14e8) = 0;
      *(undefined **)(puVar6 + 0x14b8) = puVar2;
      puVar2 = PTR_DAT_04bcb3a8;
      *(undefined8 *)(puVar6 + 0x14f8) = 0;
      *(undefined8 *)(puVar6 + 0x1500) = 0;
      *(undefined **)(puVar6 + 0x1508) = puVar1;
      *(undefined8 *)(puVar6 + 0x1520) = 0;
      *(undefined8 *)(puVar6 + 0x1518) = 0;
      *(undefined8 *)(puVar6 + 0x1510) = 0;
      *(undefined **)(puVar6 + 0x14f0) = puVar2 + 0x10;
      puVar2 = PTR_DAT_04bcb310;
      puVar6[0x1538] = 1;
      *(undefined8 *)(puVar6 + 0x1550) = 0;
      *(undefined8 *)(puVar6 + 0x153c) = 0;
      *(undefined8 *)(puVar6 + 0x1548) = 0;
      *(undefined **)(puVar6 + 0x1530) = puVar2 + 0x10;
      puVar2 = PTR_DAT_04bcb3a0;
      *(undefined8 *)(puVar6 + 0x1560) = 0;
      *(undefined **)(puVar6 + 0x1568) = puVar1;
      *(undefined8 *)(puVar6 + 0x1570) = 0;
      *(undefined8 *)(puVar6 + 0x1578) = 0;
      *(undefined8 *)(puVar6 + 0x1580) = 0;
      *(undefined8 *)(puVar6 + 0x1598) = 0;
      *(undefined8 *)(puVar6 + 0x1590) = 0;
      *(undefined **)(puVar6 + 0x1558) = puVar2 + 0x10;
      FUN_0383c1a0(puVar6,lVar8 + 0x20);
      *(undefined1 **)(lVar8 + 0x10) = puVar6;
      goto LAB_038391c8;
    }
  }
LAB_03839000:
  bVar3 = false;
LAB_038391c8:
  if ((((*(char *)(lVar8 + 0x21) == '\0') || (*(char *)(lVar8 + 0x20) != '\0')) ||
      ((*(byte *)(param_1 + 1) & 1) != 0)) && (*(long *)(lVar8 + 0x10) != 0)) {
    FUN_0383c5a0();
  }
  if (bVar3) {
    *(undefined8 *)(*(long *)(lVar8 + 8) + 8) = *(undefined8 *)(lVar8 + 0x10);
  }
  return 1;
}

