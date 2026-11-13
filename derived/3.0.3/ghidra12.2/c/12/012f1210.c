
/* WARNING: Removing unreachable block (ram,0x012f12c0) */
/* WARNING: Removing unreachable block (ram,0x012f127c) */
/* WARNING: Removing unreachable block (ram,0x012f128c) */
/* WARNING: Removing unreachable block (ram,0x012f12d0) */

void FUN_012f1210(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 8) != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x18) = iVar3 + 1;
      iVar3 = *(int *)(param_1 + 0x14) + iVar3;
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      lVar1 = *(long *)(param_1 + 8) + (long)(iVar3 - iVar2) * 0x20;
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined2 *)(lVar1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
      *(undefined2 *)(lVar1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
      *(undefined1 *)(lVar1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
      *(undefined2 *)(lVar1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
      *(undefined2 *)(lVar1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
      *(undefined1 *)(lVar1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
      *(undefined1 *)(lVar1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    }
  }
  return;
}

