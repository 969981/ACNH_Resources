
void FUN_02813df0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *local_70;
  long lStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  local_70 = PTR_DAT_04bc3878;
  lStack_68 = param_1 + 200;
  *(undefined1 *)(param_1 + 0x2d698) = 0;
  local_70 = local_70 + 0x10;
  local_60 = PTR_LAB_04bc3870;
  uStack_58 = 0;
  uVar1 = *(uint *)(param_1 + 0x168);
  if (0x13 < uVar1) {
    uVar1 = 0x14;
  }
  FUN_0277c210(uVar1,&local_70);
  local_70 = PTR_DAT_04bc3868 + 0x10;
  local_60 = PTR_LAB_04bc3860;
  uStack_58 = 0;
  uVar1 = *(uint *)(param_1 + 0xb0);
  if (0x13 < uVar1) {
    uVar1 = 0x14;
  }
  lStack_68 = param_1 + 0x10;
  FUN_0277c210(uVar1,&local_70);
  uVar1 = *(uint *)(param_1 + 0x11acc);
  lStack_68 = param_1 + 0x18c;
  local_70 = PTR_DAT_04bc35f8 + 0x10;
  local_60 = PTR_LAB_04bc35e8;
  uStack_58 = 0;
  if (8999 < uVar1) {
    uVar1 = 9000;
  }
  FUN_0277c210(uVar1,&local_70);
  memset((void *)(param_1 + 0x38fb0),0,0x280);
  lVar2 = 0x80;
  puVar3 = (undefined8 *)(param_1 + 0x3923c);
  do {
    *(undefined2 *)((long)puVar3 + -0xc) = 0xffff;
    lVar2 = lVar2 + -2;
    *(undefined8 *)((long)puVar3 + -10) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0xffff;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x14);
  } while (lVar2 != 0);
  memset((void *)(param_1 + 0x39730),0,0x280);
  lVar2 = 0x80;
  puVar3 = (undefined8 *)(param_1 + 0x399bc);
  do {
    *(undefined2 *)((long)puVar3 + -0xc) = 0xffff;
    lVar2 = lVar2 + -2;
    *(undefined8 *)((long)puVar3 + -10) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0xffff;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x14);
  } while (lVar2 != 0);
  memset((void *)(param_1 + 0x39eb0),0,0x280);
  lVar2 = 0x80;
  puVar3 = (undefined8 *)(param_1 + 0x3a13c);
  do {
    *(undefined2 *)((long)puVar3 + -0xc) = 0xffff;
    lVar2 = lVar2 + -2;
    *(undefined8 *)((long)puVar3 + -10) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0xffff;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x14);
  } while (lVar2 != 0);
  memset((void *)(param_1 + 0x3a630),0,0x280);
  lVar2 = 0x80;
  puVar3 = (undefined8 *)(param_1 + 0x3a8bc);
  do {
    *(undefined2 *)((long)puVar3 + -0xc) = 0xffff;
    lVar2 = lVar2 + -2;
    *(undefined8 *)((long)puVar3 + -10) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0xffff;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x14);
  } while (lVar2 != 0);
  memset((void *)(param_1 + 0x3adb0),0,0x280);
  lVar2 = 0x80;
  puVar3 = (undefined8 *)(param_1 + 0x3b03c);
  do {
    *(undefined2 *)((long)puVar3 + -0xc) = 0xffff;
    lVar2 = lVar2 + -2;
    *(undefined8 *)((long)puVar3 + -10) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0xffff;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x14);
  } while (lVar2 != 0);
  *(undefined2 *)(param_1 + 0x3ce5c) = 0x23;
  *(undefined4 *)(param_1 + 0x3c6da) = 0x101;
  *(undefined4 *)(param_1 + 0x3c6e0) = 0x101;
  *(undefined1 *)(param_1 + 0x3ce5e) = 8;
  *(undefined2 *)(param_1 + 0x3c6d8) = 0x4c7b;
  *(undefined2 *)(param_1 + 0x3c6de) = 0x4c7b;
  *(undefined2 *)(param_1 + 0x3c6e4) = 0x4c7b;
  *(undefined8 *)(param_1 + 0x3c6e6) = 0x1014c7b00000101;
  *(undefined8 *)(param_1 + 0x3c6f0) = 0;
  *(undefined8 *)(param_1 + 0x3c6f8) = 0x4c7b4c7b4c7b4c7b;
  *(undefined2 *)(param_1 + 0x3c6f4) = 0x4c7b;
  *(undefined8 *)(param_1 + 0x3c700) = 0x4c7b4c7b4c7b4c7b;
  *(undefined4 *)(param_1 + 0x3c6ee) = 0;
  *(undefined1 *)(param_1 + 0x3c6f2) = 0;
  return;
}

