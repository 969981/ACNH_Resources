
uint FUN_03d4cd40(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_158 = 0x100;
  local_55 = 0;
  local_160 = local_154;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_168,"%s.msbt",param_2[1]);
  if (*(long *)(lVar4 + 0x10) != lVar4 + 8) {
    lVar5 = (long)*(int *)(lVar4 + 0x1c);
    lVar3 = *(long *)(lVar4 + 0x10) - lVar5;
    do {
      if ((lVar3 != 0) && (lVar2 = FUN_03d54360(lVar3,&local_168), lVar2 != 0)) {
        (**(code **)(*param_3 + 0x18))(param_3);
        FUN_03b0d9a0(&local_168,lVar2,param_3[1]);
        local_170 = local_160._0_4_;
        goto LAB_03d4ce58;
      }
      lVar3 = *(long *)(lVar3 + lVar5 + 8) - lVar5;
    } while (lVar3 != (lVar4 + 8) - lVar5);
  }
  local_170 = 0;
  local_168 = (undefined *)0x0;
  local_160 = (undefined1 *)((ulong)local_160 & 0xffffffff00000000);
LAB_03d4ce58:
  local_178 = local_168;
  uVar1 = FUN_03d4ce90(param_1,&local_178);
  return uVar1 & 1;
}

