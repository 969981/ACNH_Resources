
void FUN_02ce1ce0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 local_6c;
  undefined4 uStack_68;
  uint local_64;
  
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb37e0;
  uVar7 = 0;
  puVar9 = (undefined4 *)(param_1 + 0x68a64);
  do {
    uVar4 = (uint)uVar7;
    puVar6 = (undefined4 *)puVar1;
    if (((int)uVar4 < 10) &&
       (puVar6 = (undefined4 *)(param_1 + 0x80) + (uVar7 & 0xffffffff) * 2, 9 < uVar4)) {
      puVar6 = (undefined4 *)(param_1 + 0x80);
    }
    local_6c = *puVar6;
    uStack_68 = puVar6[1];
    lVar8 = *(long *)puVar2;
    local_64 = uVar4;
    uVar3 = FUN_0277d6c4(&local_6c);
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
LAB_02ce1dc0:
      if (uVar4 == 4) {
        uVar4 = 1;
LAB_02ce1df4:
        local_64 = uVar4;
        if ((*(byte *)(param_1 + 0x70) >> (ulong)(uVar4 & 0x1f) & 1) == 0) {
          puVar6 = (undefined4 *)(param_1 + 0x18) + (ulong)uVar4 * 2;
          if (2 < uVar4) {
            puVar6 = (undefined4 *)(param_1 + 0x18);
          }
        }
        else {
          puVar6 = (undefined4 *)(param_1 + 0x58) + (ulong)uVar4 * 2;
          if (2 < uVar4) {
            puVar6 = (undefined4 *)(param_1 + 0x58);
          }
        }
      }
      else {
        if (uVar4 == 3) {
          uVar4 = 2;
          goto LAB_02ce1df4;
        }
        puVar6 = (undefined4 *)puVar1;
        if (uVar4 == 0) goto LAB_02ce1df4;
      }
      local_6c = *puVar6;
      uStack_68 = puVar6[1];
      uVar4 = FUN_0277d6c4(&local_6c);
      if (*(long *)puVar2 == 0) {
LAB_02ce1e80:
        puVar6 = puVar9;
      }
      else {
        lVar8 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_02ce1e80;
        if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
          uVar5 = 3;
          goto LAB_02ce1d50;
        }
        puVar6 = (undefined4 *)(param_1 + 0x68a64) + uVar7 * 4;
      }
      *puVar6 = 6;
      *(undefined1 *)(puVar9 + 3) = 0;
      *(undefined8 *)(puVar9 + 1) = 0xffffffffffffffff;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02ce1dc0;
      uVar5 = 2;
LAB_02ce1d50:
      *puVar9 = uVar5;
    }
    uVar7 = uVar7 + 1;
    puVar9 = puVar9 + 4;
    if (uVar7 == 10) {
      return;
    }
  } while( true );
}

