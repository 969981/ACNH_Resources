
undefined8 FUN_038fb3a0(long param_1,long param_2,undefined4 param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  uVar7 = *(int *)(param_4 + 0x58) - (uint)*(ushort *)(param_1 + 0x3da);
  if (*(uint *)(param_1 + 0x368) <= uVar7) {
    uVar7 = 0;
  }
  lVar2 = *(long *)(param_1 + 0x370) + (long)(int)uVar7 * 0x20;
  puVar1 = (uint *)(lVar2 + 4);
  do {
    uVar7 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar7 | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = *(uint *)(param_1 + 0x5c8);
  if ((((uVar3 >> 6 & 1) == 0) || ((*puVar1 & 1) == 0)) ||
     (((uVar7 >> 1 & 1) != 0 && ((uVar3 >> 0x14 & 1) == 0)))) {
    return 0;
  }
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  lVar2 = *(long *)(param_1 + 0x638) + (ulong)*(ushort *)(**(long **)(lVar2 + 0x10) + 0x84) * 0x20;
  if (((uVar3 >> 0x14 & 1) == 0) ||
     ((**(code **)PTR_DAT_04bcfe38)(uVar10,1,lVar2), -1 < *(char *)(param_1 + 0x5ca)))
  goto switchD_038fb480_default;
  switch(*(undefined1 *)(param_1 + 0x5cc)) {
  case 1:
    (**(code **)PTR_DAT_04bcf250)(uVar10,lVar2,4,0);
    break;
  case 2:
    puVar9 = (undefined8 *)PTR_DAT_04bcfe28;
    goto LAB_038fb4bc;
  case 3:
    puVar9 = (undefined8 *)PTR_DAT_04bcf2d0;
LAB_038fb4bc:
    pcVar8 = (code *)*puVar9;
    uVar6 = 0;
LAB_038fb4e0:
    (*pcVar8)(uVar10,uVar6,lVar2);
    break;
  case 4:
    uVar6 = 0x10;
    pcVar8 = *(code **)PTR_DAT_04bcf2d0;
    goto LAB_038fb4e0;
  }
switchD_038fb480_default:
  (**(code **)PTR_DAT_04bcfd90)(uVar10,param_3,&DAT_05ae78d8,0xf);
  uVar7 = *(uint *)(param_1 + 0x5c8);
  if ((uVar7 >> 0x14 & 1) == 0) {
    return 1;
  }
  if ((uVar7 >> 0x15 & 1) != 0) {
    (**(code **)PTR_DAT_04bcfe30)(uVar10,1);
    uVar7 = *(uint *)(param_1 + 0x5c8);
  }
  if ((uVar7 >> 0x17 & 1) != 0) {
    return 1;
  }
  switch(*(undefined1 *)(param_1 + 0x5cc)) {
  case 1:
    (**(code **)PTR_DAT_04bcf250)(uVar10,lVar2,4,0);
    return 1;
  case 2:
    puVar9 = (undefined8 *)PTR_DAT_04bcfe28;
    break;
  case 3:
    puVar9 = (undefined8 *)PTR_DAT_04bcf2d0;
    break;
  case 4:
    uVar6 = 0x10;
    pcVar8 = *(code **)PTR_DAT_04bcf2d0;
    goto LAB_038fb5bc;
  default:
    goto switchD_038fb55c_default;
  }
  pcVar8 = (code *)*puVar9;
  uVar6 = 0;
LAB_038fb5bc:
  (*pcVar8)(uVar10,uVar6,lVar2);
switchD_038fb55c_default:
  return 1;
}

