
void FUN_003ccac0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  undefined2 local_23;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  local_3c = *(undefined8 *)(param_1 + 0x50);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  local_1e = 1;
  local_2c = 0x1e00000001;
  local_20 = *(undefined1 *)(param_1 + 0x62);
  local_23 = 0;
  local_24 = *(undefined1 *)(param_1 + 0x60);
  local_14 = 0;
  uStack_30 = *(undefined4 *)(param_1 + 100);
  local_1b = *(undefined1 *)(param_1 + 0x79);
  local_1f = *(undefined1 *)(param_1 + 99);
  local_21 = *(undefined1 *)(param_1 + 0x76);
  local_1c = *(undefined1 *)(param_1 + 0x73);
  local_1d = *(undefined1 *)(param_1 + 0x78);
  local_1a = *(undefined2 *)(param_1 + 0x7a);
  local_12 = *(undefined1 *)(param_1 + 0x97);
  local_18 = *(undefined4 *)(param_1 + 0x7c);
  local_13 = *(undefined1 *)(param_1 + 0x94);
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x8c) != -1) {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  FUN_003b4ed8(&local_3c,local_1d,local_21,*(undefined1 *)(param_1 + 0x77),
               *(undefined1 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x71),
               *(undefined1 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),iVar1);
  uVar2 = FUN_03b38a74();
  FUN_003b5380(uVar2,&local_3c);
  return;
}

