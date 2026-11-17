
void FUN_030d353c(long param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
      (*(int *)(param_2 + 0xc) == 0x1b)) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    if ((*(char *)(lVar5 + 0x4a8) == '\0') && (lVar4 = *(long *)(lVar5 + 0x268), lVar4 != 0)) {
      lVar5 = lVar5 + 0x4a0;
    }
    else if ((*(char *)(lVar5 + 0x520) == '\0') && (lVar4 = *(long *)(lVar5 + 0x270), lVar4 != 0)) {
      lVar5 = lVar5 + 0x518;
    }
    else if ((*(char *)(lVar5 + 0x598) == '\0') && (lVar4 = *(long *)(lVar5 + 0x278), lVar4 != 0)) {
      lVar5 = lVar5 + 0x590;
    }
    else if ((*(char *)(lVar5 + 0x610) == '\0') && (lVar4 = *(long *)(lVar5 + 0x280), lVar4 != 0)) {
      lVar5 = lVar5 + 0x608;
    }
    else if ((*(char *)(lVar5 + 0x688) == '\0') && (lVar4 = *(long *)(lVar5 + 0x288), lVar4 != 0)) {
      lVar5 = lVar5 + 0x680;
    }
    else if ((*(char *)(lVar5 + 0x700) == '\0') && (lVar4 = *(long *)(lVar5 + 0x290), lVar4 != 0)) {
      lVar5 = lVar5 + 0x6f8;
    }
    else if ((*(char *)(lVar5 + 0x778) == '\0') && (lVar4 = *(long *)(lVar5 + 0x298), lVar4 != 0)) {
      lVar5 = lVar5 + 0x770;
    }
    else if ((*(char *)(lVar5 + 0x7f0) == '\0') && (lVar4 = *(long *)(lVar5 + 0x2a0), lVar4 != 0)) {
      lVar5 = lVar5 + 0x7e8;
    }
    else if ((*(char *)(lVar5 + 0x868) == '\0') && (lVar4 = *(long *)(lVar5 + 0x2a8), lVar4 != 0)) {
      lVar5 = lVar5 + 0x860;
    }
    else {
      if (*(char *)(lVar5 + 0x8e0) != '\0') {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x2b0);
      if (lVar4 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x8d8;
    }
    iVar10 = *(int *)(param_2 + 0x18);
    iVar11 = *(int *)(param_2 + 0x1c);
    iVar3 = *(int *)(param_2 + 0x20);
    uVar1 = *(undefined2 *)(param_2 + 0x24);
    if (*(int *)(param_2 + 0xc) != 0x1b) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0x230);
    lVar2 = 0x18;
    if (*(uint *)(lVar4 + 0x228) < 4) {
      lVar2 = 0;
    }
    uVar8 = puVar6[(ulong)(2 < *(uint *)(lVar4 + 0x228)) * 2];
    uVar9 = *(undefined8 *)((long)puVar6 + lVar2);
    uVar7 = *puVar6;
    *(byte *)(lVar5 + 0x60) = *(byte *)(param_2 + 8) >> 1 & 1;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined2 *)(lVar5 + 0x58) = uVar1;
    *(long *)(lVar5 + 0x18) = lVar4;
    *(float *)(lVar5 + 0xc) = (float)iVar10 * 5.0 + 2.5;
    *(float *)(lVar5 + 0x14) = (float)iVar11 * 5.0 + 2.5;
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    *(undefined8 *)(lVar5 + 0x68) = uVar8;
    *(undefined8 *)(lVar5 + 0x70) = uVar9;
    *(int *)(lVar5 + 0x5c) = (int)(long)((float)iVar3 * 90.0 * 11930465.0);
    *(undefined1 *)(lVar5 + 8) = 1;
  }
  return;
}

