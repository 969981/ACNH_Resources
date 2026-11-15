
void FUN_01e18370(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  puVar5 = *(uint **)(param_1 + 0x195b0);
  uVar1 = 0x3f89a3a2;
  uVar7 = *(ulong *)(param_1 + 0x195b8) - 4;
  uVar6 = (uint)uVar7;
  uVar2 = uVar1;
  if (3 < uVar6) {
    uVar9 = 0;
    do {
      iVar8 = *(int *)((long)puVar5 + uVar9 + 4);
      uVar2 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
      iVar8 = (int)uVar9;
      uVar9 = (ulong)(iVar8 + 4);
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
    } while (iVar8 + 8U <= uVar6);
  }
  uVar3 = uVar6 & 3;
  if ((uVar7 & 3) != 0) {
    puVar4 = (ushort *)
             ((long)puVar5 + (((uVar7 & 0xffffffff) + 4) - (*(ulong *)(param_1 + 0x195b8) & 3)));
    if (uVar3 == 1) {
      uVar3 = (uint)(byte)*puVar4;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)*puVar4;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(byte)puVar4[1] << 0x10 | (uint)*(byte *)((long)puVar4 + 1) << 8 |
              (uint)(byte)*puVar4;
    }
    else {
      uVar3 = 0;
    }
    uVar2 = (uVar3 * 0x16a88000 | uVar3 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar2;
  }
  uVar2 = (uVar2 ^ uVar6 ^ (uVar2 ^ uVar6) >> 0x10) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  *puVar5 = uVar2 ^ uVar2 >> 0x10;
  if (((*(char *)(param_1 + 0x195f5) != '\0') && (*(char *)(param_1 + 0x195f6) != '\0')) &&
     (puVar5 = *(uint **)(param_1 + 0x195c0), puVar5 != (uint *)0x0)) {
    uVar7 = *(ulong *)(param_1 + 0x195c8) - 4;
    uVar2 = (uint)uVar7;
    if (3 < uVar2) {
      uVar9 = 0;
      do {
        iVar8 = *(int *)((long)puVar5 + uVar9 + 4);
        uVar1 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar1;
        iVar8 = (int)uVar9;
        uVar9 = (ulong)(iVar8 + 4);
        uVar1 = (uVar1 >> 0x13 | uVar1 << 0xd) * 5 + 0xe6546b64;
      } while (iVar8 + 8U <= uVar2);
    }
    uVar6 = uVar2 & 3;
    if ((uVar7 & 3) != 0) {
      puVar4 = (ushort *)
               ((long)puVar5 + (((uVar7 & 0xffffffff) + 4) - (*(ulong *)(param_1 + 0x195c8) & 3)));
      if (uVar6 == 1) {
        uVar6 = (uint)(byte)*puVar4;
      }
      else if (uVar6 == 2) {
        uVar6 = (uint)*puVar4;
      }
      else if (uVar6 == 3) {
        uVar6 = (uint)(byte)puVar4[1] << 0x10 | (uint)*(byte *)((long)puVar4 + 1) << 8 |
                (uint)(byte)*puVar4;
      }
      else {
        uVar6 = 0;
      }
      uVar1 = (uVar6 * 0x16a88000 | uVar6 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar1;
    }
    uVar2 = (uVar1 ^ uVar2 ^ (uVar1 ^ uVar2) >> 0x10) * -0x7a143595;
    uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
    *puVar5 = uVar2 ^ uVar2 >> 0x10;
  }
  return;
}

