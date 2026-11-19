
undefined8 FUN_038fb5d0(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar8 = *(int *)(param_3 + 0x58) - (uint)*(ushort *)(param_1 + 0x3da);
  if (*(uint *)(param_1 + 0x368) <= uVar8) {
    uVar8 = 0;
  }
  lVar2 = *(long *)(param_1 + 0x370) + (long)(int)uVar8 * 0x20;
  puVar1 = (uint *)(lVar2 + 4);
  do {
    uVar8 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar8 | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = *(uint *)(param_1 + 0x5c8);
  if ((((uVar3 >> 7 & 1) == 0) || ((*puVar1 & 1) == 0)) ||
     (((uVar8 >> 1 & 1) != 0 && ((uVar3 >> 0x14 & 1) == 0)))) {
    return 0;
  }
  uVar11 = *(undefined8 *)(param_2 + 0xb8);
  lVar2 = *(long *)(param_1 + 0x638) + (ulong)*(ushort *)(**(long **)(lVar2 + 0x10) + 0x84) * 0x20;
  if (((uVar3 >> 0x14 & 1) == 0) ||
     ((**(code **)PTR_DAT_04bcfe38)(uVar11,1,lVar2), -1 < *(char *)(param_1 + 0x5ca)))
  goto switchD_038fb6b4_default;
  switch(*(undefined1 *)(param_1 + 0x5cc)) {
  case 1:
    (**(code **)PTR_DAT_04bcf250)(uVar11,lVar2,4,0);
    break;
  case 2:
    puVar9 = &DAT_04c62b08;
    goto LAB_038fb6f0;
  case 3:
    puVar9 = &DAT_04c62af8;
LAB_038fb6f0:
    pcVar10 = (code *)*puVar9;
    uVar6 = 0;
LAB_038fb714:
    (*pcVar10)(uVar11,uVar6,lVar2);
    break;
  case 4:
    uVar6 = 0x10;
    pcVar10 = *(code **)PTR_DAT_04bcf2d0;
    goto LAB_038fb714;
  }
switchD_038fb6b4_default:
  uVar7 = 0xff;
  if (1 < *(ushort *)(param_3 + 0xa0) - 0x5b) {
    uVar7 = 0;
  }
  (*DAT_04c629a8)(0x3f800000,uVar11,1,0,uVar7);
  uVar8 = *(uint *)(param_1 + 0x5c8);
  if ((uVar8 >> 0x14 & 1) == 0) {
    return 1;
  }
  if ((uVar8 >> 0x15 & 1) != 0) {
    (**(code **)PTR_DAT_04bcfe30)(uVar11,1);
    uVar8 = *(uint *)(param_1 + 0x5c8);
  }
  if ((uVar8 >> 0x17 & 1) != 0) {
    return 1;
  }
  switch(*(undefined1 *)(param_1 + 0x5cc)) {
  case 1:
    (**(code **)PTR_DAT_04bcf250)(uVar11,lVar2,4,0);
    return 1;
  case 2:
    puVar9 = &DAT_04c62b08;
    break;
  case 3:
    puVar9 = &DAT_04c62af8;
    break;
  case 4:
    uVar6 = 0x10;
    pcVar10 = *(code **)PTR_DAT_04bcf2d0;
    goto LAB_038fb804;
  default:
    goto switchD_038fb7a4_default;
  }
  pcVar10 = (code *)*puVar9;
  uVar6 = 0;
LAB_038fb804:
  (*pcVar10)(uVar11,uVar6,lVar2);
switchD_038fb7a4_default:
  return 1;
}

