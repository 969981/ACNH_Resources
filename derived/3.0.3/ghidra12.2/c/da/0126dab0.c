
/* WARNING: Removing unreachable block (ram,0x0126db88) */
/* WARNING: Removing unreachable block (ram,0x0126db9c) */

void FUN_0126dab0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
     ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))) {
    if (DAT_04c487d4 == -1) {
      return;
    }
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) {
      return;
    }
  }
  if (((DAT_0519d040 != 0) && (*(long *)(DAT_0519d040 + 0x1c0) != 0)) &&
     (lVar6 = *(long *)(*(long *)(DAT_0519d040 + 0x1c0) + 0xb8), lVar6 != 0)) {
    if (0 < *(int *)(lVar6 + 0xc) && 0 < (int)*(uint *)(lVar6 + 8)) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        uVar7 = 0;
        do {
          uVar1 = iVar5 + (int)uVar7;
          lVar3 = lVar6 + 0x10 + (ulong)uVar1 * 0x18;
          if (0x47 < uVar1) {
            lVar3 = lVar6 + 0x10;
          }
          if (*(short *)(lVar3 + 8) == 0x13e) {
            *(int *)((long)param_1 + 4) = (int)uVar7;
            *(int *)(param_1 + 1) = iVar4;
            *(undefined4 *)param_1 = 0x13e0001;
            return;
          }
          uVar7 = uVar7 + 1;
        } while (*(uint *)(lVar6 + 8) != uVar7);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 9;
      } while (iVar4 != *(int *)(lVar6 + 0xc));
    }
  }
  return;
}

