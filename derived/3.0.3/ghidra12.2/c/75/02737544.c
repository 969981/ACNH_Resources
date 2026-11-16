
void FUN_02737544(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_04a90948;
  param_1[1] = 0;
  FUN_02352bec(param_1 + 7,param_1,0);
  puVar1 = PTR_DAT_04bc30c0 + 0x10;
  param_1[7] = puVar1;
  FUN_02737cc0(param_1 + 0x31e,param_1,param_1[2] + 0x1190);
  lVar3 = param_1[3];
  param_1[0x484] = 0;
  param_1[0x486] = 0;
  param_1[0x487] = 0;
  param_1[0x31e] = &PTR_LAB_04a90978;
  param_1[0x488] = 0;
  *(undefined1 *)(param_1 + 0x489) = 0;
  param_1[3] = param_1 + 0x483;
  param_1[0x485] = param_1[2] + 0x11f0;
  if (lVar3 != 0) {
    param_1[0x487] = lVar3;
  }
  param_1[0x48b] = 0;
  puVar2 = PTR_DAT_04bc30e8;
  param_1[0x48c] = 0;
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  *param_1 = &PTR_LAB_04a90918;
  param_1[0x483] = puVar2 + 0x10;
  *(undefined1 *)(param_1 + 0x490) = 0;
  param_1[0x48a] = &PTR_LAB_04a90948;
  FUN_02352bec(param_1 + 0x491,param_1 + 0x48a,0);
  param_1[0x491] = puVar1;
  FUN_02737cc0(param_1 + 0x7a8,param_1 + 0x48a,param_1[0x48c] + 0x1190);
  param_1[0x90e] = 0;
  param_1[0x7a8] = &PTR_LAB_04a90978;
  param_1[0x910] = 0;
  param_1[0x911] = 0;
  param_1[0x912] = 0;
  *(undefined1 *)(param_1 + 0x913) = 0;
  param_1[0x90f] = param_1[0x48c] + 0x11f0;
  lVar3 = param_1[0x48d];
  param_1[0x48d] = param_1 + 0x90d;
  if (lVar3 != 0) {
    param_1[0x911] = lVar3;
  }
  param_1[0x90d] = puVar2 + 0x10;
  param_1[0x48a] = &PTR_LAB_04a90918;
  param_1[0x915] = 0;
  param_1[0x916] = 0;
  param_1[0x917] = 0;
  param_1[0x918] = 0;
  param_1[0x919] = 0;
  *(undefined1 *)(param_1 + 0x91a) = 0;
  param_1[0x914] = &PTR_LAB_04a90948;
  FUN_02352bec(param_1 + 0x91b,param_1 + 0x914,0);
  puVar1 = PTR_DAT_04bc30c0 + 0x10;
  param_1[0x91b] = puVar1;
  FUN_02737cc0(param_1 + 0xc32,param_1 + 0x914,param_1[0x916] + 0x1190);
  param_1[0xd98] = 0;
  param_1[0xc32] = &PTR_LAB_04a90978;
  param_1[0xd9a] = 0;
  param_1[0xd9b] = 0;
  param_1[0xd9c] = 0;
  *(undefined1 *)(param_1 + 0xd9d) = 0;
  param_1[0xd99] = param_1[0x916] + 0x11f0;
  lVar3 = param_1[0x917];
  param_1[0x917] = param_1 + 0xd97;
  if (lVar3 != 0) {
    param_1[0xd9b] = lVar3;
  }
  param_1[0x914] = &PTR_LAB_04a90918;
  param_1[0xd9f] = 0;
  param_1[0xda0] = 0;
  param_1[0xda1] = 0;
  param_1[0xda2] = 0;
  param_1[0xda3] = 0;
  param_1[0xd97] = &DAT_04a80468;
  *(undefined1 *)(param_1 + 0xda4) = 0;
  param_1[0xd9e] = &PTR_LAB_04a90948;
  FUN_02352bec(param_1 + 0xda5,param_1 + 0xd9e,0);
  param_1[0xda5] = puVar1;
  FUN_02737cc0(param_1 + 0x10bc,param_1 + 0xd9e,param_1[0xda0] + 0x1190);
  param_1[0x1224] = 0;
  param_1[0x10bc] = &PTR_LAB_04a90978;
  param_1[0x1225] = 0;
  *(undefined1 *)(param_1 + 0x1227) = 0;
  param_1[0x1226] = 0;
  param_1[0x1222] = 0;
  param_1[0x1223] = param_1[0xda0] + 0x11f0;
  lVar3 = param_1[0xda1];
  param_1[0xda1] = param_1 + 0x1221;
  if (lVar3 != 0) {
    param_1[0x1225] = lVar3;
  }
  param_1[0x1221] = &DAT_04a80468;
  param_1[0xd9e] = &PTR_LAB_04a90918;
  puVar5 = param_1 + 0x1228;
  *puVar5 = &PTR_LAB_04a90948;
  param_1[0x122d] = 0;
  param_1[0x1229] = 0;
  param_1[0x122a] = 0;
  param_1[0x122b] = 0;
  param_1[0x122c] = 0;
  *(undefined1 *)(param_1 + 0x122e) = 0;
  FUN_02352bec(param_1 + 0x122f,puVar5,0);
  puVar1 = PTR_DAT_04bc30c0 + 0x10;
  param_1[0x122f] = puVar1;
  FUN_02737cc0(param_1 + 0x1546,puVar5,param_1[0x122a] + 0x1190);
  param_1[0x16ae] = 0;
  param_1[0x1546] = &PTR_LAB_04a90978;
  lVar3 = param_1[0x122b];
  param_1[0x16af] = 0;
  *(undefined1 *)(param_1 + 0x16b1) = 0;
  param_1[0x16b0] = 0;
  param_1[0x122b] = param_1 + 0x16ab;
  param_1[0x16ac] = 0;
  param_1[0x16ad] = param_1[0x122a] + 0x11f0;
  if (lVar3 != 0) {
    param_1[0x16af] = lVar3;
  }
  *puVar5 = &PTR_LAB_04a90918;
  puVar2 = PTR_DAT_04bc30e8 + 0x10;
  puVar5 = param_1 + 0x16b2;
  *puVar5 = &PTR_LAB_04a90948;
  param_1[0x16ab] = puVar2;
  param_1[0x16b3] = 0;
  param_1[0x16b4] = 0;
  param_1[0x16b5] = 0;
  param_1[0x16b6] = 0;
  param_1[0x16b7] = 0;
  *(undefined1 *)(param_1 + 0x16b8) = 0;
  FUN_02352bec(param_1 + 0x16b9,puVar5,0);
  param_1[0x16b9] = puVar1;
  FUN_02737cc0(param_1 + 0x19d0,puVar5,param_1[0x16b4] + 0x1190);
  param_1[0x1b38] = 0;
  param_1[0x19d0] = &PTR_LAB_04a90978;
  lVar3 = param_1[0x16b5];
  param_1[0x1b39] = 0;
  *(undefined1 *)(param_1 + 0x1b3b) = 0;
  param_1[0x1b3a] = 0;
  param_1[0x16b5] = param_1 + 0x1b35;
  param_1[0x1b36] = 0;
  param_1[0x1b37] = param_1[0x16b4] + 0x11f0;
  if (lVar3 != 0) {
    param_1[0x1b39] = lVar3;
  }
  param_1[0x1b35] = puVar2;
  *puVar5 = &PTR_LAB_04a90918;
  puVar5 = param_1 + 0x1b3c;
  *puVar5 = &PTR_LAB_04a90948;
  param_1[0x1b41] = 0;
  param_1[0x1b3d] = 0;
  param_1[0x1b3e] = 0;
  param_1[0x1b3f] = 0;
  param_1[0x1b40] = 0;
  *(undefined1 *)(param_1 + 0x1b42) = 0;
  FUN_02352bec(param_1 + 0x1b43,puVar5,0);
  puVar1 = PTR_DAT_04bc30c0 + 0x10;
  param_1[0x1b43] = puVar1;
  FUN_02737cc0(param_1 + 0x1e5a,puVar5,param_1[0x1b3e] + 0x1190);
  param_1[0x1fc2] = 0;
  param_1[0x1e5a] = &PTR_LAB_04a90978;
  lVar3 = param_1[0x1b3f];
  param_1[0x1fc3] = 0;
  *(undefined1 *)(param_1 + 0x1fc5) = 0;
  param_1[0x1fc4] = 0;
  param_1[0x1b3f] = param_1 + 0x1fbf;
  param_1[0x1fc0] = 0;
  param_1[0x1fc1] = param_1[0x1b3e] + 0x11f0;
  if (lVar3 != 0) {
    param_1[0x1fc3] = lVar3;
  }
  puVar4 = param_1 + 0x1fc6;
  *puVar4 = &PTR_LAB_04a90948;
  *puVar5 = &PTR_LAB_04a90918;
  param_1[0x1fbf] = &DAT_04a80468;
  param_1[0x1fc7] = 0;
  param_1[0x1fc8] = 0;
  param_1[0x1fcb] = 0;
  param_1[0x1fc9] = 0;
  param_1[0x1fca] = 0;
  *(undefined1 *)(param_1 + 0x1fcc) = 0;
  FUN_02352bec(param_1 + 0x1fcd,puVar4,0);
  param_1[0x1fcd] = puVar1;
  FUN_02737cc0(param_1 + 0x22e4,puVar4,param_1[0x1fc8] + 0x1190);
  param_1[0x244c] = 0;
  param_1[0x22e4] = &PTR_LAB_04a90978;
  lVar3 = param_1[0x1fc9];
  *(undefined1 *)(param_1 + 0x244f) = 0;
  param_1[0x244d] = 0;
  param_1[0x244e] = 0;
  param_1[0x1fc9] = param_1 + 0x2449;
  param_1[0x244a] = 0;
  param_1[0x244b] = param_1[0x1fc8] + 0x11f0;
  if (lVar3 != 0) {
    param_1[0x244d] = lVar3;
  }
  param_1[0x2449] = &DAT_04a80468;
  *puVar4 = &PTR_LAB_04a90918;
  return;
}

