
/* WARNING: Removing unreachable block (ram,0x012fd81c) */
/* WARNING: Removing unreachable block (ram,0x012fd82c) */
/* WARNING: Removing unreachable block (ram,0x012fd838) */

void FUN_012fd7f0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) ||
     (*(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xa8) == 0)) {
    uVar2 = *(uint *)(param_1 + 8) & 0xfffffffe;
    *(uint *)(param_1 + 8) = uVar2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8) & 0xfffffffe;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x12 & 1) != 0) {
      *(uint *)(param_1 + 8) = uVar2;
    }
  }
  lVar4 = *(long *)(DAT_05231900 + 0xd0);
  if (lVar4 != 0) {
    (**(code **)(DAT_05184040 + 0x18))(&DAT_05184040);
    uVar2 = FUN_006bd550(DAT_05184048,0);
    lVar4 = *(long *)(lVar4 + 0x520);
    if (lVar4 == 0) {
LAB_012fd960:
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0xffffffff;
      do {
        while (*(uint *)(lVar4 + 0x30) <= uVar2) {
          if (uVar2 <= *(uint *)(lVar4 + 0x30)) {
            if (((*(long *)(lVar4 + 0x38) == 0) ||
                (lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x18), lVar4 == 0)) ||
               (lVar4 = *(long *)(lVar4 + 0x70), lVar4 == 0)) goto LAB_012fd960;
            uVar3 = *(undefined4 *)(lVar4 + 4);
            goto LAB_012fd964;
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 == 0) goto LAB_012fd964;
        }
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != 0);
    }
LAB_012fd964:
    *(undefined4 *)(param_1 + 0x110) = uVar3;
  }
  return;
}

