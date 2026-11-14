
undefined8 FUN_01813e08(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0x432) == '\0') {
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      pbVar7 = (byte *)(lVar8 + 0x48);
      uVar9 = (long)(char)bVar4 & 0xffffffff;
      pbVar1 = pbVar7 + uVar9 * 0x80;
      if (7 < bVar4) {
        pbVar1 = pbVar7;
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar8 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
        lVar2 = lVar8 + uVar9 * 0xc;
        if (0xb < bVar4) {
          lVar2 = lVar8;
        }
        if (*(char *)(lVar2 + 10) == '\0') {
          plVar10 = *(long **)(param_1 + 0x48);
          if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3ff0);
          }
          if ((plVar10 == (long *)0x0) ||
             (uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8),
             puVar5 = PTR_DAT_04bb4790, (uVar9 & 1) == 0)) {
            *(undefined8 *)(param_1 + 0x3d0) = 0;
          }
          else {
            *(long **)(param_1 + 0x3d0) = plVar10;
            lVar8 = *(long *)(*(long *)puVar5 + 0x10);
            if (lVar8 != 0) {
              uVar3 = *(uint *)(plVar10 + 0x5c);
              if (*(uint *)(*(long *)puVar5 + 8) <= uVar3) {
                uVar3 = 0;
              }
              pbVar7 = (byte *)(lVar8 + (long)(int)uVar3 * 10);
              if ((byte)(*pbVar7 >> 7 | (pbVar7[1] & 7) << 1) != 0xf) {
                return 0;
              }
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

