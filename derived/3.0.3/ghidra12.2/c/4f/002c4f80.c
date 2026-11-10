
undefined8 FUN_002c4f80(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_4c;
  ErrorResultVariant aEStack_48 [12];
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_4c = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_4c);
  local_38[0] = 0;
  local_3c = 0;
  FUN_00226d78(&local_4c,param_1 + 8,(undefined8 *)(param_1 + 0x70),0x10,0,local_38,&local_3c);
  FUN_00229780(&local_34,&local_4c);
  if (local_34 != 0) {
    local_24 = 0;
    local_4c = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_48,(Result *)&local_24);
    return 0;
  }
  if (local_3c != 0x10) {
    return 0;
  }
  uVar2 = (*(uint *)(param_1 + 0x70) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x70) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar3 = (*(uint *)(param_1 + 0x74) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x74) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x70) = uVar2;
  *(uint *)(param_1 + 0x74) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar2 = uVar2 - 0x65;
  uVar3 = (*(uint *)(param_1 + 0x78) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x78) & 0xff00ff) << 8;
  uVar4 = (*(uint *)(param_1 + 0x7c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x7c) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x78) = uVar3 >> 0x10 | uVar3 << 0x10;
  *(uint *)(param_1 + 0x7c) = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar2 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    lVar5 = param_1 + (ulong)uVar2 * 0x14;
    *(undefined8 *)(lVar5 + 0x5c4) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(lVar5 + 0x5cc) = uVar1;
    *(int *)(lVar5 + 0x5c0) = *(int *)(lVar5 + 0x5c0) + 1;
  }
  return 1;
}

