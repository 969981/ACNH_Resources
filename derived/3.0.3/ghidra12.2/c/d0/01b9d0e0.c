
void FUN_01b9d0e0(undefined8 param_1,long param_2,uint *param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint local_d4;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  iVar1 = *(int *)(param_6 + 4);
  iVar2 = *(int *)(param_6 + 8);
  memset(*(void **)(param_2 + 0x10),0,(long)*(int *)(param_2 + 0xc) << 2);
  puVar6 = PTR_DAT_04bb2bc0;
  puVar5 = PTR_DAT_04bb2718;
  *(undefined4 *)(param_2 + 0x18) = 0;
  uVar9 = 1;
  local_d4 = 0xffffffff;
  do {
    local_65 = 0;
    local_a8 = 0x40;
    local_a4[0] = 0;
    if (iVar1 != -1) {
      local_b8 = puVar6 + 0x10;
      local_b0 = local_a4;
      if (iVar2 + 1U < 2) {
        FUN_038d1270(&local_b8,"%03d_%c",iVar1,uVar9 + 0x60 & 0xff);
      }
      else {
        FUN_038d1270(&local_b8,"%03d_%02d_%c",iVar1,iVar2,uVar9 + 0x60 & 0xff);
      }
      FUN_03d53db0(*(undefined8 *)(*(long *)puVar5 + 0x408),param_5);
      puVar8 = (undefined8 *)FUN_03d53db0(*(undefined8 *)(*(long *)puVar5 + 0x408),param_5);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)(local_b8 + 0x18))(&local_b8);
        iVar7 = FUN_038f40b0(*puVar8,local_b0);
        if (-1 < iVar7) {
          uVar4 = 1 << (ulong)(uVar9 & 0x1f);
          uVar3 = *(uint *)(*(long *)(param_2 + 0x10) + (ulong)(uVar9 >> 5) * 4);
          local_d4 = uVar9;
          if ((uVar3 & uVar4) == 0) {
            *(uint *)(*(long *)(param_2 + 0x10) + (ulong)(uVar9 >> 5) * 4) = uVar3 | uVar4;
            *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x1b);
  if ((param_3 != (uint *)0x0) && (-1 < (int)local_d4)) {
    uVar3 = 1 << (ulong)(local_d4 & 0x1f);
    uVar9 = *(uint *)(*(long *)(param_2 + 0x10) + (ulong)(local_d4 >> 5) * 4);
    if ((uVar9 & uVar3) != 0) {
      *(uint *)(*(long *)(param_2 + 0x10) + (ulong)(local_d4 >> 5) * 4) =
           uVar9 & (uVar3 ^ 0xffffffff);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
    }
    *param_3 = local_d4;
  }
  return;
}

