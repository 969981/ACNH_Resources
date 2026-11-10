
void FUN_00282db0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x3c);
  if (*(ushort *)(param_1 + 0x3c) != 0) {
    uVar6 = *(uint *)(param_1 + 0x44);
    uVar4 = 0;
    bVar3 = 0;
    do {
      uVar7 = 1 << (ulong)(uVar4 & 0x1f);
      if (((uVar7 & param_2) != 0) && ((uVar6 & uVar7) == 0)) {
        bVar5 = 0;
        uVar6 = 0;
        do {
          if (((*(uint *)(param_1 + 0x44) | param_2) >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
            *(byte *)(*(long *)(param_1 + 8) + (ulong)(uVar2 * uVar4) + (ulong)uVar6) = bVar5;
            *(byte *)(*(long *)(param_1 + 8) +
                     (ulong)uVar4 + (ulong)*(ushort *)(param_1 + 0x3c) * (ulong)uVar6) = bVar3;
            uVar2 = (uint)*(ushort *)(param_1 + 0x3c);
          }
          bVar5 = bVar5 + 1;
          uVar6 = (uint)bVar5;
        } while (uVar6 < uVar2);
        uVar6 = *(uint *)(param_1 + 0x44) | uVar7;
        *(uint *)(param_1 + 0x44) = uVar6;
      }
      bVar3 = bVar3 + 1;
      uVar4 = (uint)bVar3;
    } while (uVar4 < uVar2);
    if (uVar2 != 0) {
      uVar6 = 0;
      uVar4 = 0;
      do {
        if ((uVar4 & 0xff) < uVar2) {
          uVar7 = uVar4;
          do {
            if (((*(uint *)(param_1 + 0x44) & 1 << (ulong)(uVar6 & 0x1f)) == 0) ||
               ((*(uint *)(param_1 + 0x44) >> (ulong)(uVar7 & 0x1f) & 1) == 0)) {
              lVar8 = *(long *)(param_1 + 8);
              lVar1 = (ulong)(uVar6 * uVar2) + (ulong)(uVar7 & 0xff);
              if (((uint)*(byte *)(lVar8 + lVar1) != (uVar4 & 0xff)) ||
                 ((uint)*(byte *)(lVar8 + (ulong)(uVar2 * (uVar7 & 0xff)) + (ulong)uVar6) !=
                  (uVar7 & 0xff))) {
                *(char *)(lVar8 + lVar1) = (char)uVar4;
                *(char *)(*(long *)(param_1 + 8) +
                         (ulong)*(ushort *)(param_1 + 0x3c) * (ulong)(uVar7 & 0xff) + (ulong)uVar6)
                     = (char)uVar7;
                uVar2 = (uint)*(ushort *)(param_1 + 0x3c);
              }
            }
            uVar7 = uVar7 + 1;
          } while ((uVar7 & 0xff) < uVar2);
        }
        uVar4 = uVar4 + 1;
        uVar6 = uVar4 & 0xff;
      } while (uVar6 < uVar2);
    }
  }
  return;
}

