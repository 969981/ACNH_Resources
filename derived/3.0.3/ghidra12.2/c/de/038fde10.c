
undefined8 FUN_038fde10(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  uint *puVar8;
  
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    uVar5 = (ulong)*(ushort *)(lVar4 + 0xc);
    puVar8 = (uint *)((int *)(lVar4 + 8) + uVar5 * 4);
    uVar2 = *puVar8;
    if (*(int *)(lVar4 + 8) < (int)uVar2) {
      do {
        if (uVar2 < 0x68) {
          uVar7 = (ulong)((byte)"textures.bntx"[0xc - (ulong)(uVar2 >> 3)] >> ((ulong)uVar2 & 7)) &
                  1;
        }
        else {
          uVar7 = 0;
        }
        uVar5 = (ulong)*(ushort *)(lVar4 + 8 + uVar5 * 0x10 + uVar7 * 2 + 4);
        puVar8 = (uint *)(lVar4 + 8 + uVar5 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar8;
        uVar2 = *puVar8;
      } while (bVar1);
    }
    psVar6 = *(short **)(puVar8 + 2);
    if ((((*psVar6 == 0xd) &&
         (*(long *)(psVar6 + 1) == 0x7365727574786574 &&
          *(long *)((long)psVar6 + 7) == 0x78746e622e736572)) &&
        (uVar5 = (long)puVar8 + (-0x18 - lVar4), ((uVar5 ^ 0xffffffffffffffff) & 0xffffffff0) != 0))
       && (*(long *)(param_1 + 0xb8) != 0)) {
      uVar3 = FUN_0034fb8c(*(undefined8 *)
                            (*(long *)(param_1 + 0xb8) + ((long)(uVar5 * 0x10000000) >> 0x20) * 0x10
                            ));
      return uVar3;
    }
  }
  return 0;
}

