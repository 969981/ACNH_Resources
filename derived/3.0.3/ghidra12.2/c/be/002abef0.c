
/* WARNING: Type propagation algorithm not settling */

void FUN_002abef0(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (((param_3 == (undefined1 *)0x0) || (param_4 == (int *)0x0)) || (param_5 < 0x10)) {
    local_24 = 0x10c07;
  }
  else {
    puVar4 = (ulong *)(param_3 + 1);
    *param_3 = *(undefined1 *)(param_2 + 8);
    bVar1 = *(byte *)(param_2 + 8);
    if ((bVar1 & 1) != 0) {
      param_3[1] = *(undefined1 *)(param_2 + 9);
      puVar4 = (ulong *)(param_3 + 2);
      bVar1 = *(byte *)(param_2 + 8);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      *(ushort *)puVar4 = *(ushort *)(param_2 + 10) >> 8 | *(ushort *)(param_2 + 10) << 8;
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)((long)puVar4 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      uVar2 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
      *(uint *)puVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)((long)puVar4 + 4);
    }
    puVar5 = puVar4;
    if ((bVar1 >> 3 & 1) != 0) {
      uVar3 = (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
    }
    local_24 = 0;
    *param_4 = (int)puVar5 - (int)param_3;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

