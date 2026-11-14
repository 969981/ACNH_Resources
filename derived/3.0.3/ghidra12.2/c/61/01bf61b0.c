
void FUN_01bf61b0(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  memset(*(void **)(param_1 + 0x10),0,(long)*(int *)(param_1 + 0xc) << 2);
  local_b8 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_DAT_04bb2718;
  local_65 = 0;
  local_b0 = local_a4;
  uVar6 = 1;
  local_a4[0] = 0;
  local_b8 = local_b8 + 0x10;
  local_a8 = 0x40;
  do {
    *local_b0 = 0;
    *local_b0 = 0;
    if (param_3 == -1) {
      *local_b0 = 0;
    }
    else {
      FUN_038d1270(&local_b8,"%03d_%02d",param_3,uVar6);
    }
    FUN_03d53db0(*(undefined8 *)(*(long *)puVar3 + 0x408),param_2);
    puVar5 = (undefined8 *)FUN_03d53db0(*(undefined8 *)(*(long *)puVar3 + 0x408),param_2);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)(local_b8 + 0x18))(&local_b8);
      iVar4 = FUN_038f40b0(*puVar5,local_b0);
      if (-1 < iVar4) {
        uVar2 = 1 << (ulong)(uVar6 & 0x1f);
        uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)(uVar6 >> 5) * 4);
        if ((uVar1 & uVar2) == 0) {
          *(uint *)(*(long *)(param_1 + 0x10) + (ulong)(uVar6 >> 5) * 4) = uVar1 | uVar2;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 100);
  return;
}

