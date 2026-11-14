
undefined8 FUN_01dbe988(undefined8 param_1,uint param_2,void *param_3)

{
  uint *puVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  long *local_50;
  long local_48;
  undefined1 *local_40;
  undefined1 **local_38;
  
  *(undefined4 *)((long)param_3 + 0x138) = 0;
  if (((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x18c) == 3) &&
      (puVar1 = *(uint **)(*(long *)PTR_DAT_04bb21d0 + 0x28), (int)param_2 < (int)puVar1[8])) &&
     (param_2 < *puVar1 && *(long *)(puVar1 + 2) != 0)) {
    lVar2 = *(long *)(puVar1 + 2) + (long)(int)param_2 * 0x1040;
    local_48 = 0;
    if ((*(byte *)(lVar2 + 0x103c) & 1) != 0) {
      local_48 = lVar2;
    }
    if ((*(byte *)(lVar2 + 0x103c) & 1) != 0) {
      if (*(int *)(lVar2 + 0xbf4) == 0x138) {
        __n = 0x138;
        memset(param_3,0,0x138);
        lVar3 = 2;
        *(undefined8 *)((long)param_3 + 0xc) = 0;
        *(undefined8 *)((long)param_3 + 0x104) = 0;
        *(undefined1 *)((long)param_3 + 0x20) = 2;
        *(undefined8 *)((long)param_3 + 0x24) = 0;
        *(undefined8 *)((long)param_3 + 0x14) = 0;
        *(undefined4 *)((long)param_3 + 0x1c) = 0;
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
        *(undefined8 *)((long)param_3 + 0x10c) = 0;
        *(undefined8 *)((long)param_3 + 0x114) = 0;
        *(undefined8 *)((long)param_3 + 0x119) = 0;
        *(undefined2 *)((long)param_3 + 0x130) = 0xffff;
      }
      else {
        if (*(int *)(lVar2 + 0xbf4) != 0x118) {
          *(undefined4 *)((long)param_3 + 0x138) = 0;
          return 0;
        }
        __n = 0x118;
        memset(param_3,0,0x118);
        *(undefined8 *)((long)param_3 + 0xfc) = 0;
        lVar3 = 1;
        *(undefined1 *)((long)param_3 + 0x20) = 2;
        *(undefined8 *)((long)param_3 + 0xc) = 0;
        *(undefined8 *)((long)param_3 + 0x102) = 0;
        *(undefined8 *)((long)param_3 + 0x14) = 0;
        *(undefined4 *)((long)param_3 + 0x1c) = 0;
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
        *(undefined2 *)((long)param_3 + 0x110) = 0xffff;
      }
      *(int *)((long)param_3 + 0x138) = (int)lVar3;
      memcpy(param_3,(void *)(lVar2 + 0xbf8),__n);
      local_50 = &local_48;
      local_38 = &local_40;
      local_40 = (undefined1 *)&local_50;
      (*(code *)(&PTR_LAB_04a5b1d8)[lVar3])(&local_38,param_3);
      return 1;
    }
  }
  return 0;
}

