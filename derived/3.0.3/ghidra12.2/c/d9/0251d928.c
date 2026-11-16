
undefined4 * FUN_0251d928(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  
  if (((DAT_054f0b68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_054f0b68), iVar2 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  if (DAT_054f5738 == 0) {
    return &DAT_054f0b60;
  }
  if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
    lVar4 = *(long *)(DAT_054f5738 + 0xd0);
    if (lVar4 != 0) {
      puVar6 = *(uint **)(lVar4 + 8);
      if ((puVar6 != (uint *)0x0) &&
         ((((*(uint *)(DAT_054f5738 + 0xe8) <= param_1 ||
            (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (long)(int)param_1) != '\0')) &&
           (param_1 < *puVar6)) && ((puVar6[1] != 0 && ((ushort)puVar6[2] != 0)))))) {
        iVar2 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          iVar2 = 0x1c;
        }
        puVar3 = (undefined4 *)
                 ((ulong)(puVar6[1] * param_1 + (uint)(ushort)puVar6[2] * 8 + iVar2) + (long)puVar6)
        ;
        if (puVar3 != (undefined4 *)0x0) {
          return puVar3;
        }
      }
      piVar5 = *(int **)(lVar4 + 8);
      if ((((piVar5 != (int *)0x0) &&
           ((*(int *)(DAT_054f5738 + 0xe8) == 0 || (**(char **)(DAT_054f5738 + 0xf0) != '\0')))) &&
          (*piVar5 != 0)) && (piVar5[1] != 0)) {
        puVar3 = (undefined4 *)0x0;
        if ((ulong)*(ushort *)(piVar5 + 2) != 0) {
          lVar4 = 0xc;
          if (*(char *)((long)piVar5 + 10) != '\0') {
            lVar4 = 0x1c;
          }
          puVar3 = (undefined4 *)((long)piVar5 + lVar4 + (ulong)*(ushort *)(piVar5 + 2) * 8);
        }
        goto LAB_0251da64;
      }
    }
    puVar3 = (undefined4 *)0x0;
  }
  else if (param_1 < *(uint *)(DAT_054f5738 + 0x1e0)) {
    if (*(uint *)(DAT_054f5738 + 0x1d0) <= param_1) {
      param_1 = 0;
    }
    puVar3 = (undefined4 *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[param_1];
    if (puVar3 != (undefined4 *)0x0) {
      return puVar3;
    }
    puVar3 = (undefined4 *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  else {
    puVar3 = (undefined4 *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
LAB_0251da64:
  puVar1 = &DAT_054f0b60;
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1;
}

