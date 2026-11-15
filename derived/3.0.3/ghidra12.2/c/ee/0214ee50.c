
void FUN_0214ee50(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined1 local_24;
  undefined2 local_23;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != param_1 + 0x70) {
    lVar6 = lVar1 + -0x10;
    do {
      if (*(int *)(lVar6 + 4) == 0x19 || *(int *)(lVar6 + 4) == 0x16) {
        if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
          if (*(long *)(DAT_053e0208 + 0x16608) == 0) {
            return;
          }
          puVar3 = *(uint **)(*(long *)(DAT_053e0208 + 0x16608) + 8);
          if (puVar3 == (uint *)0x0) {
            return;
          }
          if ((0x1b < *(uint *)(DAT_053e0208 + 0x16620)) &&
             (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 0x1b) == '\0')) {
            return;
          }
          if (*puVar3 < 0x1c) {
            return;
          }
          if (puVar3[1] == 0) {
            return;
          }
          if ((ushort)puVar3[2] == 0) {
            return;
          }
          iVar5 = 0xc;
          if (*(char *)((long)puVar3 + 10) != '\0') {
            iVar5 = 0x1c;
          }
          lVar1 = (ulong)(puVar3[1] * 0x1b + (uint)(ushort)puVar3[2] * 8 + iVar5) + (long)puVar3;
        }
        else {
          if (*(uint *)(DAT_053e0208 + 0x16718) < 0x1c) {
            return;
          }
          lVar1 = 0xd8;
          if (*(uint *)(DAT_053e0208 + 0x16708) < 0x1c) {
            lVar1 = 0;
          }
          lVar1 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar1);
        }
        if (lVar1 == 0) {
          return;
        }
        FUN_0214ca00(auStack_2c);
        if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x98)) {
          puVar2 = *(undefined8 **)(param_1 + 0x88);
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x88) = *puVar2;
          }
          *puVar2 = 0x1d0005;
          puVar2[3] = 0;
          *(undefined2 *)((long)puVar2 + 9) = local_23;
          *(undefined4 *)((long)puVar2 + 4) = local_28;
          *(undefined1 *)(puVar2 + 1) = local_24;
          plVar4 = puVar2 + 2;
          *plVar4 = 0;
          puVar7 = *(undefined8 **)(param_1 + 0x78);
          *(long **)(param_1 + 0x78) = plVar4;
          *plVar4 = param_1 + 0x70;
          puVar2[3] = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = plVar4;
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        }
        FUN_0214d220(param_1);
        if (*(long *)(param_1 + 0x1f0) == 0) {
          return;
        }
        iVar5 = *(int *)(*(long *)(param_1 + 0x1f0) + 4);
        if ((iVar5 == 0x19) || (iVar5 == 0x16)) {
          *(int *)(param_1 + 0x1fc) = iVar5;
          *(undefined8 *)(param_1 + 0x1f0) = 0;
          FUN_0214d220(param_1);
          *(undefined1 *)(param_1 + 0x236) = 1;
          return;
        }
        return;
      }
      lVar1 = *(long *)(lVar1 + 8);
      lVar6 = lVar1 + -0x10;
    } while (lVar6 != param_1 + 0x60);
  }
  return;
}

