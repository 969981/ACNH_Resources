
void FUN_030dbc90(long param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x498);
  if (((iVar1 == 0) || (lVar6 = *(long *)(param_1 + 0x4a0), lVar6 == 0)) ||
     (lVar3 = *(long *)(param_1 + 0x490), lVar3 == 0)) {
    return;
  }
  iVar7 = 0;
  do {
    if (lVar3 != 0) {
      puVar2 = (uint *)(lVar6 + (long)iVar7 * 0x18 + 0x10);
      uVar5 = *puVar2;
      if (uVar5 < 0x10e) {
        lVar4 = lVar3 + 8 + (ulong)uVar5 * 0x1a8;
        if (*(int *)(lVar4 + 0x1a0) != 0) {
          lVar3 = lVar3 + 8 + (ulong)uVar5 * 0x1a8;
          **(undefined1 **)(lVar3 + 0x60) = 0;
          *(undefined1 *)(lVar3 + 0xf0) = 0;
          if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
             (*(int *)(lVar3 + 0x140) == -1)) {
            *(undefined4 *)(lVar3 + 0x140) = 1;
          }
          *(undefined4 *)(lVar4 + 0x1a0) = 0;
          uVar5 = *puVar2;
          goto LAB_030dbd4c;
        }
LAB_030dbd54:
        *puVar2 = 0xffffffff;
      }
      else {
LAB_030dbd4c:
        if (uVar5 != 0xffffffff) goto LAB_030dbd54;
      }
      FUN_0345c288(lVar6 + (long)iVar7 * 0x18,*(undefined8 *)(param_1 + 0x490),0);
    }
    iVar7 = iVar7 + 1;
    if (iVar1 == iVar7) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x490);
  } while( true );
}

