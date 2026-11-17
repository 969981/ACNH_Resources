
/* WARNING: Type propagation algorithm not settling */

void FUN_030c38ec(long param_1,byte *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x4e4) == '\0') {
    uVar5 = 0xff;
    FUN_030c5630(param_1,0,0);
  }
  else {
    bVar1 = *param_2 != *(byte *)(param_1 + 0x4d8);
    uVar5 = (uint)bVar1 << 1;
    if (param_2[2] != *(byte *)(param_1 + 0x4da)) {
      uVar5 = (uint)bVar1 << 1 | 4;
    }
    if (param_2[2] != *(byte *)(param_1 + 0x4da)) {
      uVar5 = uVar5 | 8;
    }
    if (param_2[4] != *(byte *)(param_1 + 0x4dc)) {
      uVar5 = uVar5 | 0x10;
    }
    uVar5 = uVar5 | (uint)(param_2[5] != *(byte *)(param_1 + 0x4dd)) << 5;
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)param_2[6]);
    if ((uint)param_2[6] == (uint)*(byte *)(param_1 + 0x4de)) {
      if (uVar5 == 0) {
        return;
      }
    }
    else {
      uVar5 = uVar5 | 0x40;
    }
  }
  if ((uVar5 >> 1 & 1) != 0) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)*param_2);
    FUN_030c5630(param_1,1,(uint)*param_2);
  }
  if ((uVar5 >> 2 & 1) != 0) {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)param_2[2]);
    FUN_030c5630(param_1,2,(uint)param_2[2]);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)param_2[2]);
    FUN_030c5630(param_1,3,(uint)param_2[2]);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)param_2[4]);
    FUN_030c5630(param_1,4,(uint)param_2[4]);
  }
  if ((uVar5 >> 5 & 1) != 0) {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)param_2[5]);
    FUN_030c5630(param_1,5,(uint)param_2[5]);
  }
  if ((uVar5 >> 6 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x228);
  }
  else {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,(uint)param_2[6]);
    FUN_030c5630(param_1,6,(uint)param_2[6]);
    lVar3 = *(long *)(param_1 + 0x228);
  }
  if (((((((lVar3 == 0) || (*(long *)(lVar3 + 8) == 0)) || (*(char *)(param_1 + 0x254) == '\0')) &&
        (((*(long *)(param_1 + 0x278) == 0 || (*(long *)(*(long *)(param_1 + 0x278) + 8) == 0)) ||
         (*(char *)(param_1 + 0x2a4) == '\0')))) &&
       (((*(long *)(param_1 + 0x2c8) == 0 || (*(long *)(*(long *)(param_1 + 0x2c8) + 8) == 0)) ||
        (*(char *)(param_1 + 0x2f4) == '\0')))) &&
      ((((*(long *)(param_1 + 0x318) == 0 || (*(long *)(*(long *)(param_1 + 0x318) + 8) == 0)) ||
        (*(char *)(param_1 + 0x344) == '\0')) &&
       (((*(long *)(param_1 + 0x368) == 0 || (*(long *)(*(long *)(param_1 + 0x368) + 8) == 0)) ||
        (*(char *)(param_1 + 0x394) == '\0')))))) &&
     (((*(long *)(param_1 + 0x3b8) == 0 || (*(long *)(*(long *)(param_1 + 0x3b8) + 8) == 0)) ||
      (*(char *)(param_1 + 0x3e4) == '\0')))) {
    if (*(long *)(param_1 + 0x408) == 0) {
      return;
    }
    if (*(long *)(*(long *)(param_1 + 0x408) + 8) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x434) == '\0') {
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0x218) = 1;
  *(undefined4 *)(param_1 + 0x21c) = 8;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x158))(plVar4[1],0);
  }
  plVar4 = *(long **)(param_1 + 0x220);
  if ((plVar4 != (long *)0x0) && (plVar2 = (long *)plVar4[0x36], plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    (**(code **)(*plVar4 + 0xa8))(plVar4);
  }
  return;
}

