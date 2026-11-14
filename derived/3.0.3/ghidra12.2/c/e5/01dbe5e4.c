
undefined8 FUN_01dbe5e4(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  size_t __n;
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *local_40;
  long local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  
  *(undefined4 *)(param_3 + 0x26) = 0;
  if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x18c) == 3) {
    return 0;
  }
  puVar1 = *(uint **)(*(long *)PTR_DAT_04bb21d0 + 0x28);
  if (((int)param_2 < (int)puVar1[8]) && (param_2 < *puVar1 && *(long *)(puVar1 + 2) != 0)) {
    lVar2 = *(long *)(puVar1 + 2) + (long)(int)param_2 * 0x1040;
    local_38 = 0;
    if ((*(byte *)(lVar2 + 0x103c) & 1) != 0) {
      local_38 = lVar2;
    }
    if ((*(byte *)(lVar2 + 0x103c) & 1) != 0) {
      uVar3 = (ulong)*(uint *)(lVar2 + 0xbf4) - 0x108 >> 3 | (ulong)*(uint *)(lVar2 + 0xbf4) << 0x3d
      ;
      if (5 < uVar3) {
switchD_01dbe69c_caseD_2:
        *(undefined4 *)(param_3 + 0x26) = 0;
        return 0;
      }
      switch(uVar3) {
      case 0:
        lVar4 = 1;
        *(undefined8 *)((long)param_3 + 0x14) = 0;
        __n = 0x108;
        *param_3 = 0;
        param_3[1] = 0;
        *(undefined1 *)(param_3 + 4) = 2;
        *(undefined4 *)((long)param_3 + 0x1c) = 0;
        *(undefined8 *)((long)param_3 + 0xc) = 0;
        *(undefined8 *)((long)param_3 + 0x24) = 0;
        *(undefined8 *)((long)param_3 + 0x2c) = 0;
        *(undefined8 *)((long)param_3 + 0x34) = 0;
        *(undefined8 *)((long)param_3 + 0x3c) = 0;
        *(undefined8 *)((long)param_3 + 0x44) = 0;
        *(undefined8 *)((long)param_3 + 0x4c) = 0;
        *(undefined8 *)((long)param_3 + 0x54) = 0;
        *(undefined8 *)((long)param_3 + 0x5c) = 0;
        *(undefined8 *)((long)param_3 + 100) = 0;
        *(undefined8 *)((long)param_3 + 0x6c) = 0;
        *(undefined8 *)((long)param_3 + 0x74) = 0;
        *(undefined8 *)((long)param_3 + 0x7c) = 0;
        *(undefined8 *)((long)param_3 + 0x84) = 0;
        *(undefined8 *)((long)param_3 + 0x8c) = 0;
        *(undefined8 *)((long)param_3 + 0x94) = 0;
        *(undefined8 *)((long)param_3 + 0x9c) = 0;
        *(undefined8 *)((long)param_3 + 0xa4) = 0;
        *(undefined8 *)((long)param_3 + 0xac) = 0;
        *(undefined8 *)((long)param_3 + 0xb4) = 0;
        *(undefined8 *)((long)param_3 + 0xbc) = 0;
        *(undefined8 *)((long)param_3 + 0xc4) = 0;
        *(undefined8 *)((long)param_3 + 0xcc) = 0;
        *(undefined8 *)((long)param_3 + 0xd4) = 0;
        *(undefined8 *)((long)param_3 + 0xdc) = 0;
        *(undefined8 *)((long)param_3 + 0xe4) = 0;
        *(undefined8 *)((long)param_3 + 0xec) = 0;
        *(undefined8 *)((long)param_3 + 0xf4) = 0;
        *(undefined8 *)((long)param_3 + 0xfc) = 0;
        *(undefined4 *)((long)param_3 + 0x104) = 0;
        *(undefined4 *)(param_3 + 0x26) = 1;
        break;
      case 1:
        lVar4 = 2;
        *param_3 = 0;
        param_3[1] = 0;
        *(undefined1 *)(param_3 + 4) = 2;
        __n = 0x110;
        *(undefined8 *)((long)param_3 + 0x14) = 0;
        *(undefined4 *)((long)param_3 + 0x1c) = 0;
        *(undefined8 *)((long)param_3 + 0xc) = 0;
        *(undefined8 *)((long)param_3 + 0x24) = 0;
        *(undefined8 *)((long)param_3 + 0x2c) = 0;
        *(undefined8 *)((long)param_3 + 0x34) = 0;
        *(undefined8 *)((long)param_3 + 0x3c) = 0;
        *(undefined8 *)((long)param_3 + 0x44) = 0;
        *(undefined8 *)((long)param_3 + 0x4c) = 0;
        *(undefined8 *)((long)param_3 + 0x54) = 0;
        *(undefined8 *)((long)param_3 + 0x5c) = 0;
        *(undefined8 *)((long)param_3 + 100) = 0;
        *(undefined8 *)((long)param_3 + 0x6c) = 0;
        *(undefined8 *)((long)param_3 + 0x74) = 0;
        *(undefined8 *)((long)param_3 + 0x7c) = 0;
        *(undefined8 *)((long)param_3 + 0x84) = 0;
        *(undefined8 *)((long)param_3 + 0x8c) = 0;
        *(undefined8 *)((long)param_3 + 0x94) = 0;
        *(undefined8 *)((long)param_3 + 0x9c) = 0;
        *(undefined8 *)((long)param_3 + 0xa4) = 0;
        *(undefined8 *)((long)param_3 + 0xac) = 0;
        *(undefined8 *)((long)param_3 + 0xb4) = 0;
        *(undefined8 *)((long)param_3 + 0xbc) = 0;
        *(undefined8 *)((long)param_3 + 0xc4) = 0;
        *(undefined8 *)((long)param_3 + 0xcc) = 0;
        *(undefined8 *)((long)param_3 + 0xd4) = 0;
        *(undefined8 *)((long)param_3 + 0xdc) = 0;
        *(undefined8 *)((long)param_3 + 0xe4) = 0;
        *(undefined8 *)((long)param_3 + 0xec) = 0;
        *(undefined8 *)((long)param_3 + 0xf4) = 0;
        *(undefined8 *)((long)param_3 + 0xfc) = 0;
        *(undefined8 *)((long)param_3 + 0x102) = 0;
        *(undefined4 *)(param_3 + 0x26) = 2;
        break;
      default:
        goto switchD_01dbe69c_caseD_2;
      case 4:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 4) = 2;
        lVar4 = 3;
        param_3[1] = 0;
        *(undefined8 *)((long)param_3 + 0x24) = 0;
        *(undefined8 *)((long)param_3 + 0x14) = 0;
        __n = 0x128;
        *(undefined4 *)((long)param_3 + 0x1c) = 0;
        *(undefined8 *)((long)param_3 + 0xc) = 0;
        *(undefined8 *)((long)param_3 + 0x2c) = 0;
        *(undefined8 *)((long)param_3 + 0x34) = 0;
        *(undefined8 *)((long)param_3 + 0x3c) = 0;
        *(undefined8 *)((long)param_3 + 0x44) = 0;
        *(undefined8 *)((long)param_3 + 0x4c) = 0;
        *(undefined8 *)((long)param_3 + 0x54) = 0;
        *(undefined8 *)((long)param_3 + 0x5c) = 0;
        *(undefined8 *)((long)param_3 + 100) = 0;
        *(undefined8 *)((long)param_3 + 0x6c) = 0;
        *(undefined8 *)((long)param_3 + 0x74) = 0;
        *(undefined8 *)((long)param_3 + 0x7c) = 0;
        *(undefined8 *)((long)param_3 + 0x84) = 0;
        *(undefined8 *)((long)param_3 + 0x8c) = 0;
        *(undefined8 *)((long)param_3 + 0x94) = 0;
        *(undefined8 *)((long)param_3 + 0x9c) = 0;
        *(undefined8 *)((long)param_3 + 0xa4) = 0;
        *(undefined8 *)((long)param_3 + 0xac) = 0;
        *(undefined8 *)((long)param_3 + 0xb4) = 0;
        *(undefined8 *)((long)param_3 + 0xbc) = 0;
        *(undefined8 *)((long)param_3 + 0xc4) = 0;
        *(undefined8 *)((long)param_3 + 0xcc) = 0;
        *(undefined8 *)((long)param_3 + 0xd4) = 0;
        *(undefined8 *)((long)param_3 + 0xdc) = 0;
        *(undefined8 *)((long)param_3 + 0xe4) = 0;
        *(undefined8 *)((long)param_3 + 0xec) = 0;
        *(undefined8 *)((long)param_3 + 0xf4) = 0;
        *(undefined8 *)((long)param_3 + 0xfc) = 0;
        *(undefined8 *)((long)param_3 + 0x104) = 0;
        *(undefined4 *)(param_3 + 0x26) = 3;
        *(undefined8 *)((long)param_3 + 0x10c) = 0;
        *(undefined8 *)((long)param_3 + 0x114) = 0;
        *(undefined8 *)((long)param_3 + 0x119) = 0;
        break;
      case 5:
        *param_3 = 0;
        param_3[1] = 0;
        *(undefined8 *)((long)param_3 + 0x104) = 0;
        lVar4 = 4;
        *(undefined8 *)((long)param_3 + 0x24) = 0;
        *(undefined1 *)(param_3 + 4) = 2;
        __n = 0x130;
        *(undefined8 *)((long)param_3 + 0x14) = 0;
        *(undefined4 *)((long)param_3 + 0x1c) = 0;
        *(undefined8 *)((long)param_3 + 0xc) = 0;
        *(undefined8 *)((long)param_3 + 0x2c) = 0;
        *(undefined8 *)((long)param_3 + 0x34) = 0;
        *(undefined8 *)((long)param_3 + 0x3c) = 0;
        *(undefined8 *)((long)param_3 + 0x44) = 0;
        *(undefined8 *)((long)param_3 + 0x4c) = 0;
        *(undefined8 *)((long)param_3 + 0x54) = 0;
        *(undefined8 *)((long)param_3 + 0x5c) = 0;
        *(undefined8 *)((long)param_3 + 100) = 0;
        *(undefined8 *)((long)param_3 + 0x6c) = 0;
        *(undefined8 *)((long)param_3 + 0x74) = 0;
        *(undefined8 *)((long)param_3 + 0x7c) = 0;
        *(undefined8 *)((long)param_3 + 0x84) = 0;
        *(undefined8 *)((long)param_3 + 0x8c) = 0;
        *(undefined8 *)((long)param_3 + 0x94) = 0;
        *(undefined8 *)((long)param_3 + 0x9c) = 0;
        *(undefined8 *)((long)param_3 + 0xa4) = 0;
        *(undefined8 *)((long)param_3 + 0xac) = 0;
        *(undefined8 *)((long)param_3 + 0xb4) = 0;
        *(undefined8 *)((long)param_3 + 0xbc) = 0;
        *(undefined8 *)((long)param_3 + 0xc4) = 0;
        *(undefined8 *)((long)param_3 + 0xcc) = 0;
        *(undefined8 *)((long)param_3 + 0xd4) = 0;
        *(undefined8 *)((long)param_3 + 0xdc) = 0;
        *(undefined8 *)((long)param_3 + 0xe4) = 0;
        *(undefined8 *)((long)param_3 + 0xec) = 0;
        *(undefined8 *)((long)param_3 + 0xf4) = 0;
        *(undefined8 *)((long)param_3 + 0xfc) = 0;
        *(undefined2 *)(param_3 + 0x25) = 0;
        *(undefined4 *)(param_3 + 0x26) = 4;
        *(undefined8 *)((long)param_3 + 0x10c) = 0;
        *(undefined8 *)((long)param_3 + 0x114) = 0;
        *(undefined8 *)((long)param_3 + 0x119) = 0;
      }
      memcpy(param_3,(void *)(lVar2 + 0xbf8),__n);
      local_40 = &local_38;
      local_28 = &local_30;
      local_30 = (undefined1 *)&local_40;
      (*(code *)(&PTR_LAB_04a5b1b0)[lVar4])(&local_28,param_3);
      return 1;
    }
  }
  return 0;
}

