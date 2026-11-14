
void FUN_01bd3fbc(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int local_44;
  uint uStack_40;
  undefined8 local_3c;
  uint local_34;
  
  if (*(char *)(param_1 + 0x282) == '\0') {
    cVar3 = *(char *)(param_1 + 0x252);
    iVar4 = FUN_01c0967c(param_2);
    if (cVar3 == '\0') {
      if (((iVar4 - 0xa4U < 0x3b) &&
          ((1L << ((ulong)(iVar4 - 0xa4U) & 0x3f) & 0x7c000000000000dU) != 0)) || (iVar4 == 0x10e))
      goto LAB_01bd3fe0;
    }
    else {
      if (((iVar4 - 0xdaU < 0x35) &&
          ((1L << ((ulong)(iVar4 - 0xdaU) & 0x3f) & 0x1000000000001fU) != 0)) || (iVar4 - 0xa6U < 2)
         ) goto LAB_01bd3fe0;
      if (iVar4 != 0) {
        iVar4 = 0x9f;
      }
    }
    lVar5 = *(long *)(param_1 + 0x260);
    *(undefined1 *)(lVar5 + 0x18) = 0;
    uVar1 = *(uint *)(lVar5 + 0x14);
    if (-1 < (int)uVar1) {
      if ((uVar1 < 0x40) &&
         (iVar2 = *(int *)(*(long *)(lVar5 + 8) + (ulong)uVar1 * 4 + 0x204), -1 < iVar2)) {
        if (*(int *)(lVar5 + 0x10) == iVar2) {
          *(undefined1 *)(lVar5 + 0x18) = 1;
          *(uint *)(lVar5 + 0x14) = uVar1 + 1;
        }
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
      }
      else {
        *(undefined4 *)(lVar5 + 0x14) = 0xffffffff;
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x260) + 0x18) != '\0') {
      local_3c = 0x3f80000000000000;
      uStack_40 = (uint)*(ushort *)(param_1 + 0x280);
      local_44 = 0xa6;
      local_34 = (uint)*(byte *)(param_1 + 0x250);
      (**(code **)(**(long **)(param_1 + 0x268) + 0x288))(*(long **)(param_1 + 0x268),&local_44);
    }
    if (iVar4 != 0x10e) {
      local_3c = 0x3f80000000000000;
      uStack_40 = (uint)*(ushort *)(param_1 + 0x280);
      local_34 = (uint)*(byte *)(param_1 + 0x250);
      local_44 = iVar4;
      if ((((*(char *)(param_1 + 0x252) != '\0') && (1 < iVar4 - 0xa6U)) && (iVar4 != 0)) &&
         (iVar4 != 0x10e)) {
        local_44 = 0x9f;
      }
      (**(code **)(**(long **)(param_1 + 0x268) + 0x288))(*(long **)(param_1 + 0x268),&local_44);
    }
  }
LAB_01bd3fe0:
  uVar1 = param_2 & 0xffff;
  if (uVar1 < 0xa0) {
    if (uVar1 == 10) {
      return;
    }
    if (uVar1 == 0x20) {
      return;
    }
  }
  else {
    if (uVar1 == 0xa0) {
      return;
    }
    if (uVar1 == 0x3000) {
      return;
    }
  }
  *(short *)(*(long *)(param_1 + 0x218) + 0x30) = (short)param_2;
  return;
}

