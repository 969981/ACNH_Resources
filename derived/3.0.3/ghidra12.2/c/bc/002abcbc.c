
void FUN_002abcbc(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_3 == (byte *)0x0) || (param_4 < 0x10)) {
LAB_002abd0c:
    local_24 = 0x10c07;
  }
  else {
    puVar5 = (ulong *)(param_3 + 1);
    bVar1 = *param_3;
    *(byte *)(param_2 + 8) = bVar1;
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_2 + 9) = param_3[1];
      puVar5 = (ulong *)(param_3 + 2);
    }
    puVar6 = puVar5;
    if ((bVar1 >> 1 & 1) != 0) {
      puVar6 = (ulong *)((long)puVar5 + 2);
      uVar4 = (ushort)*puVar5 >> 8 | (ushort)*puVar5 << 8;
      *(ushort *)(param_2 + 10) = uVar4;
      if (0x5a0 < uVar4) {
        *(undefined2 *)(param_2 + 10) = 0;
        goto LAB_002abd0c;
      }
    }
    puVar5 = puVar6;
    if ((bVar1 >> 2 & 1) != 0) {
      puVar5 = (ulong *)((long)puVar6 + 4);
      uVar2 = ((uint)*puVar6 & 0xff00ff00) >> 8 | ((uint)*puVar6 & 0xff00ff) << 8;
      *(uint *)(param_2 + 0xc) = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    if ((bVar1 >> 3 & 1) != 0) {
      uVar3 = (*puVar5 & 0xff00ff00ff00ff00) >> 8 | (*puVar5 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + 0x10) = uVar3 >> 0x20 | uVar3 << 0x20;
    }
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

