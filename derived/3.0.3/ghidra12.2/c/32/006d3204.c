
undefined1 FUN_006d3204(undefined8 param_1,Result *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = *(uint *)param_2;
  if ((uVar1 & 0x3fffff) == 0x7c) {
    puVar2 = &DAT_05ae6798;
    goto LAB_006d3310;
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  if (((uVar1 & 0x1ff) == 0x7c) && ((uVar1 >> 9 & 0x1ffe) - 200 < 0x46)) {
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&local_30,param_2);
    if (((*(int *)(lVar4 + 0x24) < 2) &&
        ((*(int *)(lVar4 + 0x24) < 1 || (1 < *(int *)(lVar4 + 0x24))))) ||
       (*(int *)(lVar4 + 0x24) < 2)) {
      uVar3 = 0x20000000b;
LAB_006d32ec:
      *(undefined8 *)(lVar4 + 0x28) = local_30;
      *(undefined8 *)(lVar4 + 0x34) = uVar3;
      *(undefined4 *)(lVar4 + 0x3c) = 0;
      *(undefined4 *)(lVar4 + 0x30) = local_28;
      *(undefined4 *)(lVar4 + 0x24) = 2;
    }
  }
  else {
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&local_30,param_2);
    if (((*(int *)(lVar4 + 0x24) < 2) &&
        ((*(int *)(lVar4 + 0x24) < 1 || (1 < *(int *)(lVar4 + 0x24))))) ||
       (*(int *)(lVar4 + 0x24) < 2)) {
      uVar3 = 0xa0000000b;
      goto LAB_006d32ec;
    }
  }
  puVar2 = &DAT_05ae6794;
LAB_006d3310:
  return *puVar2;
}

