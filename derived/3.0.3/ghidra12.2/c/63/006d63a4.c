
uint FUN_006d63a4(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_7c;
  undefined1 auStack_78 [72];
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_0069150c(auStack_78);
  (**(code **)(*param_1 + 0x28))(param_1,auStack_78);
  FUN_006d6670(param_1,auStack_78);
  local_7c = FUN_0069155c(auStack_78);
  uVar1 = FUN_00691564(auStack_78);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_7c,uVar1);
  if ((uVar2 & 1) == 0) {
    if ((((ulong)local_7c & 0x3fffff) - 0x1f42db & 0xfffffffffffffdff) == 0) {
      uVar4 = FUN_006d3050(param_1[5],param_1);
      if ((uVar4 & 0xff) != 0) goto LAB_006d6574;
      FUN_0069150c(&local_c8);
      (**(code **)(*param_1 + 0x28))(param_1,&local_c8);
      FUN_006d6670(param_1,&local_c8);
      local_7c = FUN_0069155c(&local_c8);
      uVar1 = FUN_00691564(&local_c8);
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_7c,uVar1);
      if ((uVar2 & 1) == 0) {
        if (((local_7c & 0x1ff) == 0xdb) && ((local_7c >> 9 & 0x1ffe) - 10 < 10)) {
          pbVar3 = &DAT_05ae6798;
        }
        else {
          if ((local_7c & 0x3fffff) == 0x20d2db) {
            *(undefined1 *)(param_1[6] + 0xa8) = 1;
          }
          lVar5 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)&local_30,(Result *)&local_7c);
          if ((*(int *)(lVar5 + 0x24) < 2) &&
             ((*(int *)(lVar5 + 0x24) < 1 || (1 < *(int *)(lVar5 + 0x24))))) {
            *(int *)(lVar5 + 0x3c) = (int)param_1[8];
            *(undefined8 *)(lVar5 + 0x34) = 0x150000000c;
            *(undefined8 *)(lVar5 + 0x28) = local_30;
            *(undefined4 *)(lVar5 + 0x30) = local_28;
            *(undefined4 *)(lVar5 + 0x24) = 1;
          }
          pbVar3 = &DAT_05ae6794;
        }
        uVar4 = (uint)*pbVar3;
        FUN_0069152c(&local_c8);
        goto LAB_006d6574;
      }
      FUN_0069152c(&local_c8);
      goto LAB_006d6410;
    }
    if (((local_7c & 0x1ff) == 0xdb) && ((local_7c >> 9 & 0x1ffe) - 10 < 10)) {
      pbVar3 = &DAT_05ae6798;
    }
    else {
      if ((int)((ulong)local_7c & 0x3fffff) == 0x20d2db) {
        *(undefined1 *)(param_1[6] + 0xa8) = 1;
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_c8,(Result *)&local_7c);
      if ((*(int *)(lVar5 + 0x24) < 2) &&
         ((*(int *)(lVar5 + 0x24) < 1 || (1 < *(int *)(lVar5 + 0x24))))) {
        *(int *)(lVar5 + 0x3c) = (int)param_1[8];
        *(undefined8 *)(lVar5 + 0x34) = 0x150000000c;
        *(undefined8 *)(lVar5 + 0x28) = local_c8;
        *(undefined4 *)(lVar5 + 0x30) = local_c0;
        *(undefined4 *)(lVar5 + 0x24) = 1;
      }
      pbVar3 = &DAT_05ae6794;
    }
  }
  else {
LAB_006d6410:
    pbVar3 = &DAT_05ae6790;
  }
  uVar4 = (uint)*pbVar3;
LAB_006d6574:
  FUN_0069152c(auStack_78);
  return uVar4;
}

