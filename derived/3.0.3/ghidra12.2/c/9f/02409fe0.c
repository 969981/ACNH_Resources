
void FUN_02409fe0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar2 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar3 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar3 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar5 = *(float *)(lVar3 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar5 * 999.99994);
    uVar2 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar2;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar1 + 0x2ec) = uVar6;
    *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
  }
  if (*(char *)(param_1 + 0xba0) != '\0') {
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined4 *)(puVar1 + 0x5d) = *(undefined4 *)(param_1 + 0xba4);
    *(undefined1 *)((long)puVar1 + 0x2e4) = 1;
    uVar6 = *(undefined4 *)(param_1 + 0xba8);
    *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
    *(undefined4 *)((long)puVar1 + 0x2ec) = uVar6;
    uVar6 = *(undefined4 *)(param_1 + 0xbac);
    *(undefined1 *)((long)puVar1 + 0x2e6) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = uVar6;
    if (*(int *)(param_1 + 0x1810) - 2U < 3) {
      puVar1 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
      *(undefined4 *)((long)puVar1 + 0x2ec) = uVar6;
      *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
    }
  }
  return;
}

